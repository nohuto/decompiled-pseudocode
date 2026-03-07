__int64 (__fastcall *__fastcall UsbhBusIf_SetMsOs20Support(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4))(_QWORD, __int64, __int64, __int64)
{
  _DWORD *v8; // rax
  __int64 v9; // r9
  __int64 v10; // r10
  __int64 (__fastcall *result)(_QWORD, __int64, __int64, __int64); // rax

  v8 = FdoExt(a1);
  Log(a1, 4, 1968391236, (__int64)(v8 + 1056), 0LL);
  result = *(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(v10 + 4536);
  if ( result )
  {
    LOBYTE(v9) = a4;
    return (__int64 (__fastcall *)(_QWORD, __int64, __int64, __int64))result(*(_QWORD *)(v10 + 4232), a2, a3, v9);
  }
  return result;
}
