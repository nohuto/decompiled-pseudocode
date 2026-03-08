/*
 * XREFs of ?GetLogFontFromUserProfile@@YA?AUtagLOGFONTW@@PEAU_UNICODE_STRING@@I@Z @ 0x1C010EEA8
 * Callers:
 *     CreateFontFromUserProfile @ 0x1C010E764 (CreateFontFromUserProfile.c)
 *     xxxSetNCFonts @ 0x1C010E91C (xxxSetNCFonts.c)
 * Callees:
 *     ValidateExternalLogFont @ 0x1C010EFFC (ValidateExternalLogFont.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

struct tagLOGFONTW *__fastcall GetLogFontFromUserProfile(
        struct tagLOGFONTW *__return_ptr retstr,
        struct _UNICODE_STRING *a2,
        unsigned int a3)
{
  LONG lfHeight; // r8d
  LONG *p_lfWeight; // rbx
  int v8; // esi
  int v10; // eax

  memset_0(retstr, 0, sizeof(struct tagLOGFONTW));
  retstr->lfCharSet = gSystemCPCharSet;
  FastGetProfileValue(a2, 23LL, a3, 0LL, retstr, 92, 0);
  if ( !retstr->lfFaceName[0] )
  {
    *(_OWORD *)retstr->lfFaceName = xmmword_1C0319700;
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
  p_lfWeight = &retstr->lfWeight;
  v8 = 700;
  if ( !retstr->lfWeight )
  {
    v10 = 400;
    if ( a3 == 139 )
      v10 = 700;
    *p_lfWeight = v10;
  }
  *(_WORD *)&retstr->lfOutPrecision = 0;
  retstr->lfQuality = 0;
  if ( !(unsigned int)ValidateExternalLogFont(retstr) )
  {
    memset_0(retstr, 0, sizeof(struct tagLOGFONTW));
    retstr->lfCharSet = gSystemCPCharSet;
    *(_OWORD *)retstr->lfFaceName = xmmword_1C0319700;
    *(_QWORD *)&retstr->lfFaceName[8] = 0x67006C00440020LL;
    retstr->lfFaceName[12] = 0;
    retstr->lfHeight = 8;
    retstr->lfHeight = (8 * *(unsigned __int16 *)(gpsi + 6998LL) + 36) / -72;
    if ( a3 != 139 )
      v8 = 400;
    *p_lfWeight = v8;
    *(_WORD *)&retstr->lfOutPrecision = 0;
    retstr->lfQuality = 0;
  }
  return retstr;
}
