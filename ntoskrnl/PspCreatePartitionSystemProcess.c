/*
 * XREFs of PspCreatePartitionSystemProcess @ 0x1409B35F8
 * Callers:
 *     PspAllocatePartition @ 0x140855B00 (PspAllocatePartition.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x1407F0D20 (ObCloseHandle.c)
 *     PsCreateMinimalProcess @ 0x140817C28 (PsCreateMinimalProcess.c)
 */

__int64 __fastcall PspCreatePartitionSystemProcess(PVOID *a1, _QWORD *a2)
{
  char v4; // r9
  int v5; // eax
  PVOID v6; // rbx
  NTSTATUS v7; // edi
  __int64 result; // rax
  _QWORD v9[2]; // [rsp+60h] [rbp-10h] BYREF
  PVOID Handle; // [rsp+A0h] [rbp+30h] BYREF

  Handle = 0LL;
  v9[1] = L"PartitionSystm";
  v4 = BYTE2(PsInitialSystemProcess[2].Header.WaitListHead.Flink);
  v9[0] = 1966108LL;
  v5 = PsCreateMinimalProcess((__int64)PsInitialSystemProcess, (__int64)v9, 0LL, v4, 0LL, 0, 1, 0LL, 0LL, 0LL, &Handle);
  v6 = Handle;
  v7 = v5;
  if ( v5 >= 0 )
  {
    Handle = 0LL;
    v7 = ObReferenceObjectByHandle(v6, 0, (POBJECT_TYPE)PsProcessType, 0, &Handle, 0LL);
    if ( v7 >= 0 )
    {
      *a1 = Handle;
      result = 0LL;
      *a2 = v6;
      return result;
    }
    if ( Handle )
      ObfDereferenceObject(Handle);
  }
  if ( v6 )
    ObCloseHandle(v6, 0);
  return (unsigned int)v7;
}
