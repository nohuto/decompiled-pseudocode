/*
 * XREFs of ?CreateSourceContextLists@OUTPUTDUPL_MGR@@AEAAJXZ @ 0x1C021428C
 * Callers:
 *     ?Initialize@OUTPUTDUPL_MGR@@QEAAJXZ @ 0x1C0214204 (-Initialize@OUTPUTDUPL_MGR@@QEAAJXZ.c)
 *     ?ReconfigureNumSources@OUTPUTDUPL_MGR@@QEAAJI@Z @ 0x1C0329F40 (-ReconfigureNumSources@OUTPUTDUPL_MGR@@QEAAJI@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C000B31C (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C01DC800 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::CreateSourceContextLists(OUTPUTDUPL_MGR *this)
{
  unsigned int v2; // eax
  __int64 v3; // rsi
  __int64 v4; // rax
  unsigned __int64 v5; // kr00_8
  bool v6; // cf
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rbx
  unsigned int v10; // esi
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rbp
  _QWORD *v14; // rcx
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  __int64 v18; // rbx
  const wchar_t *v19; // r9

  if ( *((_QWORD *)this + 2) )
  {
    WdLogSingleEntry1(2LL, 961LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"New source context lists cannot be create while we have existing ones",
      961LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221227272LL;
  }
  v2 = *((_DWORD *)this + 19);
  if ( !v2 )
  {
    WdLogSingleEntry1(2LL, 966LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Cannot create new context lists with zero elements",
      966LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v3 = v2;
  v5 = v2;
  v4 = 72LL * v2;
  if ( !is_mul_ok(v5, 0x48uLL) )
    v4 = -1LL;
  v6 = __CFADD__(v4, 8LL);
  v7 = v4 + 8;
  if ( v6 )
    v7 = -1LL;
  v8 = operator new[](v7, 0x674D444Fu, 256LL);
  if ( v8 )
  {
    v9 = v8 + 8;
    *(_QWORD *)v8 = v3;
    `vector constructor iterator'(
      (char *)(v8 + 8),
      72LL,
      (unsigned int)v3,
      (void (__fastcall *)(char *))_OUTPUTDUPL_CONTEXTLIST::_OUTPUTDUPL_CONTEXTLIST);
    *((_QWORD *)this + 2) = v9;
    if ( v9 )
    {
      v10 = 0;
      if ( !*((_DWORD *)this + 19) )
        return 0LL;
      while ( 1 )
      {
        v11 = operator new[](0x10uLL, 0x674D444Fu, 256LL);
        v12 = v11;
        if ( v11 )
        {
          *(_QWORD *)v11 = 0LL;
          *(_QWORD *)(v11 + 8) = 0LL;
          AUTOEXPANDALLOCATION::GetBuffer((const void **)v11, 0x100u, 0);
        }
        else
        {
          v12 = 0LL;
        }
        v13 = 9LL * v10;
        *(_QWORD *)(*((_QWORD *)this + 2) + 72LL * v10 + 56) = v12;
        v14 = *(_QWORD **)(*((_QWORD *)this + 2) + 72LL * v10 + 56);
        if ( !v14 || !*v14 )
          break;
        v15 = 8LL * *((unsigned int *)this + 2);
        if ( !is_mul_ok(*((unsigned int *)this + 2), 8uLL) )
          v15 = -1LL;
        *(_QWORD *)(*((_QWORD *)this + 2) + 72LL * v10 + 48) = operator new[](v15, 0x674D444Fu, 256LL);
        v16 = *((_QWORD *)this + 2);
        if ( !*(_QWORD *)(v16 + 72LL * v10 + 48) )
        {
          WdLogSingleEntry1(6LL, v10);
          DxgkLogInternalTriageEvent(
            0LL,
            262145,
            -1,
            (__int64)L"Failed to create context list for VidPn source 0x%I64x.",
            v10,
            0LL,
            0LL,
            0LL,
            0LL);
          return 3221225495LL;
        }
        ++v10;
        *(_DWORD *)(v16 + 8 * v13 + 64) = 0;
        if ( v10 >= *((_DWORD *)this + 19) )
          return 0LL;
      }
      v18 = 986LL;
      WdLogSingleEntry1(6LL, 986LL);
      v19 = L"Failed to create temp present processing buffer";
      goto LABEL_26;
    }
  }
  else
  {
    *((_QWORD *)this + 2) = 0LL;
  }
  v18 = 974LL;
  WdLogSingleEntry1(6LL, 974LL);
  v19 = L"Failed to allocated new source context lists";
LABEL_26:
  DxgkLogInternalTriageEvent(0LL, 262145, -1, (__int64)v19, v18, 0LL, 0LL, 0LL, 0LL);
  return 3221225495LL;
}
