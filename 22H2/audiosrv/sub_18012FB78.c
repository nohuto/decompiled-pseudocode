/*
 * XREFs of sub_18012FB78 @ 0x18012FB78
 * Callers:
 *     sub_18012F6E0 @ 0x18012F6E0 (sub_18012F6E0.c)
 *     sub_18012F880 @ 0x18012F880 (sub_18012F880.c)
 *     sub_18012F960 @ 0x18012F960 (sub_18012F960.c)
 *     sub_18012FA40 @ 0x18012FA40 (sub_18012FA40.c)
 *     sub_18012FAE0 @ 0x18012FAE0 (sub_18012FAE0.c)
 *     sub_18012FCF0 @ 0x18012FCF0 (sub_18012FCF0.c)
 *     sub_18012FD90 @ 0x18012FD90 (sub_18012FD90.c)
 *     sub_18012FE30 @ 0x18012FE30 (sub_18012FE30.c)
 *     sub_18012FED0 @ 0x18012FED0 (sub_18012FED0.c)
 *     sub_18012FF70 @ 0x18012FF70 (sub_18012FF70.c)
 *     sub_180130010 @ 0x180130010 (sub_180130010.c)
 *     sub_1801300AC @ 0x1801300AC (sub_1801300AC.c)
 *     sub_1801302B0 @ 0x1801302B0 (sub_1801302B0.c)
 *     sub_180130350 @ 0x180130350 (sub_180130350.c)
 *     sub_1801303F0 @ 0x1801303F0 (sub_1801303F0.c)
 *     sub_180130490 @ 0x180130490 (sub_180130490.c)
 *     sub_180130530 @ 0x180130530 (sub_180130530.c)
 *     sub_180130910 @ 0x180130910 (sub_180130910.c)
 *     sub_1801309F0 @ 0x1801309F0 (sub_1801309F0.c)
 *     sub_180130AF0 @ 0x180130AF0 (sub_180130AF0.c)
 *     sub_180130B90 @ 0x180130B90 (sub_180130B90.c)
 *     sub_180130C30 @ 0x180130C30 (sub_180130C30.c)
 *     sub_180130CD0 @ 0x180130CD0 (sub_180130CD0.c)
 *     sub_180130D70 @ 0x180130D70 (sub_180130D70.c)
 *     sub_180130EB0 @ 0x180130EB0 (sub_180130EB0.c)
 * Callees:
 *     sub_18012F780 @ 0x18012F780 (sub_18012F780.c)
 */

__int64 __fastcall sub_18012FB78(_QWORD *a1, int a2, __int64 a3, unsigned int a4, __int128 *pcbData, __int64 a6)
{
  HANDLE CurrentProcess; // rax
  int pvData; // [rsp+40h] [rbp-28h] BYREF
  DWORD pdwType[3]; // [rsp+44h] [rbp-24h] BYREF
  __int128 v11; // [rsp+50h] [rbp-18h] BYREF

  v11 = *pcbData;
  sub_18012F780((__int64)a1, a3, a4, (__int64)&v11, a6, a2);
  LODWORD(pcbData) = 4;
  if ( RegGetValueW(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
         L"PreventAudioDGCrashOrReportOnAPOException",
         0x18u,
         pdwType,
         &pvData,
         (LPDWORD)&pcbData)
    || !pvData )
  {
    RtlReportException(*a1, a1[1], 2LL);
    CurrentProcess = GetCurrentProcess();
    TerminateProcess(CurrentProcess, 0xC8u);
  }
  return 1LL;
}
