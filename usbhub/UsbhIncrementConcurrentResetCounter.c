_DWORD *__fastcall UsbhIncrementConcurrentResetCounter(__int64 a1)
{
  _DWORD *result; // rax

  result = FdoExt(a1);
  if ( (int)++result[1316] > 20 )
    KeBugCheckEx(0xFEu, 0xAuLL, 1uLL, 1uLL, 0LL);
  return result;
}
