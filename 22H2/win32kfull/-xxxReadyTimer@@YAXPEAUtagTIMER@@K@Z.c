/*
 * XREFs of ?xxxReadyTimer@@YAXPEAUtagTIMER@@K@Z @ 0x1C0167FD0
 * Callers:
 *     xxxTimersProc @ 0x1C0168118 (xxxTimersProc.c)
 * Callees:
 *     SetWakeBit @ 0x1C0051880 (SetWakeBit.c)
 *     ?ApplyTimerDelay@@YAXPEAUtagTIMER@@@Z @ 0x1C00FB180 (-ApplyTimerDelay@@YAXPEAUtagTIMER@@@Z.c)
 *     ?TimerStatistics@@YAXPEBUtagTIMER@@@Z @ 0x1C010B4CC (-TimerStatistics@@YAXPEBUtagTIMER@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall xxxReadyTimer(struct tagTIMER *a1, int a2)
{
  int v4; // ecx
  __int64 v5; // rax
  __int64 *v6; // rcx
  __int64 v7; // rax
  __int64 **v8; // rdx

  *((_DWORD *)a1 + 13) = *((_DWORD *)a1 + 10);
  ApplyTimerDelay(a1);
  EtwTraceTimerProc();
  v4 = *((_DWORD *)a1 + 12);
  if ( (v4 & 1) == 0 )
  {
    if ( (v4 & 0x10) != 0 )
    {
      v4 |= 0x20u;
      *((_DWORD *)a1 + 12) = v4;
    }
    if ( *((_DWORD *)a1 + 32) == *((_DWORD *)a1 + 33) )
      *((_DWORD *)a1 + 33) = a2;
    if ( (v4 & 4) != 0 )
    {
      TimerStatistics(a1);
      (*((void (__fastcall **)(_QWORD, __int64, _QWORD, struct tagTIMER *))a1 + 4))(
        0LL,
        280LL,
        *((_QWORD *)a1 + 12),
        a1);
      *((_DWORD *)a1 + 32) = *((_DWORD *)a1 + 33);
    }
    else
    {
      v5 = *((_QWORD *)a1 + 3);
      *((_DWORD *)a1 + 12) = v4 | 1;
      v6 = (__int64 *)((char *)a1 + 56);
      ++*(_DWORD *)(v5 + 604);
      v7 = *((_QWORD *)a1 + 3) + 1216LL;
      v8 = *(__int64 ***)(*((_QWORD *)a1 + 3) + 1224LL);
      if ( *v8 != (__int64 *)v7 )
        __fastfail(3u);
      *((_QWORD *)a1 + 8) = v8;
      *v6 = v7;
      *v8 = v6;
      *(_QWORD *)(v7 + 8) = v6;
      SetWakeBit(*((_QWORD *)a1 + 3), 0x10u);
      ++*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 424LL) + 1048LL);
    }
  }
}
