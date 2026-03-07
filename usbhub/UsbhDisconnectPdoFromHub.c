_DWORD *__fastcall UsbhDisconnectPdoFromHub(__int64 a1)
{
  __int64 v2; // rbx
  _DWORD *result; // rax

  v2 = *((_QWORD *)PdoExt(a1) + 148);
  FdoExt(v2);
  Log(v2, 8, 1346653997, a1, v2);
  result = PdoExt(a1);
  *((_QWORD *)result + 148) = 0LL;
  return result;
}
