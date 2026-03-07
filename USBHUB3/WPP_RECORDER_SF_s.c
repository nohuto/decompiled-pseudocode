__int64 __fastcall WPP_RECORDER_SF_S(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        const wchar_t *a6)
{
  const wchar_t *v6; // r14
  __int64 v8; // rdi
  unsigned __int64 v10; // rsi
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rdx
  const wchar_t *v15; // rcx
  bool v16; // zf
  int v18; // [rsp+20h] [rbp-48h]

  v6 = L"NULL";
  v8 = -1LL;
  v10 = (unsigned __int64)a3 >> 16;
  v12 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v10 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v12, (a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v10 + 1) >= 2u )
  {
    if ( a6 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( a6[v13] );
      v14 = 2 * v13 + 2;
    }
    else
    {
      v14 = 10LL;
    }
    v15 = L"NULL";
    if ( a6 )
      v15 = a6;
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, const wchar_t *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v10),
      43LL,
      a5,
      a4,
      v15,
      v14,
      0LL);
  }
  v16 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v8;
    while ( a6[v8] );
    v16 = a6 == 0LL;
  }
  if ( !v16 )
    v6 = a6;
  LOWORD(v18) = a4;
  return WppAutoLogTrace(a1, 2LL, a3, a5, v18, v6);
}
