void __fastcall DelayZonePalmRejection::ReadSettingsFromRegKey(DelayZonePalmRejection *this)
{
  const wchar_t **v2; // rdi
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-60h] BYREF
  const wchar_t *v4; // [rsp+30h] [rbp-50h] BYREF
  int v5; // [rsp+38h] [rbp-48h]
  int v6; // [rsp+3Ch] [rbp-44h]
  const wchar_t *v7; // [rsp+40h] [rbp-40h]
  int v8; // [rsp+48h] [rbp-38h]
  int v9; // [rsp+4Ch] [rbp-34h]
  const wchar_t *v10; // [rsp+50h] [rbp-30h]
  int v11; // [rsp+58h] [rbp-28h]
  int v12; // [rsp+5Ch] [rbp-24h]
  const wchar_t *v13; // [rsp+60h] [rbp-20h]
  int v14; // [rsp+68h] [rbp-18h]
  int v15; // [rsp+6Ch] [rbp-14h]
  __int64 v16; // [rsp+70h] [rbp-10h] BYREF

  v4 = L"RejectionEnabled";
  v2 = &v4;
  v5 = 1;
  v6 = 1;
  v7 = L"DelayZonePalmRejectionThresholdMS";
  v8 = 175;
  v9 = 175;
  v10 = L"DelayZonePalmRejectionExtensionSizeDips";
  v11 = 250;
  v12 = 250;
  v13 = L"DisableTimeThreshold";
  v14 = 60000;
  v15 = 60000;
  do
  {
    DestinationString = 0LL;
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows\\Input\\DelayZonePalmRejection");
    RIMRegQueryDWord(&DestinationString, *v2, *((unsigned int *)v2 + 2), (char *)v2 + 12);
    v2 += 2;
  }
  while ( v2 != (const wchar_t **)&v16 );
  *((_DWORD *)this + 24) = v6;
  *((_DWORD *)this + 25) = v9;
  *((_DWORD *)this + 26) = v12;
  *((_DWORD *)this + 27) = v15;
}
