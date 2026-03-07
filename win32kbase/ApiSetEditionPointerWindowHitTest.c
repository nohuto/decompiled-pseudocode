_OWORD *__fastcall ApiSetEditionPointerWindowHitTest(
        _OWORD *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        int a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  __int64 v17; // rdx
  __int64 v18; // r8
  PDEVICE_OBJECT v19; // rcx
  char v20; // bl
  void *v21; // r9
  _OWORD *v22; // rax
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  void *v29; // r8
  char v31; // [rsp+70h] [rbp-98h] BYREF

  memset(a1, 0, 0x70uLL);
  v19 = WPP_GLOBAL_Control;
  v20 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
    || (LOBYTE(v17) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v17) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v18) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(v18) = 0;
  }
  v21 = &WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids;
  if ( (_BYTE)v17 || (_BYTE)v18 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v17,
      v18,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      212,
      (__int64)&WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids);
  if ( qword_1C02D7A58 && (int)qword_1C02D7A58(v19, v17, v18, v21) >= 0 )
  {
    v22 = (_OWORD *)EditionPointerWindowHitTest((unsigned int)&v31, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
    v23 = v22[1];
    *a1 = *v22;
    v24 = v22[2];
    a1[1] = v23;
    v25 = v22[3];
    a1[2] = v24;
    v26 = v22[4];
    a1[3] = v25;
    v27 = v22[5];
    a1[4] = v26;
    v28 = v22[6];
    a1[5] = v27;
    a1[6] = v28;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
    || (LOBYTE(v17) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v17) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v20 = 0;
  if ( (_BYTE)v17 || v20 )
  {
    v29 = &WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids;
    LOBYTE(v29) = v20;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v17,
      (_DWORD)v29,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      213,
      (__int64)&WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids);
  }
  return a1;
}
