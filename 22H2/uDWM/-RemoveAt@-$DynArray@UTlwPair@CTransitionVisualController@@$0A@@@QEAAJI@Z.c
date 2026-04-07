/*
 * XREFs of ?RemoveAt@?$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJI@Z @ 0x1800428E8
 * Callers:
 *     ?RemoveTLWClone@CTransitionVisualController@@QEAAXPEBVCTopLevelWindow@@_N1@Z @ 0x18001411C (-RemoveTLWClone@CTransitionVisualController@@QEAAXPEBVCTopLevelWindow@@_N1@Z.c)
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x18002AD18 (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x1800314F4 (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 *     ?_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@HW4StagedBackgroundPolicy@1@@Z @ 0x180052004 (-_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall DynArray<CTransitionVisualController::TlwPair,0>::RemoveAt(__int64 *a1, unsigned int a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // ebx
  unsigned int v4; // r10d
  __int64 v6; // r11
  __int64 v8; // rax
  __int64 v9; // xmm1_8
  __int64 v10; // rcx

  v2 = *((_DWORD *)a1 + 6);
  v3 = 0;
  v4 = a2;
  if ( a2 >= v2 )
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x194u);
  }
  else
  {
    v6 = *a1;
    if ( a2 < v2 - 1 )
    {
      do
      {
        v8 = v4++;
        v9 = *(_QWORD *)(v6 + 24LL * v4 + 16);
        v10 = 3 * v8;
        *(_OWORD *)(v6 + 8 * v10) = *(_OWORD *)(v6 + 24LL * v4);
        *(_QWORD *)(v6 + 8 * v10 + 16) = v9;
        v2 = *((_DWORD *)a1 + 6);
      }
      while ( v4 < v2 - 1 );
    }
    *((_DWORD *)a1 + 6) = v2 - 1;
  }
  return v3;
}
