/*
 * XREFs of ?SetWakeableInputTypesToRegistry@CInputGlobals@@QEAA_NKK@Z @ 0x1C00DCA0C
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C0165BD0 (xxxSystemParametersInfo.c)
 * Callees:
 *     ApiSetEditionGetPointerDeviceConfigurationKey @ 0x1C00839C4 (ApiSetEditionGetPointerDeviceConfigurationKey.c)
 */

bool __fastcall CInputGlobals::SetWakeableInputTypesToRegistry(CInputGlobals *this, int a2, __int64 a3)
{
  CInputGlobals *v3; // r14
  NTSTATUS v5; // ebx
  int v6; // r12d
  void *PointerDeviceConfigurationKey; // rbp
  unsigned int v8; // esi
  char *v9; // rdi
  const WCHAR *v10; // rdx
  int v11; // ecx
  int v12; // eax
  int v13; // ecx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-38h] BYREF
  CInputGlobals *Data; // [rsp+70h] [rbp+8h] BYREF

  Data = this;
  v3 = gpInputGlobals;
  v5 = 0;
  v6 = a3;
  PointerDeviceConfigurationKey = (void *)ApiSetEditionGetPointerDeviceConfigurationKey(8u, 131078LL, a3);
  if ( PointerDeviceConfigurationKey )
  {
    v8 = 0;
    v9 = (char *)&unk_1C028DC80;
    do
    {
      if ( (*(_DWORD *)v9 & a2) != 0 )
      {
        v10 = (const WCHAR *)*((_QWORD *)v9 + 1);
        LODWORD(Data) = (*(_DWORD *)v9 & v6) != 0;
        DestinationString = 0LL;
        RtlInitUnicodeString(&DestinationString, v10);
        v5 = ZwSetValueKey(PointerDeviceConfigurationKey, &DestinationString, 0, 4u, &Data, 4u);
        if ( v5 < 0 )
          break;
        v11 = *(_DWORD *)v9;
        v12 = *((_DWORD *)v3 + 25);
        if ( (_DWORD)Data )
          v13 = v12 | v11;
        else
          v13 = v12 & ~v11;
        *((_DWORD *)v3 + 25) = v13;
      }
      ++v8;
      v9 += 16;
    }
    while ( v8 < 5 );
    ZwClose(PointerDeviceConfigurationKey);
  }
  else
  {
    v5 = -1073741811;
  }
  return v5 >= 0;
}
