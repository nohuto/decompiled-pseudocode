/*
 * XREFs of UsbhQueryGlobalLegacyDeviceValue @ 0x1C00460D0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0023580 (memmove.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E4E8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E5BC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_q @ 0x1C002EA5C (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_S @ 0x1C003B830 (WPP_RECORDER_SF_S.c)
 */

__int64 __fastcall UsbhQueryGlobalLegacyDeviceValue(
        __int64 a1,
        __int64 a2,
        const void *a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  size_t v6; // r14
  int v8; // ebp
  unsigned int v10; // ebx
  int v11; // ebp
  unsigned int v12; // eax
  void *v13; // rcx
  void *Pool2; // rax
  __int64 v15; // rsi
  void *v16; // rbp
  __int64 v18; // [rsp+28h] [rbp-30h]

  v6 = a4;
  v8 = a2;
  v10 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        0,
        1u,
        0x41u,
        (__int64)&WPP_290dcc7ac903398322657943f635c8d9_Traceguids);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_S(
          WPP_GLOBAL_Control->DeviceExtension,
          a2,
          (_DWORD)a3,
          66,
          (__int64)&WPP_290dcc7ac903398322657943f635c8d9_Traceguids,
          a1);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LODWORD(v18) = v8;
          WPP_RECORDER_SF_d(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            0,
            1u,
            0x43u,
            (__int64)&WPP_290dcc7ac903398322657943f635c8d9_Traceguids,
            v18);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_q(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              a2,
              1u,
              0x44u,
              (__int64)&WPP_290dcc7ac903398322657943f635c8d9_Traceguids,
              a3);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              LODWORD(v18) = v6;
              WPP_RECORDER_SF_d(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                0,
                1u,
                0x45u,
                (__int64)&WPP_290dcc7ac903398322657943f635c8d9_Traceguids,
                v18);
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                WPP_RECORDER_SF_q(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  a2,
                  1u,
                  0x46u,
                  (__int64)&WPP_290dcc7ac903398322657943f635c8d9_Traceguids,
                  a5);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                && LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                WPP_RECORDER_SF_q(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  a2,
                  1u,
                  0x47u,
                  (__int64)&WPP_290dcc7ac903398322657943f635c8d9_Traceguids,
                  a6);
              }
            }
          }
        }
      }
    }
  }
  v11 = v8 - 1;
  if ( !v11 )
  {
    if ( *(_DWORD *)a6 > 1u )
      return v10;
    if ( (_DWORD)v6 && a3 && *(_QWORD *)(a6 + 8) )
    {
      Pool2 = (void *)ExAllocatePool2(64LL, v6, 1112885333LL);
      v15 = *(_QWORD *)(a6 + 8);
      v16 = Pool2;
      if ( Pool2 )
      {
        memmove(Pool2, a3, v6);
        *(_QWORD *)(v15 + 8) = v16;
        *(_DWORD *)(v15 + 4) = v6;
      }
      else
      {
        return (unsigned int)-1073741670;
      }
      return v10;
    }
    return (unsigned int)-1073741811;
  }
  v12 = 2;
  if ( v11 != 2 )
    return (unsigned int)-1073741811;
  if ( *(_DWORD *)a6 != 3 )
    return v10;
  if ( (unsigned int)v6 <= 2 )
    v12 = v6;
  if ( !v12 )
    return (unsigned int)-1073741811;
  if ( !a3 )
    return (unsigned int)-1073741811;
  v13 = *(void **)(a6 + 8);
  if ( !v13 )
    return (unsigned int)-1073741811;
  if ( v13 != a3 )
    memmove(v13, a3, v12);
  return v10;
}
