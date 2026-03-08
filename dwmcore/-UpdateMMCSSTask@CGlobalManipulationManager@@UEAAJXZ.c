/*
 * XREFs of ?UpdateMMCSSTask@CGlobalManipulationManager@@UEAAJXZ @ 0x1800CAF20
 * Callers:
 *     ?ManipulationThreadMain@CGlobalManipulationManager@@EEAAJXZ @ 0x1800CAD30 (-ManipulationThreadMain@CGlobalManipulationManager@@EEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CGlobalManipulationManager::UpdateMMCSSTask(CGlobalManipulationManager *this)
{
  signed int v1; // ebx
  signed int LastError; // eax
  __int64 v4; // rcx

  v1 = 0;
  if ( hEvent )
  {
    SetLastError(0);
    if ( !SetEvent(hEvent) )
    {
      LastError = GetLastError();
      v1 = LastError;
      if ( LastError > 0 )
        v1 = (unsigned __int16)LastError | 0x80070000;
      if ( v1 >= 0 )
        v1 = -2003304445;
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v1, 0x65u, 0LL);
    }
  }
  return (unsigned int)v1;
}
