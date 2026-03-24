/*
 * XREFs of RIMIsParallelDevice @ 0x1C015F010
 * Callers:
 *     RIMAssignTouchType @ 0x1C015BBC8 (RIMAssignTouchType.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C0167958 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00CF780 (memset.c)
 *     RIMRetrieveAllLinkIndexUsages @ 0x1C015F66C (RIMRetrieveAllLinkIndexUsages.c)
 *     RIMValidateAllCollectionUsages @ 0x1C015FDC8 (RIMValidateAllCollectionUsages.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C0163618 (rimHidP_GetSpecificValueCaps.c)
 */

__int64 __fastcall RIMIsParallelDevice(__int64 a1, __int64 a2, unsigned int *a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rsi
  __int64 v6; // r14
  __int64 v7; // r12
  _DWORD *v8; // rdi
  unsigned int v9; // eax
  int v10; // r13d
  int v11; // ecx
  unsigned __int16 v12; // r15
  __int64 v13; // rsi
  int v14; // eax
  int v15; // edx
  int v16; // eax
  int v17; // ecx
  unsigned int v18; // ecx
  _WORD v20[2]; // [rsp+40h] [rbp-79h] BYREF
  unsigned __int16 v21; // [rsp+44h] [rbp-75h] BYREF
  unsigned __int16 v22; // [rsp+48h] [rbp-71h] BYREF
  unsigned int v23; // [rsp+4Ch] [rbp-6Dh] BYREF
  int v24; // [rsp+50h] [rbp-69h]
  int v25; // [rsp+54h] [rbp-65h]
  __int64 v26; // [rsp+58h] [rbp-61h] BYREF
  __int64 v27; // [rsp+60h] [rbp-59h] BYREF
  __int64 v28; // [rsp+68h] [rbp-51h]
  __int64 v29; // [rsp+70h] [rbp-49h]
  unsigned int *v30; // [rsp+78h] [rbp-41h]
  _BYTE v31[80]; // [rsp+80h] [rbp-39h] BYREF

  v3 = 0;
  v30 = a3;
  v28 = a2;
  v5 = a1;
  v29 = a1;
  v26 = 0LL;
  v27 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  memset(v31, 0, 0x48uLL);
  v8 = *(_DWORD **)(v5 + 712);
  v9 = 0;
  v22 = 0;
  v10 = 0;
  v21 = 0;
  v20[0] = 1;
  v23 = 0;
  v24 = 0;
  if ( gpfnHidP_GetLinkCollectionNodes )
  {
    v11 = ((__int64 (__fastcall *)(_QWORD, unsigned int *, __int64))gpfnHidP_GetLinkCollectionNodes)(0LL, &v23, a2);
    v9 = v23;
  }
  else
  {
    v11 = -1073741637;
  }
  if ( v11 == -1072627705 && v9 > 1 )
  {
    v8[3] = v9;
    v12 = 1;
    if ( v23 > 1 )
    {
      v13 = v28;
      do
      {
        if ( (unsigned int)rimHidP_GetSpecificValueCaps(0, 13, v12, 81, (__int64)v31, (__int64)v20, v13) == 1114112 )
        {
          ++*v8;
          if ( v10 )
          {
            if ( v6 && !v24 )
            {
              v16 = RIMValidateAllCollectionUsages(v6, v22, v7, v21, v12, v13);
              v17 = v24;
              if ( !v16 )
                v17 = 1;
              v24 = v17;
            }
          }
          else
          {
            v14 = RIMRetrieveAllLinkIndexUsages(
                    v12,
                    v13,
                    (unsigned int)&v22,
                    (unsigned int)&v26,
                    (__int64)&v21,
                    (__int64)&v27);
            v6 = v26;
            if ( v14 != 1114112 )
            {
              if ( v26 )
              {
                v25 = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1579);
              }
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v15) = 3;
                WPP_RECORDER_SF_((_DWORD)gRimLog, v15, 1, 26, (__int64)&WPP_55b2fa568459373c5b96b2ba3eae63fb_Traceguids);
              }
            }
            v7 = v27;
            v10 = 1;
          }
        }
        ++v12;
        v20[0] = 1;
      }
      while ( v12 < v23 );
      v5 = v29;
      if ( v6 )
        Win32FreePool(v6);
      if ( v7 )
        Win32FreePool(v7);
    }
    v20[0] = 1;
    if ( (unsigned int)rimHidP_GetSpecificValueCaps(0, 13, 0, 84, (__int64)v31, (__int64)v20, v28) == 1114112 )
    {
      v8[8] |= 1u;
      *(_DWORD *)(v5 + 24) = 3;
    }
    if ( *v8 > 1u && (v8[8] & 1) == 0 )
      *(_DWORD *)(v5 + 24) = 4;
    if ( (unsigned int)(*(_DWORD *)(v5 + 24) - 3) <= 1 )
    {
      v18 = v23;
      *(_DWORD *)(v5 + 312) |= 2u;
      v3 = 1;
      *v30 = v18;
    }
  }
  return v3;
}
