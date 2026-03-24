/*
 * XREFs of ?SetCsStartRunningTime@DXGPROCESS@@QEAAXI_K@Z @ 0x1C0048BD4
 * Callers:
 *     ?ApplyCsFunctionAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C02847E0 (-ApplyCsFunctionAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGPROCESS::SetCsStartRunningTime(DXGPROCESS *this, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v6; // rax

  v3 = (unsigned int)a2;
  if ( (unsigned int)a2 >= 6 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v6 + 24) = 1212LL;
    WdLogEvent5_WdAssertion(v6);
  }
  *(_QWORD *)(*((_QWORD *)this + 9) + 8 * v3) = a3;
}
