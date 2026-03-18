/*
 * XREFs of ?ReadSettingsFromRegKey@DelayZonePalmRejection@@AEAAXXZ @ 0x1C0086B34
 * Callers:
 *     ?Initialize@DelayZonePalmRejection@@AEAAXXZ @ 0x1C0083200 (-Initialize@DelayZonePalmRejection@@AEAAXXZ.c)
 * Callees:
 *     RIMRegQueryDWord @ 0x1C00D5034 (RIMRegQueryDWord.c)
 */

void __fastcall DelayZonePalmRejection::ReadSettingsFromRegKey(DelayZonePalmRejection *this)
{
  DelayZonePalmRejection **v2; // rdi
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  if ( (dword_1C0296EA0 & 1) == 0 )
  {
    dword_1C0296B88 = 1;
    dword_1C0296EA0 |= 1u;
    qword_1C0296B80 = (__int64)L"RejectionEnabled";
    qword_1C0296B90 = (__int64)L"DelayZonePalmRejectionThresholdMS";
    dword_1C0296B98 = 175;
    dword_1C0296B9C = 175;
    qword_1C0296BA0 = (__int64)L"DelayZonePalmRejectionExtensionSizeDips";
    dword_1C0296BA8 = 250;
    dword_1C0296BAC = 250;
    qword_1C0296BB0 = (__int64)L"DisableTimeThreshold";
    dword_1C0296BB8 = 60000;
    dword_1C0296BBC = 60000;
    dword_1C0296B8C = 1;
  }
  v2 = (DelayZonePalmRejection **)&qword_1C0296B80;
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
  *((_DWORD *)this + 24) = dword_1C0296B8C;
  *((_DWORD *)this + 25) = dword_1C0296B9C;
  *((_DWORD *)this + 26) = dword_1C0296BAC;
  *((_DWORD *)this + 27) = dword_1C0296BBC;
}
