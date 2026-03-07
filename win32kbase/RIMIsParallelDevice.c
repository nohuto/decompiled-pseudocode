__int64 __fastcall RIMIsParallelDevice(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rsi
  char *v6; // r14
  char *v7; // r15
  _DWORD *v8; // rdi
  int v9; // r13d
  __int64 v10; // r9
  unsigned __int16 v11; // r12
  BOOL v12; // esi
  int v13; // eax
  int v14; // edx
  int v15; // r8d
  int v16; // ecx
  _WORD v18[2]; // [rsp+40h] [rbp-79h] BYREF
  unsigned __int16 v19; // [rsp+44h] [rbp-75h] BYREF
  unsigned __int16 v20; // [rsp+48h] [rbp-71h] BYREF
  _DWORD v21[3]; // [rsp+4Ch] [rbp-6Dh] BYREF
  __int64 v22; // [rsp+58h] [rbp-61h]
  char *v23; // [rsp+60h] [rbp-59h] BYREF
  char *v24; // [rsp+68h] [rbp-51h] BYREF
  __int64 v25; // [rsp+70h] [rbp-49h]
  _DWORD *v26; // [rsp+78h] [rbp-41h]
  _BYTE v27[80]; // [rsp+80h] [rbp-39h] BYREF

  v3 = 0;
  v26 = a3;
  v22 = a2;
  v5 = a1;
  v25 = a1;
  v23 = 0LL;
  v24 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  memset(v27, 0, 0x48uLL);
  v8 = *(_DWORD **)(v5 + 760);
  v18[0] = 1;
  v20 = 0;
  v19 = 0;
  v21[0] = 0;
  v9 = 0;
  if ( (unsigned int)rimHidP_GetLinkCollectionNodes(0LL, (__int64)v21, a2, v10) == -1072627705 && v21[0] > 1u )
  {
    v8[3] = v21[0];
    v11 = 1;
    if ( v21[0] > 1u )
    {
      v12 = 0;
      do
      {
        if ( (unsigned int)rimHidP_GetSpecificValueCaps(0LL, 13LL, v11, 81LL, (__int64)v27, (__int64)v18, v22) == 1114112 )
        {
          ++*v8;
          if ( v9 )
          {
            if ( v6 && !v12 )
              v12 = RIMValidateAllCollectionUsages((_DWORD)v6, v20, (_DWORD)v7, v19, v11, v22) == 0;
          }
          else
          {
            v13 = RIMRetrieveAllLinkIndexUsages(
                    v11,
                    v22,
                    (unsigned int)&v20,
                    (unsigned int)&v23,
                    (__int64)&v19,
                    (__int64)&v24);
            v6 = v23;
            if ( v13 != 1114112 )
            {
              if ( v23 )
              {
                v21[1] = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1542);
              }
              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
                || (LOBYTE(v14) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
              {
                LOBYTE(v14) = 0;
              }
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
                  26,
                  (__int64)&WPP_58303e67e31f33dd25135e0b9b8553e5_Traceguids);
              }
            }
            v7 = v24;
            v9 = 1;
          }
        }
        ++v11;
        v18[0] = 1;
      }
      while ( (unsigned int)v11 < v21[0] );
      v5 = v25;
      if ( v6 )
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v6);
      if ( v7 )
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v7);
    }
    v18[0] = 1;
    if ( (unsigned int)rimHidP_GetSpecificValueCaps(0LL, 13LL, 0LL, 84LL, (__int64)v27, (__int64)v18, v22) == 1114112 )
    {
      v8[8] |= 1u;
      *(_DWORD *)(v5 + 24) = 3;
    }
    if ( *v8 > 1u && (v8[8] & 1) == 0 )
      *(_DWORD *)(v5 + 24) = 4;
    if ( (unsigned int)(*(_DWORD *)(v5 + 24) - 3) <= 1 )
    {
      v16 = v21[0];
      *(_DWORD *)(v5 + 360) |= 2u;
      v3 = 1;
      *v26 = v16;
    }
  }
  return v3;
}
