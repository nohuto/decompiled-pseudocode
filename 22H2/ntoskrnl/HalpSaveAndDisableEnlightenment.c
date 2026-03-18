/*
 * XREFs of HalpSaveAndDisableEnlightenment @ 0x14050C2B0
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptModel @ 0x14031F8FC (HalpInterruptModel.c)
 *     HalpTimerUpdateApiConsumers @ 0x14051F9E4 (HalpTimerUpdateApiConsumers.c)
 */

__int64 HalpSaveAndDisableEnlightenment()
{
  __int64 result; // rax
  char v1; // dl

  result = HalpInterruptModel();
  if ( (_DWORD)result == 1 )
  {
    dword_140C622FC = dword_140C6257C;
    qword_140C62300 = (__int64)qword_140C62580;
    dword_140C622E4 = dword_140C62564;
    qword_140C62310 = qword_140C62590;
    qword_140C62318 = qword_140C62598;
    qword_140C62320 = qword_140C625A0;
    qword_140C62328 = qword_140C625A8;
    qword_140C62330 = qword_140C625B0;
    qword_140C62338 = qword_140C625B8;
    qword_140C62350 = (__int64)qword_140C625D0;
    qword_140C62378 = (__int64)qword_140C625F8;
    qword_140C62380 = qword_140C62600;
    qword_140C62388 = qword_140C62608;
    qword_140C62390 = qword_140C62610;
    qword_140C62398 = qword_140C62618;
    qword_140C623A0 = qword_140C62620;
    HalpEnlightenmentHbSaved = HalpEnlightenment;
    qword_140C62468 = (__int64)qword_140C626E8;
    qword_140C62470 = qword_140C626F0;
    qword_140C623E0 = qword_140C62660;
    qword_140C623C8 = (__int64)qword_140C62648;
    qword_140C623D0 = qword_140C62650;
    xmmword_140C622E8 = xmmword_140C62568;
    qword_140C62340 = qword_140C625C0;
    qword_140C62348 = qword_140C625C8;
    qword_140C62358 = (__int64)qword_140C625D8;
    qword_140C62360 = (__int64)qword_140C625E0;
    qword_140C62368 = (__int64)qword_140C625E8;
    qword_140C62370 = qword_140C625F0;
    qword_140C623B0 = (__int64)qword_140C62630;
    qword_140C623B8 = (__int64)qword_140C62638;
    qword_140C623C0 = qword_140C62640;
    qword_140C623D8 = qword_140C62658;
    qword_140C623E8 = qword_140C62668;
    qword_140C623F0 = qword_140C62670;
    qword_140C623F8 = qword_140C62678;
    qword_140C62400 = qword_140C62680;
    qword_140C62408 = qword_140C62688;
    qword_140C62410 = qword_140C62690;
    qword_140C62418 = qword_140C62698;
    qword_140C62420 = qword_140C626A0;
    qword_140C62428 = qword_140C626A8;
    qword_140C62430 = qword_140C626B0;
    qword_140C62438 = qword_140C626B8;
    qword_140C62440 = qword_140C626C0;
    qword_140C62448 = qword_140C626C8;
    qword_140C62450 = qword_140C626D0;
    qword_140C62458 = qword_140C626D8;
    qword_140C62460 = qword_140C626E0;
    HalpEnlightenment = 0;
    dword_140C6257C = -1;
    qword_140C62580 = 0LL;
    dword_140C62564 = 0;
    qword_140C62590 = 0LL;
    qword_140C62598 = 0LL;
    qword_140C625A0 = 0LL;
    qword_140C625A8 = 0LL;
    qword_140C625B0 = 0LL;
    qword_140C625B8 = 0LL;
    qword_140C625D0 = 0LL;
    qword_140C625F8 = 0LL;
    qword_140C62600 = 0LL;
    qword_140C62608 = 0LL;
    qword_140C62610 = 0LL;
    qword_140C62618 = 0LL;
    qword_140C62620 = 0LL;
    qword_140C626E8 = 0LL;
    qword_140C62660 = 0LL;
    if ( !v1 )
      qword_140C62648 = 0LL;
    qword_140C62650 = 0LL;
    xmmword_140C62568 = 0uLL;
    qword_140C625C0 = 0LL;
    qword_140C625C8 = 0LL;
    qword_140C625D8 = 0LL;
    qword_140C625E0 = 0LL;
    qword_140C625E8 = 0LL;
    qword_140C625F0 = 0LL;
    qword_140C62630 = 0LL;
    qword_140C62638 = 0LL;
    qword_140C62640 = 0LL;
    qword_140C62658 = 0LL;
    qword_140C62668 = 0LL;
    qword_140C62670 = 0LL;
    qword_140C62678 = 0LL;
    qword_140C62680 = 0LL;
    qword_140C62688 = 0LL;
    qword_140C62690 = 0LL;
    qword_140C62698 = 0LL;
    qword_140C626A0 = 0LL;
    qword_140C626A8 = 0LL;
    qword_140C626B0 = 0LL;
    qword_140C626B8 = 0LL;
    qword_140C626C0 = 0LL;
    qword_140C626C8 = 0LL;
    qword_140C626D0 = 0LL;
    qword_140C626D8 = 0LL;
    qword_140C626E0 = 0LL;
    return HalpTimerUpdateApiConsumers();
  }
  return result;
}
