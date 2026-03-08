/*
 * XREFs of PsLookupProcessThreadByCid @ 0x14076A3D0
 * Callers:
 *     PsOpenProcess @ 0x1406ABCC0 (PsOpenProcess.c)
 *     PsOpenThread @ 0x14076A000 (PsOpenThread.c)
 *     NtSetSystemInformation @ 0x1407E1F30 (NtSetSystemInformation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     PsLookupThreadByThreadId @ 0x1406DBE00 (PsLookupThreadByThreadId.c)
 */

NTSTATUS __fastcall PsLookupProcessThreadByCid(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  NTSTATUS result; // eax
  PVOID v7; // rdi
  void *v8; // rbx
  PVOID Object; // [rsp+30h] [rbp+8h] BYREF

  Object = 0LL;
  result = PsLookupThreadByThreadId(*(HANDLE *)(a1 + 8), (PETHREAD *)&Object);
  if ( result >= 0 )
  {
    v7 = Object;
    if ( *((_QWORD *)Object + 153) == *(_QWORD *)a1 )
    {
      if ( a2 )
      {
        v8 = (void *)*((_QWORD *)Object + 68);
        ObfReferenceObjectWithTag(v8, 0x746C6644u);
        *a2 = v8;
      }
      *a3 = v7;
      return 0;
    }
    else
    {
      ObfDereferenceObject(Object);
      return -1073741813;
    }
  }
  return result;
}
