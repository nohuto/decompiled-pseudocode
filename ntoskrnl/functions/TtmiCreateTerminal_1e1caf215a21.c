__int64 __fastcall TtmiCreateTerminal(__int64 a1, ACCESS_MASK a2, char a3, HANDLE *a4, PVOID Object, _QWORD *a6)
{
  _DWORD *v6; // r14
  ULONG ClearBitsAndSet; // eax
  unsigned __int64 v12; // rdi
  unsigned int v13; // ebx
  int v14; // r9d
  int v15; // r8d
  int v16; // edx
  int v17; // eax
  char *v18; // rbx
  _QWORD *v19; // rsi
  _QWORD *v20; // rdx
  NTSTATUS inserted; // eax
  _QWORD *v22; // rax
  __int64 v24; // [rsp+20h] [rbp-78h]
  __int128 v25; // [rsp+50h] [rbp-48h] BYREF
  __int128 v26; // [rsp+60h] [rbp-38h]
  __int128 v27; // [rsp+70h] [rbp-28h]

  v6 = Object;
  *a4 = 0LL;
  Object = 0LL;
  *v6 = -1;
  ClearBitsAndSet = RtlFindClearBitsAndSet((PRTL_BITMAP)(a1 + 56), 1u, 0);
  v12 = ClearBitsAndSet;
  if ( ClearBitsAndSet == -1 )
  {
    v13 = -1073741756;
    TtmiLogError("TtmiAcquireTerminalId", 1599, -1, -1073741756);
    v14 = -1073741756;
    v15 = -1073741756;
    v16 = 719;
LABEL_3:
    TtmiLogError("TtmiCreateTerminal", v16, v15, v14);
    return v13;
  }
  v26 = 0LL;
  DWORD2(v26) = a3 == 0 ? 0x200 : 0;
  v25 = 0LL;
  LODWORD(v25) = 48;
  v27 = 0LL;
  v17 = ObCreateObjectEx(0, TtmpTerminalObjectType, (__int64)&v25, a3, v24, 288, 0, 0, &Object, 0LL);
  v13 = v17;
  if ( v17 < 0 )
  {
    v14 = v17;
    v15 = v17;
    *(_BYTE *)(*(_QWORD *)(a1 + 64) + (v12 >> 3)) &= ~(1 << (v12 & 7));
    v16 = 752;
    goto LABEL_3;
  }
  v18 = (char *)Object;
  ObfReferenceObject(Object);
  memset(v18, 0, 0x120uLL);
  *((_DWORD *)v18 + 6) = 1416459348;
  *((_DWORD *)v18 + 7) = v12;
  if ( (_DWORD)v12 )
  {
    *((_DWORD *)v18 + 10) = 1;
    *((_DWORD *)v18 + 69) = 1;
    *((_DWORD *)v18 + 12) = 2;
    *((_QWORD *)v18 + 9) = 300000000LL;
  }
  else
  {
    *((_DWORD *)v18 + 10) = 3;
    *((_DWORD *)v18 + 69) = 3;
    *((_DWORD *)v18 + 12) = 0;
    *((_DWORD *)v18 + 9) |= 0x10u;
    v18 = (char *)Object;
    *((_QWORD *)Object + 10) = MEMORY[0xFFFFF78000000008];
    TtmiUpdateActiveTerminalCount((_DWORD *)a1, 1, 26);
  }
  KeInitializeTimerEx((PKTIMER)(v18 + 88), NotificationTimer);
  KeInitializeDpc((PRKDPC)(v18 + 152), (PKDEFERRED_ROUTINE)TtmpScheduledEvaluationDpc, v18);
  *((_QWORD *)v18 + 27) = 0LL;
  *((_QWORD *)v18 + 29) = TtmpScheduledEvaluationWorker;
  *((_QWORD *)v18 + 30) = v18;
  _InterlockedAdd((volatile signed __int32 *)(a1 + 8), 1u);
  v19 = Object;
  *((_QWORD *)Object + 2) = a1;
  v20 = *(_QWORD **)(a1 + 48);
  if ( *v20 != a1 + 40 )
    __fastfail(3u);
  v19[1] = v20;
  *v19 = a1 + 40;
  *v20 = v19;
  *(_QWORD *)(a1 + 48) = v19;
  TtmiLogTerminalCreated((__int64)v19, v12);
  inserted = ObInsertObject(v19, 0LL, a2, 1u, 0LL, a4);
  v13 = inserted;
  if ( inserted >= 0 )
  {
    v22 = a6;
    *v6 = v12;
    if ( v22 )
      *v22 = v19;
    else
      ObfDereferenceObject(v19);
    return 0;
  }
  else
  {
    TtmiLogError("TtmiCreateTerminal", 843, inserted, inserted);
    TtmpSetTerminalPendingCleanup(a1, v19);
  }
  return v13;
}
