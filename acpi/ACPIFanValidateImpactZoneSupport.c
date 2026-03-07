char __fastcall ACPIFanValidateImpactZoneSupport(__int64 a1, __int64 a2, const char *a3)
{
  char v3; // di
  const char *v4; // rsi
  unsigned int v6; // eax
  char v7; // dl
  const char *v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // r12d
  unsigned int *i; // r13
  unsigned int v12; // ecx
  int v13; // edx
  char v14; // r10
  unsigned int v15; // eax
  const char *v16; // r11
  __int64 v17; // rdx
  char v18; // dl
  const char *v19; // rax
  __int64 v20; // rcx
  char v21; // r10
  const char *v22; // rdx
  int v24; // [rsp+20h] [rbp-68h]
  unsigned int v25; // [rsp+90h] [rbp+8h]

  v3 = 0;
  v4 = byte_1C00622D0;
  v6 = 0;
  if ( *(_DWORD *)(a1 + 324) )
  {
    v10 = 0;
    for ( i = (unsigned int *)(a1 + 328); ; ++i )
    {
      v12 = *i;
      if ( v6 > *i )
        break;
      v13 = v12 % *(_DWORD *)(a1 + 324);
      if ( v13 )
      {
        v14 = 0;
        v15 = v12 - v13;
        v16 = byte_1C00622D0;
        v25 = v12 - v13;
        a3 = byte_1C00622D0;
        if ( a1 )
        {
          v17 = *(_QWORD *)(a1 + 8);
          v14 = a1;
          if ( (v17 & 0x200000000000LL) != 0 )
          {
            v16 = *(const char **)(a1 + 608);
            if ( (v17 & 0x400000000000LL) != 0 )
              a3 = *(const char **)(a1 + 616);
          }
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          WPP_RECORDER_SF_dddqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            (__int64)a3,
            0x2Fu,
            v24,
            v10,
            v12,
            v15,
            v14,
            v16,
            a3);
          v15 = v25;
        }
        v12 = v15;
        *i = v15;
      }
      ++v10;
      v6 = v12;
      if ( v10 >= 4 )
      {
        if ( *(_DWORD *)(a1 + 340) )
          return 1;
        v18 = 0;
        v19 = byte_1C00622D0;
        if ( a1 )
        {
          v20 = *(_QWORD *)(a1 + 8);
          v18 = a1;
          if ( (v20 & 0x200000000000LL) != 0 )
          {
            v4 = *(const char **)(a1 + 608);
            if ( (v20 & 0x400000000000LL) != 0 )
              v19 = *(const char **)(a1 + 616);
          }
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_dqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            0x10u,
            0x30u,
            (__int64)&WPP_851d451e9c8635d57712462b586962d1_Traceguids,
            0,
            v18,
            v4,
            v19);
        return v3;
      }
    }
    v21 = 0;
    v22 = byte_1C00622D0;
    if ( a1 )
    {
      a3 = *(const char **)(a1 + 8);
      v21 = a1;
      if ( ((unsigned __int64)a3 & 0x200000000000LL) != 0 )
      {
        v4 = *(const char **)(a1 + 608);
        if ( ((unsigned __int64)a3 & 0x400000000000LL) != 0 )
          v22 = *(const char **)(a1 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dddqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        (__int64)a3,
        0x2Eu,
        v24,
        v6,
        v10,
        v12,
        v21,
        v4,
        v22);
  }
  else
  {
    v7 = 0;
    v8 = byte_1C00622D0;
    if ( a1 )
    {
      v9 = *(_QWORD *)(a1 + 8);
      v7 = a1;
      if ( (v9 & 0x200000000000LL) != 0 )
      {
        v4 = *(const char **)(a1 + 608);
        if ( (v9 & 0x400000000000LL) != 0 )
          v8 = *(const char **)(a1 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x10u,
        0x2Du,
        (__int64)&WPP_851d451e9c8635d57712462b586962d1_Traceguids,
        0,
        v7,
        v4,
        v8);
  }
  return v3;
}
