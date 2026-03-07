__int64 __fastcall DrvGetMonitorOrientation(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // ebp
  __int64 DxgkWin32kInterface; // rax

  v6 = a2;
  if ( !a1 )
    return 3221225485LL;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1, a2);
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, __int64))(DxgkWin32kInterface + 264))(
           *a1,
           v6,
           0LL,
           a3,
           a4);
}
