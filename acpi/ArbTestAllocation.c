/*
 * XREFs of ArbTestAllocation @ 0x1C00A2BE0
 * Callers:
 *     IrqArbTestAllocation @ 0x1C009D900 (IrqArbTestAllocation.c)
 * Callees:
 *     RtlFreeRangeList_0 @ 0x1C0001A1F (RtlFreeRangeList_0.c)
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 *     ArbpBuildAllocationStack @ 0x1C00A2D80 (ArbpBuildAllocationStack.c)
 */

__int64 __fastcall ArbTestAllocation(__int64 a1, __int64 ***a2)
{
  __int64 **v2; // r8
  NTSTATUS v5; // eax
  int v6; // ebx
  __int64 **v7; // r8
  unsigned int v8; // ebp
  __int64 *v9; // r15
  __int64 **v10; // rsi
  unsigned __int64 v11; // rbx
  unsigned __int64 i; // rax
  int v13; // eax
  __int64 *v14; // rdx
  char v15; // cl
  __int64 *v16; // r9
  __int64 **v17; // rcx
  __int64 v18; // rax
  __int64 result; // rax

  v2 = a2[2];
  if ( v2 )
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 **, _QWORD))(a1 + 280))(
           a1,
           *((unsigned int *)a2 + 2),
           v2,
           *(_QWORD *)(a1 + 48));
  else
    v5 = RtlCopyRangeList(*(PRTL_RANGE_LIST *)(a1 + 48), *(PRTL_RANGE_LIST *)(a1 + 40));
  v6 = v5;
  if ( v5 < 0 )
    goto LABEL_24;
  v7 = *a2;
  v8 = 0;
  v9 = 0LL;
  v10 = (__int64 **)**a2;
  while ( v7 != v10 )
  {
    ++v8;
    if ( !a2[2] && v9 != v10[4] )
    {
      v9 = v10[4];
      v6 = (*(__int64 (__fastcall **)(__int64))(a1 + 288))(a1);
      if ( v6 < 0 )
        goto LABEL_24;
    }
    v10[6] = 0LL;
    if ( *(_QWORD *)(a1 + 144) )
    {
      v11 = (unsigned __int64)v10[3];
      for ( i = v11 + 32LL * *((unsigned int *)v10 + 4);
            v11 < i;
            i = (unsigned __int64)&v10[3][4 * *((unsigned int *)v10 + 4)] )
      {
        v13 = (*(__int64 (__fastcall **)(unsigned __int64))(a1 + 144))(v11);
        if ( v13 < 0 )
        {
          v6 = -1073741438;
          goto LABEL_24;
        }
        v11 += 32LL;
        v10[6] = (__int64 *)((char *)v10[6] + v13);
      }
    }
    v10 = (__int64 **)*v10;
    v7 = *a2;
  }
  do
  {
    v14 = *v7;
    v15 = 1;
    if ( *v7 == (__int64 *)v7 )
      break;
    do
    {
      v16 = (__int64 *)*v14;
      if ( (__int64 **)*v14 == v7 )
        break;
      if ( v14[6] > v16[6] )
      {
        v17 = (__int64 **)v14[1];
        v18 = *v16;
        *v17 = v16;
        *(_QWORD *)(v18 + 8) = v14;
        *v14 = v18;
        v14[1] = (__int64)v16;
        v16[1] = (__int64)v17;
        v15 = 0;
        *v16 = (__int64)v14;
      }
      v14 = (__int64 *)*v14;
    }
    while ( v14 != (__int64 *)v7 );
  }
  while ( !v15 );
  v6 = ArbpBuildAllocationStack(a1, *a2, v8);
  if ( v6 < 0
    || (result = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 232))(a1, *(_QWORD *)(a1 + 112)),
        v6 = result,
        (int)result < 0) )
  {
LABEL_24:
    RtlFreeRangeList_0(*(PRTL_RANGE_LIST *)(a1 + 48));
    return (unsigned int)v6;
  }
  return result;
}
