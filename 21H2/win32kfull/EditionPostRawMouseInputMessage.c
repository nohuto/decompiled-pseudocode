/*
 * XREFs of EditionPostRawMouseInputMessage @ 0x1C0030E60
 * Callers:
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHPEAU_MousePacketPerf@@@Z @ 0x1C003145C (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHP.c)
 * Callees:
 *     AllocateHidData @ 0x1C0002BC4 (AllocateHidData.c)
 *     ??$?0UtagObjLock@@U0@U0@U0@U0@U0@U0@U0@U0@U0@U0@@?$CMultiPerObjectLockExclusive@$0L@@@QEAA@AEAUtagObjLock@@0000000000@Z @ 0x1C00055C0 (--$-0UtagObjLock@@U0@U0@U0@U0@U0@U0@U0@U0@U0@U0@@-$CMultiPerObjectLockExclusive@$0L@@@QEAA@AEAUt.c)
 *     FreeHidData @ 0x1C00065B0 (FreeHidData.c)
 *     RawInputRequestedForMouse @ 0x1C0031434 (RawInputRequestedForMouse.c)
 *     PostInputMessage @ 0x1C0050880 (PostInputMessage.c)
 *     PtiMouseFromQ @ 0x1C005260C (PtiMouseFromQ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C01D4C5C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 */

__int64 __fastcall EditionPostRawMouseInputMessage(
        __int64 a1,
        struct tagWND *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5)
{
  struct tagWND *v6; // rdx
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // r10
  unsigned int v10; // ebx
  __int64 *v12; // rax
  __int64 v13; // rdi
  __int64 v14; // r12
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 *v17; // rdx
  __int64 *v18; // r14
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r15
  __int64 v22; // r13
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  struct tagWND *v27; // r15
  __int64 v28; // rdx
  __int64 v29; // rax
  int v30; // r8d
  int v31; // r9d
  __int64 *v32; // rdi
  __int64 v33; // rax
  __int64 v34; // r15
  __int64 v35; // r14
  __int64 HidData; // rdi
  __int64 v37; // rax
  __int64 v38; // rcx
  char v39; // [rsp+78h] [rbp-11h]
  _BYTE v40[7]; // [rsp+79h] [rbp-10h] BYREF
  __int64 v41; // [rsp+80h] [rbp-9h] BYREF
  __int64 v42; // [rsp+88h] [rbp-1h] BYREF
  struct tagWND *v43; // [rsp+90h] [rbp+7h] BYREF
  __int64 v44; // [rsp+98h] [rbp+Fh]
  struct tagWND *v45; // [rsp+A0h] [rbp+17h] BYREF

  v10 = 0;
  if ( !(unsigned int)RawInputRequestedForMouse() )
    return v10;
  if ( v9 )
  {
    if ( *(_DWORD *)(v9 + 92) == 2 )
      v37 = *(_QWORD *)(v9 + 80);
    else
      v37 = 0LL;
    v12 = (__int64 *)(*(_QWORD *)(v37 + 16) + 432LL);
  }
  else
  {
    if ( gptiForeground )
    {
      if ( (unsigned __int8)IsSpatialDelegationEnabledForThread(gptiForeground) )
        return v10;
      v6 = a2;
    }
    v12 = (__int64 *)gpqForeground;
  }
  v13 = *v12;
  if ( *(_DWORD *)a4 == 2 )
    v14 = *(_QWORD *)(a4 + 8);
  else
    v14 = 0LL;
  v44 = v14;
  v39 = 1;
  v15 = 0LL;
  if ( v13 )
    v15 = *(_QWORD *)(*(_QWORD *)(PtiMouseFromQ(v13, v6) + 424) + 832LL);
  v16 = v13;
  if ( v15 && (*(_DWORD *)(v15 + 100) & 1) != 0 )
  {
    if ( (unsigned int)dword_1C0330B20 > 4
      && (qword_1C0330B30 & 0x40) != 0
      && (qword_1C0330B38 & 0x40) == qword_1C0330B38 )
    {
      v43 = v6;
      LODWORD(v41) = 0;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        (unsigned int)&dword_1C0330B20,
        (unsigned int)&unk_1C02F1766,
        v7,
        v8,
        (__int64)&v43,
        (__int64)&v41);
    }
    v33 = *(_QWORD *)(*(_QWORD *)(PtiMouseFromQ(v13, v6) + 424) + 832LL);
    v34 = *(_QWORD *)(v33 + 64);
    if ( v34 )
    {
      v35 = *(_QWORD *)(v34 + 16);
      v16 = *(_QWORD *)(v35 + 432);
    }
    HidData = AllocateHidData(v14, 0, 24LL, 0LL, *(_QWORD *)(v33 + 64));
    if ( !HidData )
      return v10;
    *(_OWORD *)(HidData + 56) = *(_OWORD *)a5;
    *(_QWORD *)(HidData + 72) = *(_QWORD *)(a5 + 16);
    CMultiPerObjectLockExclusive<11>::CMultiPerObjectLockExclusive<11>((__int64)v40);
    if ( (unsigned int)PostInputMessage(
                         (struct tagQ *)v16,
                         (struct tagWND *)v34,
                         0xFFu,
                         *(_QWORD *)HidData,
                         a3,
                         0LL,
                         *(unsigned int *)(a5 + 20),
                         0,
                         0LL,
                         0LL,
                         0LL,
                         0,
                         0LL) )
    {
      HidData = 0LL;
      v39 = 0;
    }
    if ( HidData )
      FreeHidData(HidData);
  }
  if ( gHidCounters[1] )
  {
    v17 = &RawInputManagerObject::gHidRequestTable[4];
    v43 = 0LL;
    v18 = (__int64 *)RawInputManagerObject::gHidRequestTable[4];
    v42 = 0LL;
    if ( v16 )
    {
      v43 = *(struct tagWND **)(PtiMouseFromQ(v16, v17) + 424);
      v42 = *(_QWORD *)(v16 + 428);
    }
    if ( v18 != v17 )
    {
      do
      {
        if ( (*((_DWORD *)v18 + 25) & 4) != 0 )
        {
          v19 = v18[8];
          v45 = (struct tagWND *)v19;
          if ( v19 )
          {
            v20 = *(_QWORD *)(v19 + 40);
            if ( *(char *)(v20 + 20) >= 0 && *(char *)(v20 + 19) >= 0 )
            {
              v21 = *(_QWORD *)(v19 + 16);
              v22 = *(_QWORD *)(v21 + 432);
              v23 = *(_QWORD *)(v22 + 120);
              v24 = v23 ? *(_QWORD *)(v23 + 16) : 0LL;
              v25 = v24 ? *(_QWORD *)(v24 + 424) : 0LL;
              v26 = v25 ? v25 + 296 : gObjDummyLock;
              v41 = v26;
              v27 = v45;
              CMultiPerObjectLockExclusive<11>::CMultiPerObjectLockExclusive<11>((__int64)v40);
              v28 = v18[8];
              if ( *(_QWORD *)(v28 + 24) == grpdeskRitInput )
              {
                if ( (unsigned __int8)CheckAccess(*(_QWORD *)(*(_QWORD *)(v28 + 16) + 424LL) + 880LL, &v42)
                  || (v38 = *(_QWORD *)(v18[8] + 16), *(int *)(*(_QWORD *)(v38 + 424) + 12LL) < 0) )
                {
                  if ( *(struct tagWND **)(*(_QWORD *)(v18[8] + 16) + 424LL) != v43
                    && ((*((_DWORD *)v18 + 25) & 8) == 0 || v39) )
                  {
                    v29 = AllocateHidData(v44, 0, 24LL, 1LL, v18[8]);
                    v32 = (__int64 *)v29;
                    if ( !v29 )
                      return v10;
                    *(_OWORD *)(v29 + 56) = *(_OWORD *)a5;
                    *(_QWORD *)(v29 + 72) = *(_QWORD *)(a5 + 16);
                    if ( (unsigned int)dword_1C0330B20 > 4
                      && (qword_1C0330B30 & 0x40) != 0
                      && (qword_1C0330B38 & 0x40) == qword_1C0330B38 )
                    {
                      v45 = a2;
                      LODWORD(v41) = 1;
                      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
                        (unsigned int)&dword_1C0330B20,
                        (unsigned int)&unk_1C02F1766,
                        v30,
                        v31,
                        (__int64)&v45,
                        (__int64)&v41);
                    }
                    if ( (unsigned int)PostInputMessage(
                                         *(struct tagQ **)(*((_QWORD *)v27 + 2) + 432LL),
                                         v27,
                                         0xFFu,
                                         *v32,
                                         a3,
                                         0LL,
                                         *(unsigned int *)(a5 + 20),
                                         0,
                                         0LL,
                                         0LL,
                                         0LL,
                                         0,
                                         0LL) )
                      v32 = 0LL;
                    if ( v32 )
                      FreeHidData((__int64)v32);
                  }
                }
                else
                {
                  EtwTraceUIPIInputError(v38, 0LL, v22, v42, 5);
                }
              }
            }
          }
        }
        v18 = (__int64 *)*v18;
      }
      while ( v18 != &RawInputManagerObject::gHidRequestTable[4] );
    }
  }
  return 1;
}
