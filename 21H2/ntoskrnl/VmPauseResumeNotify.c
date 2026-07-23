/*
 * XREFs of VmPauseResumeNotify @ 0x14092F230
 * Callers:
 *     <none>
 * Callees:
 *     VmpPauseResumeNotify @ 0x14092F854 (VmpPauseResumeNotify.c)
 */

__int64 __fastcall VmPauseResumeNotify(unsigned int a1)
{
  unsigned __int64 v2; // rcx

  v2 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[5];
  if ( v2 )
    return VmpPauseResumeNotify(v2, a1);
  else
    return 3221225608LL;
}
