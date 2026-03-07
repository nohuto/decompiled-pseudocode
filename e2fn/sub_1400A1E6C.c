__int64 sub_1400A1E6C(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned int v7; // edi
  unsigned __int64 v8; // r9
  unsigned int v9; // ebx
  int v10; // eax
  int v12; // [rsp+20h] [rbp-48h]
  va_list va; // [rsp+98h] [rbp+30h] BYREF

  va_start(va, a5);
  v7 = a4;
  v8 = (unsigned __int64)a3 >> 16;
  v9 = a2;
  v10 = *((_DWORD *)&DeviceObject->Timer + 20 * v8 + ((unsigned __int16)(a3 - 1) >> 5) + 1);
  if ( _bittest(&v10, ((_WORD)a3 - 1) & 0x1F) && *((_BYTE *)&DeviceObject->Timer + 80 * v8 + 1) >= a2 )
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, _QWORD))qword_1400DF3E8)(
      *((_QWORD *)&DeviceObject->AttachedDevice + 10 * v8),
      43LL,
      a5,
      v7,
      va,
      4LL,
      0LL);
  LOWORD(v12) = v7;
  return WppAutoLogTrace(a1, v9, a3, a5, v12, va);
}
