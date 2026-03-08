/*
 * XREFs of ?CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C02140C4
 * Callers:
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C01F05EC (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 *     ?CreateRemoteOutputDuplMgr@OUTPUTDUPL_SESSION_MGR@@QEAAJI@Z @ 0x1C03267E4 (-CreateRemoteOutputDuplMgr@OUTPUTDUPL_SESSION_MGR@@QEAAJI@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ??0OUTPUTDUPL_MGR_INDIRECT@@QEAA@U_LUID@@0I@Z @ 0x1C0053434 (--0OUTPUTDUPL_MGR_INDIRECT@@QEAA@U_LUID@@0I@Z.c)
 *     ??_GOUTPUTDUPL_MGR@@QEAAPEAXI@Z @ 0x1C00534EC (--_GOUTPUTDUPL_MGR@@QEAAPEAXI@Z.c)
 *     ?Initialize@OUTPUTDUPL_MGR@@QEAAJXZ @ 0x1C0214204 (-Initialize@OUTPUTDUPL_MGR@@QEAAJXZ.c)
 */

__int64 __fastcall CreateOutputDuplManager(
        unsigned int a1,
        struct ADAPTER_DISPLAY *a2,
        struct _LUID *a3,
        struct _LUID *a4,
        struct OUTPUTDUPL_MGR **a5)
{
  __int64 v9; // rax
  OUTPUTDUPL_MGR *v10; // rbx
  _QWORD *v11; // rax
  __int64 result; // rax
  unsigned int v13; // edi
  OUTPUTDUPL_MGR_INDIRECT *v14; // rax
  OUTPUTDUPL_MGR_INDIRECT *v15; // rcx

  if ( !a5 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid parameter ppOutputDuplMgr = 0x%I64x.",
      0LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  *a5 = 0LL;
  if ( a4 && a3 )
  {
    v14 = (OUTPUTDUPL_MGR_INDIRECT *)operator new[](0x88uLL, 0x674D444Fu, 256LL);
    if ( v14 )
      v15 = OUTPUTDUPL_MGR_INDIRECT::OUTPUTDUPL_MGR_INDIRECT(v14, *a4, *a3, a1);
    else
      v15 = 0LL;
    v10 = (OUTPUTDUPL_MGR *)(((unsigned __int64)v15 + 24) & ((unsigned __int128)-(__int128)(unsigned __int64)v15 >> 64));
    if ( !v10 )
      goto LABEL_15;
  }
  else
  {
    v9 = operator new[](0x60uLL, 0x674D444Fu, 256LL);
    v10 = (OUTPUTDUPL_MGR *)v9;
    if ( !v9 )
    {
LABEL_15:
      WdLogSingleEntry1(6LL, a2);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to allocate memory for output duplication manager on ADAPTER_DISPLAY 0x%I64x.",
        (__int64)a2,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225495LL;
    }
    *(_QWORD *)v9 = a2;
    *(_DWORD *)(v9 + 8) = 0;
    *(_QWORD *)(v9 + 16) = 0LL;
    *(_QWORD *)(v9 + 24) = 0LL;
    *(_QWORD *)(v9 + 32) = 0LL;
    *(_DWORD *)(v9 + 40) = 0;
    *(_DWORD *)(v9 + 44) = 28;
    *(_DWORD *)(v9 + 48) = 50;
    *(_DWORD *)(v9 + 72) = 1;
    *(_DWORD *)(v9 + 76) = a1;
    *(_QWORD *)(v9 + 80) = 0LL;
    *(_BYTE *)(v9 + 88) = 0;
    v11 = (_QWORD *)(v9 + 56);
    v11[1] = v11;
    *v11 = v11;
  }
  result = OUTPUTDUPL_MGR::Initialize(v10);
  v13 = result;
  if ( (int)result < 0 )
  {
    WdLogSingleEntry1(2LL, a2);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to initialize output duplication manager on ADAPTER_DISPLAY 0x%I64x.",
      (__int64)a2,
      0LL,
      0LL,
      0LL,
      0LL);
    OUTPUTDUPL_MGR::`scalar deleting destructor'(v10);
    return v13;
  }
  else
  {
    *a5 = v10;
  }
  return result;
}
