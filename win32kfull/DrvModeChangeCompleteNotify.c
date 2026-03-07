__int64 __fastcall DrvModeChangeCompleteNotify(__int64 a1, __int64 a2)
{
  __int64 DxgkWin32kInterface; // rax
  __int64 result; // rax
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  v4[1] = retaddr;
  v4[0] = 7LL;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1, a2);
  result = (*(__int64 (__fastcall **)(_QWORD *))(DxgkWin32kInterface + 416))(v4);
  if ( (int)result < 0 )
    return WdLogSingleEntry0(1LL);
  return result;
}
