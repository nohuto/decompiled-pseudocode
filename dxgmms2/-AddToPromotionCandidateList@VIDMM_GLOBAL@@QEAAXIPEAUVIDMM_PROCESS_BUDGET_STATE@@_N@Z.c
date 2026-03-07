void __fastcall VIDMM_GLOBAL::AddToPromotionCandidateList(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        struct VIDMM_PROCESS_BUDGET_STATE *a3,
        char a4)
{
  _QWORD *v4; // rcx
  __int64 v5; // rax
  _QWORD *v6; // rax

  if ( !*(_QWORD *)a3 )
  {
    v4 = (_QWORD *)(1616LL * a2 + *((_QWORD *)this + 5028) + 488LL);
    if ( a4 )
    {
      v5 = *v4;
      if ( *(_QWORD **)(*v4 + 8LL) == v4 )
      {
        *(_QWORD *)a3 = v5;
        *((_QWORD *)a3 + 1) = v4;
        *(_QWORD *)(v5 + 8) = a3;
        *v4 = a3;
        return;
      }
LABEL_6:
      __fastfail(3u);
    }
    v6 = (_QWORD *)v4[1];
    if ( (_QWORD *)*v6 != v4 )
      goto LABEL_6;
    *(_QWORD *)a3 = v4;
    *((_QWORD *)a3 + 1) = v6;
    *v6 = a3;
    v4[1] = a3;
  }
}
