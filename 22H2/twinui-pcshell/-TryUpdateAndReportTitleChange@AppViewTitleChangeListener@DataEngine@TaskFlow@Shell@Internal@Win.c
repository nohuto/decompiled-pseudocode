/*
 * XREFs of ?TryUpdateAndReportTitleChange@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAAX_K@Z @ 0x180039F70
 * Callers:
 *     ?OnShellHookMessage@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJ_K_J@Z @ 0x180039D40 (-OnShellHookMessage@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJ.c)
 * Callees:
 *     ?ReportTitleChange@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAAX_KAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180039DB4 (-ReportTitleChange@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAAX_.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180090184 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800904CC (--2@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x180091307 (memcpy_0.c)
 *     memmove_0 @ 0x180091313 (memmove_0.c)
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CAXXZ @ 0x1801165B0 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1801C464C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::TryUpdateAndReportTitleChange(
        Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener *this,
        void *a2)
{
  void **v4; // rdi
  void **v5; // rax
  void *v6; // rcx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r10
  char *v9; // r8
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // r9
  _QWORD *v13; // rsi
  __int64 v14; // r8
  unsigned __int16 v15; // r11
  int v16; // eax
  void **v17; // rax
  __int64 v18; // rbx
  unsigned __int64 v19; // rdx
  size_t v20; // rdx
  void *v21; // rcx
  void *v22; // rdx
  void *v23; // rdx
  char *v24; // rsi
  size_t v25; // rcx
  void *v26; // rax
  void *Src; // [rsp+20h] [rbp-78h] BYREF
  void *v28[3]; // [rsp+28h] [rbp-70h] BYREF
  void *v29[2]; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v30; // [rsp+50h] [rbp-48h]
  unsigned __int64 v31; // [rsp+58h] [rbp-40h]

  v28[1] = this;
  v28[2] = a2;
  (*(void (__fastcall **)(Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener *, void **, void *))(*(_QWORD *)this + 72LL))(
    this,
    v29,
    a2);
  v4 = (void **)((char *)this + 112);
  v5 = v29;
  v6 = v29[0];
  v7 = v31;
  if ( v31 >= 8 )
    v5 = (void **)v29[0];
  v8 = *((_QWORD *)this + 16);
  v9 = (char *)this + 112;
  v10 = *((_QWORD *)this + 17);
  if ( v10 >= 8 )
    v9 = (char *)*v4;
  v11 = v30;
  v12 = v30;
  if ( v30 >= v8 )
    v12 = *((_QWORD *)this + 16);
  v13 = 0LL;
  if ( v12 )
  {
    v14 = v9 - (char *)v5;
    while ( 1 )
    {
      v15 = *(_WORD *)((char *)v5 + v14);
      if ( v15 != *(_WORD *)v5 )
        break;
      v5 = (void **)((char *)v5 + 2);
      if ( !--v12 )
        goto LABEL_42;
    }
    v16 = v15 < *(_WORD *)v5 ? -1 : 1;
  }
  else
  {
LABEL_42:
    v16 = 0;
  }
  if ( v16 || v8 < v30 || v8 > v30 )
  {
    if ( v4 == v29 )
    {
LABEL_32:
      Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::ReportTitleChange(
        (__int64)this,
        (__int64)a2,
        (__int64 *)v29);
      v7 = v31;
      v6 = v29[0];
      goto LABEL_33;
    }
    v17 = v29;
    if ( v31 >= 8 )
      v17 = (void **)v29[0];
    Src = v17;
    if ( v30 <= v10 )
    {
      v24 = (char *)this + 112;
      if ( v10 >= 8 )
        v24 = (char *)*v4;
      *((_QWORD *)this + 16) = v30;
      memmove_0(v24, v17, 2 * v11);
      *(_WORD *)&v24[2 * v11] = 0;
      goto LABEL_32;
    }
    v18 = 0x7FFFFFFFFFFFFFFELL;
    if ( v30 > 0x7FFFFFFFFFFFFFFELL )
      std::wstring::_Xlen();
    if ( (v30 | 7) <= 0x7FFFFFFFFFFFFFFELL )
    {
      v19 = v10 >> 1;
      if ( v10 <= 0x7FFFFFFFFFFFFFFELL - (v10 >> 1) )
      {
        v18 = v19 + v10;
        if ( (v30 | 7) >= v19 + v10 )
          v18 = v30 | 7;
      }
    }
    v20 = 2 * (v18 + 1);
    if ( (unsigned __int64)(v18 + 1) > 0x7FFFFFFFFFFFFFFFLL )
      v20 = -1LL;
    if ( v20 >= 0x1000 )
    {
      v25 = v20 + 39;
      if ( v20 + 39 < v20 )
        v25 = -1LL;
      v26 = operator new(v25);
      if ( !v26 )
      {
        _o__invalid_parameter_noinfo_noreturn();
        goto LABEL_51;
      }
      v13 = (_QWORD *)(((unsigned __int64)v26 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *(v13 - 1) = v26;
    }
    else if ( v20 )
    {
      v13 = operator new(v20);
    }
    *((_QWORD *)this + 16) = v11;
    *((_QWORD *)this + 17) = v18;
    memcpy_0(v13, Src, 2 * v11);
    *((_WORD *)v13 + v11) = 0;
    if ( v10 < 8 )
    {
LABEL_31:
      *v4 = v13;
      goto LABEL_32;
    }
    v21 = *v4;
    v22 = (void *)(2 * v10 + 2);
    v28[0] = v22;
    Src = v21;
    if ( (unsigned __int64)v22 < 0x1000 )
    {
LABEL_30:
      operator delete(v21, (const struct std::nothrow_t *)v22);
      goto LABEL_31;
    }
LABEL_51:
    std::_Adjust_manually_vector_aligned(&Src, (unsigned __int64 *)v28);
    v22 = v28[0];
    v21 = Src;
    goto LABEL_30;
  }
LABEL_33:
  if ( v7 >= 8 )
  {
    v23 = (void *)(2 * v7 + 2);
    Src = v23;
    v28[0] = v6;
    if ( (unsigned __int64)v23 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(v28, (unsigned __int64 *)&Src);
      v23 = Src;
      v6 = v28[0];
    }
    operator delete(v6, (const struct std::nothrow_t *)v23);
  }
}
