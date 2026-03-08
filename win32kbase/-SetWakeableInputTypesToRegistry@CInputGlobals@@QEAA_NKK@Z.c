/*
 * XREFs of ?SetWakeableInputTypesToRegistry@CInputGlobals@@QEAA_NKK@Z @ 0x1C020B7DC
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C009C980 (xxxSystemParametersInfo.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 *     ApiSetEditionGetPointerDeviceConfigurationKey @ 0x1C009D4F4 (ApiSetEditionGetPointerDeviceConfigurationKey.c)
 */

bool __fastcall CInputGlobals::SetWakeableInputTypesToRegistry(CInputGlobals *this, int a2, int a3)
{
  CInputGlobals *v3; // rdi
  NTSTATUS v6; // ebx
  __int64 v7; // r8
  void *PointerDeviceConfigurationKey; // r14
  unsigned int v9; // ebp
  char *v10; // rsi
  const WCHAR *v11; // rdx
  int v12; // ecx
  int v13; // edx
  int v14; // edx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-38h] BYREF
  CInputGlobals *Data; // [rsp+70h] [rbp+8h] BYREF

  Data = this;
  v3 = gpInputGlobals;
  RIMLockExclusive((__int64)gpInputGlobals);
  v6 = 0;
  PointerDeviceConfigurationKey = (void *)ApiSetEditionGetPointerDeviceConfigurationKey(8u, 131078LL, v7);
  if ( PointerDeviceConfigurationKey )
  {
    v9 = 0;
    v10 = (char *)&unk_1C02CA820;
    do
    {
      if ( (*(_DWORD *)v10 & a2) != 0 )
      {
        v11 = (const WCHAR *)*((_QWORD *)v10 + 1);
        LODWORD(Data) = (*(_DWORD *)v10 & a3) != 0;
        DestinationString = 0LL;
        RtlInitUnicodeString(&DestinationString, v11);
        v6 = ZwSetValueKey(PointerDeviceConfigurationKey, &DestinationString, 0, 4u, &Data, 4u);
        if ( v6 < 0 )
          break;
        v12 = *(_DWORD *)v10;
        v13 = *((_DWORD *)v3 + 25);
        if ( (_DWORD)Data )
          v14 = v12 | v13;
        else
          v14 = ~v12 & v13;
        *((_DWORD *)v3 + 25) = v14;
      }
      ++v9;
      v10 += 16;
    }
    while ( v9 < 5 );
    ZwClose(PointerDeviceConfigurationKey);
  }
  else
  {
    v6 = -1073741811;
  }
  *((_QWORD *)v3 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v3, 0LL);
  KeLeaveCriticalRegion();
  return v6 >= 0;
}
