/*
 * XREFs of RIMGetPropertyCount @ 0x1C018A2D0
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C0187070 (RIMCreatePointerDeviceInfo.c)
 *     RIMRetrieveLinkCollection @ 0x1C018BDCC (RIMRetrieveLinkCollection.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C0194488 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     Win32FreePool @ 0x1C0038570 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C004F080 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     _IsValidParallelValue @ 0x1C00D3DE4 (_IsValidParallelValue.c)
 *     Feature_Backport_FixGetRawPointerDeviceData__private_IsEnabledDeviceUsage @ 0x1C00D3EF4 (Feature_Backport_FixGetRawPointerDeviceData__private_IsEnabledDeviceUsage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00D6A00 (memset.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C01852B0 (rimHidP_GetSpecificValueCaps.c)
 */

_BOOL8 __fastcall RIMGetPropertyCount(__int64 a1, unsigned __int16 a2, unsigned __int16 a3, unsigned __int16 *a4)
{
  unsigned int v8; // edi
  unsigned __int16 v9; // r12
  int SpecificValueCaps; // ebx
  __int64 v11; // rax
  unsigned __int16 v12; // si
  unsigned __int16 v13; // cx
  int v14; // edx
  int v15; // r8d
  char *v16; // r15
  unsigned __int16 *v17; // r14
  unsigned __int16 v18; // r14
  unsigned __int16 *v19; // rsi
  int v20; // ebx
  __int64 v21; // rax
  unsigned __int16 v22; // r12
  unsigned __int16 v23; // r14
  unsigned __int16 *v24; // rbx
  _WORD v26[2]; // [rsp+40h] [rbp-79h] BYREF
  unsigned __int16 v27; // [rsp+44h] [rbp-75h]
  unsigned __int16 v28; // [rsp+48h] [rbp-71h] BYREF
  int v29; // [rsp+50h] [rbp-69h]
  __int16 v30; // [rsp+54h] [rbp-65h] BYREF
  __int16 v31[2]; // [rsp+58h] [rbp-61h] BYREF
  unsigned __int16 v32; // [rsp+5Ch] [rbp-5Dh]
  int v33; // [rsp+60h] [rbp-59h]
  unsigned __int16 *v34; // [rsp+68h] [rbp-51h]
  _BYTE v35[80]; // [rsp+70h] [rbp-49h] BYREF

  v32 = a2;
  v28 = a3;
  v26[0] = a3;
  v34 = a4;
  v8 = 0;
  memset(v35, 0, 0x48uLL);
  v31[0] = 1;
  v9 = a2;
  v30 = 0;
  SpecificValueCaps = -1073741668;
  v33 = 0;
  if ( !a3 )
  {
    v29 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2265);
  }
  v11 = *(_QWORD *)(a1 + 760);
  v12 = a3;
  v27 = a3;
  if ( v11 )
  {
    v13 = *(_WORD *)(v11 + 8);
    v27 = a3;
    if ( v13 )
    {
      v9 = v13;
      SpecificValueCaps = rimHidP_GetSpecificValueCaps(0LL, 0LL, v13, 0LL, 0LL, (__int64)&v30, (__int64)a4);
      if ( SpecificValueCaps == -1072627705 )
      {
        v21 = *(_QWORD *)(a1 + 760);
        v26[0] = v30;
        v12 = v30 + v28;
        v27 = v30 + v28;
        *(_WORD *)(v21 + 10) = v30;
        v33 = 1;
      }
      else
      {
        LOBYTE(v14) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
        if ( (_BYTE)v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v14,
            v15,
            (_DWORD)gRimLog,
            3,
            1,
            30,
            (__int64)&WPP_30f9ddf97da63da78d93eb777283153b_Traceguids);
        }
        v27 = a3;
      }
    }
  }
  if ( v12 > 1u )
  {
    v16 = (char *)Win32AllocPoolZInit(72LL * v12, 0x63707352u);
    if ( v16 )
    {
      v17 = v34;
      SpecificValueCaps = rimHidP_GetSpecificValueCaps(0LL, 1LL, v9, 48LL, (__int64)v35, (__int64)v31, (__int64)v34);
      if ( SpecificValueCaps >= 0 )
      {
        *(_BYTE *)(a1 + 824) = v35[2];
        v29 = rimHidP_GetSpecificValueCaps(0LL, 0LL, v9, 0LL, (__int64)v16, (__int64)v26, (__int64)v17);
        SpecificValueCaps = v29;
        if ( v29 >= 0 )
        {
          v18 = 0;
          if ( v26[0] )
          {
            v19 = v34;
            v20 = v33;
            do
            {
              if ( v16[72 * v18 + 2] == v35[2]
                && (!(unsigned int)Feature_Backport_FixGetRawPointerDeviceData__private_IsEnabledDeviceUsage()
                 || v20
                 || (*(_DWORD *)(a1 + 360) & 2) == 0
                 || (unsigned int)IsValidParallelValue(a1, (unsigned __int16 *)&v16[72 * v18], (__int64)v19)) )
              {
                ++v8;
              }
              ++v18;
            }
            while ( v18 < v26[0] );
            SpecificValueCaps = v29;
            v12 = v27;
          }
          if ( v33 )
          {
            v29 = rimHidP_GetSpecificValueCaps(
                    0LL,
                    0LL,
                    v32,
                    0LL,
                    (__int64)&v16[72 * v26[0]],
                    (__int64)&v28,
                    (__int64)v34);
            SpecificValueCaps = v29;
            if ( v29 >= 0 )
            {
              v22 = 0;
              v23 = v26[0];
              if ( v28 )
              {
                v24 = v34;
                do
                {
                  if ( v23 >= v12 )
                    break;
                  v34 = (unsigned __int16 *)&v16[72 * v23];
                  if ( *((_BYTE *)v34 + 2) == v35[2]
                    && (!(unsigned int)Feature_Backport_FixGetRawPointerDeviceData__private_IsEnabledDeviceUsage()
                     || (*(_DWORD *)(a1 + 360) & 2) == 0
                     || (unsigned int)IsValidParallelValue(a1, v34, (__int64)v24)) )
                  {
                    ++v8;
                  }
                  ++v23;
                  ++v22;
                }
                while ( v22 < v28 );
                SpecificValueCaps = v29;
              }
            }
          }
          if ( v8 <= 1 )
          {
            v29 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2378);
          }
          *(_DWORD *)(a1 + 384) = v8;
        }
      }
      Win32FreePool(v16);
    }
  }
  return SpecificValueCaps >= 0;
}
