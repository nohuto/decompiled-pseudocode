/*
 * XREFs of ObGetHandleInformationEx @ 0x14097864C
 * Callers:
 *     ExpGetHandleInformationEx @ 0x1409F3754 (ExpGetHandleInformationEx.c)
 * Callees:
 *     ExpSnapShotHandleTables @ 0x1408A6B82 (ExpSnapShotHandleTables.c)
 */

__int64 __fastcall ObGetHandleInformationEx(_DWORD *a1, unsigned int a2, _DWORD *a3)
{
  __int64 result; // rax
  int v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0;
  if ( a2 < 0x10 )
    return 3221225476LL;
  *(_QWORD *)a1 = 0LL;
  result = ExpSnapShotHandleTables(
             (__int64 (__fastcall *)(char **, _QWORD, volatile signed __int64 *, __int64, int, _DWORD *))ObpCaptureHandleInformationEx,
             a1,
             a2,
             &v5,
             1);
  if ( a3 )
    *a3 = v5;
  return result;
}
