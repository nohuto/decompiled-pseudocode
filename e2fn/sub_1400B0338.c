__int64 __fastcall sub_1400B0338(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        unsigned __int16 a4,
        __int64 a5,
        const wchar_t *a6,
        const wchar_t *a7)
{
  const wchar_t *v7; // r12
  unsigned __int64 v8; // r14
  unsigned int v9; // r13d
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // r8
  const wchar_t *v16; // rdx
  const wchar_t *v17; // rcx
  __int64 v18; // rax
  int v20; // [rsp+20h] [rbp-68h]
  unsigned int v22; // [rsp+A0h] [rbp+18h]
  unsigned __int16 v23; // [rsp+A8h] [rbp+20h]

  v23 = a4;
  v22 = a3;
  v7 = L"NULL";
  v8 = (unsigned __int64)(unsigned int)a3 >> 16;
  v9 = a2;
  v10 = -1LL;
  v11 = *((_DWORD *)&DeviceObject->Timer + 20 * v8 + (((unsigned int)(a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v11, (a3 - 1) & 0x1F) && *((_BYTE *)&DeviceObject->Timer + 80 * v8 + 1) >= a2 )
  {
    if ( a7 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( a7[v12] );
      v13 = 2 * v12 + 2;
    }
    else
    {
      v13 = 10LL;
    }
    if ( a6 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( a6[v14] );
      v15 = 2 * v14 + 2;
    }
    else
    {
      v15 = 10LL;
    }
    v16 = L"NULL";
    if ( a7 )
      v16 = a7;
    v17 = L"NULL";
    if ( a6 )
      v17 = a6;
    qword_1400DF3E8(*((_QWORD *)&DeviceObject->AttachedDevice + 10 * v8), 43LL, a5, v23, v17, v15, v16, v13, 0LL);
    a3 = v22;
    a4 = v23;
  }
  if ( a7 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( a7[v18] );
  }
  if ( a6 )
  {
    do
      ++v10;
    while ( a6[v10] );
  }
  if ( a6 )
    v7 = a6;
  LOWORD(v20) = a4;
  return WppAutoLogTrace(a1, v9, a3, a5, v20, (__int64)v7);
}
