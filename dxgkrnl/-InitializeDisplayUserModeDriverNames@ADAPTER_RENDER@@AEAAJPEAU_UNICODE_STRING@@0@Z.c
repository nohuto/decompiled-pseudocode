__int64 __fastcall ADAPTER_RENDER::InitializeDisplayUserModeDriverNames(
        ADAPTER_RENDER *this,
        struct _UNICODE_STRING *a2,
        struct _UNICODE_STRING *a3)
{
  __int128 v3; // xmm0
  unsigned __int64 v4; // rax
  unsigned __int64 Length; // r11
  unsigned int v8; // edx
  const unsigned __int16 *v9; // rsi
  unsigned int v10; // ebx
  int v12; // eax
  unsigned __int64 v13; // r11
  struct _UNICODE_STRING v14; // [rsp+20h] [rbp-18h]
  unsigned __int64 v15; // [rsp+48h] [rbp+10h] BYREF

  v3 = (__int128)*a2;
  v4 = 0LL;
  v15 = 0LL;
  Length = a2->Length;
  v8 = 0;
  *(_DWORD *)(&v14.MaximumLength + 1) = DWORD1(v3);
  v9 = (const unsigned __int16 *)*((_QWORD *)&v3 + 1);
  v10 = 0;
  while ( 1 )
  {
    if ( !Length )
      return v8;
    v9 += v4 >> 1;
    v14.Buffer = (wchar_t *)v9;
    v12 = RtlStringCbLengthW(v9, Length, &v15);
    v8 = v12;
    if ( v12 < 0 )
      break;
    v4 = v15;
    v14.Length = v15;
    if ( v13 > v15 )
    {
      v4 = v15 + 2;
      v15 += 2LL;
    }
    v14.MaximumLength = v4;
    ++v10;
    Length = v13 - (unsigned __int16)v4;
    *a3++ = v14;
    if ( v10 )
      return v8;
  }
  WdLogSingleEntry3(3LL, v10, *((_QWORD *)this + 2), v12);
  return 0LL;
}
