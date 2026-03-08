/*
 * XREFs of PiDevCfgLogDeviceMigrated @ 0x14095B958
 * Callers:
 *     PiDevCfgMigrateDevice @ 0x1408758B8 (PiDevCfgMigrateDevice.c)
 * Callees:
 *     McTemplateK0zzjzitd_EtwWriteTransfer @ 0x14055F770 (McTemplateK0zzjzitd_EtwWriteTransfer.c)
 */

char __fastcall PiDevCfgLogDeviceMigrated(__int64 a1, __int64 a2, int a3)
{
  char result; // al
  const wchar_t *v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rax

  result = byte_140C0E10A;
  if ( (byte_140C0E10A & 8) != 0 && (byte_140C0E10A & 0x20) != 0 && (byte_140C0E10A & 0x10) != 0 )
  {
    v6 = (const wchar_t *)&dword_140A7D864;
    v7 = a2 + 80;
    if ( a3 < 0 )
    {
      v8 = *(_QWORD *)(a2 + 152);
      if ( (*(_DWORD *)(a2 + 16) & 3) != 0 )
      {
        if ( v8 )
          v6 = *(const wchar_t **)(a2 + 152);
        return McTemplateK0zzjzitd_EtwWriteTransfer(
                 v7,
                 (const EVENT_DESCRIPTOR *)KMPnPEvt_DeviceMigrate_Warning,
                 (__int64)v6,
                 *(const wchar_t **)(a1 + 8),
                 *(const wchar_t **)(a2 + 32),
                 v7,
                 v6,
                 *(_QWORD *)(a2 + 184),
                 *(_DWORD *)(a2 + 176),
                 a3);
      }
      else
      {
        if ( v8 )
          v6 = *(const wchar_t **)(a2 + 152);
        return McTemplateK0zzjzitd_EtwWriteTransfer(
                 v7,
                 (const EVENT_DESCRIPTOR *)KMPnPEvt_DeviceMigrate_Failure,
                 (__int64)v6,
                 *(const wchar_t **)(a1 + 8),
                 *(const wchar_t **)(a2 + 32),
                 v7,
                 v6,
                 *(_QWORD *)(a2 + 184),
                 *(_DWORD *)(a2 + 176),
                 a3);
      }
    }
    else
    {
      if ( *(_QWORD *)(a2 + 152) )
        v6 = *(const wchar_t **)(a2 + 152);
      return McTemplateK0zzjzitd_EtwWriteTransfer(
               v7,
               (const EVENT_DESCRIPTOR *)KMPnPEvt_DeviceMigrate_Success,
               (__int64)v6,
               *(const wchar_t **)(a1 + 8),
               *(const wchar_t **)(a2 + 32),
               v7,
               v6,
               *(_QWORD *)(a2 + 184),
               *(_DWORD *)(a2 + 176),
               a3);
    }
  }
  return result;
}
