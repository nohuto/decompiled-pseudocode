char __fastcall HalpArtAvailable(_DWORD *a1, unsigned int *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v7; // [rsp+30h] [rbp-30h] BYREF
  int v8; // [rsp+34h] [rbp-2Ch] BYREF
  unsigned int v9; // [rsp+38h] [rbp-28h] BYREF
  unsigned int v10; // [rsp+3Ch] [rbp-24h] BYREF
  int v11; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v12; // [rsp+44h] [rbp-1Ch] BYREF
  __int128 v13; // [rsp+48h] [rbp-18h] BYREF
  char v14; // [rsp+80h] [rbp+20h] BYREF
  int v15; // [rsp+88h] [rbp+28h] BYREF

  v11 = 0;
  v7 = 0;
  v9 = 0;
  v10 = 0;
  v8 = 0;
  v12 = 0;
  v15 = 0;
  v14 = 0;
  v13 = 0LL;
  if ( (int)HalSocRequestApi((int)a1, 0, 2, 16, &v13) < 0 )
    return 0;
  if ( !((unsigned __int8 (__fastcall *)(_QWORD, _QWORD, _QWORD, char *))v13)(0LL, 0LL, 0LL, &v14) )
    return 0;
  (*((void (__fastcall **)(_QWORD, unsigned int *, int *, int *, int *))&v13 + 1))(0LL, &v9, &v15, &v15, &v15);
  (*((void (__fastcall **)(__int64, unsigned int *, int *, int *, int *))&v13 + 1))(
    0x80000000LL,
    &v10,
    &v15,
    &v15,
    &v15);
  if ( v14 != 2 || HalpIsHvPresent() && (!HalpHvCpuManager || !HalpIsMicrosoftCompatibleHvLoaded(v5, v4)) )
    return 0;
  if ( v9 < 0x15 )
    return 0;
  if ( v10 < 0x80000007 )
    return 0;
  (*((void (__fastcall **)(__int64, int *, int *, int *, int *))&v13 + 1))(21LL, &v7, &v8, &v15, &v15);
  if ( !v8 )
    return 0;
  if ( !v7 )
    return 0;
  (*((void (__fastcall **)(__int64, int *, int *, int *, int *))&v13 + 1))(2147483655LL, &v15, &v15, &v15, &v11);
  if ( (v11 & 0x100) == 0 )
    return 0;
  (*((void (__fastcall **)(__int64, int *, unsigned int *, int *, int *))&v13 + 1))(1LL, &v15, &v12, &v15, &v15);
  *a2 = HIBYTE(v12);
  if ( a1 )
  {
    *a1 = v7;
    a1[1] = v8;
  }
  return 1;
}
