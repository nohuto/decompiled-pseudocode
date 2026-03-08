/*
 * XREFs of ArbpBuildAlternative @ 0x1C00A2EEC
 * Callers:
 *     ArbBootAllocation @ 0x1C00A1080 (ArbBootAllocation.c)
 *     ArbQueryConflict @ 0x1C00A2340 (ArbQueryConflict.c)
 *     ArbRetestAllocation @ 0x1C00A2730 (ArbRetestAllocation.c)
 *     ArbpBuildAllocationStack @ 0x1C00A2D80 (ArbpBuildAllocationStack.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ArbpBuildAlternative(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 result; // rax
  int v6; // edx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r9
  char v9; // al
  int v10; // ecx

  a3[5] = a2;
  result = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *, __int64 *, __int64 *))(a1 + 120))(
             a2,
             a3,
             a3 + 1,
             a3 + 2,
             a3 + 3);
  v6 = 0;
  if ( (int)result >= 0 )
  {
    *((_DWORD *)a3 + 9) = 0;
    if ( *(_BYTE *)(a2 + 2) == 3 )
    {
      *((_DWORD *)a3 + 9) = 1;
      v6 = 1;
    }
    v7 = a3[1];
    v8 = *a3;
    if ( v7 - *a3 + 1 == a3[2] )
    {
      v6 |= 2u;
      *((_DWORD *)a3 + 9) = v6;
    }
    v9 = *(_BYTE *)(a2 + 1);
    if ( v9 == 3 || (v10 = v6, v9 == 7) )
    {
      v10 = v6;
      if ( _bittest16((const signed __int16 *)(a2 + 4), 8u) )
      {
        v10 = v6 | 8;
        *((_DWORD *)a3 + 9) = v6 | 8;
      }
    }
    if ( v7 < v8 )
      *((_DWORD *)a3 + 9) = v10 | 4;
    return 0LL;
  }
  return result;
}
