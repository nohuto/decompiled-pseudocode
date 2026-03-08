/*
 * XREFs of ?DeadlockTimeOutDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C003EC90
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x1C000AA90 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$07@@U2@U2@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U?$_tlgWrapSz@G@@U2@U1@U3@U3@U3@U3@U2@U3@U3@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$07@@44AEBU?$_tlgWrapperByVal@$03@@5555AEBU?$_tlgWrapSz@G@@4355554555555@Z @ 0x1C003D694 (--$Write@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$07@@U2@U2@U-$_tlgWrapperByVal@$03@@U3@U3@.c)
 */

void __fastcall DeadlockTimeOutDpc(
        struct _KDPC *Dpc,
        char *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // rbx
  ULONGLONG UnbiasedInterruptTime; // rsi
  __int64 v7; // rcx
  ULONGLONG v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int16 v12[2]; // [rsp+E0h] [rbp-80h] BYREF
  int v13; // [rsp+E4h] [rbp-7Ch] BYREF
  int IsDebuggerPresent; // [rsp+E8h] [rbp-78h] BYREF
  int v15; // [rsp+ECh] [rbp-74h] BYREF
  int v16; // [rsp+F0h] [rbp-70h] BYREF
  int v17; // [rsp+F4h] [rbp-6Ch] BYREF
  int v18; // [rsp+F8h] [rbp-68h] BYREF
  int v19; // [rsp+FCh] [rbp-64h] BYREF
  int v20; // [rsp+100h] [rbp-60h] BYREF
  int v21; // [rsp+104h] [rbp-5Ch] BYREF
  int v22; // [rsp+108h] [rbp-58h] BYREF
  int v23; // [rsp+10Ch] [rbp-54h] BYREF
  int v24; // [rsp+110h] [rbp-50h] BYREF
  int v25; // [rsp+114h] [rbp-4Ch] BYREF
  int v26; // [rsp+118h] [rbp-48h] BYREF
  int v27; // [rsp+11Ch] [rbp-44h] BYREF
  __int64 v28; // [rsp+120h] [rbp-40h]
  ULONGLONG v29; // [rsp+128h] [rbp-38h] BYREF
  __int64 v30; // [rsp+130h] [rbp-30h] BYREF
  void *v31; // [rsp+138h] [rbp-28h] BYREF
  __int64 v32; // [rsp+140h] [rbp-20h] BYREF
  unsigned __int64 v33; // [rsp+148h] [rbp-18h] BYREF
  __int64 v34; // [rsp+150h] [rbp-10h] BYREF
  __int16 v35; // [rsp+178h] [rbp+18h] BYREF

  v4 = *((_QWORD *)DeferredContext + 3);
  UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
  v28 = *(_QWORD *)(v4 + 404);
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 4648), UnbiasedInterruptTime, 0LL) )
  {
    KeClearEvent((PRKEVENT)(DeferredContext + 200));
    if ( (unsigned int)dword_1C013A918 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C013A918, 0x400000004000LL) )
      {
        LOBYTE(v7) = 1;
        v13 = (unsigned __int8)DeferredContext[240];
        IsDebuggerPresent = (unsigned __int8)WdIsDebuggerPresent(v7);
        v15 = *(_DWORD *)(v4 + 3016);
        v16 = *(unsigned __int8 *)(v4 + 2870);
        v17 = *(_DWORD *)(v4 + 4680);
        v18 = *(_DWORD *)(v4 + 4676);
        v19 = *(unsigned __int8 *)(v4 + 209);
        v8 = UnbiasedInterruptTime - *(_QWORD *)DeferredContext;
        v20 = *(unsigned __int8 *)(v4 + 2764);
        v21 = *(unsigned __int8 *)(v4 + 2759);
        v22 = *(_DWORD *)(v4 + 288);
        v35 = *(_WORD *)(v4 + 2820);
        v30 = *(_QWORD *)(v4 + 1824);
        v31 = *(void **)(v4 + 1816);
        v23 = *(_DWORD *)(v4 + 428);
        v24 = *(_DWORD *)(v4 + 424);
        v25 = *(_DWORD *)(v4 + 420);
        v26 = *(_DWORD *)(v4 + 416);
        v27 = *(_DWORD *)(v4 + 412);
        v32 = v28;
        v33 = DXGDEADLOCK_TRACKER::DeadlockCounter;
        v12[0] = 13;
        v29 = v8;
        v34 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v9,
          byte_1C009D08F,
          v10,
          v11,
          (__int64)v12,
          (__int64)&v34,
          (__int64)&v33,
          (__int64)&v32,
          (__int64)&v27,
          (__int64)&v26,
          (__int64)&v25,
          (__int64)&v24,
          (__int64)&v23,
          &v31,
          (__int64)&v30,
          (__int64)&v35,
          (__int64)&v22,
          (__int64)&v21,
          (__int64)&v20,
          (__int64)&v19,
          (__int64)&v29,
          (__int64)&v18,
          (__int64)&v17,
          (__int64)&v16,
          (__int64)&v15,
          (__int64)&IsDebuggerPresent,
          (__int64)&v13);
      }
    }
    DeferredContext[33] = 1;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(DeferredContext + 168), CriticalWorkQueue);
  }
}
