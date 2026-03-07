_DWORD *__fastcall FdoExt(__int64 a1)
{
  _DWORD *result; // rax

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  result = *(_DWORD **)(a1 + 64);
  if ( !result )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *result != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  return result;
}
