/*
 * XREFs of ?ReuseRealization@CDxHandleYUVBitmapRealization@@UEAA_NAEAUCSM_REALIZATION_INFO@@@Z @ 0x1802B1044
 * Callers:
 *     ?ReuseRealization@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EAA_NAEAUCSM_REALIZATION_INFO@@@Z @ 0x18011F1F0 (-ReuseRealization@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EAA_NAEAUCSM_REALIZATION_INFO@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CDxHandleYUVBitmapRealization::ReuseRealization(
        CDxHandleYUVBitmapRealization *this,
        struct CSM_REALIZATION_INFO *a2)
{
  char v2; // r8

  v2 = 0;
  if ( *(_DWORD *)a2 == *((_DWORD *)this - 66) )
  {
    v2 = 1;
    *((_DWORD *)this - 65) = *((_DWORD *)a2 + 1);
  }
  return v2;
}
