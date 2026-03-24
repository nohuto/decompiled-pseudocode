/*
 * XREFs of RIMExtractPointerPropertyValues @ 0x1C015D2D0
 * Callers:
 *     ?GetPointerRawData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KGIPEBUtagPOINTER_DEVICE_PROPERTY@@PEAJ@Z @ 0x1C0194958 (-GetPointerRawData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KGIPEBUtagPOINTER_DEVICE_PROPER.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0028440 (Win32AllocPoolZInit.c)
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     UserSetLastError @ 0x1C00388BC (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00CF780 (memset.c)
 *     GetPreparsedData @ 0x1C015B17C (GetPreparsedData.c)
 *     SignExtendLong @ 0x1C0160D14 (SignExtendLong.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C0163618 (rimHidP_GetSpecificValueCaps.c)
 *     rimHidP_GetUsageValue @ 0x1C016366C (rimHidP_GetUsageValue.c)
 */

__int64 __fastcall RIMExtractPointerPropertyValues(
        __int64 a1,
        unsigned __int16 a2,
        unsigned int a3,
        char *a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7)
{
  unsigned __int16 v7; // r13
  unsigned int v9; // ebx
  int v10; // edi
  struct _USAGE_AND_PAGE *v11; // rsi
  unsigned int v13; // r15d
  __int64 v14; // r13
  int SpecificValueCaps; // eax
  __int64 v16; // r10
  int v17; // eax
  __int64 v18; // rdx
  int v19; // r8d
  _DWORD *v20; // r13
  __int64 v21; // r8
  __int64 v22; // r9
  int Usages; // eax
  unsigned int v24; // ecx
  unsigned __int16 v26; // [rsp+44h] [rbp-124h]
  __int16 v27; // [rsp+4Ch] [rbp-11Ch] BYREF
  int v28; // [rsp+50h] [rbp-118h]
  unsigned int v29; // [rsp+54h] [rbp-114h]
  int v30; // [rsp+58h] [rbp-110h]
  unsigned int v31; // [rsp+5Ch] [rbp-10Ch] BYREF
  struct _HIDP_PREPARSED_DATA *v32; // [rsp+60h] [rbp-108h] BYREF
  int v33; // [rsp+68h] [rbp-100h]
  unsigned int v34; // [rsp+6Ch] [rbp-FCh]
  int v35; // [rsp+70h] [rbp-F8h]
  unsigned int v36; // [rsp+80h] [rbp-E8h]
  char *v37; // [rsp+88h] [rbp-E0h]
  __int64 v38; // [rsp+90h] [rbp-D8h]
  __int64 v39; // [rsp+98h] [rbp-D0h]
  __int64 v40; // [rsp+A8h] [rbp-C0h]
  struct _USAGE_AND_PAGE *v41; // [rsp+B0h] [rbp-B8h]
  __int64 v42; // [rsp+B8h] [rbp-B0h]
  _DWORD v43[20]; // [rsp+D0h] [rbp-98h] BYREF

  v37 = a4;
  v29 = a3;
  v7 = a2;
  v36 = a5;
  v38 = a6;
  v39 = a7;
  v9 = 0;
  v32 = 0LL;
  v10 = 0;
  v28 = 0;
  v30 = 0;
  memset(v43, 0, 0x48uLL);
  v27 = 1;
  if ( !a5 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 3747);
  if ( a1 )
  {
    if ( a5 <= *(_DWORD *)(a1 + 336) )
    {
      v11 = (struct _USAGE_AND_PAGE *)Win32AllocPoolZInit(4LL * *(unsigned int *)(a1 + 984), 2020635477LL);
      v41 = v11;
      if ( v11 )
      {
        if ( !(unsigned int)GetPreparsedData(a1, &v32) )
        {
          Win32FreePool((__int64)v11);
          return 0LL;
        }
        v31 = *(_DWORD *)(a1 + 984);
        v13 = 0;
        v35 = 0;
        while ( v13 < a5 )
        {
          v26 = v7;
          if ( *(_DWORD *)(a1 + 356) == (unsigned __int8)*v37 )
          {
            v27 = 1;
            v14 = 28LL * v13;
            v40 = v14;
            SpecificValueCaps = rimHidP_GetSpecificValueCaps(
                                  0,
                                  *(unsigned __int16 *)(v38 + v14 + 24),
                                  a2,
                                  *(unsigned __int16 *)(v38 + v14 + 26),
                                  (__int64)v43,
                                  (__int64)&v27,
                                  (__int64)v32);
            v16 = v38;
            if ( *(int *)(v38 + v14 + 4) > 1
              || (int)(SpecificValueCaps + 0x80000000) < 0
              || SpecificValueCaps == -1072627705 )
            {
              v17 = 1;
              v33 = 1;
            }
            else
            {
              v17 = 0;
              v33 = 0;
            }
            if ( v17 )
            {
              v18 = *(_QWORD *)(a1 + 712);
              v42 = v18;
              if ( v18 && *(_WORD *)(v18 + 8) && (unsigned __int16)(*(_WORD *)(v38 + v14 + 26) - 48) <= 1u )
                v19 = *(unsigned __int16 *)(*(_QWORD *)(v18 + 24) + 8LL * a2 + 2);
              else
                v19 = v26;
              v20 = (_DWORD *)(v39 + 4LL * v13);
              if ( (int)rimHidP_GetUsageValue(
                          0,
                          *(unsigned __int16 *)(v40 + v38 + 24),
                          v19,
                          *(unsigned __int16 *)(v40 + v38 + 26),
                          (__int64)v20,
                          (__int64)v32,
                          (__int64)v37,
                          v29) < 0 )
                break;
              if ( v43[10] < 0 )
                *v20 = SignExtendLong((unsigned int)*v20, HIWORD(v43[4]));
            }
            else
            {
              v21 = v13;
              v22 = v39;
              *(_DWORD *)(v39 + 4LL * v13) = 0;
              if ( !v30 )
              {
                if ( gpfnHidP_GetUsagesEx )
                {
                  Usages = gpfnHidP_GetUsagesEx(HidP_Input, a2, v11, &v31, v32, v37, v29);
                  v16 = v38;
                  v21 = v13;
                  v22 = v39;
                }
                else
                {
                  Usages = -1073741637;
                }
                v30 = 1;
                if ( Usages < 0 )
                  break;
              }
              v24 = 0;
              v34 = 0;
              while ( v24 < v31 )
              {
                if ( v11[v24].UsagePage == *(_WORD *)(v16 + v14 + 24) && v11[v24].Usage == *(_WORD *)(v16 + v14 + 26) )
                  *(_DWORD *)(v22 + 4 * v21) = 1;
                v34 = ++v24;
              }
            }
            ++v10;
            v7 = a2;
            v28 = v10;
          }
          v35 = ++v13;
        }
        Win32FreePool((__int64)v11);
      }
    }
  }
  LOBYTE(v9) = v10 == a5;
  return v9;
}
