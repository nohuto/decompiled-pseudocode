/*
 * XREFs of DxgkGetPresentStats @ 0x1C033CA4C
 * Callers:
 *     ?CompleteIndependentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z @ 0x1C00768BC (-CompleteIndependentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0003BCC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0006DA4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00090C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0009930 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkGetPresentStats(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // rdi
  struct DXGPROCESS *Current; // rax
  struct _KTHREAD **v9; // rbx
  struct DXGADAPTER *v10; // rsi
  __int64 v11; // rbx
  int v12; // eax
  const wchar_t *v13; // r9
  __int64 v14; // rax
  struct DXGADAPTER *v16; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v17[16]; // [rsp+58h] [rbp-A8h] BYREF
  DXGADAPTER *v18; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v19[144]; // [rsp+80h] [rbp-80h] BYREF

  v5 = (unsigned int)a1;
  Current = DXGPROCESS::GetCurrent(a1);
  v9 = (struct _KTHREAD **)Current;
  if ( !Current )
  {
    LODWORD(v5) = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v5;
  }
  if ( !(*(unsigned int (**)(void))(*((_QWORD *)Current + 11) + 216LL))() )
  {
    LODWORD(v5) = -1073741790;
    WdLogSingleEntry2(3LL, v9, -1073741790LL);
    return (unsigned int)v5;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v17, (struct DXGFASTMUTEX *const)(v9 + 13), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
  v16 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v18, v5, v9, &v16, 1);
  v10 = v16;
  if ( v16 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v19, v16, 0LL);
    v12 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v19, 0LL);
    v5 = v12;
    if ( v12 >= 0 )
    {
      if ( !*((_BYTE *)v10 + 2833) )
      {
        v14 = *((_QWORD *)v10 + 366);
        if ( v14 )
        {
          LODWORD(v5) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(v14 + 736)
                                                                                               + 8LL)
                                                                                   + 496LL))(
                          *(_QWORD *)(v14 + 744),
                          a2,
                          a3,
                          a4);
LABEL_14:
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v19);
          goto LABEL_15;
        }
      }
      v5 = -1073741811LL;
      WdLogSingleEntry2(2LL, v10, -1073741811LL);
      v13 = L"DXGADAPTER 0x%I64x is not an active render adapter, returning 0x%I64x";
    }
    else
    {
      WdLogSingleEntry2(2LL, v10, v12);
      v13 = L"Failed to acquire shared access for DXGADAPTER 0x%I64x, returning 0x%I64x";
    }
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v13, (__int64)v10, v5, 0LL, 0LL, 0LL);
    goto LABEL_14;
  }
  v11 = v5;
  LODWORD(v5) = -1073741811;
  WdLogSingleEntry2(2LL, v11, -1073741811LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Invalid hAdapter (0x%I64x) specified, returning 0x%I64x",
    v11,
    -1073741811LL,
    0LL,
    0LL,
    0LL);
LABEL_15:
  if ( v18 )
    DXGADAPTER::ReleaseReference(v18);
  if ( v17[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17);
  return (unsigned int)v5;
}
