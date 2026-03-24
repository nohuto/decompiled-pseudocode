/*
 * XREFs of ?ReadSettingsFromRegKey@DelayZonePalmRejection@@AEAAXXZ @ 0x1C006C478
 * Callers:
 *     ?Initialize@DelayZonePalmRejection@@AEAAXXZ @ 0x1C006C0E0 (-Initialize@DelayZonePalmRejection@@AEAAXXZ.c)
 * Callees:
 *     RIMRegQueryDWord @ 0x1C006C598 (RIMRegQueryDWord.c)
 */

void __fastcall DelayZonePalmRejection::ReadSettingsFromRegKey(DelayZonePalmRejection *this)
{
  DelayZonePalmRejection **v2; // rdi
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  if ( (dword_1C025209C & 1) == 0 )
  {
    dword_1C0251DB8 = 1;
    dword_1C025209C |= 1u;
    qword_1C0251DB0 = (__int64)L"RejectionEnabled";
    qword_1C0251DC0 = (__int64)L"DelayZonePalmRejectionThresholdMS";
    dword_1C0251DC8 = 175;
    dword_1C0251DCC = 175;
    qword_1C0251DD0 = (__int64)L"DelayZonePalmRejectionExtensionSizeDips";
    dword_1C0251DD8 = 250;
    dword_1C0251DDC = 250;
    qword_1C0251DE0 = (__int64)L"DisableTimeThreshold";
    dword_1C0251DE8 = 60000;
    dword_1C0251DEC = 60000;
    dword_1C0251DBC = 1;
  }
  v2 = (DelayZonePalmRejection **)&qword_1C0251DB0;
  do
  {
    DestinationString = 0LL;
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows\\Input\\DelayZonePalmRejection");
    RIMRegQueryDWord(&DestinationString, *v2, *((unsigned int *)v2 + 2), (char *)v2 + 12);
    v2 += 2;
  }
  while ( v2 != &DelayZonePalmRejection::s_instance );
  *((_DWORD *)this + 24) = dword_1C0251DBC;
  *((_DWORD *)this + 25) = dword_1C0251DCC;
  *((_DWORD *)this + 26) = dword_1C0251DDC;
  *((_DWORD *)this + 27) = dword_1C0251DEC;
}
