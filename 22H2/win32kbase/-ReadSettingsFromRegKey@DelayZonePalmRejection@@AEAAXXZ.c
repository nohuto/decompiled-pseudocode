/*
 * XREFs of ?ReadSettingsFromRegKey@DelayZonePalmRejection@@AEAAXXZ @ 0x1C006CF28
 * Callers:
 *     ?Initialize@DelayZonePalmRejection@@AEAAXXZ @ 0x1C006CB90 (-Initialize@DelayZonePalmRejection@@AEAAXXZ.c)
 * Callees:
 *     RIMRegQueryDWord @ 0x1C006D048 (RIMRegQueryDWord.c)
 */

void __fastcall DelayZonePalmRejection::ReadSettingsFromRegKey(DelayZonePalmRejection *this)
{
  DelayZonePalmRejection **v2; // rdi
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  if ( (dword_1C02510CC & 1) == 0 )
  {
    dword_1C0250DD8 = 1;
    dword_1C02510CC |= 1u;
    qword_1C0250DD0 = (__int64)L"RejectionEnabled";
    qword_1C0250DE0 = (__int64)L"DelayZonePalmRejectionThresholdMS";
    dword_1C0250DE8 = 175;
    dword_1C0250DEC = 175;
    qword_1C0250DF0 = (__int64)L"DelayZonePalmRejectionExtensionSizeDips";
    dword_1C0250DF8 = 250;
    dword_1C0250DFC = 250;
    qword_1C0250E00 = (__int64)L"DisableTimeThreshold";
    dword_1C0250E08 = 60000;
    dword_1C0250E0C = 60000;
    dword_1C0250DDC = 1;
  }
  v2 = (DelayZonePalmRejection **)&qword_1C0250DD0;
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
  *((_DWORD *)this + 24) = dword_1C0250DDC;
  *((_DWORD *)this + 25) = dword_1C0250DEC;
  *((_DWORD *)this + 26) = dword_1C0250DFC;
  *((_DWORD *)this + 27) = dword_1C0250E0C;
}
