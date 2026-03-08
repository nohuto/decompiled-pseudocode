/*
 * XREFs of NtQuerySecurityAttributesToken @ 0x1406D5B30
 * Callers:
 *     <none>
 * Callees:
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x140247394 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepReferenceTokenByHandle @ 0x140247A20 (SepReferenceTokenByHandle.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14025D790 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     SepCaptureUnicodeStringArray @ 0x1406D5840 (SepCaptureUnicodeStringArray.c)
 *     ProbeForWrite @ 0x1407C4030 (ProbeForWrite.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtQuerySecurityAttributesToken(
        void *a1,
        ULONGLONG a2,
        unsigned int a3,
        volatile void *a4,
        SIZE_T Length,
        volatile void *Address)
{
  char v9; // r14
  char PreviousMode; // bl
  unsigned int v11; // r15d
  int SecurityAttributesToken; // esi
  __int64 v13; // r9
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE *v15; // rdi
  __int64 v16; // rdx
  int v18; // [rsp+44h] [rbp-44h]
  PVOID Object; // [rsp+48h] [rbp-40h] BYREF
  PVOID P; // [rsp+50h] [rbp-38h] BYREF
  __int64 v21; // [rsp+58h] [rbp-30h] BYREF

  P = 0LL;
  v9 = 0;
  Object = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v11 = Length;
  if ( (_DWORD)Length )
  {
    if ( a4 )
      goto LABEL_3;
LABEL_17:
    SecurityAttributesToken = -1073741811;
    v18 = -1073741811;
LABEL_18:
    v15 = (PERESOURCE *)Object;
    goto LABEL_8;
  }
  if ( a4 )
    goto LABEL_17;
LABEL_3:
  if ( PreviousMode )
  {
    ProbeForWrite(a4, (unsigned int)Length, 4u);
    ProbeForWrite(Address, 4uLL, 4u);
  }
  SecurityAttributesToken = SepCaptureUnicodeStringArray(a2, a3, PreviousMode, (ULONGLONG *)&P);
  v18 = SecurityAttributesToken;
  if ( SecurityAttributesToken < 0 )
    goto LABEL_18;
  SecurityAttributesToken = SepReferenceTokenByHandle(a1, 8u, PreviousMode, v13, &Object, &Length, &v21);
  v18 = SecurityAttributesToken;
  if ( SecurityAttributesToken < 0 )
    goto LABEL_18;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v15 = (PERESOURCE *)Object;
  ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
  v9 = 1;
  LOBYTE(Length) = 1;
  SecurityAttributesToken = SepInternalQuerySecurityAttributesTokenEx(
                              (__int64)v15,
                              v16,
                              (__int64)P,
                              a3,
                              0,
                              (__int64)a4,
                              v11,
                              (__int64)Address);
  v18 = SecurityAttributesToken;
LABEL_8:
  if ( PreviousMode == 1 && P )
    ExFreePoolWithTag(P, 0);
  if ( v9 )
  {
    ExReleaseResourceLite(v15[6]);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    SecurityAttributesToken = v18;
    v15 = (PERESOURCE *)Object;
  }
  if ( v15 )
    ObfDereferenceObjectWithTag(v15, 0x74726853u);
  return (unsigned int)SecurityAttributesToken;
}
