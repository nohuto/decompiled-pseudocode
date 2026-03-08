/*
 * XREFs of CmpCheckExeOwnerForPca @ 0x14074CBB4
 * Callers:
 *     CmpDoParseKey @ 0x1406E1D90 (CmpDoParseKey.c)
 * Callees:
 *     RtlEqualSid @ 0x140208A60 (RtlEqualSid.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     PsGetCurrentThreadProcess @ 0x1402C0BB0 (PsGetCurrentThreadProcess.c)
 *     PsReferenceProcessFilePointer @ 0x14074C940 (PsReferenceProcessFilePointer.c)
 *     ObQuerySecurityObject @ 0x14074F0EC (ObQuerySecurityObject.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x140750BE0 (RtlGetOwnerSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

char CmpCheckExeOwnerForPca()
{
  _KPROCESS *CurrentThreadProcess; // rax
  __int64 Pool2; // rax
  PVOID v2; // rcx
  void *v3; // rdi
  int SecurityObject; // ebx
  unsigned int OwnerDefaulted; // [rsp+40h] [rbp+8h] BYREF
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF
  PSID Owner; // [rsp+50h] [rbp+18h] BYREF

  Object = 0LL;
  OwnerDefaulted = 0;
  Owner = 0LL;
  if ( !CmpTrustedInstallerSid )
    return 0;
  CurrentThreadProcess = PsGetCurrentThreadProcess();
  if ( (int)PsReferenceProcessFilePointer((struct _EX_RUNDOWN_REF *)CurrentThreadProcess, (unsigned __int64 *)&Object) < 0 )
    return 0;
  if ( (unsigned int)ObQuerySecurityObject((_DWORD)Object, 1, 0, 0, (__int64)&OwnerDefaulted) != -1073741789 )
  {
    v2 = Object;
    goto LABEL_12;
  }
  Pool2 = ExAllocatePool2(256LL, OwnerDefaulted, 538987843LL);
  v2 = Object;
  v3 = (void *)Pool2;
  if ( !Pool2 )
  {
LABEL_12:
    ObfDereferenceObject(v2);
    return 0;
  }
  SecurityObject = ObQuerySecurityObject((_DWORD)Object, 1, Pool2, OwnerDefaulted, (__int64)&OwnerDefaulted);
  ObfDereferenceObject(Object);
  if ( SecurityObject < 0
    || RtlGetOwnerSecurityDescriptor(v3, &Owner, (PBOOLEAN)&OwnerDefaulted) < 0
    || Owner && RtlEqualSid(CmpTrustedInstallerSid, Owner) )
  {
    ExFreePoolWithTag(v3, 0);
    return 0;
  }
  ExFreePoolWithTag(v3, 0);
  return 1;
}
