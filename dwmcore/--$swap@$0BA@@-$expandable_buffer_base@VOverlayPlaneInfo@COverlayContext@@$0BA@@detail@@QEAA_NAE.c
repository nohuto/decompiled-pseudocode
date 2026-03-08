/*
 * XREFs of ??$swap@$0BA@@?$expandable_buffer_base@VOverlayPlaneInfo@COverlayContext@@$0BA@@detail@@QEAA_NAEAV01@@Z @ 0x1800C9958
 * Callers:
 *     ?PushCandidates@COverlayContext@@AEAAXPEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800C8BB4 (-PushCandidates@COverlayContext@@AEAAXPEAV-$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@.c)
 *     ?swap@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXAEAV12@@Z @ 0x1800C991C (-swap@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COverl.c)
 * Callees:
 *     ??0OverlayPlaneInfo@COverlayContext@@QEAA@$$QEAV01@@Z @ 0x18012B118 (--0OverlayPlaneInfo@COverlayContext@@QEAA@$$QEAV01@@Z.c)
 */

char __fastcall detail::expandable_buffer_base<COverlayContext::OverlayPlaneInfo,16>::swap<16>(char **a1, char **a2)
{
  char **v2; // r9
  char *v3; // rsi
  char *v4; // rdx
  char **v5; // r10
  char *v6; // r11
  char *v8; // rax
  char *v9; // rax
  char *v10; // rcx
  char *v11; // rax
  char *v12; // rcx
  char *v13; // rbx
  char *v14; // rbp
  char *i; // rcx
  __int64 v16; // rcx
  char *v17; // rbx
  char *j; // rcx
  __int64 v19; // rcx
  __int64 v20; // rdx

  v2 = a2;
  v3 = (char *)(a1 + 3);
  v4 = *a1;
  v5 = a1;
  v6 = (char *)(v2 + 3);
  if ( *a1 != (char *)(a1 + 3) )
  {
    v8 = *v2;
    if ( *v2 != v6 )
    {
      *a1 = v8;
      v9 = v2[1];
      *v2 = v4;
      v10 = a1[1];
      v5[1] = v9;
      v11 = v2[2];
      v2[1] = v10;
      v12 = v5[2];
      v5[2] = v11;
      v2[2] = v12;
      return 1;
    }
    v13 = *v2;
    v14 = v2[1];
    if ( (unsigned __int64)(0x6DB6DB6DB6DB6DB7LL * ((v14 - v8) >> 5)) <= 0x10 )
    {
      for ( i = (char *)(a1 + 3); v13 != v14; v13 += 224 )
      {
        COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo(i, v13);
        i = (char *)(v16 + 224);
      }
      *v2 = *v5;
      v2[1] = v5[1];
      v2[2] = v5[2];
      v5[2] = (char *)(v5 + 451);
      *v5 = v3;
      v5[1] = i;
      return 1;
    }
  }
  if ( *v2 == v6 )
    return 0;
  if ( v4 != v3 )
    return 0;
  v17 = a1[1];
  if ( (unsigned __int64)(0x6DB6DB6DB6DB6DB7LL * ((v17 - v4) >> 5)) > 0x10 )
    return 0;
  for ( j = (char *)(v2 + 3); v4 != v17; v4 = (char *)(v20 + 224) )
  {
    COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo(j, v4);
    j = (char *)(v19 + 224);
  }
  *v5 = *v2;
  v5[1] = v2[1];
  v5[2] = v2[2];
  v2[2] = (char *)(v2 + 451);
  *v2 = v6;
  v2[1] = j;
  return 1;
}
