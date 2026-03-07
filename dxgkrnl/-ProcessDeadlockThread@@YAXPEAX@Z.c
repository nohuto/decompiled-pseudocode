void __fastcall ProcessDeadlockThread(unsigned __int8 *a1)
{
  __int64 v2; // rbx
  __int64 v3; // r9
  __int64 v4; // rcx
  int v5; // r9d
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r9
  int IsDebuggerPresent; // [rsp+E0h] [rbp-80h] BYREF
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
  __int64 v25; // [rsp+120h] [rbp-40h] BYREF
  void *v26; // [rsp+128h] [rbp-38h] BYREF
  __int64 v27; // [rsp+130h] [rbp-30h] BYREF
  unsigned __int64 v28; // [rsp+138h] [rbp-28h] BYREF
  __int64 v29[4]; // [rsp+140h] [rbp-20h] BYREF
  __int64 v30; // [rsp+170h] [rbp+10h] BYREF
  __int16 v31; // [rsp+178h] [rbp+18h] BYREF
  int v32; // [rsp+180h] [rbp+20h] BYREF
  int v33; // [rsp+188h] [rbp+28h] BYREF

  if ( a1 )
  {
    v2 = *((_QWORD *)a1 + 3);
    v3 = 0LL;
    if ( !v2 )
      goto LABEL_4;
    v9 = *(_QWORD *)(v2 + 168);
    if ( v9 )
    {
      v3 = *(_QWORD *)(v9 + 48);
      goto LABEL_4;
    }
  }
  else
  {
    v2 = 0LL;
  }
  v3 = 0LL;
LABEL_4:
  v30 = 3LL;
  DxgCreateLiveDumpWithWdLogs2(403LL, 2064LL, v2, v3, DXGDEADLOCK_TRACKER::DeadlockCounter, 3LL);
  if ( v2 )
  {
    v24 = *(_QWORD *)(v2 + 404);
    if ( (unsigned int)dword_1C013A918 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C013A918, 0x400000004000LL) )
      {
        LOBYTE(v4) = 1;
        v32 = a1[240];
        v33 = v5;
        IsDebuggerPresent = (unsigned __int8)WdIsDebuggerPresent(v4);
        v11 = *(_DWORD *)(v2 + 3016);
        v12 = *(unsigned __int8 *)(v2 + 2870);
        v13 = *(_DWORD *)(v2 + 4680);
        v14 = *(_DWORD *)(v2 + 4676);
        v15 = *(unsigned __int8 *)(v2 + 209);
        v16 = *(unsigned __int8 *)(v2 + 2764);
        v17 = *(unsigned __int8 *)(v2 + 2759);
        v18 = *(_DWORD *)(v2 + 288);
        LOWORD(v30) = *(_WORD *)(v2 + 2820);
        v25 = *(_QWORD *)(v2 + 1824);
        v26 = *(void **)(v2 + 1816);
        v19 = *(_DWORD *)(v2 + 428);
        v20 = *(_DWORD *)(v2 + 424);
        v21 = *(_DWORD *)(v2 + 420);
        v22 = *(_DWORD *)(v2 + 416);
        v23 = *(_DWORD *)(v2 + 412);
        v27 = v24;
        v28 = DXGDEADLOCK_TRACKER::DeadlockCounter;
        v31 = 13;
        v29[0] = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v6,
          byte_1C009CD59,
          v7,
          v8,
          (__int64)&v31,
          (__int64)v29,
          (__int64)&v28,
          (__int64)&v27,
          (__int64)&v23,
          (__int64)&v22,
          (__int64)&v21,
          (__int64)&v20,
          (__int64)&v19,
          &v26,
          (__int64)&v25,
          (__int64)&v30,
          (__int64)&v18,
          (__int64)&v17,
          (__int64)&v16,
          (__int64)&v15,
          (__int64)&v14,
          (__int64)&v13,
          (__int64)&v12,
          (__int64)&v11,
          (__int64)&IsDebuggerPresent,
          (__int64)&v33,
          (__int64)&v32);
      }
    }
  }
  if ( a1 )
    KeSetEvent((PRKEVENT)(a1 + 200), 0, 0);
}
