/*
 * XREFs of HalpSaveAndDisableEnlightenment @ 0x14050A1D0
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptModel @ 0x14028EADC (HalpInterruptModel.c)
 *     HalpTimerUpdateApiConsumers @ 0x14051D4B4 (HalpTimerUpdateApiConsumers.c)
 */

__int64 HalpSaveAndDisableEnlightenment()
{
  __int64 result; // rax
  char v1; // dl

  result = HalpInterruptModel();
  if ( (_DWORD)result == 1 )
  {
    dword_140C61E9C = dword_140C6211C;
    qword_140C61EA0 = (__int64)qword_140C62120;
    dword_140C61E84 = dword_140C62104;
    qword_140C61EB0 = qword_140C62130;
    qword_140C61EB8 = qword_140C62138;
    qword_140C61EC0 = qword_140C62140;
    qword_140C61EC8 = qword_140C62148;
    qword_140C61ED0 = qword_140C62150;
    qword_140C61ED8 = qword_140C62158;
    qword_140C61EF0 = (__int64)qword_140C62170;
    qword_140C61F18 = (__int64)qword_140C62198;
    qword_140C61F20 = qword_140C621A0;
    qword_140C61F28 = qword_140C621A8;
    qword_140C61F30 = qword_140C621B0;
    qword_140C61F38 = qword_140C621B8;
    qword_140C61F40 = qword_140C621C0;
    HalpEnlightenmentHbSaved = HalpEnlightenment;
    qword_140C62008 = (__int64)qword_140C62288;
    qword_140C62010 = qword_140C62290;
    qword_140C61F80 = qword_140C62200;
    qword_140C61F68 = (__int64)qword_140C621E8;
    qword_140C61F70 = qword_140C621F0;
    xmmword_140C61E88 = xmmword_140C62108;
    qword_140C61EE0 = qword_140C62160;
    qword_140C61EE8 = qword_140C62168;
    qword_140C61EF8 = (__int64)qword_140C62178;
    qword_140C61F00 = (__int64)qword_140C62180;
    qword_140C61F08 = (__int64)qword_140C62188;
    qword_140C61F10 = qword_140C62190;
    qword_140C61F50 = (__int64)qword_140C621D0;
    qword_140C61F58 = (__int64)qword_140C621D8;
    qword_140C61F60 = qword_140C621E0;
    qword_140C61F78 = qword_140C621F8;
    qword_140C61F88 = qword_140C62208;
    qword_140C61F90 = qword_140C62210;
    qword_140C61F98 = qword_140C62218;
    qword_140C61FA0 = qword_140C62220;
    qword_140C61FA8 = qword_140C62228;
    qword_140C61FB0 = qword_140C62230;
    qword_140C61FB8 = qword_140C62238;
    qword_140C61FC0 = qword_140C62240;
    qword_140C61FC8 = qword_140C62248;
    qword_140C61FD0 = qword_140C62250;
    qword_140C61FD8 = qword_140C62258;
    qword_140C61FE0 = qword_140C62260;
    qword_140C61FE8 = qword_140C62268;
    qword_140C61FF0 = qword_140C62270;
    qword_140C61FF8 = qword_140C62278;
    qword_140C62000 = qword_140C62280;
    HalpEnlightenment = 0;
    dword_140C6211C = -1;
    qword_140C62120 = 0LL;
    dword_140C62104 = 0;
    qword_140C62130 = 0LL;
    qword_140C62138 = 0LL;
    qword_140C62140 = 0LL;
    qword_140C62148 = 0LL;
    qword_140C62150 = 0LL;
    qword_140C62158 = 0LL;
    qword_140C62170 = 0LL;
    qword_140C62198 = 0LL;
    qword_140C621A0 = 0LL;
    qword_140C621A8 = 0LL;
    qword_140C621B0 = 0LL;
    qword_140C621B8 = 0LL;
    qword_140C621C0 = 0LL;
    qword_140C62288 = 0LL;
    qword_140C62200 = 0LL;
    if ( !v1 )
      qword_140C621E8 = 0LL;
    qword_140C621F0 = 0LL;
    xmmword_140C62108 = 0uLL;
    qword_140C62160 = 0LL;
    qword_140C62168 = 0LL;
    qword_140C62178 = 0LL;
    qword_140C62180 = 0LL;
    qword_140C62188 = 0LL;
    qword_140C62190 = 0LL;
    qword_140C621D0 = 0LL;
    qword_140C621D8 = 0LL;
    qword_140C621E0 = 0LL;
    qword_140C621F8 = 0LL;
    qword_140C62208 = 0LL;
    qword_140C62210 = 0LL;
    qword_140C62218 = 0LL;
    qword_140C62220 = 0LL;
    qword_140C62228 = 0LL;
    qword_140C62230 = 0LL;
    qword_140C62238 = 0LL;
    qword_140C62240 = 0LL;
    qword_140C62248 = 0LL;
    qword_140C62250 = 0LL;
    qword_140C62258 = 0LL;
    qword_140C62260 = 0LL;
    qword_140C62268 = 0LL;
    qword_140C62270 = 0LL;
    qword_140C62278 = 0LL;
    qword_140C62280 = 0LL;
    return HalpTimerUpdateApiConsumers();
  }
  return result;
}
