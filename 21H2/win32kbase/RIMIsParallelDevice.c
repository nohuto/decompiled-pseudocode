/*
 * XREFs of RIMIsParallelDevice @ 0x1C0194800
 * Callers:
 *     RIMAssignTouchType @ 0x1C018FAFC (RIMAssignTouchType.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C019B9FC (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C018E898 (rimHidP_GetSpecificValueCaps.c)
 *     RIMRetrieveAllLinkIndexUsages @ 0x1C0194F6C (RIMRetrieveAllLinkIndexUsages.c)
 *     RIMValidateAllCollectionUsages @ 0x1C0195A6C (RIMValidateAllCollectionUsages.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMIsParallelDevice(__int64 a1, struct _HIDP_PREPARSED_DATA *a2, _DWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rsi
  char *v6; // r14
  char *v7; // r15
  _DWORD *v8; // rdi
  int v9; // r13d
  unsigned __int16 v10; // r12
  struct _HIDP_PREPARSED_DATA *v11; // rsi
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // eax
  int v17; // ecx
  _DWORD *v18; // rax
  unsigned __int16 v20[2]; // [rsp+40h] [rbp-79h] BYREF
  unsigned __int16 v21; // [rsp+44h] [rbp-75h] BYREF
  unsigned __int16 v22; // [rsp+48h] [rbp-71h] BYREF
  unsigned int v23; // [rsp+4Ch] [rbp-6Dh] BYREF
  int v24; // [rsp+50h] [rbp-69h]
  char *v25; // [rsp+58h] [rbp-61h] BYREF
  char *v26; // [rsp+60h] [rbp-59h] BYREF
  struct _HIDP_PREPARSED_DATA *v27; // [rsp+68h] [rbp-51h]
  __int64 v28; // [rsp+70h] [rbp-49h]
  _DWORD *v29; // [rsp+78h] [rbp-41h]
  struct _HIDP_VALUE_CAPS v30; // [rsp+80h] [rbp-39h] BYREF

  v3 = 0;
  v29 = a3;
  v27 = a2;
  v5 = a1;
  v28 = a1;
  v25 = 0LL;
  v26 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  memset(&v30, 0, sizeof(v30));
  v8 = *(_DWORD **)(v5 + 760);
  v20[0] = 1;
  v9 = 0;
  v22 = 0;
  v21 = 0;
  v23 = 0;
  v24 = 0;
  if ( gpfnHidP_GetLinkCollectionNodes && gpfnHidP_GetLinkCollectionNodes(0LL, &v23, a2) == -1072627705 && v23 > 1 )
  {
    v8[3] = v23;
    v10 = 1;
    if ( v23 > 1 )
    {
      v11 = v27;
      do
      {
        if ( rimHidP_GetSpecificValueCaps(HidP_Input, 0xDu, v10, 0x51u, &v30, v20, v11) == 1114112 )
        {
          ++*v8;
          if ( v9 )
          {
            if ( v6 && !v24 )
            {
              v16 = RIMValidateAllCollectionUsages((_DWORD)v6, v22, (_DWORD)v7, v21, v10, (__int64)v11);
              v17 = v24;
              if ( !v16 )
                v17 = 1;
              v24 = v17;
            }
          }
          else
          {
            v12 = RIMRetrieveAllLinkIndexUsages(
                    v10,
                    (_DWORD)v11,
                    (unsigned int)&v22,
                    (unsigned int)&v25,
                    (__int64)&v21,
                    (__int64)&v26);
            v6 = v25;
            if ( v12 != 1114112 )
            {
              if ( v25 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15);
              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
                || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
              {
                LOBYTE(v13) = 0;
              }
              if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                WPP_RECORDER_AND_TRACE_SF_(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v13,
                  v15,
                  (_DWORD)gRimLog,
                  3,
                  1,
                  26,
                  (__int64)&WPP_f09de9e540bb38e019706b431a7ac68e_Traceguids);
              }
            }
            v7 = v26;
            v9 = 1;
          }
        }
        ++v10;
        v20[0] = 1;
      }
      while ( v10 < v23 );
      v5 = v28;
      if ( v6 )
        NSInstrumentation::CLeakTrackingAllocator::Free(
          (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
          v6);
      if ( v7 )
        NSInstrumentation::CLeakTrackingAllocator::Free(
          (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
          v7);
    }
    v20[0] = 1;
    if ( rimHidP_GetSpecificValueCaps(HidP_Input, 0xDu, 0, 0x54u, &v30, v20, v27) == 1114112 )
    {
      v8[8] |= 1u;
      *(_DWORD *)(v5 + 24) = 3;
    }
    if ( *v8 > 1u && (v8[8] & 1) == 0 )
      *(_DWORD *)(v5 + 24) = 4;
    if ( (unsigned int)(*(_DWORD *)(v5 + 24) - 3) <= 1 )
    {
      v18 = v29;
      v3 = 1;
      *(_DWORD *)(v5 + 360) |= 2u;
      *v18 = v23;
    }
  }
  return v3;
}
