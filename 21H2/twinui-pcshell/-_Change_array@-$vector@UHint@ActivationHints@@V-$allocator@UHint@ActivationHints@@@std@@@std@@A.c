/*
 * XREFs of ?_Change_array@?$vector@UHint@ActivationHints@@V?$allocator@UHint@ActivationHints@@@std@@@std@@AEAAXQEAUHint@ActivationHints@@_K1@Z @ 0x18043A2FC
 * Callers:
 *     ??$_Emplace_reallocate@UHint@ActivationHints@@@?$vector@UHint@ActivationHints@@V?$allocator@UHint@ActivationHints@@@std@@@std@@QEAAPEAUHint@ActivationHints@@QEAU23@$$QEAU23@@Z @ 0x18043959C (--$_Emplace_reallocate@UHint@ActivationHints@@@-$vector@UHint@ActivationHints@@V-$allocator@UHin.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18008C494 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1Hint@ActivationHints@@QEAA@XZ @ 0x180439980 (--1Hint@ActivationHints@@QEAA@XZ.c)
 */

__int64 __fastcall std::vector<ActivationHints::Hint>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ActivationHints::Hint *v4; // rbx
  ActivationHints::Hint *v9; // rsi
  __int64 result; // rax

  v4 = *(ActivationHints::Hint **)a1;
  if ( *(_QWORD *)a1 )
  {
    v9 = *(ActivationHints::Hint **)(a1 + 8);
    if ( v4 != v9 )
    {
      do
      {
        ActivationHints::Hint::~Hint(v4);
        v4 = (ActivationHints::Hint *)((char *)v4 + 80);
      }
      while ( v4 != v9 );
      v4 = *(ActivationHints::Hint **)a1;
    }
    std::_Deallocate<16,0>(v4, (const struct std::nothrow_t *)(80 * ((*(_QWORD *)(a1 + 16) - (_QWORD)v4) / 80LL)));
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 80 * a3;
  result = a2 + 80 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
