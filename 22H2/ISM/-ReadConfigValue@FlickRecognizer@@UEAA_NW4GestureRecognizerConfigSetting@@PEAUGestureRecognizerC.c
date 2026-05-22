/*
 * XREFs of ?ReadConfigValue@FlickRecognizer@@UEAA_NW4GestureRecognizerConfigSetting@@PEAUGestureRecognizerConfigValue@@@Z @ 0x180183DF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall FlickRecognizer::ReadConfigValue(_WORD *a1, int a2, __int64 a3)
{
  char v3; // r10
  __int16 v4; // ax

  v3 = 1;
  switch ( a2 )
  {
    case 14:
      v4 = a1[78];
      goto LABEL_10;
    case 15:
      v4 = a1[79];
      goto LABEL_10;
    case 16:
      v4 = a1[80];
      goto LABEL_10;
    case 17:
      v4 = a1[81];
LABEL_10:
      *(_WORD *)(a3 + 4) = v4;
      *(_DWORD *)a3 = a2;
      return v3;
  }
  return 0;
}
