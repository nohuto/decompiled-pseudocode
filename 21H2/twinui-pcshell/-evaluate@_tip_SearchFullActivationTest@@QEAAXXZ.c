/*
 * XREFs of ?evaluate@_tip_SearchFullActivationTest@@QEAAXXZ @ 0x1800AC544
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@EEAAXXZ @ 0x1800AC4A0 (-evaluate@-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x1800ADC10 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_SearchFullActivationTest::evaluate(_tip_SearchFullActivationTest *this, const char *a2)
{
  const char *v2; // rax
  __int64 v3; // r9
  __int64 v4; // rcx
  __int16 v5; // dx
  const char *v6; // rax
  __int16 v7; // r11
  __int64 v8; // r9
  __int64 v9; // rdx
  __int16 v10; // cx
  __int16 v11; // r11
  __int64 v12; // r9
  const char *v13; // rdx
  __int64 v14; // r9
  __int64 v15; // r9
  int v16; // eax
  __int64 v17; // r9
  __int64 v18; // r9
  __int64 v19; // r9
  __int64 v20; // r9
  __int64 v21; // r9
  __int64 v22; // r9
  __int64 v23; // r10
  __int16 v24; // ax
  const char *v25; // rax
  __int64 v26; // r10

  if ( *((_BYTE *)this + 74) )
  {
    v2 = tip::details::reason_string((tip::details *)"Reason::activation_while_suspending", a2);
    v4 = *(_QWORD *)(v3 + 8);
    if ( *(_BYTE *)(v4 + 152) )
      return;
    v5 = 17;
    goto LABEL_4;
  }
  if ( !*((_BYTE *)this + 26) )
  {
    v13 = (const char *)*((unsigned int *)this + 4);
    if ( *((_DWORD *)this + 5) == (_DWORD)v13 )
    {
      v6 = tip::details::reason_string((tip::details *)"Reason::activated_again_same_source", v13);
      v9 = *(_QWORD *)(v14 + 8);
      if ( *(_BYTE *)(v9 + 152) )
        return;
      *(_BYTE *)(v9 + 152) = 4;
      v10 = 5;
      goto LABEL_9;
    }
    if ( *((_DWORD *)this + 5) )
    {
      v6 = tip::details::reason_string((tip::details *)"Reason::activated_again", v13);
      v9 = *(_QWORD *)(v15 + 8);
      if ( *(_BYTE *)(v9 + 152) )
        return;
      *(_BYTE *)(v9 + 152) = 4;
      v10 = 1;
LABEL_9:
      *(_WORD *)(v9 + 154) = v10;
LABEL_10:
      *(_QWORD *)(v9 + 160) = v6;
      return;
    }
    v16 = *((_DWORD *)this + 17);
    if ( v16 < 0 )
    {
      if ( (v16 & 0x1FFF0000) == 0x70000 && (unsigned int)(unsigned __int16)v16 - 15600 <= 0x63 )
      {
        v2 = tip::details::reason_string((tip::details *)"Reason::activation_failure_package_error", v13);
        v4 = *(_QWORD *)(v17 + 8);
        if ( *(_BYTE *)(v4 + 152) )
          return;
        v5 = 11;
      }
      else
      {
        v2 = tip::details::reason_string((tip::details *)"Reason::activation_failure", v13);
        v4 = *(_QWORD *)(v18 + 8);
        if ( *(_BYTE *)(v4 + 152) )
          return;
        v5 = 10;
      }
      goto LABEL_4;
    }
    if ( *((_BYTE *)this + 29) )
    {
      v2 = tip::details::reason_string((tip::details *)"Reason::view_destroyed", v13);
      v4 = *(_QWORD *)(v19 + 8);
      if ( *(_BYTE *)(v4 + 152) )
        return;
      v5 = 12;
      goto LABEL_4;
    }
    if ( (_DWORD)v13 == 4 )
    {
      if ( *((_BYTE *)this + 72) )
      {
        v2 = tip::details::reason_string((tip::details *)"Reason::view_visible_during_prelaunch", v13);
        v4 = *(_QWORD *)(v20 + 8);
        if ( *(_BYTE *)(v4 + 152) )
          return;
        v5 = 14;
        goto LABEL_4;
      }
LABEL_39:
      v23 = *((_QWORD *)this + 1);
      if ( (*(_DWORD *)(v23 + 56) & 0x200) != 0 )
      {
        if ( *((_BYTE *)this + 30) )
        {
          v25 = tip::details::reason_string((tip::details *)"Reason::invalid_hwnd", v13);
          if ( !*(_BYTE *)(v26 + 152) )
          {
            *(_QWORD *)(v26 + 160) = v25;
            *(_BYTE *)(v26 + 152) = 2;
            *(_WORD *)(v26 + 154) = 6;
          }
          return;
        }
        if ( *(_BYTE *)(v23 + 152) )
          return;
        v24 = 0x8000;
        *(_BYTE *)(v23 + 152) = 1;
      }
      else
      {
        if ( *(_BYTE *)(v23 + 152) )
          return;
        *(_BYTE *)(v23 + 152) = 3;
        v24 = 16385;
      }
      *(_QWORD *)(v23 + 160) = 0LL;
      *(_WORD *)(v23 + 154) = v24;
      return;
    }
    if ( *((_BYTE *)this + 24) )
    {
      v2 = tip::details::reason_string((tip::details *)"Reason::activation_test_timeout", v13);
      v4 = *(_QWORD *)(v21 + 8);
      if ( *(_BYTE *)(v4 + 152) )
        return;
      v5 = 8;
    }
    else
    {
      if ( *((_BYTE *)this + 27) )
        goto LABEL_39;
      v2 = tip::details::reason_string((tip::details *)"Reason::unexpected_navigation_state_during_launch", v13);
      v4 = *(_QWORD *)(v22 + 8);
      if ( *(_BYTE *)(v4 + 152) )
        return;
      v5 = 16;
    }
LABEL_4:
    *(_BYTE *)(v4 + 152) = 3;
    *(_WORD *)(v4 + 154) = v5;
    *(_QWORD *)(v4 + 160) = v2;
    return;
  }
  if ( *((_DWORD *)this + 4) == 2 )
  {
    v6 = tip::details::reason_string((tip::details *)"Reason::hidden_by_launcher_timeout", a2);
    v9 = *(_QWORD *)(v8 + 8);
    if ( *(_BYTE *)(v9 + 152) )
      return;
    *(_BYTE *)(v9 + 152) = 3;
    v10 = v7 + 2;
    goto LABEL_9;
  }
  v6 = tip::details::reason_string((tip::details *)"Reason::hidden", a2);
  v9 = *(_QWORD *)(v12 + 8);
  if ( !*(_BYTE *)(v9 + 152) )
  {
    *(_WORD *)(v9 + 154) = v11;
    *(_BYTE *)(v9 + 152) = 4;
    goto LABEL_10;
  }
}
