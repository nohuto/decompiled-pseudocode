_UNKNOWN **__fastcall ACPIDeviceDiscoverDependencies(_QWORD *a1, _QWORD *a2)
{
  _UNKNOWN **result; // rax
  __int64 v3; // r15
  _QWORD *v6; // rbx
  __int64 v7; // rdi
  _QWORD *v8; // rsi
  __int64 v9; // rdx
  int v10; // edx
  int v11; // edx
  _QWORD *v12; // r8
  _QWORD *v13; // rdx
  _QWORD *v14; // rcx
  _QWORD *v15; // rdx
  int v16; // r9d
  int v17; // edx
  _QWORD *v18; // r8
  _QWORD *v19; // rdx
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF
  int v21; // [rsp+60h] [rbp+8h] BYREF
  int v22; // [rsp+70h] [rbp+18h] BYREF

  result = &retaddr;
  v3 = a1[5];
  v22 = 0;
  v21 = 0;
  if ( *(_QWORD *)(v3 + 784) )
  {
    v6 = (_QWORD *)*a2;
    while ( v6 != a2 )
    {
      v7 = v6[5];
      v8 = v6;
      v6 = (_QWORD *)*v6;
      if ( a1 == v8 )
        continue;
      if ( (v8[7] & 0x4000000) != 0 )
        continue;
      v9 = *(_QWORD *)(v7 + 784);
      if ( !v9 )
        continue;
      if ( (*(_BYTE *)(v3 + 1008) & 0x40) != 0 )
      {
        result = (_UNKNOWN **)IoTestDependency(*(_QWORD *)(v3 + 784), v9, &v22, &v21);
        if ( (int)result < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v10) = 2;
            result = (_UNKNOWN **)WPP_RECORDER_SF_d(
                                    WPP_GLOBAL_Control->DeviceExtension,
                                    v10,
                                    21,
                                    20,
                                    (__int64)&WPP_afb93ce9a898342faba18bc7242ff62e_Traceguids,
                                    (char)result);
          }
        }
        else if ( (v21 & 1) != 0 )
        {
          result = (_UNKNOWN **)ExAllocateFromNPagedLookasideList(&RequestDependencyLookAsideList);
          if ( result )
          {
            v12 = (_QWORD *)a1[9];
            v13 = result + 2;
            if ( (_QWORD *)*v12 != a1 + 8 )
              goto LABEL_31;
            *v13 = a1 + 8;
            result[3] = v12;
            *v12 = v13;
            a1[9] = v13;
            v14 = v8 + 10;
LABEL_12:
            v15 = (_QWORD *)v14[1];
            if ( (_QWORD *)*v15 != v14 )
              goto LABEL_31;
            *result = v14;
            result[1] = v15;
            *v15 = result;
            v14[1] = result;
            continue;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v16 = 19;
LABEL_26:
            LOBYTE(v11) = 2;
            result = (_UNKNOWN **)WPP_RECORDER_SF_(
                                    WPP_GLOBAL_Control->DeviceExtension,
                                    v11,
                                    21,
                                    v16,
                                    (__int64)&WPP_afb93ce9a898342faba18bc7242ff62e_Traceguids);
            continue;
          }
          continue;
        }
      }
      if ( (*(_BYTE *)(v7 + 1008) & 0x40) != 0 )
      {
        result = (_UNKNOWN **)IoTestDependency(*(_QWORD *)(v7 + 784), *(_QWORD *)(v3 + 784), &v22, &v21);
        if ( (int)result < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v17) = 2;
            result = (_UNKNOWN **)WPP_RECORDER_SF_d(
                                    WPP_GLOBAL_Control->DeviceExtension,
                                    v17,
                                    21,
                                    22,
                                    (__int64)&WPP_afb93ce9a898342faba18bc7242ff62e_Traceguids,
                                    (char)result);
          }
          continue;
        }
        if ( (v21 & 1) != 0 )
        {
          result = (_UNKNOWN **)ExAllocateFromNPagedLookasideList(&RequestDependencyLookAsideList);
          if ( result )
          {
            v18 = (_QWORD *)v8[9];
            v19 = result + 2;
            if ( (_QWORD *)*v18 != v8 + 8 )
LABEL_31:
              __fastfail(3u);
            *v19 = v8 + 8;
            result[3] = v18;
            *v18 = v19;
            v8[9] = v19;
            v14 = a1 + 10;
            goto LABEL_12;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v16 = 21;
            goto LABEL_26;
          }
        }
      }
    }
  }
  return result;
}
