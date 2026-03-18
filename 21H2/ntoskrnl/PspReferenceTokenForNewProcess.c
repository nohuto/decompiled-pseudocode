/*
 * XREFs of PspReferenceTokenForNewProcess @ 0x14066F864
 * Callers:
 *     NtCreateUserProcess @ 0x14066D650 (NtCreateUserProcess.c)
 *     PspCreateProcess @ 0x14085DACC (PspCreateProcess.c)
 * Callees:
 *     PsReferencePrimaryTokenWithTag @ 0x140347920 (PsReferencePrimaryTokenWithTag.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall PspReferenceTokenForNewProcess(__int64 a1, void *a2, KPROCESSOR_MODE a3, _QWORD *a4)
{
  PVOID v5; // rbx
  NTSTATUS result; // eax
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  if ( !a2 )
  {
    if ( a1 )
    {
      v5 = (PVOID)PsReferencePrimaryTokenWithTag(a1, 0x746C6644u);
    }
    else
    {
      v5 = PspBootAccessToken;
      ObfReferenceObject(PspBootAccessToken);
    }
    goto LABEL_4;
  }
  Object = 0LL;
  result = ObReferenceObjectByHandle(a2, 1u, (POBJECT_TYPE)SeTokenObjectType, a3, &Object, 0LL);
  v5 = Object;
  if ( result >= 0 )
  {
LABEL_4:
    *a4 = v5;
    return 0;
  }
  return result;
}
