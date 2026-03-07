void __fastcall DeadlockPulseDpc(
        struct _KDPC *Dpc,
        unsigned __int8 *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // rsi
  signed __int64 v6; // r15
  ULONGLONG UnbiasedInterruptTime; // rax
  unsigned int v8; // edi
  unsigned __int64 v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int16 v14[2]; // [rsp+E0h] [rbp-80h] BYREF
  int v15; // [rsp+E4h] [rbp-7Ch] BYREF
  int IsDebuggerPresent; // [rsp+E8h] [rbp-78h] BYREF
  int v17; // [rsp+ECh] [rbp-74h] BYREF
  int v18; // [rsp+F0h] [rbp-70h] BYREF
  int v19; // [rsp+F4h] [rbp-6Ch] BYREF
  int v20; // [rsp+F8h] [rbp-68h] BYREF
  int v21; // [rsp+FCh] [rbp-64h] BYREF
  int v22; // [rsp+100h] [rbp-60h] BYREF
  int v23; // [rsp+104h] [rbp-5Ch] BYREF
  int v24; // [rsp+108h] [rbp-58h] BYREF
  int v25; // [rsp+10Ch] [rbp-54h] BYREF
  int v26; // [rsp+110h] [rbp-50h] BYREF
  int v27; // [rsp+114h] [rbp-4Ch] BYREF
  int v28; // [rsp+118h] [rbp-48h] BYREF
  int v29; // [rsp+11Ch] [rbp-44h] BYREF
  __int64 v30; // [rsp+120h] [rbp-40h]
  unsigned __int64 v31; // [rsp+128h] [rbp-38h] BYREF
  __int64 v32; // [rsp+130h] [rbp-30h] BYREF
  void *v33; // [rsp+138h] [rbp-28h] BYREF
  __int64 v34; // [rsp+140h] [rbp-20h] BYREF
  unsigned __int64 v35; // [rsp+148h] [rbp-18h] BYREF
  __int64 v36; // [rsp+150h] [rbp-10h] BYREF
  __int16 v37; // [rsp+188h] [rbp+28h] BYREF

  v4 = *((_QWORD *)DeferredContext + 3);
  v6 = *(_QWORD *)(v4 + 4656);
  UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
  v8 = *((_DWORD *)DeferredContext + 3);
  v9 = UnbiasedInterruptTime - *(_QWORD *)DeferredContext;
  v30 = *(_QWORD *)(v4 + 404);
  if ( v9 <= 0x861C46800LL )
  {
    if ( v9 <= 0xB2D05E00 )
    {
      if ( v9 > 0x23C34600 )
        v8 = 60000;
    }
    else
    {
      v8 = 900000;
    }
  }
  else
  {
    v8 = 3600000;
  }
  if ( UnbiasedInterruptTime - v6 > 10000 * (unsigned __int64)(v8 - *((_DWORD *)DeferredContext + 4))
    && v6 == _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 4656), UnbiasedInterruptTime, v6) )
  {
    if ( (unsigned int)dword_1C013A918 > 5 && tlgKeywordOn((__int64)&dword_1C013A918, 0x400000004000LL) )
    {
      LOBYTE(v10) = 1;
      v15 = DeferredContext[240];
      IsDebuggerPresent = (unsigned __int8)WdIsDebuggerPresent(v10);
      v17 = *(_DWORD *)(v4 + 3016);
      v18 = *(unsigned __int8 *)(v4 + 2870);
      v19 = *(_DWORD *)(v4 + 4680);
      v20 = *(_DWORD *)(v4 + 4676);
      v21 = *(unsigned __int8 *)(v4 + 209);
      v22 = *(unsigned __int8 *)(v4 + 2764);
      v23 = *(unsigned __int8 *)(v4 + 2759);
      v24 = *(_DWORD *)(v4 + 288);
      v37 = *(_WORD *)(v4 + 2820);
      v32 = *(_QWORD *)(v4 + 1824);
      v33 = *(void **)(v4 + 1816);
      v25 = *(_DWORD *)(v4 + 428);
      v26 = *(_DWORD *)(v4 + 424);
      v27 = *(_DWORD *)(v4 + 420);
      v28 = *(_DWORD *)(v4 + 416);
      v29 = *(_DWORD *)(v4 + 412);
      v34 = v30;
      v35 = DXGDEADLOCK_TRACKER::DeadlockCounter;
      v14[0] = 13;
      v31 = v9;
      v36 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v11,
        byte_1C009CEF9,
        v12,
        v13,
        (__int64)v14,
        (__int64)&v36,
        (__int64)&v35,
        (__int64)&v34,
        (__int64)&v29,
        (__int64)&v28,
        (__int64)&v27,
        (__int64)&v26,
        (__int64)&v25,
        &v33,
        (__int64)&v32,
        (__int64)&v37,
        (__int64)&v24,
        (__int64)&v23,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)&v31,
        (__int64)&v20,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v17,
        (__int64)&IsDebuggerPresent,
        (__int64)&v15);
    }
    DeferredContext[32] = 1;
  }
  if ( *((_DWORD *)DeferredContext + 9) == 1 )
    KeSetTimer((PKTIMER)(DeferredContext + 40), (LARGE_INTEGER)(-10000LL * v8), (PKDPC)(DeferredContext + 104));
}
