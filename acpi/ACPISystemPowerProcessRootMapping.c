__int64 __fastcall ACPISystemPowerProcessRootMapping(_QWORD *a1, __int64 a2)
{
  unsigned int *v3; // rdi
  signed int i; // ebx
  int v5; // eax
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  const char *v9; // r9
  const char *v10; // rcx
  unsigned int v11; // eax
  int v12; // ecx
  int v14; // [rsp+20h] [rbp-38h]
  int v15; // [rsp+70h] [rbp+18h] BYREF

  v3 = (unsigned int *)(a2 + 8);
  for ( i = 2; i <= 6; ++i )
  {
    v5 = AcpiSupportedSystemStates;
    if ( _bittest(&v5, i) )
    {
      v15 = 16;
      v6 = ACPISystemPowerDetermineSupportedDeviceStates((__int64)a1, i, &v15);
      if ( v6 >= 0 )
      {
        v11 = *v3;
        if ( (int)*v3 <= 4 )
        {
          v12 = v15;
          while ( !_bittest(&v12, v11) )
          {
            if ( (int)++v11 > 4 )
              goto LABEL_17;
          }
          *v3 = v11;
        }
      }
      else
      {
        v8 = 0LL;
        v9 = byte_1C00622D0;
        v10 = byte_1C00622D0;
        if ( a1 )
        {
          v7 = a1[1];
          v8 = (__int64)a1;
          if ( (v7 & 0x200000000000LL) != 0 )
          {
            v9 = (const char *)a1[76];
            if ( (v7 & 0x400000000000LL) != 0 )
              v10 = (const char *)a1[77];
          }
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_DLqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            v7,
            v8,
            (__int64)v9,
            v14,
            i - 1,
            v6,
            v8,
            v9,
            v10);
        *v3 = 4;
      }
    }
LABEL_17:
    ++v3;
  }
  return 0LL;
}
