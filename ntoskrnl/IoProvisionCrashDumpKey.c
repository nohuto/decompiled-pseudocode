/*
 * XREFs of IoProvisionCrashDumpKey @ 0x14054E504
 * Callers:
 *     NtSetSystemInformation @ 0x1407E1F30 (NtSetSystemInformation.c)
 * Callees:
 *     SecureDump_GetSecureDumpSettings @ 0x140392344 (SecureDump_GetSecureDumpSettings.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     SecureDump_ReInitialize @ 0x14055C0B8 (SecureDump_ReInitialize.c)
 */

__int64 IoProvisionCrashDumpKey()
{
  __int64 result; // rax
  __int64 v1; // [rsp+20h] [rbp-40h] BYREF
  int v2; // [rsp+28h] [rbp-38h]
  _QWORD v3[3]; // [rsp+30h] [rbp-30h] BYREF
  int v4; // [rsp+48h] [rbp-18h]
  int v5; // [rsp+4Ch] [rbp-14h]
  char v6; // [rsp+50h] [rbp-10h]
  __int16 v7; // [rsp+51h] [rbp-Fh]
  char v8; // [rsp+53h] [rbp-Dh]

  v1 = 0LL;
  v2 = 0;
  if ( ForceDumpDisabled || !AllowCrashDump )
    return 3221225659LL;
  result = SecureDump_ReInitialize();
  if ( (int)result >= 0 )
  {
    result = SecureDump_GetSecureDumpSettings((__int64)&v1);
    if ( (int)result >= 0 )
    {
      if ( (_BYTE)v1 )
      {
        if ( qword_140C6A908 )
        {
          v4 = HIDWORD(v1);
          v5 = v2;
          v6 = BYTE1(v1);
          v3[1] = &SecureDump_Get_SecureDumpHeader;
          v3[2] = SecureDump_Encrypt_DmpData;
          v3[0] = 40LL;
          v7 = 0;
          v8 = 0;
          return qword_140C6A908(v3);
        }
        else
        {
          return 3221225473LL;
        }
      }
    }
  }
  return result;
}
