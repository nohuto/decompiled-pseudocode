/*
 * XREFs of ?SetSchedulingPriorityAdjustment@DXGDEVICE@@QEAAXH@Z @ 0x1C00E4D18
 * Callers:
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E3A58 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 * Callees:
 *     ?UsesSoftRealtimeTrustModel@DXGCONTEXT@@QEAA_NXZ @ 0x1C0027658 (-UsesSoftRealtimeTrustModel@DXGCONTEXT@@QEAA_NXZ.c)
 *     ?SetSchedulingPriority@DXGCONTEXT@@QEAAXH_N@Z @ 0x1C00E51F0 (-SetSchedulingPriority@DXGCONTEXT@@QEAAXH_N@Z.c)
 */

void __fastcall DXGDEVICE::SetSchedulingPriorityAdjustment(DXGDEVICE *this, int a2)
{
  DXGCONTEXT *v2; // rdi
  DXGCONTEXT *i; // rbx
  bool v5; // al

  v2 = (DXGDEVICE *)((char *)this + 464);
  for ( i = (DXGCONTEXT *)*((_QWORD *)this + 58); i != v2 && i; i = *(DXGCONTEXT **)i )
  {
    v5 = DXGCONTEXT::UsesSoftRealtimeTrustModel(i);
    DXGCONTEXT::SetSchedulingPriority(i, a2 + *((_DWORD *)i + 111), !v5);
    *((_DWORD *)i + 110) = a2;
  }
}
