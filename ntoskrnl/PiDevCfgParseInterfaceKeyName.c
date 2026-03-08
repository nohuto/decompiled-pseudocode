/*
 * XREFs of PiDevCfgParseInterfaceKeyName @ 0x14055FC84
 * Callers:
 *     PiDevCfgConfigureDeviceInterfaces @ 0x140876D34 (PiDevCfgConfigureDeviceInterfaces.c)
 * Callees:
 *     RtlGUIDFromString @ 0x1406D1AA0 (RtlGUIDFromString.c)
 */

bool __fastcall PiDevCfgParseInterfaceKeyName(__int64 a1, GUID *a2, __int64 *a3)
{
  unsigned __int16 v5; // ax
  NTSTATUS v6; // eax
  __int64 v7; // r8
  __int16 v8; // cx
  UNICODE_STRING v10; // [rsp+20h] [rbp-18h] BYREF

  *(_DWORD *)(&v10.MaximumLength + 1) = 0;
  if ( *(_WORD *)a1 < 0x4Cu )
    goto LABEL_7;
  v10.Buffer = *(wchar_t **)(a1 + 8);
  v5 = *(_WORD *)(a1 + 2);
  v10.Length = 76;
  v10.MaximumLength = v5;
  v6 = RtlGUIDFromString(&v10, a2);
  if ( v6 >= 0 )
  {
    v7 = *(_QWORD *)(a1 + 8);
    v8 = *(_WORD *)(v7 + 76);
    if ( v8 == 35 )
    {
      *a3 = (v7 + 78) & -(__int64)(*(_WORD *)(v7 + 78) != 0);
      return v6 >= 0;
    }
    if ( !v8 )
    {
      *a3 = 0LL;
      return v6 >= 0;
    }
LABEL_7:
    v6 = -1073741823;
  }
  return v6 >= 0;
}
