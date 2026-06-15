/*
 * XREFs of sub_1800B6060 @ 0x1800B6060
 * Callers:
 *     sub_1800B494C @ 0x1800B494C (sub_1800B494C.c)
 *     sub_1800B58DC @ 0x1800B58DC (sub_1800B58DC.c)
 *     sub_1800B5F1C @ 0x1800B5F1C (sub_1800B5F1C.c)
 *     sub_1800B5F60 @ 0x1800B5F60 (sub_1800B5F60.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1800B6060(__int64 a1)
{
  volatile signed __int32 *v2; // rcx
  HANDLE ProcessHeap; // rax

  v2 = *(volatile signed __int32 **)a1;
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) == 1 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, *(LPVOID *)a1);
    }
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
  }
}
