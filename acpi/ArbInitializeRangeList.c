/*
 * XREFs of ArbInitializeRangeList @ 0x1C00A1FA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeRangeList_0 @ 0x1C0001A1F (RtlFreeRangeList_0.c)
 *     RtlInitializeRangeList_0 @ 0x1C0001A31 (RtlInitializeRangeList_0.c)
 *     RtlAddRange_0 @ 0x1C0001A43 (RtlAddRange_0.c)
 *     RtlInvertRangeList_0 @ 0x1C0001A55 (RtlInvertRangeList_0.c)
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ArbInitializeRangeList(__int64 a1, unsigned int a2, unsigned __int8 *a3, struct _RTL_RANGE_LIST *a4)
{
  __int64 v4; // rbx
  unsigned __int8 *v8; // rsi
  int v9; // eax
  int v10; // ecx
  NTSTATUS v11; // ebx
  ULONGLONG Start; // [rsp+40h] [rbp-30h] BYREF
  struct _RTL_RANGE_LIST RangeList; // [rsp+48h] [rbp-28h] BYREF
  __int64 v15; // [rsp+B0h] [rbp+40h] BYREF

  v4 = a2;
  Start = 0LL;
  memset(&RangeList, 0, sizeof(RangeList));
  v15 = 0LL;
  RtlInitializeRangeList_0(&RangeList);
  v8 = &a3[20 * v4];
  while ( a3 < v8 )
  {
    v9 = *a3;
    v10 = *(_DWORD *)(a1 + 32);
    if ( v9 == v10 || (_BYTE)v9 == 7 && v10 == 3 )
    {
      v11 = (*(__int64 (__fastcall **)(unsigned __int8 *, ULONGLONG *, __int64 *))(a1 + 136))(a3, &Start, &v15);
      if ( v11 < 0 )
        goto LABEL_12;
      if ( v15 )
      {
        v11 = RtlAddRange_0(&RangeList, Start, Start + v15 - 1, 0, 3u, 0LL, 0LL);
        if ( v11 < 0 )
          goto LABEL_12;
      }
    }
    a3 += 20;
  }
  v11 = RtlInvertRangeList_0(a4, &RangeList);
  if ( v11 >= 0 )
    v11 = 0;
LABEL_12:
  RtlFreeRangeList_0(&RangeList);
  return (unsigned int)v11;
}
