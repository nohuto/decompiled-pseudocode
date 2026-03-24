/*
 * XREFs of rimExtractTransducerUsages @ 0x1C0177F3C
 * Callers:
 *     rimPopulateContactFrameData @ 0x1C017BE68 (rimPopulateContactFrameData.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004A640 (_tlgKeywordOn.c)
 *     rimHidP_GetUsageValue @ 0x1C016366C (rimHidP_GetUsageValue.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$01@@U2@U1@U1@U1@U1@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$01@@433333AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1C017654C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$01@@U2@U1@U1@U1@U1@U1@U-$_tlgWrapperBy.c)
 */

__int64 __fastcall rimExtractTransducerUsages(__int64 a1, unsigned __int16 a2, char *a3, unsigned int a4, __int64 a5)
{
  __int64 v5; // rsi
  int v6; // edi
  _DWORD *v8; // r14
  struct _HIDP_PREPARSED_DATA *v9; // rbx
  __int16 *v10; // r15
  int UsageValue; // r12d
  int v12; // eax
  __int64 v13; // rcx
  __int16 v14; // ax
  __int64 v15; // r9
  __int64 v16; // r8
  int v17; // r10d
  int v18; // r11d
  int v19; // ecx
  __int64 v20; // rcx
  int v22; // [rsp+78h] [rbp-21h] BYREF
  int v23; // [rsp+7Ch] [rbp-1Dh] BYREF
  int v24; // [rsp+80h] [rbp-19h] BYREF
  int v25; // [rsp+84h] [rbp-15h] BYREF
  int v26; // [rsp+88h] [rbp-11h] BYREF
  int v27; // [rsp+8Ch] [rbp-Dh] BYREF
  int v28; // [rsp+90h] [rbp-9h] BYREF
  __int64 v29[10]; // [rsp+98h] [rbp-1h] BYREF
  __int64 v30; // [rsp+F8h] [rbp+5Fh] BYREF
  unsigned __int16 v31; // [rsp+100h] [rbp+67h]
  char *v32; // [rsp+108h] [rbp+6Fh]
  unsigned int v33; // [rsp+110h] [rbp+77h]

  v33 = a4;
  v32 = a3;
  v31 = a2;
  v5 = a5;
  v6 = 0;
  v30 = *(_QWORD *)(a1 + 480);
  v8 = (_DWORD *)(a5 + 2828);
  if ( !*(_DWORD *)(a5 + 2828) )
  {
    v9 = *(struct _HIDP_PREPARSED_DATA **)(*(_QWORD *)(a1 + 464) + 16LL);
    v10 = (__int16 *)(a5 + 2832);
    UsageValue = rimHidP_GetUsageValue(HidP_Input, 0xDu, a2, 0x5Bu, (unsigned int *)(a5 + 2828), v9, a3, a4);
    v12 = rimHidP_GetUsageValue(HidP_Input, 0xDu, v31, 0x91u, (unsigned int *)(v5 + 2832), v9, v32, v33);
    if ( (*(_DWORD *)(v30 + 312) & 0x10000) != 0 )
    {
      if ( UsageValue < 0 )
        return 0LL;
      if ( v12 >= 0 )
      {
        v13 = (unsigned int)*v8;
        if ( (_DWORD)v13 )
        {
          if ( *(_DWORD *)v10 )
          {
            v14 = *v10;
            *(_DWORD *)(v5 + 2824) = 1;
            *(_WORD *)(v5 + 2566) = v14;
            *(_QWORD *)(v5 + 2568) = v13;
          }
        }
      }
    }
    if ( UsageValue >= 0 && *v8 && (*v8 != dword_1C0259590 || *(_DWORD *)(v5 + 2472) % 0x64u < 2) )
    {
      LODWORD(v15) = *v8;
      if ( (unsigned int)dword_1C024A250 > 5 && tlgKeywordOn((__int64)&dword_1C024A250, 0x800000000000LL) )
      {
        v19 = *(_DWORD *)v10;
        v23 = *(_DWORD *)(v5 + 48);
        LOBYTE(v6) = v18 >= 0;
        v24 = *(_DWORD *)(v5 + 2824);
        v25 = v19;
        v20 = *(_QWORD *)(a1 + 464);
        v29[0] = 2048LL;
        v22 = v17;
        v26 = v16;
        LOWORD(a5) = *(_WORD *)(v20 + 112);
        LOWORD(v30) = *(_WORD *)(v20 + 110);
        v27 = v6;
        v28 = 1;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
          v20,
          byte_1C021D1AA,
          v16,
          v15,
          (__int64)&v28,
          (__int64)&v27,
          (__int64)&v30,
          (__int64)&a5,
          (__int64)&v26,
          (__int64)&v25,
          (__int64)&v24,
          (__int64)&v23,
          (__int64)&v22,
          (__int64)v29);
        LODWORD(v15) = *v8;
      }
      dword_1C0259590 = v15;
    }
  }
  return 0LL;
}
