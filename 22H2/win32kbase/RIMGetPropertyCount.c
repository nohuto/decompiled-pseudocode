/*
 * XREFs of RIMGetPropertyCount @ 0x1C015E824
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C015BF5C (RIMCreatePointerDeviceInfo.c)
 *     RIMRetrieveLinkCollection @ 0x1C015F860 (RIMRetrieveLinkCollection.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C0167888 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C002C2D0 (Win32AllocPool.c)
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00CF8C0 (memset.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C0163548 (rimHidP_GetSpecificValueCaps.c)
 */

_BOOL8 __fastcall RIMGetPropertyCount(__int64 a1, unsigned __int16 a2, unsigned __int16 a3, __int64 a4)
{
  __int64 v6; // r13
  unsigned int v8; // r14d
  unsigned __int16 v9; // r15
  int SpecificValueCaps; // ebx
  __int64 v11; // rax
  unsigned __int16 v12; // di
  unsigned __int16 v13; // cx
  int v14; // edx
  __int64 v15; // rsi
  _BYTE *v16; // rax
  __int64 v17; // rdx
  unsigned __int16 v18; // dx
  __int64 v20; // rax
  unsigned __int16 v21; // [rsp+40h] [rbp-79h] BYREF
  unsigned __int16 v22; // [rsp+48h] [rbp-71h] BYREF
  unsigned __int16 v23[2]; // [rsp+50h] [rbp-69h] BYREF
  int v24; // [rsp+54h] [rbp-65h]
  __int16 v25[2]; // [rsp+58h] [rbp-61h] BYREF
  unsigned __int16 v26; // [rsp+5Ch] [rbp-5Dh]
  int v27; // [rsp+60h] [rbp-59h]
  __int64 v28; // [rsp+68h] [rbp-51h]
  _BYTE v29[80]; // [rsp+70h] [rbp-49h] BYREF

  v26 = a2;
  v28 = a1;
  v22 = a3;
  v6 = a1;
  v21 = a3;
  v8 = 0;
  memset(v29, 0, 0x48uLL);
  v23[0] = 0;
  v25[0] = 1;
  v9 = a2;
  v24 = 0;
  SpecificValueCaps = -1073741668;
  if ( !a3 )
  {
    v27 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 2205);
  }
  v11 = *(_QWORD *)(v6 + 712);
  v12 = a3;
  if ( v11 )
  {
    v13 = *(_WORD *)(v11 + 8);
    if ( v13 )
    {
      v9 = *(_WORD *)(v11 + 8);
      SpecificValueCaps = rimHidP_GetSpecificValueCaps(0, 0, v13, 0, 0LL, (__int64)v23, a4);
      if ( SpecificValueCaps == -1072627705 )
      {
        v20 = *(_QWORD *)(v6 + 712);
        v12 = v23[0] + v22;
        v21 = v23[0];
        v24 = 1;
        *(_WORD *)(v20 + 10) = v23[0];
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = 3;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v14, 1, 30, (__int64)&WPP_55b2fa568459373c5b96b2ba3eae63fb_Traceguids);
      }
    }
  }
  if ( v12 > 1u )
  {
    v15 = Win32AllocPool(72LL * v12, 0x63707352u);
    if ( v15 )
    {
      SpecificValueCaps = rimHidP_GetSpecificValueCaps(0, 1, v9, 48, (__int64)v29, (__int64)v25, a4);
      if ( SpecificValueCaps >= 0 )
      {
        *(_BYTE *)(v6 + 776) = v29[2];
        SpecificValueCaps = rimHidP_GetSpecificValueCaps(0, 0, v9, 0, v15, (__int64)&v21, a4);
        if ( SpecificValueCaps >= 0 )
        {
          if ( v21 )
          {
            v16 = (_BYTE *)(v15 + 2);
            v17 = v21;
            do
            {
              if ( *v16 == v29[2] )
                ++v8;
              v16 += 72;
              --v17;
            }
            while ( v17 );
          }
          if ( v24 )
          {
            SpecificValueCaps = rimHidP_GetSpecificValueCaps(0, 0, v26, 0, v15 + 72LL * v21, (__int64)&v22, a4);
            if ( SpecificValueCaps >= 0 )
            {
              v18 = v21;
              if ( v22 )
              {
                do
                {
                  if ( v18 >= v12 )
                    break;
                  if ( *(_BYTE *)(v15 + 72LL * v18 + 2) == v29[2] )
                    ++v8;
                  ++v18;
                }
                while ( (unsigned __int16)(v18 - v21) < v22 );
                v6 = v28;
              }
            }
          }
          if ( v8 <= 1 )
          {
            v24 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 2289);
          }
          *(_DWORD *)(v6 + 336) = v8;
        }
      }
      Win32FreePool(v15);
    }
  }
  return SpecificValueCaps >= 0;
}
