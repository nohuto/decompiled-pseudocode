/*
 * XREFs of ?SetApiSchedulingPriority@DXGCONTEXT@@QEAAJH@Z @ 0x1C00499BC
 * Callers:
 *     DxgkSetContextSchedulingPriority @ 0x1C02F2510 (DxgkSetContextSchedulingPriority.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000AF80 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?SetSchedulingPriority@DXGCONTEXT@@QEAAXH_N@Z @ 0x1C0186B0C (-SetSchedulingPriority@DXGCONTEXT@@QEAAXH_N@Z.c)
 */

__int64 __fastcall DXGCONTEXT::SetApiSchedulingPriority(DXGCONTEXT *this, int a2)
{
  unsigned __int8 IsDxgmms2; // al
  __int64 result; // rax

  if ( (unsigned int)(a2 + 7) > 0xE )
    return 3221225485LL;
  IsDxgmms2 = DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL));
  DXGCONTEXT::SetSchedulingPriority(this, a2 + *((_DWORD *)this + 106), IsDxgmms2 == 0);
  result = 0LL;
  *((_DWORD *)this + 107) = a2;
  return result;
}
