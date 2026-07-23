/*
 * XREFs of TtmiCreateTerminal @ 0x1408FD68C
 * Callers:
 *     TtmInitCurrentSession @ 0x1408FE7BC (TtmInitCurrentSession.c)
 *     TtmpDispatchCreateTerminal @ 0x140900DD4 (TtmpDispatchCreateTerminal.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeInitializeTimerEx @ 0x140266A80 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x140269650 (KeInitializeDpc.c)
 *     RtlFindClearBitsAndSet @ 0x1402F5970 (RtlFindClearBitsAndSet.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     memset @ 0x140414300 (memset.c)
 *     ObCreateObjectEx @ 0x14071BBF0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14071BE00 (ObInsertObjectEx.c)
 *     TtmpSetTerminalPendingCleanup @ 0x1408FE220 (TtmpSetTerminalPendingCleanup.c)
 *     TtmiUpdateActiveTerminalCount @ 0x1408FF5F0 (TtmiUpdateActiveTerminalCount.c)
 *     TtmiLogError @ 0x140902C24 (TtmiLogError.c)
 *     TtmiLogTerminalCreated @ 0x14090485C (TtmiLogTerminalCreated.c)
 */

__int64 __fastcall TtmiCreateTerminal(
        __int64 a1,
        ACCESS_MASK a2,
        char a3,
        unsigned __int64 *a4,
        PVOID Object,
        char **a6)
{
  _DWORD *v6; // r14
  ULONG ClearBitsAndSet; // esi
  unsigned int v12; // ebx
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // rdx
  int v16; // eax
  char *v17; // rbx
  __int64 v18; // rdx
  char *v19; // rdi
  char **v20; // rdx
  int inserted; // eax
  char **v22; // rax
  char *v24; // [rsp+20h] [rbp-78h]
  __int128 v25; // [rsp+50h] [rbp-48h] BYREF
  __int128 v26; // [rsp+60h] [rbp-38h]
  __int128 v27; // [rsp+70h] [rbp-28h]

  v6 = Object;
  *a4 = 0LL;
  Object = 0LL;
  *v6 = -1;
  ClearBitsAndSet = RtlFindClearBitsAndSet((PRTL_BITMAP)(a1 + 56), 1u, 0);
  if ( ClearBitsAndSet == -1 )
  {
    v12 = -1073741756;
    TtmiLogError("TtmiAcquireTerminalId", 1603LL, 0xFFFFFFFFLL, 3221225540LL);
    v13 = 3221225540LL;
    v14 = 3221225540LL;
    v15 = 581LL;
LABEL_3:
    TtmiLogError("TtmiCreateTerminal", v15, v14, v13);
    return v12;
  }
  v26 = 0LL;
  DWORD2(v26) = a3 == 0 ? 0x200 : 0;
  v25 = 0LL;
  LODWORD(v25) = 48;
  v27 = 0LL;
  v16 = ObCreateObjectEx(0, TtmpTerminalObjectType, (__int64)&v25, a3, v24, 288, 0, 0, &Object, 0LL);
  v12 = v16;
  if ( v16 < 0 )
  {
    v13 = (unsigned int)v16;
    v14 = (unsigned int)v16;
    v15 = 614LL;
    _bittestandreset(*(signed __int32 **)(a1 + 64), ClearBitsAndSet);
    goto LABEL_3;
  }
  v17 = (char *)Object;
  ObfReferenceObject(Object);
  memset(v17, 0, 0x120uLL);
  *((_DWORD *)v17 + 6) = 1416459348;
  *((_DWORD *)v17 + 7) = ClearBitsAndSet;
  if ( ClearBitsAndSet )
  {
    *((_DWORD *)v17 + 10) = 1;
    *((_DWORD *)v17 + 69) = 1;
    *((_DWORD *)v17 + 12) = 2;
    *((_QWORD *)v17 + 9) = 300000000LL;
  }
  else
  {
    *((_DWORD *)v17 + 10) = 3;
    *((_DWORD *)v17 + 69) = 3;
    LOBYTE(v18) = 1;
    *((_DWORD *)v17 + 12) = 0;
    *((_DWORD *)v17 + 9) |= 0x10u;
    v17 = (char *)Object;
    *((_QWORD *)Object + 10) = MEMORY[0xFFFFF78000000008];
    TtmiUpdateActiveTerminalCount(a1, v18, 26LL);
  }
  KeInitializeTimerEx((PKTIMER)(v17 + 88), NotificationTimer);
  KeInitializeDpc((PRKDPC)(v17 + 152), (PKDEFERRED_ROUTINE)TtmpScheduledEvaluationDpc, v17);
  *((_QWORD *)v17 + 27) = 0LL;
  *((_QWORD *)v17 + 29) = TtmpScheduledEvaluationWorker;
  *((_QWORD *)v17 + 30) = v17;
  _InterlockedAdd((volatile signed __int32 *)(a1 + 8), 1u);
  v19 = (char *)Object;
  *((_QWORD *)Object + 2) = a1;
  v20 = *(char ***)(a1 + 48);
  if ( *v20 != (char *)(a1 + 40) )
    __fastfail(3u);
  *((_QWORD *)v19 + 1) = v20;
  *(_QWORD *)v19 = a1 + 40;
  *v20 = v19;
  *(_QWORD *)(a1 + 48) = v19;
  TtmiLogTerminalCreated(v19, ClearBitsAndSet);
  inserted = ObInsertObjectEx(v19, 0LL, a2, 1, 0, 0LL, a4);
  v12 = inserted;
  if ( inserted >= 0 )
  {
    v22 = a6;
    *v6 = ClearBitsAndSet;
    if ( v22 )
      *v22 = v19;
    else
      HalPutDmaAdapter((PADAPTER_OBJECT)v19);
    return 0;
  }
  else
  {
    TtmiLogError("TtmiCreateTerminal", 705LL, (unsigned int)inserted, (unsigned int)inserted);
    TtmpSetTerminalPendingCleanup(a1, v19);
  }
  return v12;
}
