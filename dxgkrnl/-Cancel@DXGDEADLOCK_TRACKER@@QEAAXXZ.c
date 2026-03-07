void __fastcall DXGDEADLOCK_TRACKER::Cancel(DXGDEADLOCK_TRACKER *this)
{
  ULONGLONG UnbiasedInterruptTime; // rsi
  signed __int64 v3; // rdi
  __int64 v4; // rcx
  unsigned __int8 IsDebuggerPresent; // al
  __int64 v6; // rcx
  ULONGLONG v7; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // [rsp+E0h] [rbp-80h] BYREF
  int v11; // [rsp+E4h] [rbp-7Ch] BYREF
  int v12; // [rsp+E8h] [rbp-78h] BYREF
  int v13; // [rsp+ECh] [rbp-74h] BYREF
  int v14; // [rsp+F0h] [rbp-70h] BYREF
  int v15; // [rsp+F4h] [rbp-6Ch] BYREF
  int v16; // [rsp+F8h] [rbp-68h] BYREF
  int v17; // [rsp+FCh] [rbp-64h] BYREF
  int v18; // [rsp+100h] [rbp-60h] BYREF
  int v19; // [rsp+104h] [rbp-5Ch] BYREF
  int v20; // [rsp+108h] [rbp-58h] BYREF
  int v21; // [rsp+10Ch] [rbp-54h] BYREF
  int v22; // [rsp+110h] [rbp-50h] BYREF
  int v23; // [rsp+114h] [rbp-4Ch] BYREF
  __int64 v24; // [rsp+118h] [rbp-48h]
  ULONGLONG v25; // [rsp+120h] [rbp-40h] BYREF
  __int64 v26; // [rsp+128h] [rbp-38h] BYREF
  void *v27; // [rsp+130h] [rbp-30h] BYREF
  __int64 v28; // [rsp+138h] [rbp-28h] BYREF
  signed __int64 v29; // [rsp+140h] [rbp-20h] BYREF
  __int64 v30[5]; // [rsp+148h] [rbp-18h] BYREF
  __int16 v31; // [rsp+180h] [rbp+20h] BYREF
  __int16 v32; // [rsp+188h] [rbp+28h] BYREF
  int v33; // [rsp+190h] [rbp+30h] BYREF
  int v34; // [rsp+198h] [rbp+38h] BYREF

  if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 9, 0, 1) == 1 )
  {
    if ( !KeCancelTimer((PKTIMER)((char *)this + 248)) )
      KeFlushQueuedDpcs();
    if ( !KeCancelTimer((PKTIMER)((char *)this + 40)) )
    {
      KeFlushQueuedDpcs();
      if ( !KeCancelTimer((PKTIMER)((char *)this + 40)) )
        KeFlushQueuedDpcs();
    }
    UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
    v24 = *(_QWORD *)(*((_QWORD *)this + 3) + 404LL);
    v3 = _InterlockedExchangeAdd64((volatile signed __int64 *)&DXGDEADLOCK_TRACKER::DeadlockCounter, 1uLL);
    KeWaitForSingleObject((char *)this + 200, Executive, 0, 0, 0LL);
    if ( (*((_BYTE *)this + 32) || *((_BYTE *)this + 33)) && (unsigned int)dword_1C013A918 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C013A918, 0x400000004000LL) )
      {
        LOBYTE(v4) = 1;
        v33 = *((unsigned __int8 *)this + 240);
        IsDebuggerPresent = WdIsDebuggerPresent(v4);
        v6 = *((_QWORD *)this + 3);
        v34 = IsDebuggerPresent;
        v7 = UnbiasedInterruptTime - *(_QWORD *)this;
        v10 = *(_DWORD *)(v6 + 3016);
        v11 = *(unsigned __int8 *)(v6 + 2870);
        v12 = *((unsigned __int8 *)this + 33);
        v13 = *(_DWORD *)(v6 + 4680);
        v14 = *(_DWORD *)(v6 + 4676);
        v25 = v7;
        v15 = *(unsigned __int8 *)(v6 + 209);
        v16 = *(unsigned __int8 *)(v6 + 2764);
        v17 = *(unsigned __int8 *)(v6 + 2759);
        v18 = *(_DWORD *)(v6 + 288);
        v31 = *(_WORD *)(v6 + 2820);
        v26 = *(_QWORD *)(v6 + 1824);
        v27 = *(void **)(v6 + 1816);
        v19 = *(_DWORD *)(v6 + 428);
        v20 = *(_DWORD *)(v6 + 424);
        v21 = *(_DWORD *)(v6 + 420);
        v22 = *(_DWORD *)(v6 + 416);
        v23 = *(_DWORD *)(v6 + 412);
        v28 = v24;
        v32 = 13;
        v29 = v3;
        v30[0] = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v6,
          byte_1C009CBB3,
          v8,
          v9,
          (__int64)&v32,
          (__int64)v30,
          (__int64)&v29,
          (__int64)&v28,
          (__int64)&v23,
          (__int64)&v22,
          (__int64)&v21,
          (__int64)&v20,
          (__int64)&v19,
          &v27,
          (__int64)&v26,
          (__int64)&v31,
          (__int64)&v18,
          (__int64)&v17,
          (__int64)&v16,
          (__int64)&v15,
          (__int64)&v25,
          (__int64)&v14,
          (__int64)&v13,
          (__int64)&v12,
          (__int64)&v11,
          (__int64)&v10,
          (__int64)&v34,
          (__int64)&v33);
      }
    }
  }
}
