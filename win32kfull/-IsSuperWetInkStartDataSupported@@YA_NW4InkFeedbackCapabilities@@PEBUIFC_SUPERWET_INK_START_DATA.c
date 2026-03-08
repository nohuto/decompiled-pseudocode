/*
 * XREFs of ?IsSuperWetInkStartDataSupported@@YA_NW4InkFeedbackCapabilities@@PEBUIFC_SUPERWET_INK_START_DATA@@@Z @ 0x1C024506C
 * Callers:
 *     ?ProcessInkFeedbackCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C0246E60 (-ProcessInkFeedbackCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsSuperWetInkStartDataSupported(char a1, __int64 a2)
{
  int v2; // r8d
  int v3; // r8d
  bool v4; // zf
  int v5; // r8d
  bool v6; // zf

  if ( *(_BYTE *)(a2 + 8) != 0xFF && (a1 & 0x40) == 0 )
    return 0;
  v2 = *(_DWORD *)(a2 + 4);
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      if ( v3 != 1 )
        return 0;
      v4 = (a1 & 2) == 0;
    }
    else
    {
      v4 = (a1 & 4) == 0;
    }
  }
  else
  {
    v4 = (a1 & 1) == 0;
  }
  if ( v4 )
    return 0;
  v5 = *(_DWORD *)(a2 + 16);
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      v6 = (a1 & 0x10) == 0;
      goto LABEL_14;
    }
    return 0;
  }
  v6 = (a1 & 8) == 0;
LABEL_14:
  if ( v6 )
    return 0;
  return *(float *)(a2 + 20) == 1.0
      && *(float *)(a2 + 24) == 0.0
      && *(float *)(a2 + 28) == 0.0
      && *(float *)(a2 + 32) == 1.0
      && *(float *)(a2 + 36) == 0.0
      && *(float *)(a2 + 40) == 0.0
      || (a1 & 0x20) != 0;
}
