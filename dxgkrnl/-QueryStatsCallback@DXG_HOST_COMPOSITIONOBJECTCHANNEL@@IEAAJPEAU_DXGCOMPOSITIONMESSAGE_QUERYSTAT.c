/*
 * XREFs of ?QueryStatsCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_QUERYSTATS@@PEAU_DXGCOMPOSITIONMESSAGE_QUERYSTATS_RETURN@@@Z @ 0x1C02DE590
 * Callers:
 *     ?ProcessChannelMessage@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x1C02DE0D0 (-ProcessChannelMessage@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAAJPEAXI@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x1C0016980 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?AddRef@DxgkCompositionObject@@QEBAJXZ @ 0x1C006CA60 (-AddRef@DxgkCompositionObject@@QEBAJXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXG_HOST_COMPOSITIONOBJECTCHANNEL::QueryStatsCallback(
        DXG_HOST_COMPOSITIONOBJECTCHANNEL *this,
        struct _DXGCOMPOSITIONMESSAGE_QUERYSTATS *a2,
        struct _DXGCOMPOSITIONMESSAGE_QUERYSTATS_RETURN *a3)
{
  unsigned int v6; // ebx
  DxgkCompositionObject *v7; // rsi
  struct DXGPROCESS *Current; // rax
  struct DXGFASTMUTEX *v9; // rax
  DxgkCompositionObject *v10; // rax
  int v11; // eax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  _BYTE v16[16]; // [rsp+20h] [rbp-88h] BYREF
  _OWORD v17[4]; // [rsp+30h] [rbp-78h] BYREF

  v6 = -1073741811;
  v7 = 0LL;
  Current = DXGPROCESS::GetCurrent((__int64)this);
  if ( (*(unsigned int (**)(void))(*((_QWORD *)Current + 11) + 216LL))() )
  {
    v9 = (struct DXGFASTMUTEX *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 48LL))(*((_QWORD *)this + 1));
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v16, v9, 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v16);
    v10 = (DxgkCompositionObject *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 1) + 72LL))(
                                     *((_QWORD *)this + 1),
                                     *((unsigned int *)a2 + 3),
                                     17LL);
    if ( v10 )
    {
      v7 = v10;
      DxgkCompositionObject::AddRef(v10);
    }
    else
    {
      WdLogSingleEntry1(3LL, -1073741811LL);
    }
    if ( v16[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16);
    if ( v7 )
    {
      memset(v17, 0, sizeof(v17));
      v11 = (*(__int64 (__fastcall **)(_QWORD *, _OWORD *))(*((_QWORD *)v7 + 4) + 48LL))((_QWORD *)v7 + 4, v17);
      v6 = v11;
      if ( v11 < 0 )
      {
        WdLogSingleEntry1(3LL, v11);
      }
      else
      {
        v12 = v17[1];
        *((_OWORD *)a3 + 1) = v17[0];
        v13 = v17[2];
        *((_OWORD *)a3 + 2) = v12;
        v14 = v17[3];
        *((_OWORD *)a3 + 3) = v13;
        *((_OWORD *)a3 + 4) = v14;
      }
      DxgkCompositionObject::Release(v7);
    }
  }
  else
  {
    WdLogSingleEntry1(3LL, -1073741811LL);
  }
  *((_DWORD *)a3 + 1) = v6;
  return v6;
}
