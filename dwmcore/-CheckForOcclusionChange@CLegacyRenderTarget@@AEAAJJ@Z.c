/*
 * XREFs of ?CheckForOcclusionChange@CLegacyRenderTarget@@AEAAJJ@Z @ 0x1800C9100
 * Callers:
 *     ?CheckOcclusionState@CLegacyRenderTarget@@UEAAJXZ @ 0x1800C8E58 (-CheckOcclusionState@CLegacyRenderTarget@@UEAAJXZ.c)
 *     ?Present@CLegacyRenderTarget@@UEAAJ_N@Z @ 0x1800C8F1C (-Present@CLegacyRenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     ?UpdateMPOCaps@CLegacyRenderTarget@@UEAAJXZ @ 0x1800C8D30 (-UpdateMPOCaps@CLegacyRenderTarget@@UEAAJXZ.c)
 *     ?ScheduleCompositionPass@@YAXKW4CompositionReason@@@Z @ 0x1800F1BF8 (-ScheduleCompositionPass@@YAXKW4CompositionReason@@@Z.c)
 */

__int64 __fastcall CLegacyRenderTarget::CheckForOcclusionChange(CLegacyRenderTarget *this, int a2)
{
  if ( a2 == 142213121 )
  {
    *((_BYTE *)this + 18702) = 1;
    return (unsigned int)a2;
  }
  if ( a2 == 142213167 )
  {
    *((_BYTE *)this + 18700) = 1;
    ScheduleCompositionPass(0LL, 0x2000LL);
    return 0;
  }
  if ( a2 >= 0 && (*((_BYTE *)this + 18702) || a2 == 142213129) )
  {
    *(_WORD *)((char *)this + 18701) = 1;
    *((_BYTE *)this + 141) = 1;
    CLegacyRenderTarget::UpdateMPOCaps((CLegacyRenderTarget *)((char *)this + 144));
    return 0;
  }
  return (unsigned int)a2;
}
