/*
 * XREFs of ?ReuseRealization@CDxHandleBitmapRealization@@UEAA_NAEAUCSM_REALIZATION_INFO@@@Z @ 0x1802ADB70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CDxHandleBitmapRealization::ReuseRealization(
        CDxHandleBitmapRealization *this,
        struct CSM_REALIZATION_INFO *a2)
{
  char v2; // r8

  v2 = 0;
  if ( *(_DWORD *)a2 == *((_DWORD *)this - 30) )
  {
    v2 = 1;
    *((_DWORD *)this - 29) = *((_DWORD *)a2 + 1);
  }
  return v2;
}
