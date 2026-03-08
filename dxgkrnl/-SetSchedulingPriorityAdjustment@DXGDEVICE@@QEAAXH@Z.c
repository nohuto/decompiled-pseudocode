/*
 * XREFs of ?SetSchedulingPriorityAdjustment@DXGDEVICE@@QEAAXH@Z @ 0x1C01D213C
 * Callers:
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0178EFC (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0007980 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?SetSchedulingPriority@DXGCONTEXT@@QEAAXH_N@Z @ 0x1C01D2200 (-SetSchedulingPriority@DXGCONTEXT@@QEAAXH_N@Z.c)
 */

void __fastcall DXGDEVICE::SetSchedulingPriorityAdjustment(DXGDEVICE *this, int a2)
{
  char *v2; // rdi
  char *i; // rbx
  unsigned __int8 IsDxgmms2; // al

  v2 = (char *)this + 496;
  for ( i = (char *)*((_QWORD *)this + 62); i != v2 && i; i = *(char **)i )
  {
    IsDxgmms2 = DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)i + 2) + 16LL) + 16LL));
    DXGCONTEXT::SetSchedulingPriority((DXGCONTEXT *)i, a2 + *((_DWORD *)i + 107), IsDxgmms2 == 0);
    *((_DWORD *)i + 106) = a2;
  }
}
