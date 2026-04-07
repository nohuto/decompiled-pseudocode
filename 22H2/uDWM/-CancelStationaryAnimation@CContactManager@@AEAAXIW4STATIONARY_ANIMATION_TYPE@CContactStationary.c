/*
 * XREFs of ?CancelStationaryAnimation@CContactManager@@AEAAXIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@@Z @ 0x18009D7E4
 * Callers:
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x18009E71C (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 *     ?OnShowContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_SHOWCONTACT@@@Z @ 0x18009F4C8 (-OnShowContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_SHOWCONTACT@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800173F4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z @ 0x180034BCC (-StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z.c)
 *     ?FindStationaryAnimation@CContactManager@@AEAAHIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@@Z @ 0x18009DC58 (-FindStationaryAnimation@CContactManager@@AEAAHIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVi.c)
 *     ?RemoveAt@?$DynArray@UCStationaryAnimation@@$0A@@@QEAAJI@Z @ 0x1800A0DC8 (-RemoveAt@-$DynArray@UCStationaryAnimation@@$0A@@@QEAAJI@Z.c)
 */

__int64 __fastcall CContactManager::CancelStationaryAnimation(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  CContactManager *v3; // rcx
  unsigned int v4; // edi
  _QWORD *v5; // rsi
  struct CTouchVisual *v6; // rbx

  result = CContactManager::FindStationaryAnimation(a1, a2, 1LL);
  v4 = result;
  if ( (int)result >= 0 )
  {
    v5 = (_QWORD *)((char *)v3 + 120);
    v6 = *(struct CTouchVisual **)(*((_QWORD *)v3 + 15) + 24LL * (unsigned int)result + 16);
    CContactManager::StopAndRemoveFromRootNode(v3, v6);
    if ( v6 )
      CBaseObject::Release(v6);
    return DynArray<CStationaryAnimation,0>::RemoveAt(v5, v4);
  }
  return result;
}
