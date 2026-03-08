/*
 * XREFs of ?Update@CDrawListCache@@AEAAX_KPEAPEAVCDrawListEntry@@IW4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x1800799D0
 * Callers:
 *     ?Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z @ 0x180078B10 (-Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x18007CF6C (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 * Callees:
 *     ??$uninitialized_move@V?$move_iterator@PEAPEAVCDrawListEntry@@@std@@V?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@V?$move_iterator@PEAPEAVCDrawListEntry@@@0@0V12@@Z @ 0x180016E0C (--$uninitialized_move@V-$move_iterator@PEAPEAVCDrawListEntry@@@std@@V-$checked_array_iterator@PE.c)
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180040360 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?first@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ @ 0x18007B894 (-first@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$move_backward@V?$move_iterator@PEAUD2D_POINT_2F@@@std@@V?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@V?$move_iterator@PEAUD2D_POINT_2F@@@0@0V12@@Z @ 0x1801B026C (--$move_backward@V-$move_iterator@PEAUD2D_POINT_2F@@@std@@V-$checked_array_iterator@PEAUD2D_POIN.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CDrawListCache::Update(
        CDrawListCache *this,
        unsigned __int64 a2,
        struct CDrawListEntry **a3,
        unsigned int a4,
        enum D2D1_ANTIALIAS_MODE a5,
        bool a6)
{
  CDrawListCache *v6; // rbx
  unsigned __int64 v7; // r12
  CDrawListCache *v8; // rdi
  _DWORD *v9; // rsi
  int v10; // eax
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int64 v17; // r12
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r12
  __int64 v23; // rax
  _DWORD *v24; // rcx
  struct CDrawListEntry **v25; // r9
  __int64 v26; // rax
  unsigned __int64 v27; // r13
  unsigned __int64 v28; // rax
  struct CDrawListEntry **v29; // rcx
  int v30; // eax
  __int64 v31; // rax
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // r15
  unsigned int v34; // eax
  __int64 v35; // rax
  __int64 v36; // r14
  __int64 v37; // rax
  unsigned __int64 v38; // rdi
  _DWORD *v39; // rdi
  int v40; // eax
  __int128 v41; // xmm0
  bool v42; // zf
  unsigned __int64 v43; // rax
  int v44; // eax
  int v45; // eax
  int v46; // eax
  __int64 v47; // rax
  _QWORD *v48; // rax
  _QWORD *v49; // r12
  const void *v50; // rax
  int v51; // eax
  void *v52; // rdx
  __int64 v53; // rax
  int v54; // eax
  struct CDrawListEntry **v55; // r10
  unsigned __int64 v56; // r9
  int v57; // eax
  __int64 v58; // [rsp+20h] [rbp-89h]
  _DWORD *v59; // [rsp+20h] [rbp-89h]
  unsigned __int64 v60; // [rsp+28h] [rbp-81h]
  unsigned int v61; // [rsp+30h] [rbp-79h]
  __int128 v62; // [rsp+40h] [rbp-69h] BYREF
  __int64 v63; // [rsp+50h] [rbp-59h]
  CDrawListCache *v64; // [rsp+60h] [rbp-49h]
  unsigned __int64 v65; // [rsp+70h] [rbp-39h]
  __int128 v66; // [rsp+80h] [rbp-29h] BYREF
  __int64 v67; // [rsp+90h] [rbp-19h]
  __int128 v68; // [rsp+A0h] [rbp-9h] BYREF
  __int128 v69; // [rsp+B0h] [rbp+7h] BYREF
  void *retaddr; // [rsp+F8h] [rbp+4Fh]

  v6 = this;
  v61 = a4;
  v64 = (CDrawListCache *)a3;
  *(_QWORD *)&v69 = a2;
  v7 = a4;
  if ( !a3 && a4 )
  {
LABEL_92:
    ((void (__fastcall *)(CDrawListCache *, unsigned __int64, struct CDrawListEntry **))`gsl::details::get_terminate_handler'::`2'::handler)(
      this,
      a2,
      a3);
    __debugbreak();
  }
  v8 = (CDrawListCache *)&a3[a4];
  v9 = (_DWORD *)((char *)this + 48);
  v10 = *((_DWORD *)this + 12) & 3;
  if ( v10 == 1 )
  {
    v11 = a4;
    v12 = *(_QWORD *)(detail::pointer_buffer_impl<CDrawListEntry *>::first((char *)this + 48) - 16);
LABEL_7:
    v58 = v12;
    goto LABEL_8;
  }
  if ( v10 == 2 )
  {
    v11 = a4;
LABEL_6:
    v12 = 0LL;
    goto LABEL_7;
  }
  v11 = a4;
  if ( v10 )
  {
    if ( (unsigned int)(v10 - 2) >= 2 )
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
    goto LABEL_6;
  }
  v12 = 1LL;
  v58 = 1LL;
LABEL_8:
  v13 = *v9 & 3;
  if ( v13 == 1 )
  {
    v14 = detail::pointer_buffer_impl<CDrawListEntry *>::first(v9);
    v12 = v58;
    v15 = *(_QWORD *)(v14 - 8);
    goto LABEL_10;
  }
  if ( v13 )
  {
    v44 = v13 - 2;
    if ( !v44 )
    {
      v15 = 0LL;
      goto LABEL_10;
    }
    if ( v44 != 1 )
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
  }
  v15 = 1LL;
LABEL_10:
  if ( v15 - v12 >= v7 )
    goto LABEL_11;
  v43 = v12 + v7;
  v65 = v12 + v7;
  if ( v12 + v7 < v12 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  else
  {
    if ( v43 == 1 )
    {
      *(_QWORD *)v9 = 3LL;
      goto LABEL_11;
    }
    v48 = operator new(8 * v43 + 16);
    v49 = v48 + 2;
    *v48 = 0LL;
    v60 = (unsigned __int64)(v48 + 2);
    v48[1] = 0LL;
    v50 = (const void *)detail::pointer_buffer_impl<CDrawListEntry *>::first(v9);
    *(_QWORD *)&v62 = v49;
    v7 = v58;
    *((_QWORD *)&v62 + 1) = v58;
    v63 = 0LL;
    v66 = v62;
    v67 = 0LL;
    std::uninitialized_move<std::move_iterator<CDrawListEntry * *>,stdext::checked_array_iterator<CDrawListEntry * *>>(
      (__int64)&v62,
      v50,
      (__int64)v50 + 8 * v58,
      (__int64 *)&v66);
    v51 = *v9 & 3;
    if ( v51 == 2 || !v51 )
      goto LABEL_79;
    v54 = v51 - 1;
    if ( !v54 )
    {
      v52 = (void *)(detail::pointer_buffer_impl<CDrawListEntry *>::first(v9) - 16);
      goto LABEL_80;
    }
  }
  if ( v54 != 2 )
    ModuleFailFastForHRESULT(2147549183LL, retaddr);
LABEL_79:
  v52 = 0LL;
LABEL_80:
  *(_QWORD *)v9 = v60 | 1;
  operator delete(v52);
  *(_QWORD *)(detail::pointer_buffer_impl<CDrawListEntry *>::first(v9) - 16) = v7;
  v53 = detail::pointer_buffer_impl<CDrawListEntry *>::first(v9);
  *(_QWORD *)(v53 - 8) = v65;
LABEL_11:
  v16 = *(_QWORD *)v9 & 3LL;
  if ( (_DWORD)v16 == 1 )
  {
    v17 = *(_QWORD *)v9 & 0xFFFFFFFFFFFFFFFCuLL;
    v59 = (_DWORD *)v17;
    v18 = *(_QWORD *)(detail::pointer_buffer_impl<CDrawListEntry *>::first(v9) - 16);
LABEL_13:
    v19 = 1LL;
    goto LABEL_14;
  }
  if ( (_DWORD)v16 == 2 )
  {
    v17 = 0LL;
    v59 = 0LL;
    v18 = 0LL;
    goto LABEL_13;
  }
  v59 = v9;
  v17 = (unsigned __int64)v9;
  if ( (_DWORD)v16 )
  {
    if ( (unsigned int)(v16 - 2) > 1 )
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
    v18 = 0LL;
    goto LABEL_13;
  }
  v19 = 1LL;
  v18 = 1LL;
LABEL_14:
  v20 = *(_QWORD *)v9;
  v21 = *(_QWORD *)v9 & 3LL;
  if ( (_DWORD)v21 == 1 )
  {
    *(_QWORD *)&v68 = v20 & 0xFFFFFFFFFFFFFFFCuLL;
    v22 = (__int64)((__int64)v59 + 8 * v18 - (v20 & 0xFFFFFFFFFFFFFFFCuLL)) >> 3;
    v23 = detail::pointer_buffer_impl<CDrawListEntry *>::first(v9);
    v24 = (_DWORD *)v68;
    a2 = v22;
    v19 = *(_QWORD *)(v23 - 16);
  }
  else if ( (_DWORD)v21 == 2 )
  {
    v22 = (__int64)(v17 + 8 * v18) >> 3;
    a2 = v22;
    v24 = 0LL;
    v19 = 0LL;
  }
  else
  {
    v22 = ((__int64)v59 + 8 * v18 - (__int64)v9) >> 3;
    a2 = v22;
    v24 = v9;
    if ( (_DWORD)v21 )
    {
      if ( (unsigned int)(v21 - 2) > 1 )
        ModuleFailFastForHRESULT(2147549183LL, retaddr);
      v19 = 0LL;
    }
  }
  v25 = (struct CDrawListEntry **)&v24[2 * v19];
  v26 = *(_QWORD *)v9 & 3LL;
  if ( (_DWORD)v26 == 1 )
  {
    v27 = *(_QWORD *)v9 & 0xFFFFFFFFFFFFFFFCuLL;
  }
  else
  {
    if ( (_DWORD)v26 )
    {
      v45 = v26 - 2;
      if ( !v45 )
      {
        v27 = 0LL;
        goto LABEL_18;
      }
      if ( v45 != 1 )
        ModuleFailFastForHRESULT(2147549183LL, retaddr);
    }
    v27 = (unsigned __int64)v9;
  }
LABEL_18:
  a3 = (struct CDrawListEntry **)(v27 + 8 * v22);
  if ( v11 && !a3 )
    goto LABEL_112;
  v28 = a2;
  if ( v11 < a2 )
    v28 = v11;
  v29 = &v25[-v28];
  if ( v25 != v29 )
  {
    v55 = v25 - 1;
    v56 = v11;
    if ( a3 )
    {
      while ( v56 )
      {
        if ( --v56 >= v11 )
          break;
        a3[v56] = *v55;
        if ( v55 == v29 )
          goto LABEL_23;
        --v55;
      }
    }
    goto LABEL_112;
  }
LABEL_23:
  if ( a2 > v11 )
  {
    if ( !v22 || v27 && v22 >= 0 )
    {
      *(_QWORD *)&v62 = v27;
      *((_QWORD *)&v62 + 1) = v22;
      v63 = v22;
      std::move_backward<std::move_iterator<D2D_POINT_2F *>,stdext::checked_array_iterator<D2D_POINT_2F *>>(
        &v66,
        v27,
        v27 + 8 * (v22 - v11),
        &v62,
        v59,
        v60,
        v61);
      goto LABEL_24;
    }
LABEL_112:
    _invalid_parameter_noinfo_noreturn();
  }
LABEL_24:
  if ( v11 )
  {
    v30 = *v9 & 3;
    if ( v30 == 1 )
    {
      v31 = detail::pointer_buffer_impl<CDrawListEntry *>::first(v9);
      *(_QWORD *)(v31 - 16) += v11;
    }
    else
    {
      if ( !v30 )
        goto LABEL_115;
      v46 = v30 - 2;
      if ( v46 )
      {
        if ( v46 != 1 )
          ModuleFailFastForHRESULT(2147549183LL, retaddr);
        if ( v11 != 1 )
LABEL_115:
          *(_QWORD *)v9 = 2LL;
      }
    }
  }
  v32 = (unsigned __int64)v64;
  this = v64;
  v33 = v27 - (_QWORD)v64;
  while ( this != v8 )
  {
    if ( !v32 || !v8 || v32 > (unsigned __int64)this || this >= v8 )
      goto LABEL_92;
    *(_QWORD *)((char *)this + v33) = *(_QWORD *)this;
    this = (CDrawListCache *)((char *)this + 8);
    v32 = (unsigned __int64)v64;
  }
  v34 = *v9 & 3;
  if ( v34 > 1 && v34 - 2 >= 2 )
    ModuleFailFastForHRESULT(2147549183LL, retaddr);
  v35 = 0LL;
  if ( g_pComposition )
    v35 = *((_QWORD *)g_pComposition + 62);
  *((_QWORD *)v6 + 4) = v35;
  *((_QWORD *)v6 + 3) = v35;
  *((_DWORD *)v6 + 24) = a5;
  *((_QWORD *)v6 + 5) = v69;
  *((_BYTE *)v6 + 100) = a6;
  *((_BYTE *)v6 + 102) = 0;
  if ( v61 )
  {
    v36 = 0LL;
    v69 = 0uLL;
    *((_DWORD *)v6 + 22) = 0;
    *((_DWORD *)v6 + 23) = -1;
    while ( 1 )
    {
      v37 = *(_QWORD *)v9 & 3LL;
      if ( (_DWORD)v37 == 1 )
      {
        v38 = *(_QWORD *)v9 & 0xFFFFFFFFFFFFFFFCuLL;
        goto LABEL_41;
      }
      if ( !(_DWORD)v37 )
        goto LABEL_75;
      v57 = v37 - 2;
      if ( v57 )
        break;
      v38 = 0LL;
LABEL_41:
      v39 = *(_DWORD **)(v38 + 8 * v36);
      (**(void (__fastcall ***)(_DWORD *, unsigned __int64, struct CDrawListEntry **))v39)(v39, a2, a3);
      v40 = v39[12];
      *((_DWORD *)v6 + 22) |= v40;
      *((_DWORD *)v6 + 23) &= v40;
      if ( !*((_BYTE *)v6 + 103) && (v40 & 0x100) == 0 )
      {
        v47 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v39 + 40LL))(v39);
        (*(void (__fastcall **)(__int64, CDrawListCache *))(*(_QWORD *)v47 + 56LL))(v47, v6);
      }
      if ( (v39[12] & 0x1000) == 0 )
      {
        v68 = *(_OWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v39 + 48LL))(v39);
        TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)&v69, (float *)&v68);
      }
      if ( *((_BYTE *)v6 + 101) && (*(unsigned int (__fastcall **)(_DWORD *))(*(_QWORD *)v39 + 32LL))(v39) == 2 )
        *((_BYTE *)v6 + 102) = 1;
      v36 = (unsigned int)(v36 + 1);
      if ( (unsigned int)v36 >= v61 )
      {
        v41 = v69;
        v68 = v69;
        goto LABEL_47;
      }
    }
    if ( v57 != 1 )
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
LABEL_75:
    v38 = (unsigned __int64)v9;
    goto LABEL_41;
  }
  *((_DWORD *)v6 + 22) = 16;
  v41 = 0LL;
  *((_DWORD *)v6 + 23) = 16;
LABEL_47:
  v42 = *((_BYTE *)v6 + 102) == 0;
  *((_OWORD *)v6 + 4) = v41;
  if ( v42 )
    ++dword_1803E2AF4;
  else
    ++dword_1803E2B00;
}
