/*
 * XREFs of Register_RestoreRyzenFeatureBitsPostReset @ 0x1C0013A0C
 * Callers:
 *     Register_ControllerReset @ 0x1C0018518 (Register_ControllerReset.c)
 * Callees:
 *     XilRegister_ReadUlong @ 0x1C00180A0 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C0018428 (XilRegister_WriteUlong.c)
 *     WPP_RECORDER_SF_sds @ 0x1C0037A20 (WPP_RECORDER_SF_sds.c)
 */

char __fastcall Register_RestoreRyzenFeatureBitsPostReset(__int64 a1, int a2, int a3, int a4)
{
  unsigned __int16 v5; // ax
  int Ulong; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  union _LARGE_INTEGER Interval; // [rsp+60h] [rbp+8h] BYREF

  if ( _mm_srli_si128(*(__m128i *)(*(_QWORD *)(a1 + 8) + 336LL), 8).m128i_i8[0] < 0 )
  {
    if ( *(_DWORD *)(a1 + 20) < 0xC104u )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, a2, a3, a4);
      if ( !KdRefreshDebuggerNotPresent() )
        __debugbreak();
    }
    else
    {
      Ulong = XilRegister_ReadUlong(a1, *(_QWORD *)(a1 + 24) + 49408LL);
      XilRegister_WriteUlong(a1, *(_QWORD *)(a1 + 24) + 49408LL, Ulong & 0xFF0FFFFF);
    }
  }
  if ( (_mm_srli_si128(*(__m128i *)(*(_QWORD *)(a1 + 8) + 336LL), 8).m128i_u16[0] & 0x100) != 0 )
  {
    if ( *(_DWORD *)(a1 + 20) < 0xC110u )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, a2, a3, a4);
      if ( !KdRefreshDebuggerNotPresent() )
        __debugbreak();
    }
    else
    {
      v7 = XilRegister_ReadUlong(a1, *(_QWORD *)(a1 + 24) + 49408LL);
      XilRegister_WriteUlong(a1, *(_QWORD *)(a1 + 24) + 49408LL, v7 & 0xFF0FFFFF);
      v8 = XilRegister_ReadUlong(a1, *(_QWORD *)(a1 + 24) + 49420LL);
      XilRegister_WriteUlong(a1, *(_QWORD *)(a1 + 24) + 49420LL, v8 & 0xFBFFFFFF);
    }
  }
  v5 = _mm_srli_si128(*(__m128i *)(*(_QWORD *)(a1 + 8) + 336LL), 8).m128i_u16[0];
  if ( (v5 & 0x200) != 0 )
  {
    if ( *(_DWORD *)(a1 + 20) < 0xC104u )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, a2, a3, a4);
      LOBYTE(v5) = KdRefreshDebuggerNotPresent();
      if ( !(_BYTE)v5 )
        __debugbreak();
    }
    else
    {
      v9 = XilRegister_ReadUlong(a1, *(_QWORD *)(a1 + 24) + 49408LL);
      XilRegister_WriteUlong(a1, *(_QWORD *)(a1 + 24) + 49408LL, v9 | 0xF00000u);
      Interval.QuadPart = -200LL;
      KeDelayExecutionThread(0, 0, &Interval);
      v10 = XilRegister_ReadUlong(a1, *(_QWORD *)(a1 + 24) + 49408LL);
      LOBYTE(v5) = XilRegister_WriteUlong(a1, *(_QWORD *)(a1 + 24) + 49408LL, v10 & 0xFF0FFFFF);
    }
  }
  return v5;
}
