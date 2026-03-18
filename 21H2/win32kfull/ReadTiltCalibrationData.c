/*
 * XREFs of ReadTiltCalibrationData @ 0x1C01CBCFC
 * Callers:
 *     CheckPointerDeviceConfiguration @ 0x1C011EB58 (CheckPointerDeviceConfiguration.c)
 * Callees:
 *     ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1C00A0F38 (-RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     ?RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C00A1014 (-RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     ?GetTiltKeyName@@YAJU_UNICODE_STRING@@PEAPEAGH@Z @ 0x1C01CAE8C (-GetTiltKeyName@@YAJU_UNICODE_STRING@@PEAPEAGH@Z.c)
 *     ?ReadCalibrationDataImp@@YAJU_UNICODE_STRING@@0PEAKPEAPEAE@Z @ 0x1C01CAF74 (-ReadCalibrationDataImp@@YAJU_UNICODE_STRING@@0PEAKPEAPEAE@Z.c)
 */

__int64 __fastcall ReadTiltCalibrationData(__int64 a1, struct _UNICODE_STRING *a2, ULONG a3)
{
  __int64 v3; // rbx
  struct _UNICODE_STRING v4; // xmm6
  int v5; // r13d
  int TiltKeyName; // edi
  int v8; // ecx
  __int64 i; // rax
  _DWORD *v10; // r14
  __int64 v11; // rsi
  __int64 v12; // r15
  ULONG v13; // r8d
  unsigned __int8 **v14; // r12
  unsigned int *v15; // r8
  struct _UNICODE_STRING v16; // [rsp+28h] [rbp-E0h] BYREF
  PCWSTR SourceString; // [rsp+38h] [rbp-D0h] BYREF
  UNICODE_STRING v18; // [rsp+40h] [rbp-C8h] BYREF
  struct _UNICODE_STRING DestinationString_8; // [rsp+58h] [rbp-B0h] BYREF
  struct _UNICODE_STRING v20; // [rsp+68h] [rbp-A0h] BYREF
  struct _UNICODE_STRING v21; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int8 **v22[4]; // [rsp+88h] [rbp-80h]
  unsigned int *v23[4]; // [rsp+A8h] [rbp-60h]
  _DWORD v24[4]; // [rsp+C8h] [rbp-40h] BYREF
  char v25; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE v26[1408]; // [rsp+398h] [rbp+290h] BYREF

  v3 = *(_QWORD *)(a1 + 392);
  v4 = *a2;
  v5 = *(_DWORD *)(a1 + 224);
  SourceString = 0LL;
  *(_DWORD *)(&v18.MaximumLength + 1) = 0;
  DestinationString_8 = 0LL;
  if ( !v3 )
    return 3221225628LL;
  *(_DWORD *)&v18.Length = 45875200;
  v18.Buffer = (PWSTR)&v25;
  TiltKeyName = RtlUnicodeStringCopy(&v18, (const struct _UNICODE_STRING *)(grpWinStaList + 200LL), a3);
  if ( TiltKeyName >= 0 )
  {
    v8 = 1;
    v23[0] = (unsigned int *)(v3 + 24);
    v23[1] = (unsigned int *)(v3 + 40);
    v23[2] = (unsigned int *)(v3 + 56);
    v23[3] = (unsigned int *)(v3 + 72);
    v22[0] = (unsigned __int8 **)(v3 + 16);
    v22[1] = (unsigned __int8 **)(v3 + 32);
    v22[2] = (unsigned __int8 **)(v3 + 48);
    v22[3] = (unsigned __int8 **)(v3 + 64);
    for ( i = 0LL; i < 4; ++i )
      v24[i] = v8++;
    v16 = v4;
    TiltKeyName = GetTiltKeyName(&v16, (unsigned __int16 **)&SourceString);
    if ( TiltKeyName >= 0 )
    {
      RtlInitUnicodeString(&DestinationString_8, SourceString);
      v10 = v24;
      v11 = 0LL;
      v12 = 4LL;
      do
      {
        *(_QWORD *)&v16.Length = 91750400LL;
        memset(v26, 0, 0x578uLL);
        v16.Buffer = (PWSTR)v26;
        RtlCopyUnicodeString(&v16, &v18);
        TiltKeyName = RtlUnicodeStringCatString(&v16, off_1C02DFC38[v11], v13);
        if ( TiltKeyName >= 0 )
        {
          v14 = v22[v11];
          v15 = v23[v11];
          v20 = v16;
          v21 = DestinationString_8;
          TiltKeyName = ReadCalibrationDataImp(&v21, &v20, v15, v14);
          if ( TiltKeyName >= 0 && v5 == *v10 )
            *(_QWORD *)(v3 + 80) = *v14;
        }
        ++v11;
        ++v10;
        --v12;
      }
      while ( v12 );
      Win32FreePool(SourceString);
    }
  }
  return (unsigned int)TiltKeyName;
}
