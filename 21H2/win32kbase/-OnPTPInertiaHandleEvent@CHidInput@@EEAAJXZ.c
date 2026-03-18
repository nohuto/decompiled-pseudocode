/*
 * XREFs of ?OnPTPInertiaHandleEvent@CHidInput@@EEAAJXZ @ 0x1C01E1DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?EndInertiaForContainer@CPTPProcessor@@SAXPEAX_K@Z @ 0x1C01DDFF8 (-EndInertiaForContainer@CPTPProcessor@@SAXPEAX_K@Z.c)
 */

__int64 __fastcall CHidInput::OnPTPInertiaHandleEvent(CHidInput *this)
{
  CPTPProcessor::EndInertiaForContainer(*((void **)this + 176), *((_QWORD *)this + 177));
  return 0LL;
}
