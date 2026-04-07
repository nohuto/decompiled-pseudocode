/*
 * XREFs of ?DisablePrefiltering@CVisual@@QEAAXXZ @ 0x180027E28
 * Callers:
 *     ?Initialize@CTopLevelWindow3D@@MEAAJXZ @ 0x180027DF0 (-Initialize@CTopLevelWindow3D@@MEAAJXZ.c)
 *     ?Initialize@CAnimatedTransitionVisual@@MEAAJXZ @ 0x180034240 (-Initialize@CAnimatedTransitionVisual@@MEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVisual::DisablePrefiltering(CVisual *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 49);
  if ( (v1 & 1) == 0 )
  {
    *((_DWORD *)this + 53) = 1;
    *((_DWORD *)this + 49) = v1 | 1;
    (*(void (__fastcall **)(CVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 64LL);
  }
}
