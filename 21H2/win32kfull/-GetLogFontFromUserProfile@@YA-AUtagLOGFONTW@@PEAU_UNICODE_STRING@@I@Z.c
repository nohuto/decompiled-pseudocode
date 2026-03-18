/*
 * XREFs of ?GetLogFontFromUserProfile@@YA?AUtagLOGFONTW@@PEAU_UNICODE_STRING@@I@Z @ 0x1C00C49DC
 * Callers:
 *     xxxSetNCFonts @ 0x1C00C3874 (xxxSetNCFonts.c)
 *     CreateFontFromUserProfile @ 0x1C00C58D0 (CreateFontFromUserProfile.c)
 * Callees:
 *     ValidateExternalLogFont @ 0x1C00C3544 (ValidateExternalLogFont.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

struct tagLOGFONTW *__fastcall GetLogFontFromUserProfile(
        struct tagLOGFONTW *__return_ptr retstr,
        struct _UNICODE_STRING *a2,
        unsigned int a3)
{
  LONG lfHeight; // r8d
  LONG v7; // ebx
  LONG v9; // eax

  memset(retstr, 0, sizeof(struct tagLOGFONTW));
  retstr->lfCharSet = gSystemCPCharSet;
  FastGetProfileValue(a2, 23LL, a3, 0LL, retstr, 92, 0);
  if ( !retstr->lfFaceName[0] )
  {
    *(_OWORD *)retstr->lfFaceName = xmmword_1C02E8B78;
    *(_QWORD *)&retstr->lfFaceName[8] = 0x67006C00440020LL;
    retstr->lfFaceName[12] = 0;
  }
  lfHeight = retstr->lfHeight;
  if ( retstr->lfHeight )
  {
    if ( lfHeight <= 0 )
      goto LABEL_5;
  }
  else
  {
    retstr->lfHeight = 8;
    lfHeight = 8;
  }
  retstr->lfHeight = (lfHeight * *(unsigned __int16 *)(gpsi + 6998LL) + 36) / -72;
LABEL_5:
  v7 = 700;
  if ( !retstr->lfWeight )
  {
    v9 = 400;
    if ( a3 == 139 )
      v9 = 700;
    retstr->lfWeight = v9;
  }
  *(_WORD *)&retstr->lfOutPrecision = 0;
  retstr->lfQuality = 0;
  if ( !(unsigned int)ValidateExternalLogFont((__int64)retstr) )
  {
    memset(retstr, 0, sizeof(struct tagLOGFONTW));
    retstr->lfCharSet = gSystemCPCharSet;
    *(_OWORD *)retstr->lfFaceName = xmmword_1C02E8B78;
    *(_QWORD *)&retstr->lfFaceName[8] = 0x67006C00440020LL;
    retstr->lfFaceName[12] = 0;
    retstr->lfHeight = 8;
    retstr->lfHeight = (8 * *(unsigned __int16 *)(gpsi + 6998LL) + 36) / -72;
    if ( a3 != 139 )
      v7 = 400;
    retstr->lfWeight = v7;
    *(_WORD *)&retstr->lfOutPrecision = 0;
    retstr->lfQuality = 0;
  }
  return retstr;
}
