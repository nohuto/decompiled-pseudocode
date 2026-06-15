/*
 * XREFs of sub_1800B5F60 @ 0x1800B5F60
 * Callers:
 *     sub_1800B58DC @ 0x1800B58DC (sub_1800B58DC.c)
 *     sub_1800B60C0 @ 0x1800B60C0 (sub_1800B60C0.c)
 * Callees:
 *     sub_1800B5F1C @ 0x1800B5F1C (sub_1800B5F1C.c)
 *     sub_1800B6060 @ 0x1800B6060 (sub_1800B6060.c)
 *     sub_1800B619C @ 0x1800B619C (sub_1800B619C.c)
 */

char __fastcall sub_1800B5F60(volatile signed __int32 **a1, __int64 a2, volatile signed __int32 *a3)
{
  HANDLE ProcessHeap; // rax
  volatile signed __int32 *v7; // rax
  volatile signed __int32 *v8; // rbx

  if ( !a3 )
  {
    sub_1800B6060(a1);
LABEL_7:
    LOBYTE(v7) = 1;
    return (char)v7;
  }
  ProcessHeap = GetProcessHeap();
  v7 = (volatile signed __int32 *)HeapAlloc(ProcessHeap, 0, (SIZE_T)(a3 + 1));
  v8 = v7;
  if ( v7 )
  {
    *v7 = 0;
    if ( a2 )
      sub_1800B619C(v7 + 1, a3, a2, a3);
    sub_1800B5F1C(a1, v8, a3);
    goto LABEL_7;
  }
  return (char)v7;
}
