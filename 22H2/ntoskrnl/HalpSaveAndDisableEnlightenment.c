/*
 * XREFs of HalpSaveAndDisableEnlightenment @ 0x1404C3090
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptModel @ 0x14037ADC4 (HalpInterruptModel.c)
 *     HalpTimerUpdateApiConsumers @ 0x1404D55F8 (HalpTimerUpdateApiConsumers.c)
 */

__int64 HalpSaveAndDisableEnlightenment()
{
  __int64 result; // rax

  result = HalpInterruptModel();
  if ( (_DWORD)result == 1 )
  {
    dword_140C4A3FC = dword_140C4A1FC;
    qword_140C4A400 = (__int64)qword_140C4A200;
    dword_140C4A3E4 = dword_140C4A1E4;
    qword_140C4A410 = qword_140C4A210;
    qword_140C4A418 = qword_140C4A218;
    qword_140C4A420 = qword_140C4A220;
    qword_140C4A428 = qword_140C4A228;
    qword_140C4A430 = qword_140C4A230;
    qword_140C4A438 = qword_140C4A238;
    qword_140C4A450 = (__int64)qword_140C4A250;
    qword_140C4A478 = (__int64)qword_140C4A278;
    qword_140C4A480 = qword_140C4A280;
    qword_140C4A488 = qword_140C4A288;
    qword_140C4A490 = qword_140C4A290;
    qword_140C4A498 = qword_140C4A298;
    qword_140C4A4A0 = qword_140C4A2A0;
    HalpEnlightenmentHbSaved = HalpEnlightenment;
    qword_140C4A550 = (__int64)qword_140C4A350;
    qword_140C4A558 = qword_140C4A358;
    qword_140C4A4C8 = (__int64)qword_140C4A2C8;
    qword_140C4A4D0 = qword_140C4A2D0;
    xmmword_140C4A3E8 = xmmword_140C4A1E8;
    qword_140C4A440 = qword_140C4A240;
    qword_140C4A448 = qword_140C4A248;
    qword_140C4A458 = (__int64)qword_140C4A258;
    qword_140C4A460 = (__int64)qword_140C4A260;
    qword_140C4A468 = (__int64)qword_140C4A268;
    qword_140C4A470 = qword_140C4A270;
    qword_140C4A4B0 = (__int64)qword_140C4A2B0;
    qword_140C4A4B8 = (__int64)qword_140C4A2B8;
    qword_140C4A4C0 = qword_140C4A2C0;
    qword_140C4A4D8 = qword_140C4A2D8;
    qword_140C4A4E0 = qword_140C4A2E0;
    qword_140C4A4E8 = qword_140C4A2E8;
    qword_140C4A4F0 = qword_140C4A2F0;
    qword_140C4A4F8 = qword_140C4A2F8;
    qword_140C4A500 = qword_140C4A300;
    qword_140C4A508 = qword_140C4A308;
    qword_140C4A510 = qword_140C4A310;
    qword_140C4A518 = qword_140C4A318;
    qword_140C4A520 = qword_140C4A320;
    qword_140C4A528 = qword_140C4A328;
    qword_140C4A530 = qword_140C4A330;
    qword_140C4A538 = qword_140C4A338;
    qword_140C4A540 = qword_140C4A340;
    qword_140C4A548 = qword_140C4A348;
    HalpEnlightenment = 0;
    dword_140C4A1FC = -1;
    qword_140C4A200 = 0LL;
    dword_140C4A1E4 = 0;
    qword_140C4A210 = 0LL;
    qword_140C4A218 = 0LL;
    qword_140C4A220 = 0LL;
    qword_140C4A228 = 0LL;
    qword_140C4A230 = 0LL;
    qword_140C4A238 = 0LL;
    qword_140C4A250 = 0LL;
    qword_140C4A278 = 0LL;
    qword_140C4A280 = 0LL;
    qword_140C4A288 = 0LL;
    qword_140C4A290 = 0LL;
    qword_140C4A298 = 0LL;
    qword_140C4A2A0 = 0LL;
    qword_140C4A350 = 0LL;
    qword_140C4A2C8 = 0LL;
    qword_140C4A2D0 = 0LL;
    xmmword_140C4A1E8 = 0uLL;
    qword_140C4A240 = 0LL;
    qword_140C4A248 = 0LL;
    qword_140C4A258 = 0LL;
    qword_140C4A260 = 0LL;
    qword_140C4A268 = 0LL;
    qword_140C4A270 = 0LL;
    qword_140C4A2B0 = 0LL;
    qword_140C4A2B8 = 0LL;
    qword_140C4A2C0 = 0LL;
    qword_140C4A2D8 = 0LL;
    qword_140C4A2E0 = 0LL;
    qword_140C4A2E8 = 0LL;
    qword_140C4A2F0 = 0LL;
    qword_140C4A2F8 = 0LL;
    qword_140C4A300 = 0LL;
    qword_140C4A308 = 0LL;
    qword_140C4A310 = 0LL;
    qword_140C4A318 = 0LL;
    qword_140C4A320 = 0LL;
    qword_140C4A328 = 0LL;
    qword_140C4A330 = 0LL;
    qword_140C4A338 = 0LL;
    qword_140C4A340 = 0LL;
    qword_140C4A348 = 0LL;
    return HalpTimerUpdateApiConsumers();
  }
  return result;
}
