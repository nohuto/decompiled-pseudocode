/*
 * XREFs of Register_ControllerReset @ 0x1C0010D88
 * Callers:
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C000B4D0 (Controller_WdfEvtDeviceD0Exit.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0014CE0 (Controller_WdfEvtDeviceD0Entry.c)
 *     Controller_InternalReset @ 0x1C00322D8 (Controller_InternalReset.c)
 *     Register_PrepareHardware @ 0x1C006CD24 (Register_PrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0005520 (WPP_RECORDER_SF_dd.c)
 *     Controller_IsControllerAccessible @ 0x1C0007380 (Controller_IsControllerAccessible.c)
 *     WPP_RECORDER_SF_ @ 0x1C000A0B8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C000F118 (WPP_RECORDER_SF_d.c)
 *     Register_RestoreRyzenFeatureBitsPostReset @ 0x1C000F3B8 (Register_RestoreRyzenFeatureBitsPostReset.c)
 *     Register_SetClearSSICPortUnused @ 0x1C000F58C (Register_SetClearSSICPortUnused.c)
 *     Register_WaitForControllerReady @ 0x1C001102C (Register_WaitForControllerReady.c)
 *     XilRegister_ReadUlong @ 0x1C0013DA0 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C0013F1C (XilRegister_WriteUlong.c)
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_sds @ 0x1C0035E5C (WPP_RECORDER_SF_sds.c)
 *     Etw_StartDeviceFail @ 0x1C0048624 (Etw_StartDeviceFail.c)
 */

__int64 __fastcall Register_ControllerReset(__int64 a1, char a2)
{
  __int64 v4; // rbp
  int v5; // eax
  int v6; // edx
  unsigned int v7; // edi
  int v8; // esi
  unsigned int v9; // r14d
  unsigned int v10; // edi
  __int64 v11; // rdx
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // edx
  int v17; // r8d
  int v18; // r9d
  __m128i *v19; // rcx
  int v21; // r9d
  int v22; // edx
  int v23; // eax
  void (*v24)(void); // rax
  int Ulong; // eax
  union _LARGE_INTEGER Interval; // [rsp+70h] [rbp+8h] BYREF

  Interval.QuadPart = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      4,
      6,
      60,
      (__int64)&WPP_1c1335c0938732c3a8bc02d386676659_Traceguids);
  if ( Controller_IsControllerAccessible(*(_QWORD *)(a1 + 8)) )
  {
    v4 = *(_QWORD *)(a1 + 32);
    v5 = Register_WaitForControllerReady(a1);
    v7 = v5;
    if ( v5 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v21 = 61;
LABEL_23:
        LOBYTE(v6) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          v6,
          6,
          v21,
          (__int64)&WPP_1c1335c0938732c3a8bc02d386676659_Traceguids,
          v5);
      }
    }
    else
    {
      if ( a2 || (XilRegister_ReadUlong(a1, v4 + 4) & 1) != 0 )
      {
        Register_SetClearSSICPortUnused(a1, 0);
        XilRegister_WriteUlong(a1, v4, 2LL);
        v8 = 0;
        v9 = 1;
        if ( (_mm_srli_si128(*(__m128i *)(*(_QWORD *)(a1 + 8) + 336LL), 8).m128i_u8[0] & 2) != 0 )
        {
          Interval.QuadPart = -10000LL;
          KeDelayExecutionThread(0, 0, &Interval);
          v8 = 1;
          v9 = 2;
        }
        v10 = v8;
        while ( (XilRegister_ReadUlong(a1, v4) & 2) != 0 )
        {
          if ( v8 == 100 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v11) = 1;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
                v11,
                6,
                65,
                (__int64)&WPP_1c1335c0938732c3a8bc02d386676659_Traceguids,
                v10);
            }
            Etw_StartDeviceFail(*(_QWORD *)(a1 + 8), v11, 3LL);
            return (unsigned int)-1073741823;
          }
          Interval.QuadPart = -10000LL * v9;
          KeDelayExecutionThread(0, 0, &Interval);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v22) = 4;
            WPP_RECORDER_SF_dd(
              *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
              v22,
              6,
              66,
              (__int64)&WPP_1c1335c0938732c3a8bc02d386676659_Traceguids,
              v8,
              v9);
          }
          v10 += v9;
          v23 = 2 * v9;
          ++v8;
          if ( v9 == 16 )
            v23 = 16;
          v9 = v23;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v11) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
            v11,
            6,
            63,
            (__int64)&WPP_1c1335c0938732c3a8bc02d386676659_Traceguids,
            v10);
        }
        if ( v10 > 0x32 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v11) = 2;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
            v11,
            6,
            64,
            (__int64)&WPP_1c1335c0938732c3a8bc02d386676659_Traceguids,
            v10);
        }
        v5 = Register_WaitForControllerReady(a1);
        v7 = v5;
        if ( v5 >= 0 )
        {
          v14 = *(_QWORD *)(a1 + 8);
          if ( (*(_BYTE *)(v14 + 352) & 0x10) != 0 )
          {
            Interval.QuadPart = -1000000LL;
            KeDelayExecutionThread(0, 0, &Interval);
            v14 = *(_QWORD *)(a1 + 8);
          }
          v15 = *(_QWORD *)(v14 + 168);
          if ( v15 )
          {
            v24 = *(void (**)(void))(v15 + 32);
            if ( v24 )
              v24();
          }
          Register_RestoreRyzenFeatureBitsPostReset(a1, v6, v12, v13);
          v19 = *(__m128i **)(a1 + 8);
          if ( (_mm_srli_si128(v19[21], 8).m128i_u64[0] & 0x8000) != 0 )
          {
            if ( *(_DWORD *)(a1 + 20) < 0x80F0u || v19[20].m128i_i8[1] || v19[20].m128i_i8[0] != 1 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v16, v17, v18);
              if ( !KdRefreshDebuggerNotPresent() )
                __debugbreak();
            }
            else
            {
              Ulong = XilRegister_ReadUlong(a1, *(_QWORD *)(a1 + 24) + 33004LL);
              XilRegister_WriteUlong(a1, *(_QWORD *)(a1 + 24) + 33004LL, Ulong | 1u);
            }
          }
          return v7;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return v7;
        v21 = 67;
        goto LABEL_23;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          2,
          6,
          62,
          (__int64)&WPP_1c1335c0938732c3a8bc02d386676659_Traceguids);
      return (unsigned int)-1073741823;
    }
  }
  else
  {
    return 0;
  }
  return v7;
}
