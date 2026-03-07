__int64 __fastcall HalpTscGetAttributes(_BYTE *a1, _BYTE *a2, _BYTE *a3)
{
  __int64 v6; // rdx
  __int16 v7; // ax
  unsigned int v9; // [rsp+30h] [rbp-28h] BYREF
  int v10; // [rsp+34h] [rbp-24h] BYREF
  __int128 v11; // [rsp+38h] [rbp-20h] BYREF
  char v12; // [rsp+80h] [rbp+28h] BYREF
  char v13; // [rsp+88h] [rbp+30h] BYREF
  int v14; // [rsp+90h] [rbp+38h] BYREF
  int v15; // [rsp+98h] [rbp+40h] BYREF

  v15 = 0;
  v14 = 0;
  v9 = 0;
  *a1 = 0;
  *a2 = 0;
  *a3 = 0;
  v11 = 0LL;
  v12 = 0;
  v13 = 0;
  if ( (int)HalSocRequestApi((int)a1, 0, 2, 16, &v11) < 0 )
    goto LABEL_9;
  (*((void (__fastcall **)(__int64, int *, int *, int *, int *))&v11 + 1))(2147483649LL, &v14, &v14, &v14, &v15);
  if ( (v15 & 0x8000000) != 0 )
    *a3 = 1;
  if ( !((unsigned __int8 (__fastcall *)(_QWORD, _QWORD, _QWORD, char *))v11)(0LL, 0LL, 0LL, &v12) )
    goto LABEL_9;
  (*((void (__fastcall **)(__int64, unsigned int *, int *, int *, int *))&v11 + 1))(0x80000000LL, &v9, &v14, &v14, &v14);
  if ( (unsigned __int8)(v12 - 1) <= 1u )
  {
    v7 = 0;
    v10 = 0;
    if ( v9 >= 0x80000007 )
    {
      (*((void (__fastcall **)(__int64, int *, int *, int *, int *))&v11 + 1))(2147483655LL, &v14, &v14, &v14, &v10);
      v7 = v10;
    }
    if ( (v7 & 0x100) == 0 )
    {
      HalSocRequestConfigurationData(8, v6, &v13);
      if ( !v13
        && v12 == 2
        && (KeGetCurrentPrcb()->CpuType == 15 && KeGetCurrentPrcb()->CpuModel >= 3u
         || KeGetCurrentPrcb()->CpuType == 6 && KeGetCurrentPrcb()->CpuModel >= 0xEu) )
      {
        *a1 = 1;
        *a2 = 0;
      }
      return 0LL;
    }
LABEL_9:
    *a1 = 1;
    *a2 = 1;
    return 0LL;
  }
  return 3221225659LL;
}
