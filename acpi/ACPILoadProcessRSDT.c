__int64 ACPILoadProcessRSDT()
{
  char v0; // r12
  char v1; // r13
  int v2; // ebx
  _DWORD *v3; // rax
  int v4; // edx
  const ULONG_PTR *v5; // rcx
  _DWORD *v6; // rsi
  unsigned int v7; // ebp
  unsigned int v8; // r15d
  int **v9; // r14
  int *v10; // rsi
  int v11; // eax
  _OWORD *Pool2; // rax
  int v13; // eax
  int v14; // r9d
  _DWORD *v15; // rax
  int v16; // edx
  PVOID v17; // rsi
  __int64 v19; // [rsp+28h] [rbp-40h]
  PVOID v20; // [rsp+70h] [rbp+8h] BYREF
  PVOID P; // [rsp+78h] [rbp+10h] BYREF

  v0 = 0;
  v1 = 0;
  LOBYTE(v20) = 0;
  v2 = 0;
  v3 = (_DWORD *)(*(__int64 (**)(void))(PmHalDispatchTable + 112))();
  v5 = &WPP_e79443b43ad4376df2974b199a0dd63c_Traceguids;
  v6 = v3;
  if ( v3 )
  {
    v7 = *v3;
    if ( *v3 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v4) = 4;
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          v4,
          6,
          19,
          (__int64)&WPP_e79443b43ad4376df2974b199a0dd63c_Traceguids,
          *v3);
        v5 = &WPP_e79443b43ad4376df2974b199a0dd63c_Traceguids;
      }
      v8 = 0;
      v9 = (int **)(v6 + 2);
      while ( 1 )
      {
        v10 = *v9;
        v11 = **v9;
        if ( v11 == 1414742611 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v4) = 4;
            WPP_RECORDER_SF_i(
              WPP_GLOBAL_Control->DeviceExtension,
              v4,
              6,
              20,
              (__int64)&WPP_e79443b43ad4376df2974b199a0dd63c_Traceguids,
              (char)*v9);
          }
          goto LABEL_42;
        }
        if ( v11 != 1346584902 && v11 != 1413763923 && v11 != 1413763920 && v11 != 1128878145 && v11 != 1413694288 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v19) = **v9;
            LOBYTE(v4) = 4;
            WPP_RECORDER_SF_d(
              WPP_GLOBAL_Control->DeviceExtension,
              v4,
              6,
              21,
              (__int64)&WPP_e79443b43ad4376df2974b199a0dd63c_Traceguids,
              v19);
          }
          goto LABEL_42;
        }
        Pool2 = (_OWORD *)ExAllocatePool2(64LL, 36LL, 1953522497LL);
        P = Pool2;
        if ( !Pool2 )
          goto LABEL_51;
        *Pool2 = *(_OWORD *)v10;
        Pool2[1] = *((_OWORD *)v10 + 1);
        *((_DWORD *)Pool2 + 8) = v10[8];
        *((_DWORD *)Pool2 + 1) = 36;
        if ( ACPIRegReadAMLRegistryEntry((__int64 *)&P) )
          v10 = (int *)P;
        else
          ExFreePoolWithTag(P, 0);
        v4 = *v10 - 1128878145;
        if ( *v10 == 1128878145 )
        {
          if ( !v1 )
          {
            v1 = 1;
            *((_QWORD *)AcpiInformation + 4) = v10;
            goto LABEL_41;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v14 = 23;
            goto LABEL_40;
          }
        }
        else
        {
          v4 = *v10 - 1346584902;
          if ( *v10 == 1346584902 )
          {
            if ( !v0 )
            {
              v0 = 1;
              *((_QWORD *)AcpiInformation + 1) = v10;
              v13 = ACPILoadProcessFADT();
              goto LABEL_27;
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v14 = 22;
              goto LABEL_40;
            }
          }
          else
          {
            v4 = *v10 - 1413694288;
            if ( *v10 == 1413694288 )
            {
              if ( !(_BYTE)v20 )
              {
                LOBYTE(v20) = 1;
                v13 = ACPIPccInitialize((__int64)v10);
                goto LABEL_27;
              }
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v14 = 24;
LABEL_40:
                LOBYTE(v4) = 4;
                WPP_RECORDER_SF_(
                  WPP_GLOBAL_Control->DeviceExtension,
                  v4,
                  6,
                  v14,
                  (__int64)&WPP_e79443b43ad4376df2974b199a0dd63c_Traceguids);
              }
            }
            else
            {
              v4 = *v10 - 1413763920;
              if ( *v10 == 1413763920 || *v10 == 1413763923 )
              {
                v13 = ACPILoadAddDynamicDataBlockTable((__int64)v10, 0);
LABEL_27:
                v2 = v13;
              }
            }
          }
        }
LABEL_41:
        if ( v2 < 0 )
          goto LABEL_54;
LABEL_42:
        ++v8;
        ++v9;
        if ( v8 >= v7 )
        {
          if ( g_SimulatorCallbackObject || AcpiLoadSimulatorTable )
          {
            v15 = (_DWORD *)ExAllocatePool2(64LL, 36LL, 1953522497LL);
            v20 = v15;
            if ( !v15 )
            {
LABEL_51:
              v2 = -1073741670;
              goto LABEL_54;
            }
            *v15 = 1413763923;
            v15[1] = 36;
            *((_WORD *)v15 + 4) = 1;
            v15[6] = 1;
            v15[8] = 1;
            *(_DWORD *)((char *)v15 + 10) = 1413894989;
            *((_QWORD *)v15 + 2) = 0x7274616C756D6973LL;
            v15[7] = 1413894989;
            if ( ACPIRegReadAMLRegistryEntry((__int64 *)&v20) )
            {
              v17 = v20;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v16) = 4;
                WPP_RECORDER_SF_i(
                  WPP_GLOBAL_Control->DeviceExtension,
                  v16,
                  6,
                  25,
                  (__int64)&WPP_e79443b43ad4376df2974b199a0dd63c_Traceguids,
                  (char)v20);
              }
              v2 = ACPILoadAddDynamicDataBlockTable((__int64)v17, 0);
              if ( v2 < 0 )
              {
                ExFreePoolWithTag(v17, 0);
                goto LABEL_54;
              }
            }
            else
            {
              ExFreePoolWithTag(v20, 0);
            }
          }
          ACPIRegDumpAcpiTables(v5);
LABEL_54:
          if ( !v0 )
          {
LABEL_58:
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v4) = 2;
              WPP_RECORDER_SF_(
                WPP_GLOBAL_Control->DeviceExtension,
                v4,
                6,
                26,
                (__int64)&WPP_e79443b43ad4376df2974b199a0dd63c_Traceguids);
            }
            return (unsigned int)-1072431079;
          }
          return (unsigned int)v2;
        }
        v5 = &WPP_e79443b43ad4376df2974b199a0dd63c_Traceguids;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v4,
      6,
      18,
      (__int64)&WPP_e79443b43ad4376df2974b199a0dd63c_Traceguids);
    goto LABEL_58;
  }
  return (unsigned int)-1072431079;
}
