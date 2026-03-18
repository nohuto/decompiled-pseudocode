/*
 * XREFs of DoTimer @ 0x1C005BF94
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0055460 (xxxRealInternalGetMessage.c)
 * Callees:
 *     ?StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagUIPI_INFO@@@Z @ 0x1C0058160 (-StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagU.c)
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z @ 0x1C005BB70 (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z.c)
 *     CheckPwndFilter @ 0x1C005C1A8 (CheckPwndFilter.c)
 *     ?TimerStatistics@@YAXPEBUtagTIMER@@@Z @ 0x1C005C1E4 (-TimerStatistics@@YAXPEBUtagTIMER@@@Z.c)
 *     PtiKbdFromQ @ 0x1C00AC810 (PtiKbdFromQ.c)
 */

__int64 __fastcall DoTimer(__int64 a1)
{
  __int64 v1; // r10
  __int64 v2; // r9
  _QWORD *i; // rdi
  _QWORD *v4; // rbx
  int v5; // eax
  struct tagQMSG *v6; // r10
  struct tagWND *v7; // rdx
  unsigned int v8; // r9d
  __int64 v9; // rcx
  _QWORD *v10; // rdx
  __int64 v11; // rax
  _QWORD *v12; // rcx
  _QWORD *v14; // rbx
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  _QWORD *v17; // rdx
  __int64 result; // rax

  v1 = a1;
  v2 = gptiCurrent + 1240LL;
  for ( i = *(_QWORD **)(gptiCurrent + 1240LL); ; i = (_QWORD *)*i )
  {
    if ( i == (_QWORD *)v2 )
      return 0LL;
    v4 = i - 7;
    if ( (unsigned int)CheckPwndFilter(i[4], v1) )
      break;
  }
  TimerStatistics((const struct tagTIMER *)(i - 7));
  v5 = *((_DWORD *)v4 + 33);
  if ( *((_DWORD *)v4 + 32) == v5 )
    *((_DWORD *)v4 + 32) = v5;
  v6 = AllocQEntryEx((struct tagMLIST *)(gptiCurrent + 808LL), 0LL, 0);
  if ( v6 )
  {
    v7 = (struct tagWND *)v4[11];
    if ( v7 )
      v8 = *(_DWORD *)(*((_QWORD *)v7 + 5) + 288LL);
    else
      v8 = *(_DWORD *)(*(_QWORD *)(PtiKbdFromQ(*(_QWORD *)(gptiCurrent + 432LL)) + 424) + 280LL);
    if ( (v4[6] & 2) == 0 || (v9 = 280LL, !v4[4]) )
      v9 = v4[4];
    StoreQMessage(v6, v7, (v4[6] & 2) != 0 ? 280 : 275, v4[12], v9, 0, 0LL, 0, 0LL, 0, 0LL, v8, 0LL, 0LL);
    if ( (*(_DWORD *)(gptiCurrent + 488LL) & 1) == 0 )
    {
      _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(gptiCurrent + 448LL) + 8LL), 0x108u);
      _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(gptiCurrent + 448LL) + 4LL), 0x108u);
      if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 16LL) & 0x108) != 0 )
        KeSetEvent(*(PRKEVENT *)(gptiCurrent + 736LL), 2, 0);
    }
  }
  *((_DWORD *)v4 + 12) &= ~1u;
  v10 = (_QWORD *)*i;
  v11 = v4[3];
  if ( *(_QWORD **)(*i + 8LL) != i )
    goto LABEL_27;
  v12 = (_QWORD *)i[1];
  if ( (_QWORD *)*v12 != i )
    goto LABEL_27;
  *v12 = v10;
  v10[1] = v12;
  if ( (*(_DWORD *)(v11 + 604))-- == 1 )
    _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(v11 + 448) + 8LL), 0xFFFFFFEF);
  v14 = v4 + 9;
  v15 = *v14;
  if ( *(_QWORD **)(*v14 + 8LL) != v14
    || (v16 = (_QWORD *)v14[1], (_QWORD *)*v16 != v14)
    || (*v16 = v15, *(_QWORD *)(v15 + 8) = v16, v17 = (_QWORD *)gtmrListHead[1], *v17 != gtmrListHead[0]) )
  {
LABEL_27:
    __fastfail(3u);
  }
  *v14 = gtmrListHead[0];
  result = 1LL;
  v14[1] = v17;
  *v17 = v14;
  gtmrListHead[1] = v14;
  return result;
}
