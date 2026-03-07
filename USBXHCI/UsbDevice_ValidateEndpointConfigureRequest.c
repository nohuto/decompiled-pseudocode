__int64 __fastcall UsbDevice_ValidateEndpointConfigureRequest(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  int v5; // r8d
  int v6; // r9d
  int v7; // edx
  unsigned int *v8; // rcx
  int v9; // r12d
  unsigned int v10; // edx
  unsigned int v11; // r13d
  unsigned int v12; // edi
  __int64 v14; // rax
  __int64 v15; // r10
  int v16; // ecx
  int v17; // ecx
  unsigned int v18; // eax
  __int64 v19; // rax
  char v20; // [rsp+30h] [rbp-38h]
  unsigned int v21; // [rsp+70h] [rbp+8h]
  unsigned int *v22; // [rsp+80h] [rbp+18h]

  v2 = 0LL;
  v3 = a2;
  if ( *(_BYTE *)(a1 + 134) )
  {
    if ( (unsigned __int8)Controller_IsControllerAccessible(*(_QWORD *)(a1 + 8)) )
    {
      v7 = *(_DWORD *)(v3 + 84);
      if ( !v7 )
        goto LABEL_4;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v7) = 5;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          v7,
          12,
          34,
          (__int64)&WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids,
          *(_DWORD *)(v3 + 84));
      }
      v15 = *(_QWORD *)(a1 + 8);
      v16 = *(_DWORD *)(v15 + 636);
      if ( v16 )
      {
        v17 = v16 - 1;
        if ( v17 )
        {
          if ( v17 != 1 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v7, v5, v6);
            if ( !KdRefreshDebuggerNotPresent() )
              __debugbreak();
            return (unsigned int)-1073741823;
          }
LABEL_4:
          v8 = *(unsigned int **)(v3 + 88);
          v9 = 0;
          v10 = *(_DWORD *)(v3 + 84);
          v11 = 0;
          v22 = v8;
          if ( v10 )
          {
            while ( 1 )
            {
              v18 = 0;
              v21 = 0;
              if ( *(_DWORD *)(v3 + 24) )
              {
                while ( *(unsigned __int8 *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
                                               WdfDriverGlobals,
                                               *(_QWORD *)(*(_QWORD *)(v3 + 32) + 8LL * v18),
                                               off_1C00631A8)
                                           + 98) != *((_WORD *)v22 + 2) )
                {
                  v18 = v21 + 1;
                  v21 = v18;
                  if ( v18 >= *(_DWORD *)(v3 + 24) )
                  {
                    v8 = v22;
                    goto LABEL_37;
                  }
                }
                ++v9;
                v8 = v22;
              }
LABEL_37:
              v19 = *v8;
              if ( !(_DWORD)v19 )
                break;
              v10 = *(_DWORD *)(v3 + 84);
              v8 = (unsigned int *)((char *)v8 + v19);
              ++v11;
              v22 = v8;
              if ( v11 >= v10 )
                goto LABEL_5;
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v10) = 2;
              WPP_RECORDER_SF_dd(
                *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
                v10,
                12,
                37,
                (__int64)&WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids,
                *(_BYTE *)(a1 + 135),
                v11);
            }
          }
          else
          {
LABEL_5:
            if ( v9 == v10 )
              return 0;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v20 = v10;
              LOBYTE(v10) = 2;
              WPP_RECORDER_SF_ddd(
                *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
                v10,
                12,
                38,
                (__int64)&WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids,
                *(_BYTE *)(a1 + 135),
                v20,
                v9);
            }
          }
          return (unsigned int)-1073741811;
        }
        if ( *(_BYTE *)(a1 + 658) )
          goto LABEL_4;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v7) = 2;
          WPP_RECORDER_SF_(*(_QWORD *)(v15 + 72), v7, 12, 36, (__int64)&WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids);
        }
        return (unsigned int)-1073741790;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v7) = 2;
          WPP_RECORDER_SF_(*(_QWORD *)(v15 + 72), v7, 12, 35, (__int64)&WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids);
        }
        return (unsigned int)-1073741637;
      }
    }
    else
    {
      v12 = *(_DWORD *)(v3 + 24) != 0 ? 0xC000000E : 0;
      if ( *(_DWORD *)(v3 + 40) )
      {
        do
        {
          v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
                  WdfDriverGlobals,
                  *(_QWORD *)(*(_QWORD *)(v3 + 48) + 8 * v2),
                  off_1C00631A8);
          Endpoint_Disable(v14, 0LL);
          v2 = (unsigned int)(v2 + 1);
        }
        while ( (unsigned int)v2 < *(_DWORD *)(v3 + 40) );
      }
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 3;
      WPP_RECORDER_SF_dq(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        a2,
        12,
        33,
        (__int64)&WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids,
        *(_BYTE *)(a1 + 135),
        *(_QWORD *)a1);
    }
    return *(_DWORD *)(v3 + 24) != 0 ? 0xC0000001 : 0;
  }
  return v12;
}
