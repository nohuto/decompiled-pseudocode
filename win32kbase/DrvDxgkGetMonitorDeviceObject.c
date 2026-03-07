__int64 __fastcall DrvDxgkGetMonitorDeviceObject(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // esi
  __int64 DxgkWin32kInterface; // rax

  v6 = a2;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1, a2);
  return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(DxgkWin32kInterface + 456))(a1, v6, a3, a4);
}
