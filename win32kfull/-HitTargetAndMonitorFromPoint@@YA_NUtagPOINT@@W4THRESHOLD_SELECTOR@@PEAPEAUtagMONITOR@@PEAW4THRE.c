char __fastcall HitTargetAndMonitorFromPoint(__int64 a1, int a2, __int64 *a3, _DWORD *a4)
{
  __int64 v4; // rsi
  int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rcx
  __m128i v10; // xmm1
  __m128i *v11; // rcx
  __m128i v12; // xmm0
  int v13; // edx
  int v14; // r9d
  int v15; // r8d
  int v16; // r10d
  int v17; // ecx
  PDEVICE_OBJECT v18; // r9
  char v19; // r10
  char v20; // r10
  char v22; // r11
  char v23; // r8
  int v24; // [rsp+64h] [rbp-44h]
  __m128i v25; // [rsp+68h] [rbp-40h] BYREF
  __int128 v26; // [rsp+78h] [rbp-30h] BYREF

  v4 = a2;
  v24 = HIDWORD(a1);
  v7 = a1;
  v8 = MonitorFromPoint(a1, 2u, 0x12u);
  *a3 = v8;
  v9 = *(_QWORD *)(v8 + 40);
  v10 = *(__m128i *)(v9 + 44);
  v26 = *(_OWORD *)(v9 + 28);
  v25 = v10;
  v11 = &v25;
  if ( *(_DWORD *)*gpDispInfo > 1u )
    v11 = (__m128i *)&v26;
  v12 = *v11;
  v13 = *((unsigned __int8 *)&unk_1C035C1E0 + 4 * v4 + 2);
  v14 = *((unsigned __int8 *)&unk_1C035C1E0 + 4 * v4);
  v15 = *((unsigned __int8 *)&unk_1C035C1E0 + 4 * v4 + 3);
  v16 = *((unsigned __int8 *)&unk_1C035C1E0 + 4 * v4 + 1);
  v17 = _mm_cvtsi128_si32(*v11);
  v25 = v12;
  if ( v7 < v16 + v17 )
  {
    *a4 = 1;
    v18 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v13) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (LOBYTE(v15) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      LOBYTE(v15) = 0;
    }
    if ( !(_BYTE)v13 && !(_BYTE)v15 )
      return 1;
    goto LABEL_47;
  }
  if ( v7 >= v25.m128i_i32[2] - v13 )
  {
    *a4 = 2;
    v18 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v13) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (LOBYTE(v15) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      LOBYTE(v15) = 0;
    }
    if ( !(_BYTE)v13 && !(_BYTE)v15 )
      return 1;
    goto LABEL_47;
  }
  v13 = v24;
  if ( v24 < v14 + v25.m128i_i32[1] )
  {
    *a4 = 0;
    v18 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (v19 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      v19 = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (LOBYTE(v15) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      LOBYTE(v15) = 0;
    }
    if ( !v19 && !(_BYTE)v15 )
      return 1;
    LOBYTE(v13) = v19;
    goto LABEL_47;
  }
  if ( v24 >= v25.m128i_i32[3] - v15 )
  {
    *a4 = 3;
    v18 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (v20 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      v20 = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (LOBYTE(v15) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      LOBYTE(v15) = 0;
    }
    if ( !v20 && !(_BYTE)v15 )
      return 1;
    LOBYTE(v13) = v20;
LABEL_47:
    WPP_RECORDER_AND_TRACE_SF_ddd(v18->AttachedDevice, v13, v15, (_DWORD)v18);
    return 1;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v22 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v22 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v23 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v23 = 0;
  }
  if ( v22 || v23 )
    WPP_RECORDER_AND_TRACE_SF_dd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v22,
      v23,
      (__int64)gFullLog,
      5u,
      1u,
      0x20u,
      (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids,
      v7,
      v24);
  *a4 = 4;
  return 0;
}
