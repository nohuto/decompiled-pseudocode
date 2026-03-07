_DWORD *__fastcall UsbhBusIfLocationReference(__int64 a1)
{
  _DWORD *result; // rax

  result = FdoExt(*(_QWORD *)(a1 + 1184));
  _InterlockedIncrement(result + 855);
  return result;
}
