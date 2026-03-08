/*
 * XREFs of ?AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@PEAVDXGADAPTER@@PEAPEAVSESSION_ADAPTER@@@Z @ 0x1C01DAD84
 * Callers:
 *     ?SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C001B734 (-SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     DxgkUseAdapterViewInCurrentSession @ 0x1C017D64C (DxgkUseAdapterViewInCurrentSession.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_GSESSION_ADAPTER@@QEAAPEAXI@Z @ 0x1C000B2E8 (--_GSESSION_ADAPTER@@QEAAPEAXI@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z @ 0x1C01A702C (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z.c)
 *     ?Initialize@SESSION_ADAPTER@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1C01DAEA8 (-Initialize@SESSION_ADAPTER@@QEAAJPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DXGSESSIONDATA::AddAdapterToSession(
        DXGSESSIONDATA ***this,
        const struct _LUID *a2,
        struct DXGADAPTER *a3,
        struct SESSION_ADAPTER **a4)
{
  struct SESSION_ADAPTER *SessionAdapterFromLuid; // rax
  __int64 v10; // rax
  __int64 v11; // rbx
  struct _LUID v12; // rcx
  SESSION_ADAPTER *v13; // rcx
  _QWORD *v14; // rax
  int v15; // r14d
  DXGSESSIONDATA **v16; // rdx
  DXGSESSIONDATA *v17; // rcx

  SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid((DXGSESSIONDATA *)this, a2);
  if ( SessionAdapterFromLuid )
  {
    ++*((_DWORD *)SessionAdapterFromLuid + 12);
    if ( a4 )
      *a4 = SessionAdapterFromLuid;
    return 0LL;
  }
  v10 = operator new[](0x80uLL, 0x4B677844u, 256LL);
  v11 = v10;
  if ( v10 )
  {
    *(_QWORD *)v10 = this;
    v12 = *a2;
    *(_QWORD *)(v10 + 16) = 0LL;
    *(_DWORD *)(v10 + 48) = 0;
    *(_DWORD *)(v10 + 52) = 0;
    *(_QWORD *)(v10 + 56) = 0LL;
    *(_QWORD *)(v10 + 64) = 0LL;
    *(_DWORD *)(v10 + 104) = 0;
    *(_DWORD *)(v10 + 108) = 0;
    *(struct _LUID *)(v10 + 8) = v12;
    v13 = (SESSION_ADAPTER *)v10;
    *(_QWORD *)(v10 + 72) = 0LL;
    *(_DWORD *)(v10 + 96) = 0;
    v14 = (_QWORD *)(v10 + 112);
    v14[1] = v14;
    *v14 = v14;
    v15 = SESSION_ADAPTER::Initialize(v13, a3);
    if ( v15 >= 0 )
    {
      v16 = this[2323];
      v17 = (DXGSESSIONDATA *)(v11 + 32);
      if ( *v16 != (DXGSESSIONDATA *)(this + 2322) )
        __fastfail(3u);
      *(_QWORD *)v17 = this + 2322;
      *(_QWORD *)(v11 + 40) = v16;
      *v16 = v17;
      this[2323] = (DXGSESSIONDATA **)v17;
      ++*(_DWORD *)(v11 + 48);
      if ( a4 )
        *a4 = (struct SESSION_ADAPTER *)v11;
      WdLogSingleEntry3(4LL, a2->HighPart, a2->LowPart, this);
      return 0LL;
    }
    SESSION_ADAPTER::`scalar deleting destructor'((SESSION_ADAPTER *)v11);
    return (unsigned int)v15;
  }
  else
  {
    WdLogSingleEntry3(6LL, a2->HighPart, a2->LowPart, this);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate session adapter for adapter 0x%I64x%08I64x in session 0x%I64x.",
      a2->HighPart,
      a2->LowPart,
      (__int64)this,
      0LL,
      0LL);
    return 3221225495LL;
  }
}
