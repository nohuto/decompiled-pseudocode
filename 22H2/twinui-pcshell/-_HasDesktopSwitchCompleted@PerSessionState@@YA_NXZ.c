/*
 * XREFs of ?_HasDesktopSwitchCompleted@PerSessionState@@YA_NXZ @ 0x1803A0800
 * Callers:
 *     ?HasLoginCompleted@PerSessionState@@YA_NXZ @ 0x1803A05E0 (-HasLoginCompleted@PerSessionState@@YA_NXZ.c)
 * Callees:
 *     ?IsCurrentThreadOnInputDesktop@PerSessionState@@YA_NXZ @ 0x1803A0620 (-IsCurrentThreadOnInputDesktop@PerSessionState@@YA_NXZ.c)
 *     PerSessionState::_CreateSessionKey @ 0x1803A06D8 (PerSessionState--_CreateSessionKey.c)
 *     PerSessionState::_DoesSessionKeyExist @ 0x1803A0774 (PerSessionState--_DoesSessionKeyExist.c)
 */

char __fastcall PerSessionState::_HasDesktopSwitchCompleted(PerSessionState *this)
{
  char result; // al
  PerSessionState *v2; // rcx
  HKEY v3; // rcx

  result = byte_180652EB1;
  if ( !byte_180652EB1 )
  {
    if ( PerSessionState::_DoesSessionKeyExist(L"DesktopSwitchCompleted") )
    {
LABEL_3:
      result = 1;
      byte_180652EB1 = 1;
      return result;
    }
    if ( PerSessionState::IsCurrentThreadOnInputDesktop(v2) )
    {
      PerSessionState::_CreateSessionKey(v3);
      goto LABEL_3;
    }
    return byte_180652EB1;
  }
  return result;
}
