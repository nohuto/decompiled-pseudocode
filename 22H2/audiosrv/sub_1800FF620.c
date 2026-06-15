/*
 * XREFs of sub_1800FF620 @ 0x1800FF620
 * Callers:
 *     <none>
 * Callees:
 *     sub_180047458 @ 0x180047458 (sub_180047458.c)
 *     sub_1800B7BF0 @ 0x1800B7BF0 (sub_1800B7BF0.c)
 *     sub_1800BB3DC @ 0x1800BB3DC (sub_1800BB3DC.c)
 *     sub_1800FA258 @ 0x1800FA258 (sub_1800FA258.c)
 *     sub_1800FEE8C @ 0x1800FEE8C (sub_1800FEE8C.c)
 *     sub_1800FF010 @ 0x1800FF010 (sub_1800FF010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800FF620(__int64 a1, char a2, unsigned __int8 a3)
{
  int v3; // r14d
  unsigned int v6; // edi
  int v7; // ebp
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  RTL_SRWLOCK *v10; // [rsp+58h] [rbp+20h] BYREF

  v3 = a3;
  sub_1800BB3DC((RTL_SRWLOCK *)(a1 + 8), &v10);
  v6 = 0;
  if ( a2 != *(_BYTE *)(a1 + 16) )
  {
    v7 = 0;
    if ( a2 )
    {
      v9 = *(_QWORD *)(a1 + 32);
      sub_180047458(&v9);
      sub_1800FA258(*(_QWORD *)(a1 + 24), &v9);
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 200LL) + 68LL) = v3;
      v7 = sub_1800FF010(*(_QWORD *)(a1 + 32));
      if ( v7 < 0 )
        sub_1800FEE8C(*(_QWORD *)(a1 + 24), *(_QWORD **)(a1 + 32), 0);
      else
        *(_BYTE *)(a1 + 16) = 1;
    }
    else
    {
      sub_1800FEE8C(*(_QWORD *)(a1 + 24), *(_QWORD **)(a1 + 32), 1);
      *(_BYTE *)(a1 + 16) = 0;
    }
    v6 = v7;
  }
  sub_1800B7BF0(&v10);
  return v6;
}
