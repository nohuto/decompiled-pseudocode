/*
 * XREFs of ?CancelStationaryAnimationsInRadius@CContactManager@@AEAAXW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@PEBUtagPOINT@@M@Z @ 0x18009DABC
 * Callers:
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x18009E98C (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017C34 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z @ 0x18003540C (-StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z.c)
 *     sqrtf_0 @ 0x1800581AA (sqrtf_0.c)
 *     ?RemoveAt@?$DynArray@UCStationaryAnimation@@$0A@@@QEAAJI@Z @ 0x1800A1038 (-RemoveAt@-$DynArray@UCStationaryAnimation@@$0A@@@QEAAJI@Z.c)
 */

void __fastcall CContactManager::CancelStationaryAnimationsInRadius(__int64 a1, int a2, _DWORD *a3, float a4)
{
  int v5; // ebx
  __int64 *v7; // r14
  __int64 v8; // rdi
  __int64 v9; // rcx
  struct CTouchVisual *v10; // rsi
  int v11; // eax
  int v12; // edx
  CContactManager *v13; // rcx

  v5 = *(_DWORD *)(a1 + 144) - 1;
  if ( v5 >= 0 )
  {
    v7 = (__int64 *)(a1 + 120);
    v8 = 24LL * v5;
    do
    {
      v9 = *v7;
      v10 = *(struct CTouchVisual **)(*v7 + v8 + 16);
      if ( v10 && *((_DWORD *)v10 + 104) == a2 )
      {
        v11 = a3[1] - *(_DWORD *)(v9 + v8 + 8);
        v12 = *a3 - *(_DWORD *)(v9 + v8 + 4);
        if ( a4 >= sqrtf_0((float)(v12 * v12 + v11 * v11)) )
        {
          CContactManager::StopAndRemoveFromRootNode(v13, v10);
          CBaseObject::Release(v10);
          DynArray<CStationaryAnimation,0>::RemoveAt(v7, (unsigned int)v5);
        }
      }
      v8 -= 24LL;
      --v5;
    }
    while ( v5 >= 0 );
  }
}
