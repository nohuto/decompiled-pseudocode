__int64 __fastcall ReadTiltCalibrationData(__int64 a1, struct _UNICODE_STRING *a2)
{
  __int64 v2; // rbx
  struct _UNICODE_STRING v3; // xmm6
  int v4; // r13d
  int TiltKeyName; // edi
  int v7; // ecx
  __int64 i; // rax
  _DWORD *v9; // r14
  __int64 v10; // rsi
  __int64 v11; // r15
  unsigned __int8 **v12; // r12
  unsigned int *v13; // r8
  struct _UNICODE_STRING v14; // [rsp+28h] [rbp-E0h] BYREF
  PCWSTR SourceString; // [rsp+38h] [rbp-D0h] BYREF
  UNICODE_STRING v16; // [rsp+40h] [rbp-C8h] BYREF
  struct _UNICODE_STRING DestinationString_8; // [rsp+58h] [rbp-B0h] BYREF
  struct _UNICODE_STRING v18; // [rsp+68h] [rbp-A0h] BYREF
  struct _UNICODE_STRING v19; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int8 **v20[4]; // [rsp+88h] [rbp-80h]
  unsigned int *v21[4]; // [rsp+A8h] [rbp-60h]
  _DWORD v22[4]; // [rsp+C8h] [rbp-40h] BYREF
  char v23; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE v24[1408]; // [rsp+398h] [rbp+290h] BYREF

  v2 = *(_QWORD *)(a1 + 392);
  v3 = *a2;
  v4 = *(_DWORD *)(a1 + 224);
  SourceString = 0LL;
  *(_DWORD *)(&v16.MaximumLength + 1) = 0;
  DestinationString_8 = 0LL;
  if ( !v2 )
    return 3221225628LL;
  *(_DWORD *)&v16.Length = 45875200;
  v16.Buffer = (PWSTR)&v23;
  TiltKeyName = RtlUnicodeStringCopy(&v16, (const struct _UNICODE_STRING *)(grpWinStaList + 200LL));
  if ( TiltKeyName >= 0 )
  {
    v7 = 1;
    v21[0] = (unsigned int *)(v2 + 24);
    v21[1] = (unsigned int *)(v2 + 40);
    v21[2] = (unsigned int *)(v2 + 56);
    v21[3] = (unsigned int *)(v2 + 72);
    v20[0] = (unsigned __int8 **)(v2 + 16);
    v20[1] = (unsigned __int8 **)(v2 + 32);
    v20[2] = (unsigned __int8 **)(v2 + 48);
    v20[3] = (unsigned __int8 **)(v2 + 64);
    for ( i = 0LL; i < 4; ++i )
      v22[i] = v7++;
    v14 = v3;
    TiltKeyName = GetTiltKeyName(&v14, (unsigned __int16 **)&SourceString);
    if ( TiltKeyName >= 0 )
    {
      RtlInitUnicodeString(&DestinationString_8, SourceString);
      v9 = v22;
      v10 = 0LL;
      v11 = 4LL;
      do
      {
        *(_QWORD *)&v14.Length = 91750400LL;
        memset_0(v24, 0, 0x578uLL);
        v14.Buffer = (PWSTR)v24;
        RtlCopyUnicodeString(&v14, &v16);
        TiltKeyName = RtlUnicodeStringCatString(&v14, off_1C030D898[v10]);
        if ( TiltKeyName >= 0 )
        {
          v12 = v20[v10];
          v13 = v21[v10];
          v18 = v14;
          v19 = DestinationString_8;
          TiltKeyName = ReadCalibrationDataImp(&v19, &v18, v13, v12);
          if ( TiltKeyName >= 0 && v4 == *v9 )
            *(_QWORD *)(v2 + 80) = *v12;
        }
        ++v10;
        ++v9;
        --v11;
      }
      while ( v11 );
      Win32FreePool((void *)SourceString);
    }
  }
  return (unsigned int)TiltKeyName;
}
