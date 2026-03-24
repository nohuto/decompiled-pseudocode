/*
 * XREFs of ?xxxSendMousePromotion@@YAXAEBUtagMOUSE_PROMOTION_ENTRY@@H@Z @ 0x1C021997C
 * Callers:
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1C02193F0 (-xxxProcessMousePromotionQueue@@YAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@@Z @ 0x1C01D85AC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 */

void __fastcall xxxSendMousePromotion(const struct tagMOUSE_PROMOTION_ENTRY *a1, int a2)
{
  __int64 v4; // r12
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v6; // r8
  LARGE_INTEGER v7; // r15
  int v8; // edi
  int v9; // eax
  int v10; // ecx
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  int v14; // edi
  int v15; // r8d
  int v16; // eax
  unsigned int v17; // ecx
  int v18; // esi
  __int64 v19; // rcx
  bool v20; // r14
  int v21; // ecx
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  __int64 v25; // [rsp+30h] [rbp-30h] BYREF
  __int64 QuadPart; // [rsp+38h] [rbp-28h] BYREF
  int v27; // [rsp+40h] [rbp-20h] BYREF
  __int64 v28; // [rsp+44h] [rbp-1Ch]
  int v29; // [rsp+4Ch] [rbp-14h]
  int v30; // [rsp+50h] [rbp-10h]
  int v31; // [rsp+54h] [rbp-Ch]

  v28 = 0LL;
  v31 = 0;
  v27 = 262142;
  v4 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
      * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v7 = PerformanceCounter;
  v8 = ((_DWORD)v4 << 8) - (*((_DWORD *)a1 + 6) << 8);
  if ( (unsigned int)dword_1C0330B20 > 4 && (qword_1C0330B30 & 0x40) != 0 && (qword_1C0330B38 & 0x40) == qword_1C0330B38 )
  {
    QuadPart = PerformanceCounter.QuadPart;
    v25 = (__int64)"MousePromotion";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
      (__int64)&dword_1C0330B20,
      byte_1C02F1732,
      v6.QuadPart,
      4LL,
      (__int64)&QuadPart,
      (void **)&v25);
  }
  v9 = *((_DWORD *)a1 + 4);
  if ( v9 == 3 )
  {
    v10 = *((unsigned __int16 *)a1 + 20);
    HIWORD(v27) |= 0x40u;
    v11 = v8 | v10;
    v12 = *((_DWORD *)a1 + 11);
    v31 = v11;
    if ( (v12 & 0x40) != 0 )
      v31 = v11 | 0x80;
  }
  else if ( v9 == 2 )
  {
    v13 = *((unsigned __int16 *)a1 + 20);
    HIWORD(v27) |= 0x10u;
    v31 = v8 | v13 | 0x80;
  }
  v14 = 0;
  v15 = *((_DWORD *)a1 + 11);
  v16 = 0;
  if ( *(_DWORD *)(gpsi + 1988LL) )
    LOBYTE(v16) = (*((_DWORD *)a1 + 11) & 1) == 0;
  else
    LOBYTE(v16) = (*((_DWORD *)a1 + 11) & 1) != 0;
  v17 = *((_DWORD *)a1 + 5);
  v18 = 1;
  if ( (v17 & 0x40000) != 0 )
  {
    LOWORD(v28) = (v16 != 0 ? 2 : 8) | v28;
    v14 = (v17 >> 15) & 1;
  }
  else if ( (v17 & 0x10000) != 0 )
  {
    LOWORD(v28) = (v16 != 0 ? 1 : 4) | v28;
  }
  v19 = *((unsigned int *)a1 + 2);
  v20 = 1;
  if ( (_DWORD)gptCursorAsync == (_DWORD)v19 )
  {
    v19 = *((unsigned int *)a1 + 3);
    if ( gptCursorAsync->y == (_DWORD)v19 )
      v20 = 0;
  }
  if ( (v15 & 2) != 0 && (!(unsigned __int8)Enforced(v19) || (*((_DWORD *)a1 + 11) & 4) == 0) )
    v18 = 0;
  if ( v20 )
  {
    v21 = 8246;
    v29 = *((_DWORD *)a1 + 2);
    v30 = *((_DWORD *)a1 + 3);
  }
  else
  {
    v29 = 0;
    v21 = 56;
    v30 = 0;
  }
  v22 = v21 | 0x101;
  if ( !a2 )
    v22 = v21;
  v23 = v22 | 0x1000;
  if ( !v14 )
    v23 = v22;
  v24 = v23 | 0x40;
  if ( !v18 )
    v24 = v23;
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))SynthesizeMouseInput)(
    0LL,
    &v27,
    v4,
    (LARGE_INTEGER)v7.QuadPart,
    v24,
    0LL);
}
