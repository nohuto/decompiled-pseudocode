/*
 * XREFs of ACPISystemPowerProcessSxD @ 0x1C00951C8
 * Callers:
 *     ACPISystemPowerInitializeRootMapping @ 0x1C003DEA4 (ACPISystemPowerInitializeRootMapping.c)
 * Callees:
 *     WPP_RECORDER_SF_dqss @ 0x1C0009A6C (WPP_RECORDER_SF_dqss.c)
 *     ACPISystemPowerGetSxD @ 0x1C0094FC0 (ACPISystemPowerGetSxD.c)
 */

__int64 __fastcall ACPISystemPowerProcessSxD(_QWORD *a1, __int64 a2, _BYTE *a3)
{
  int *v3; // rbx
  int i; // edi
  int v7; // eax
  int SxD; // eax
  char v9; // r8
  const char *v10; // r10
  const char *v11; // rdx
  __int64 v12; // rcx
  int v13; // eax
  int v15; // [rsp+70h] [rbp+18h] BYREF

  v15 = 0;
  v3 = (int *)(a2 + 4);
  *a3 = 0;
  for ( i = 1; i < 7; ++i )
  {
    v7 = AcpiSupportedSystemStates;
    if ( _bittest(&v7, i) )
    {
      SxD = ACPISystemPowerGetSxD((__int64)a1, i, &v15);
      if ( SxD != -1073741772 )
      {
        if ( SxD >= 0 )
        {
          v13 = v15;
          *a3 = 1;
          if ( v13 > *v3 )
            *v3 = v13;
        }
        else
        {
          v9 = 0;
          v10 = byte_1C00622D0;
          v11 = byte_1C00622D0;
          if ( a1 )
          {
            v12 = a1[1];
            v9 = (char)a1;
            if ( (v12 & 0x200000000000LL) != 0 )
            {
              v10 = (const char *)a1[76];
              if ( (v12 & 0x400000000000LL) != 0 )
                v11 = (const char *)a1[77];
            }
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_dqss(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              0xFu,
              0x11u,
              (__int64)&WPP_63048e4611d63d39c0d94317710a082a_Traceguids,
              SxD,
              v9,
              v10,
              v11);
        }
      }
    }
    else
    {
      *v3 = 0;
    }
    ++v3;
  }
  return 0LL;
}
