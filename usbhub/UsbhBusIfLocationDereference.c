_DWORD *__fastcall UsbhBusIfLocationDereference(__int64 a1)
{
  _DWORD *result; // rax

  result = FdoExt(*(_QWORD *)(a1 + 1184));
  _InterlockedDecrement(result + 855);
  return result;
}
