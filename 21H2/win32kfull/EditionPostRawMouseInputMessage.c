/*
 * XREFs of EditionPostRawMouseInputMessage @ 0x1C009B5F0
 * Callers:
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHPEAU_MousePacketPerf@@@Z @ 0x1C009B280 (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHP.c)
 * Callees:
 *     AllocateHidData @ 0x1C0001B1C (AllocateHidData.c)
 *     FreeHidData @ 0x1C0003270 (FreeHidData.c)
 *     RawInputRequestedForMouse @ 0x1C009B988 (RawInputRequestedForMouse.c)
 *     PostInputMessage @ 0x1C00AB69C (PostInputMessage.c)
 *     PtiMouseFromQ @ 0x1C00ABFA8 (PtiMouseFromQ.c)
 *     _tlgKeywordOn @ 0x1C00CD6B0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C01592DC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 */

__int64 __fastcall EditionPostRawMouseInputMessage(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v6; // r12d
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r10
  struct tagQ **v12; // rax
  struct tagQ *v13; // rbx
  __int64 v14; // r15
  __int64 v15; // rax
  char v16; // r14
  struct tagQ *v17; // rdi
  __int64 v18; // r12
  __int64 *v19; // rdx
  __int64 *v20; // rbx
  struct tagWND *v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rdi
  __int64 v25; // rax
  struct tagINPUT_MESSAGE_SOURCE *v26; // r10
  char *v27; // rdi
  struct tagWND *v28; // rsi
  __int64 HidData; // rbx
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 v32; // rax
  int v33; // r8d
  int v34; // r9d
  int v35; // [rsp+78h] [rbp-1h] BYREF
  __int64 v36; // [rsp+80h] [rbp+7h] BYREF
  __int64 v37[8]; // [rsp+88h] [rbp+Fh] BYREF
  unsigned int v39; // [rsp+E8h] [rbp+6Fh]

  v39 = a3;
  v6 = a3;
  if ( !(unsigned int)RawInputRequestedForMouse(a1, a2, a3, a2) )
    return 0LL;
  if ( v10 )
  {
    if ( *(_DWORD *)(v10 + 92) == 2 )
      v32 = *(_QWORD *)(v10 + 80);
    else
      v32 = 0LL;
    v12 = (struct tagQ **)(*(_QWORD *)(v32 + 16) + 432LL);
  }
  else
  {
    if ( gptiForeground )
    {
      if ( (unsigned __int8)IsSpatialDelegationEnabledForThread() )
        return 0LL;
      v9 = a2;
    }
    v12 = (struct tagQ **)gpqForeground;
  }
  v13 = *v12;
  if ( *(_DWORD *)a4 == 2 )
    v14 = *(_QWORD *)(a4 + 8);
  else
    v14 = 0LL;
  v15 = 0LL;
  v16 = 1;
  if ( v13 )
    v15 = *(_QWORD *)(*(_QWORD *)(PtiMouseFromQ(v13, v7, v8, v9) + 424) + 832LL);
  v17 = v13;
  if ( v15 && (*(_DWORD *)(v15 + 100) & 1) != 0 )
  {
    if ( (unsigned int)dword_1C032BE20 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C032BE20, 64LL) )
    {
      v35 = 0;
      v36 = v9;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        (unsigned int)&dword_1C032BE20,
        (unsigned int)&unk_1C02EE32E,
        v8,
        v9,
        (__int64)&v36,
        (__int64)&v35);
    }
    v28 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(PtiMouseFromQ(v13, v7, v8, v9) + 424) + 832LL) + 64LL);
    if ( v28 )
      v17 = *(struct tagQ **)(*((_QWORD *)v28 + 2) + 432LL);
    HidData = AllocateHidData(v14, 0, 24LL, 0LL, (__int64)v28);
    if ( !HidData )
      return 0LL;
    v30 = *(_QWORD *)HidData;
    *(_OWORD *)(HidData + 56) = *(_OWORD *)a5;
    *(_QWORD *)(HidData + 72) = *(_QWORD *)(a5 + 16);
    if ( (unsigned int)PostInputMessage(
                         v17,
                         v28,
                         0xFFu,
                         v30,
                         v6,
                         0LL,
                         *(unsigned int *)(a5 + 20),
                         0,
                         0LL,
                         0LL,
                         0LL,
                         0,
                         0LL) )
      v16 = 0;
    else
      FreeHidData((char *)HidData);
  }
  if ( gHidCounters[1] )
  {
    v18 = 0LL;
    v19 = &RawInputManagerObject::gHidRequestTable[4];
    v20 = (__int64 *)RawInputManagerObject::gHidRequestTable[4];
    v36 = 0LL;
    if ( v17 )
    {
      v18 = *(_QWORD *)(PtiMouseFromQ(v17, v19, v8, v9) + 424);
      v36 = *((_QWORD *)v17 + 53);
    }
    if ( v20 != v19 )
    {
      do
      {
        if ( (*((_DWORD *)v20 + 25) & 4) != 0 )
        {
          v21 = (struct tagWND *)v20[8];
          if ( v21 )
          {
            v22 = *((_QWORD *)v21 + 5);
            if ( *(char *)(v22 + 20) >= 0 && *(char *)(v22 + 19) >= 0 )
            {
              v23 = *((_QWORD *)v21 + 2);
              v24 = *(_QWORD *)(v23 + 432);
              if ( *((_QWORD *)v21 + 3) == grpdeskRitInput )
              {
                if ( (unsigned __int8)CheckAccess(*(_QWORD *)(v23 + 424) + 880LL, &v36)
                  || (v31 = *(_QWORD *)(v20[8] + 16), *(int *)(*(_QWORD *)(v31 + 424) + 12LL) < 0) )
                {
                  if ( *(_QWORD *)(*(_QWORD *)(v20[8] + 16) + 424LL) != v18 && ((*((_DWORD *)v20 + 25) & 8) == 0 || v16) )
                  {
                    v25 = AllocateHidData(v14, 0, 24LL, 1LL, v20[8]);
                    v26 = 0LL;
                    v27 = (char *)v25;
                    if ( !v25 )
                      return 0LL;
                    *(_OWORD *)(v25 + 56) = *(_OWORD *)a5;
                    *(_QWORD *)(v25 + 72) = *(_QWORD *)(a5 + 16);
                    if ( (unsigned int)dword_1C032BE20 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C032BE20, 64LL) )
                    {
                      v37[0] = a2;
                      v35 = 1;
                      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
                        (unsigned int)&dword_1C032BE20,
                        (unsigned int)&unk_1C02EE32E,
                        v33,
                        v34,
                        (__int64)v37,
                        (__int64)&v35);
                      v26 = 0LL;
                    }
                    if ( !(unsigned int)PostInputMessage(
                                          *(struct tagQ **)(*((_QWORD *)v21 + 2) + 432LL),
                                          v21,
                                          0xFFu,
                                          *(_QWORD *)v27,
                                          v39,
                                          (unsigned __int64)v26,
                                          *(unsigned int *)(a5 + 20),
                                          (unsigned int)v26,
                                          v26,
                                          v26,
                                          v26,
                                          (int)v26,
                                          (__int64)v26) )
                      FreeHidData(v27);
                  }
                }
                else
                {
                  EtwTraceUIPIInputError(v31, 0LL, v24, v36, 5);
                }
              }
            }
          }
        }
        v20 = (__int64 *)*v20;
      }
      while ( v20 != &RawInputManagerObject::gHidRequestTable[4] );
    }
  }
  return 1LL;
}
