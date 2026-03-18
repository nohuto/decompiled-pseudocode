/*
 * XREFs of ?xxxSendMousePromotion@@YAXAEBUtagMOUSE_PROMOTION_ENTRY@@H@Z @ 0x1C02145A0
 * Callers:
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1C0214098 (-xxxProcessMousePromotionQueue@@YAXXZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C00CD6B0 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@@Z @ 0x1C01D3D40 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 */

void __fastcall xxxSendMousePromotion(const struct tagMOUSE_PROMOTION_ENTRY *a1, int a2)
{
  __int64 v4; // r12
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v6; // r9
  __int16 v7; // dx
  __int64 QuadPart; // r15
  int v9; // edi
  __int64 v10; // r8
  int v11; // eax
  int v12; // ecx
  int v13; // ecx
  int v14; // eax
  int v15; // eax
  int v16; // edi
  int v17; // r8d
  int v18; // eax
  unsigned int v19; // ecx
  int v20; // esi
  __int64 v21; // rcx
  bool v22; // r14
  int v23; // ecx
  int v24; // eax
  int v25; // ecx
  int v26; // eax
  __int64 v27; // [rsp+30h] [rbp-30h] BYREF
  __int64 v28; // [rsp+38h] [rbp-28h] BYREF
  int v29; // [rsp+40h] [rbp-20h] BYREF
  __int64 v30; // [rsp+44h] [rbp-1Ch]
  int v31; // [rsp+4Ch] [rbp-14h]
  int v32; // [rsp+50h] [rbp-10h]
  int v33; // [rsp+54h] [rbp-Ch]

  v30 = 0LL;
  v33 = 0;
  v29 = 262142;
  v4 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
      * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  LOWORD(v6) = 4;
  v7 = 64;
  QuadPart = PerformanceCounter.QuadPart;
  v9 = ((_DWORD)v4 << 8) - (*((_DWORD *)a1 + 6) << 8);
  if ( (unsigned int)dword_1C032BE20 > 4 && tlgKeywordOn((__int64)&dword_1C032BE20, 64LL) )
  {
    v28 = QuadPart;
    v27 = (__int64)"MousePromotion";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
      (__int64)&dword_1C032BE20,
      byte_1C02EE2FA,
      v10,
      v6,
      (__int64)&v28,
      (void **)&v27);
    v7 = 64;
    LOWORD(v6) = 4;
  }
  v11 = *((_DWORD *)a1 + 4);
  if ( v11 == 3 )
  {
    v12 = *((unsigned __int16 *)a1 + 20);
    HIWORD(v29) |= v7;
    v13 = v9 | v12;
    v14 = *((_DWORD *)a1 + 11);
    v33 = v13;
    if ( ((unsigned __int8)v14 & (unsigned __int8)v7) != 0 )
      v33 = v13 | 0x80;
  }
  else if ( v11 == 2 )
  {
    v15 = *((unsigned __int16 *)a1 + 20);
    HIWORD(v29) |= 0x10u;
    v33 = v9 | v15 | 0x80;
  }
  v16 = 0;
  v17 = *((_DWORD *)a1 + 11);
  v18 = 0;
  if ( *(_DWORD *)(gpsi + 1988LL) )
    LOBYTE(v18) = (*((_DWORD *)a1 + 11) & 1) == 0;
  else
    LOBYTE(v18) = (*((_DWORD *)a1 + 11) & 1) != 0;
  v19 = *((_DWORD *)a1 + 5);
  v20 = 1;
  if ( (v19 & 0x40000) != 0 )
  {
    LOWORD(v30) = (v18 != 0 ? 2 : 8) | v30;
    v16 = (v19 >> 15) & 1;
  }
  else if ( (v19 & 0x10000) != 0 )
  {
    LOWORD(v30) = (v6 + (v18 != 0 ? 0xFFFD : 0)) | v30;
  }
  v21 = *((unsigned int *)a1 + 2);
  v22 = 1;
  if ( (_DWORD)gptCursorAsync == (_DWORD)v21 )
  {
    v21 = *((unsigned int *)a1 + 3);
    if ( gptCursorAsync->y == (_DWORD)v21 )
      v22 = 0;
  }
  if ( (v17 & 2) != 0 && (!(unsigned __int8)Enforced(v21) || (*((_DWORD *)a1 + 11) & 4) == 0) )
    v20 = 0;
  if ( v22 )
  {
    v23 = 8246;
    v31 = *((_DWORD *)a1 + 2);
    v32 = *((_DWORD *)a1 + 3);
  }
  else
  {
    v31 = 0;
    v23 = 56;
    v32 = 0;
  }
  v24 = v23 | 0x101;
  if ( !a2 )
    v24 = v23;
  v25 = v24 | 0x1000;
  if ( !v16 )
    v25 = v24;
  v26 = v25 | 0x40;
  if ( !v20 )
    v26 = v25;
  SynthesizeMouseInput(0LL, &v29, v4, QuadPart, v26);
}
