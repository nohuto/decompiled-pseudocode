__int64 __fastcall sub_1400A3054(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        unsigned __int16 a4,
        __int64 a5,
        const wchar_t *a6)
{
  const wchar_t *v6; // r14
  unsigned __int64 v7; // rsi
  __int64 v9; // rdi
  unsigned int v10; // r12d
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rdx
  const wchar_t *v14; // rcx
  bool v15; // zf
  int v17; // [rsp+20h] [rbp-58h]
  __int64 v18; // [rsp+80h] [rbp+8h]
  unsigned int v19; // [rsp+90h] [rbp+18h]

  v19 = a3;
  v18 = a1;
  v6 = L"NULL";
  v7 = (unsigned __int64)(unsigned int)a3 >> 16;
  v9 = -1LL;
  v10 = a2;
  v11 = *((_DWORD *)&DeviceObject->Timer + 20 * v7 + (((unsigned int)(a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v11, (a3 - 1) & 0x1F) && *((_BYTE *)&DeviceObject->Timer + 80 * v7 + 1) >= a2 )
  {
    if ( a6 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( a6[v12] );
      v13 = 2 * v12 + 2;
    }
    else
    {
      v13 = 10LL;
    }
    v14 = L"NULL";
    if ( a6 )
      v14 = a6;
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, const wchar_t *, __int64, _QWORD))qword_1400DF3E8)(
      *((_QWORD *)&DeviceObject->AttachedDevice + 10 * v7),
      43LL,
      a5,
      a4,
      v14,
      v13,
      0LL);
    a3 = v19;
    a1 = v18;
  }
  v15 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v9;
    while ( a6[v9] );
    v15 = a6 == 0LL;
  }
  if ( !v15 )
    v6 = a6;
  LOWORD(v17) = a4;
  return WppAutoLogTrace(a1, v10, a3, a5, v17, (__int64)v6);
}
