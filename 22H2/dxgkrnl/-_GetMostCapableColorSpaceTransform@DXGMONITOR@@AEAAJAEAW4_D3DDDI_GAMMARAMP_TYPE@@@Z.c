/*
 * XREFs of ?_GetMostCapableColorSpaceTransform@DXGMONITOR@@AEAAJAEAW4_D3DDDI_GAMMARAMP_TYPE@@@Z @ 0x1C01419EC
 * Callers:
 *     ?_NotifyDXGIGammaRampChange@DXGMONITOR@@QEAAJXZ @ 0x1C00EB208 (-_NotifyDXGIGammaRampChange@DXGMONITOR@@QEAAJXZ.c)
 *     ?_CombineDXGIGammaRamp@DXGMONITOR@@AEAAJPEAUDXGK_GAMMA_RAMP@@PEAPEAU2@@Z @ 0x1C0140054 (-_CombineDXGIGammaRamp@DXGMONITOR@@AEAAJPEAUDXGK_GAMMA_RAMP@@PEAPEAU2@@Z.c)
 *     ?_SetColorSpaceTransform@DXGMONITOR@@AEAAJKPEAX@Z @ 0x1C015F084 (-_SetColorSpaceTransform@DXGMONITOR@@AEAAJKPEAX@Z.c)
 *     ?_IsTargetMatrix_3x4Supported@DXGMONITOR@@AEAAEXZ @ 0x1C015F590 (-_IsTargetMatrix_3x4Supported@DXGMONITOR@@AEAAEXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGMONITOR::_GetMostCapableColorSpaceTransform(DXGMONITOR *this, enum _D3DDDI_GAMMARAMP_TYPE *a2)
{
  __int64 v2; // r8
  unsigned int v3; // ebx
  __int64 v6; // rax
  int v7; // eax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax

  v2 = *((_QWORD *)this + 4);
  v3 = 0;
  if ( !v2 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v9);
    v2 = *((_QWORD *)this + 4);
  }
  if ( !*(_QWORD *)(*(_QWORD *)(v2 + 8) + 16LL) )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v10);
    v2 = *((_QWORD *)this + 4);
  }
  if ( *(_QWORD *)(*(_QWORD *)(v2 + 8) + 16LL) == -1992LL )
  {
    v11 = WdLogNewEntry5_WdAssertion(0LL, a2);
    WdLogEvent5_WdAssertion(v11);
    v2 = *((_QWORD *)this + 4);
  }
  v6 = *(_QWORD *)(v2 + 8);
  *a2 = D3DDDI_GAMMARAMP_UNINITIALIZED;
  v7 = *(_DWORD *)(*(_QWORD *)(v6 + 16) + 2040LL);
  if ( (v7 & 4) != 0 )
  {
    *a2 = D3DDDI_GAMMARAMP_MATRIX_3x4;
  }
  else if ( (v7 & 1) != 0 )
  {
    *a2 = D3DDDI_GAMMARAMP_RGB256x3x16;
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v3;
}
