__int64 __fastcall ObGetHandleInformation(_DWORD *a1, unsigned int a2, _DWORD *a3)
{
  __int64 result; // rax
  int v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0;
  if ( a2 < 8 )
    return 3221225476LL;
  *a1 = 0;
  result = ExpSnapShotHandleTables(
             (__int64 (__fastcall *)(char **, _QWORD, volatile signed __int64 *, __int64, int, _DWORD *))ObpCaptureHandleInformation,
             a1,
             a2,
             &v5,
             0);
  if ( a3 )
    *a3 = v5;
  return result;
}
