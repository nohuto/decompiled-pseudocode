/*
 * XREFs of EtwpUseDescriptorTypeUm @ 0x1409E50B0
 * Callers:
 *     NtTraceControl @ 0x140694040 (NtTraceControl.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall EtwpUseDescriptorTypeUm(__int64 a1)
{
  void *v2; // rcx
  NTSTATUS result; // eax
  int v4; // ebx
  char v5; // al
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(void **)a1;
  Object = 0LL;
  result = ObReferenceObjectByHandle(v2, 0x800u, EtwpRegistrationObjectType, 1, &Object, 0LL);
  v4 = result;
  if ( result >= 0 )
  {
    v5 = *(_BYTE *)(a1 + 8);
    if ( v5 == 1 )
    {
      _InterlockedOr16((volatile signed __int16 *)Object + 49, 0x200u);
    }
    else if ( v5 )
    {
      v4 = -1073741811;
    }
    else
    {
      _InterlockedAnd16((volatile signed __int16 *)Object + 49, 0xFDFFu);
    }
    ObfDereferenceObject(Object);
    return v4;
  }
  return result;
}
