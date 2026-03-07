__int64 __fastcall Register_ControllerReset(__int64 a1, char a2)
{
  __m128i **v4; // rdi
  unsigned int *v5; // r15
  int v6; // eax
  int v7; // edx
  unsigned int v8; // ebx
  int v9; // ebp
  unsigned int v10; // r14d
  unsigned int v11; // ebx
  __int64 v12; // rdx
  int v13; // eax
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // rcx
  int v17; // edx
  int v18; // r8d
  int v19; // r9d
  __m128i *v20; // rcx
  int v22; // r9d
  int v23; // edx
  int v24; // eax
  void (*v25)(void); // rax
  int Ulong; // eax
  char v27; // [rsp+28h] [rbp-40h]
  union _LARGE_INTEGER Interval; // [rsp+70h] [rbp+8h] BYREF

  Interval.QuadPart = 0LL;
  v4 = (__m128i **)(a1 + 8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_((*v4)[4].m128i_i64[1], 4, 6, 60, (__int64)&WPP_9becb08c9a963bf1570437ff97ef33f0_Traceguids);
  if ( Controller_IsControllerAccessible((__int64)*v4) )
  {
    v5 = *(unsigned int **)(a1 + 32);
    v6 = Register_WaitForControllerReady(a1);
    v8 = v6;
    if ( v6 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v27 = v6;
        v22 = 61;
LABEL_23:
        LOBYTE(v7) = 2;
        WPP_RECORDER_SF_d(
          (*v4)[4].m128i_i64[1],
          v7,
          6,
          v22,
          (__int64)&WPP_9becb08c9a963bf1570437ff97ef33f0_Traceguids,
          v27);
      }
    }
    else
    {
      if ( a2 || (XilRegister_ReadUlong(a1, v5 + 1) & 1) != 0 )
      {
        Register_SetClearSSICPortUnused(a1, 0);
        XilRegister_WriteUlong(a1, v5, 2);
        v9 = 0;
        v10 = 1;
        if ( (_mm_srli_si128((*v4)[21], 8).m128i_u8[0] & 2) != 0 )
        {
          Interval.QuadPart = -10000LL;
          KeDelayExecutionThread(0, 0, &Interval);
          v9 = 1;
          v10 = 2;
        }
        v11 = v9;
        while ( (XilRegister_ReadUlong(a1, v5) & 2) != 0 )
        {
          if ( v9 == 100 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v12) = 1;
              WPP_RECORDER_SF_D(
                (*v4)[4].m128i_i64[1],
                v12,
                6,
                65,
                (__int64)&WPP_9becb08c9a963bf1570437ff97ef33f0_Traceguids,
                v11);
            }
            Etw_StartDeviceFail(*v4, v12, 3LL);
            return (unsigned int)-1073741823;
          }
          Interval.QuadPart = -10000LL * v10;
          KeDelayExecutionThread(0, 0, &Interval);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v23) = 4;
            WPP_RECORDER_SF_DD(
              (*v4)[4].m128i_i64[1],
              v23,
              6,
              66,
              (__int64)&WPP_9becb08c9a963bf1570437ff97ef33f0_Traceguids,
              v9,
              v10);
          }
          v11 += v10;
          v24 = 2 * v10;
          ++v9;
          if ( v10 == 16 )
            v24 = 16;
          v10 = v24;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v12) = 4;
          WPP_RECORDER_SF_D(
            (*v4)[4].m128i_i64[1],
            v12,
            6,
            63,
            (__int64)&WPP_9becb08c9a963bf1570437ff97ef33f0_Traceguids,
            v11);
        }
        if ( v11 > 0x32 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v12) = 2;
          WPP_RECORDER_SF_D(
            (*v4)[4].m128i_i64[1],
            v12,
            6,
            64,
            (__int64)&WPP_9becb08c9a963bf1570437ff97ef33f0_Traceguids,
            v11);
        }
        v13 = Register_WaitForControllerReady(a1);
        v8 = v13;
        if ( v13 >= 0 )
        {
          if ( ((*v4)[22].m128i_i8[0] & 0x10) != 0 )
          {
            Interval.QuadPart = -1000000LL;
            KeDelayExecutionThread(0, 0, &Interval);
          }
          v16 = (*v4)[10].m128i_i64[1];
          if ( v16 )
          {
            v25 = *(void (**)(void))(v16 + 32);
            if ( v25 )
              v25();
          }
          Register_RestoreRyzenFeatureBitsPostReset(a1, v7, v14, v15);
          v20 = *v4;
          if ( (_mm_srli_si128((*v4)[21], 8).m128i_u64[0] & 0x8000) != 0 )
          {
            if ( *(_DWORD *)(a1 + 20) < 0x80F0u || v20[20].m128i_i8[1] || v20[20].m128i_i8[0] != 1 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v17, v18, v19);
              if ( !KdRefreshDebuggerNotPresent() )
                __debugbreak();
            }
            else
            {
              Ulong = XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 24) + 33004LL));
              XilRegister_WriteUlong(a1, (_DWORD *)(*(_QWORD *)(a1 + 24) + 33004LL), Ulong | 1);
            }
          }
          return v8;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return v8;
        v27 = v13;
        v22 = 67;
        goto LABEL_23;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_((*v4)[4].m128i_i64[1], 2, 6, 62, (__int64)&WPP_9becb08c9a963bf1570437ff97ef33f0_Traceguids);
      return (unsigned int)-1073741823;
    }
  }
  else
  {
    return 0;
  }
  return v8;
}
