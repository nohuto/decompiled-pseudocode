/*
 * XREFs of IvtFlushDeviceTbOnly @ 0x14052A180
 * Callers:
 *     <none>
 * Callees:
 *     IvtIommuWaitCommand @ 0x1402F4874 (IvtIommuWaitCommand.c)
 *     IvtIommuSendCommand @ 0x1402F49A4 (IvtIommuSendCommand.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

__int64 __fastcall IvtFlushDeviceTbOnly(__int64 a1, unsigned __int16 a2, char a3)
{
  _QWORD v5[2]; // [rsp+20h] [rbp-28h] BYREF

  v5[1] = 0x7FFFFFFFFFFFF001LL;
  v5[0] = ((a3 & 0x1F | ((unsigned __int64)a2 << 16)) << 16) | 3;
  IvtIommuSendCommand(a1, (unsigned __int64)v5, 0);
  return IvtIommuWaitCommand(a1, 0, 0);
}
