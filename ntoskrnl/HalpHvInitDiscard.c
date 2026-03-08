/*
 * XREFs of HalpHvInitDiscard @ 0x140B6A9F0
 * Callers:
 *     HalpHvInitSystem @ 0x140A8E3B0 (HalpHvInitSystem.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 HalpHvInitDiscard()
{
  _QWORD v1[74]; // [rsp+20h] [rbp-E0h] BYREF

  memset(v1, 0, 0x248uLL);
  if ( qword_140C01B20 )
  {
    qword_140C01B20(v1);
    if ( !LODWORD(v1[3]) && HIDWORD(v1[3]) && ((HIDWORD(v1[3]) + 1) & HIDWORD(v1[3])) == 0 )
    {
      HalpEnlightenment = v1[0];
      dword_140C6211C = HIDWORD(v1[3]);
      qword_140C62120 = (__int64 (__fastcall *)(_QWORD))v1[4];
      qword_140C62128 = (__int64 (__fastcall *)(_QWORD))v1[5];
      qword_140C62148 = v1[9];
      qword_140C62150 = v1[10];
      qword_140C62158 = v1[11];
      qword_140C62130 = v1[6];
      qword_140C62138 = v1[7];
      qword_140C62140 = v1[8];
      qword_140C62170 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v1[14];
      qword_140C62198 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v1[19];
      qword_140C621A0 = (__int64 (__fastcall *)(_QWORD))v1[20];
      qword_140C621A8 = (__int64 (*)(void))v1[21];
      qword_140C621B0 = v1[22];
      qword_140C621B8 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v1[23];
      qword_140C621C0 = v1[24];
      qword_140C621C8 = (__int64 (__fastcall *)(_QWORD, _QWORD))v1[25];
      qword_140C62288 = (__int64 (__fastcall *)(_QWORD))v1[49];
      qword_140C62290 = v1[50];
      qword_140C621D0 = (__int64 (*)(void))v1[26];
      qword_140C621D8 = (__int64 (__fastcall *)(_QWORD))v1[27];
      qword_140C621E0 = (__int64 (__fastcall *)(_QWORD, _QWORD))v1[28];
      qword_140C62200 = v1[32];
      qword_140C621E8 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, _QWORD))v1[29];
      qword_140C621F0 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v1[30];
      xmmword_140C62108 = *(_OWORD *)&v1[1];
      qword_140C62160 = v1[12];
      qword_140C62168 = v1[13];
      qword_140C62178 = (__int64 (*)(void))v1[15];
      qword_140C62180 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v1[16];
      qword_140C62188 = (__int64 (__fastcall *)(_QWORD))v1[17];
      qword_140C62190 = v1[18];
      qword_140C621F8 = v1[31];
      qword_140C62208 = v1[33];
      qword_140C62210 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v1[34];
      qword_140C62218 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))v1[35];
      qword_140C62220 = v1[36];
      qword_140C62228 = v1[37];
      qword_140C62230 = v1[38];
      qword_140C62238 = v1[39];
      qword_140C62240 = v1[40];
      qword_140C62248 = v1[41];
      qword_140C62250 = v1[42];
      qword_140C62258 = v1[43];
      qword_140C62260 = (__int64 (__fastcall *)(_QWORD, _QWORD))v1[44];
      qword_140C62268 = v1[45];
      qword_140C62270 = v1[46];
      qword_140C62278 = v1[47];
      qword_140C62280 = v1[48];
      qword_140C62298 = v1[51];
      qword_140C622A0 = v1[52];
      qword_140C622A8 = v1[53];
      qword_140C622B0 = v1[54];
      qword_140C622B8 = v1[55];
      qword_140C622C0 = v1[56];
      qword_140C622F0 = v1[62];
      qword_140C62300 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v1[64];
      qword_140C622C8 = v1[57];
      qword_140C622D0 = v1[58];
      qword_140C622D8 = v1[59];
      qword_140C622E0 = v1[60];
      qword_140C622E8 = v1[61];
      qword_140C62308 = v1[65];
      qword_140C62318 = v1[67];
      qword_140C62310 = v1[66];
      qword_140C62320 = v1[68];
      qword_140C62328 = v1[69];
      qword_140C62330 = v1[70];
      qword_140C62338 = v1[71];
      qword_140C62340 = v1[72];
    }
  }
  if ( HalpHvCpuManager )
  {
    if ( qword_140C62130 )
      HalpHvSleepEnlightenedCpuManager = 1;
    if ( qword_140C62170 )
      HalpHvWheaEnlightenedCpuManager = 1;
  }
  off_140C01AA8[0] = (__int64 (__fastcall *)())HalpPrepareForBugcheck;
  off_140C01BB0[0] = HalpSaveAndDisableEnlightenment;
  off_140C01BB8[0] = HalpRestoreHvEnlightenment;
  return 0LL;
}
