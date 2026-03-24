/*
 * XREFs of ?SetVprRange@VIDMM_SEGMENT@@QEAAJ_K0II0@Z @ 0x1C00C7CA8
 * Callers:
 *     ?InitSegments@VIDMM_GLOBAL@@QEAAJIPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@PEA_K@Z @ 0x1C00954F8 (-InitSegments@VIDMM_GLOBAL@@QEAAJIPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUDXGK_SEGMENTDESCRIPTOR_INTERNA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_SEGMENT::SetVprRange(
        VIDMM_SEGMENT *this,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  unsigned __int64 v6; // r10
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // r11

  if ( !a4 || ((a4 - 1) & a4) != 0 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2, a3);
    *(_QWORD *)(v7 + 24) = 5149LL;
    goto LABEL_22;
  }
  v6 = *((_QWORD *)this + 8);
  if ( a2 >= v6 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2, a3);
    *(_QWORD *)(v7 + 24) = 5154LL;
LABEL_22:
    WdLogEvent5_WdAssertion(v7);
    return 3221225485LL;
  }
  if ( a3 > v6 || (v8 = a2 + a3, a2 + a3 > v6) )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2, a3);
    *(_QWORD *)(v7 + 24) = 5159LL;
    goto LABEL_22;
  }
  v9 = a4 - 1LL;
  if ( (v9 & a3) != 0 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2, a3);
    *(_QWORD *)(v7 + 24) = 5165LL;
    goto LABEL_22;
  }
  if ( (v9 & a2) != 0 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2, a3);
    *(_QWORD *)(v7 + 24) = 5170LL;
    goto LABEL_22;
  }
  if ( a5 > 1 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2, a3);
    *(_QWORD *)(v7 + 24) = 5179LL;
    goto LABEL_22;
  }
  if ( a6 && a5 != 1 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2, a3);
    *(_QWORD *)(v7 + 24) = 5189LL;
    goto LABEL_22;
  }
  *((_DWORD *)this + 102) = a4;
  *((_QWORD *)this + 48) = a2;
  *((_QWORD *)this + 49) = a3;
  *((_DWORD *)this + 103) = a5;
  *((_QWORD *)this + 50) = v9;
  *((_QWORD *)this + 58) = a6;
  if ( a5 == 1 )
  {
    *((_QWORD *)this + 54) = 0LL;
    *((_QWORD *)this + 52) = v8;
    *((_QWORD *)this + 53) = v8;
    if ( v8 == v6 )
      *((_BYTE *)this + 449) = 1;
  }
  return 0LL;
}
