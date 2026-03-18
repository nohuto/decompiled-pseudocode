/*
 * XREFs of xxxDoPaint @ 0x1C005C838
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0055460 (xxxRealInternalGetMessage.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x1C005BDE0 (PopAndFreeW32ThreadLock.c)
 *     CheckPwndFilter @ 0x1C005C1A8 (CheckPwndFilter.c)
 *     ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x1C005CAB0 (-xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z.c)
 *     DecPaintCount @ 0x1C005DF94 (DecPaintCount.c)
 *     SetOrClrWF @ 0x1C0069680 (SetOrClrWF.c)
 *     PushW32ThreadLock @ 0x1C007F6F0 (PushW32ThreadLock.c)
 *     ExchangeW32ThreadLock @ 0x1C00A68FC (ExchangeW32ThreadLock.c)
 */

__int64 __fastcall xxxDoPaint(__int64 a1, __int64 a2)
{
  struct tagWND *v4; // rbx
  struct tagWND *v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v10; // rdi
  __int64 v11; // rax
  _QWORD *i; // rdi
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+30h] [rbp-18h]

  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 4) != 0 )
  {
    v10 = *(_QWORD *)(gptiCurrent + 616LL);
    if ( !v10 )
      return 0LL;
    v4 = *(struct tagWND **)(*(_QWORD *)(v10 + 56) + 8LL);
    v11 = *((_QWORD *)v4 + 5);
    if ( !*(_QWORD *)(v11 + 136) && (*(_BYTE *)(v11 + 17) & 0x10) == 0 )
    {
      v4 = 0LL;
      v14 = 0LL;
      v13 = 0LL;
      PushW32ThreadLock(0LL, &v13, UserDereferenceObject);
      for ( i = *(_QWORD **)(v10 + 16); i; i = (_QWORD *)i[4] )
      {
        ObfReferenceObject(i);
        ExchangeW32ThreadLock(i, &v13);
        v4 = xxxInternalDoPaint(*(struct tagWND **)(i[1] + 24LL), gptiCurrent);
        if ( v4 )
          break;
      }
      PopAndFreeW32ThreadLock((__int64)&v13);
    }
  }
  else
  {
    v4 = xxxInternalDoPaint(
           *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 8LL) + 24LL),
           gptiCurrent);
  }
  if ( !v4 || !(unsigned int)CheckPwndFilter((__int64)v4, a1) )
    return 0LL;
  if ( (*(_BYTE *)(*((_QWORD *)v4 + 5) + 17LL) & 0x10) != 0 )
  {
    SetOrClrWF(0LL, v4, 272LL, 1LL);
    if ( !*(_QWORD *)(*((_QWORD *)v4 + 5) + 136LL) )
      DecPaintCount(v4);
  }
  SetOrClrWF(0LL, v4, 1028LL, 1LL);
  SetOrClrWF(0LL, v4, 288LL, 1LL);
  v5 = v4;
  while ( (*(_WORD *)(*((_QWORD *)v5 + 5) + 42LL) & 0x2FFF) != 0x29D )
  {
    v5 = (struct tagWND *)*((_QWORD *)v5 + 13);
    if ( (*(_BYTE *)(*((_QWORD *)v5 + 5) + 31LL) & 2) == 0 )
    {
      SetOrClrWF(1LL, v4, 1025LL, 1LL);
      break;
    }
    if ( !v5 )
      break;
  }
  v6 = *(_QWORD *)v4;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)a2 = v6;
  *(_DWORD *)(a2 + 32) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  *(_QWORD *)(a2 + 36) = LogicalCursorPosFromDpiAwarenessContext(*(unsigned int *)(*((_QWORD *)v4 + 5) + 288LL));
  v7 = *((_QWORD *)v4 + 5);
  if ( (*(_BYTE *)(v7 + 21) & 2) == 0 && (*(_BYTE *)(v7 + 31) & 0x20) != 0 && *(_QWORD *)(*((_QWORD *)v4 + 17) + 80LL) )
  {
    *(_QWORD *)(a2 + 16) = 1LL;
    v8 = 38;
  }
  else
  {
    v8 = 15;
  }
  *(_DWORD *)(a2 + 8) = v8;
  EtwTraceRetrievePseudoMessage(0LL, a2, 1LL);
  return 1LL;
}
