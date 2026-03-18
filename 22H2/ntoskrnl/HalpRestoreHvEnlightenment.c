/*
 * XREFs of HalpRestoreHvEnlightenment @ 0x14050BF10
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerUpdateApiConsumers @ 0x14051F9E4 (HalpTimerUpdateApiConsumers.c)
 */

__int64 HalpRestoreHvEnlightenment()
{
  HalpEnlightenment = HalpEnlightenmentHbSaved;
  *(&HalpEnlightenment + 1) = dword_140C622E4;
  *(&HalpEnlightenment + 7) = dword_140C622FC;
  *((_QWORD *)&HalpEnlightenment + 4) = qword_140C62300;
  *((_QWORD *)&HalpEnlightenment + 6) = qword_140C62310;
  *((_QWORD *)&HalpEnlightenment + 7) = qword_140C62318;
  *((_QWORD *)&HalpEnlightenment + 8) = qword_140C62320;
  *((_QWORD *)&HalpEnlightenment + 9) = qword_140C62328;
  *((_QWORD *)&HalpEnlightenment + 10) = qword_140C62330;
  *((_QWORD *)&HalpEnlightenment + 11) = qword_140C62338;
  *((_QWORD *)&HalpEnlightenment + 14) = qword_140C62350;
  *((_QWORD *)&HalpEnlightenment + 19) = qword_140C62378;
  *((_QWORD *)&HalpEnlightenment + 20) = qword_140C62380;
  *((_QWORD *)&HalpEnlightenment + 21) = qword_140C62388;
  *((_QWORD *)&HalpEnlightenment + 22) = qword_140C62390;
  *((_QWORD *)&HalpEnlightenment + 23) = qword_140C62398;
  *((_QWORD *)&HalpEnlightenment + 24) = qword_140C623A0;
  *((_QWORD *)&HalpEnlightenment + 49) = qword_140C62468;
  *((_QWORD *)&HalpEnlightenment + 50) = qword_140C62470;
  *((_QWORD *)&HalpEnlightenment + 32) = qword_140C623E0;
  *((_QWORD *)&HalpEnlightenment + 29) = qword_140C623C8;
  *((_QWORD *)&HalpEnlightenment + 30) = qword_140C623D0;
  *((_QWORD *)&HalpEnlightenment + 1) = qword_140C622E8;
  *((_QWORD *)&HalpEnlightenment + 2) = qword_140C622F0;
  *((_QWORD *)&HalpEnlightenment + 12) = qword_140C62340;
  *((_QWORD *)&HalpEnlightenment + 13) = qword_140C62348;
  *((_QWORD *)&HalpEnlightenment + 15) = qword_140C62358;
  *((_QWORD *)&HalpEnlightenment + 16) = qword_140C62360;
  *((_QWORD *)&HalpEnlightenment + 17) = qword_140C62368;
  *((_QWORD *)&HalpEnlightenment + 18) = qword_140C62370;
  *((_QWORD *)&HalpEnlightenment + 26) = qword_140C623B0;
  *((_QWORD *)&HalpEnlightenment + 27) = qword_140C623B8;
  *((_QWORD *)&HalpEnlightenment + 28) = qword_140C623C0;
  *((_QWORD *)&HalpEnlightenment + 31) = qword_140C623D8;
  *((_QWORD *)&HalpEnlightenment + 33) = qword_140C623E8;
  *((_QWORD *)&HalpEnlightenment + 34) = qword_140C623F0;
  *((_QWORD *)&HalpEnlightenment + 35) = qword_140C623F8;
  *((_QWORD *)&HalpEnlightenment + 36) = qword_140C62400;
  *((_QWORD *)&HalpEnlightenment + 37) = qword_140C62408;
  *((_QWORD *)&HalpEnlightenment + 38) = qword_140C62410;
  *((_QWORD *)&HalpEnlightenment + 39) = qword_140C62418;
  *((_QWORD *)&HalpEnlightenment + 40) = qword_140C62420;
  *((_QWORD *)&HalpEnlightenment + 41) = qword_140C62428;
  *((_QWORD *)&HalpEnlightenment + 42) = qword_140C62430;
  *((_QWORD *)&HalpEnlightenment + 43) = qword_140C62438;
  *((_QWORD *)&HalpEnlightenment + 44) = qword_140C62440;
  *((_QWORD *)&HalpEnlightenment + 45) = qword_140C62448;
  *((_QWORD *)&HalpEnlightenment + 46) = qword_140C62450;
  *((_QWORD *)&HalpEnlightenment + 47) = qword_140C62458;
  *((_QWORD *)&HalpEnlightenment + 48) = qword_140C62460;
  return HalpTimerUpdateApiConsumers();
}
