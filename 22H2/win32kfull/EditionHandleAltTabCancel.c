/*
 * XREFs of EditionHandleAltTabCancel @ 0x1C0120700
 * Callers:
 *     <none>
 * Callees:
 *     ?IsGpqForegroundAccessibleExplicit@@YAHHPEAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z @ 0x1C010FD48 (-IsGpqForegroundAccessibleExplicit@@YAHHPEAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z.c)
 *     xxxCancelCoolSwitch @ 0x1C0125A64 (xxxCancelCoolSwitch.c)
 */

_BOOL8 __fastcall EditionHandleAltTabCancel(
        __int64 a1,
        int a2,
        const struct tagTHREADINFO *a3,
        int a4,
        unsigned __int8 a5,
        int a6,
        char a7)
{
  _BOOL8 result; // rax
  int v11; // ecx

  result = 0;
  if ( gspwndAltTab )
  {
    if ( !a4 )
    {
      if ( a5 > 0x12u || (v11 = 328192, !_bittest(&v11, a5)) )
      {
        xxxCancelCoolSwitch();
        if ( !(unsigned int)IsGpqForegroundAccessibleExplicit(a6, a3, a1, a2) || a5 == 27 && (a7 & 2) == 0 )
          return 1;
      }
    }
  }
  return result;
}
