void __fastcall xxxReadyTimer(struct tagTIMER *a1, int a2)
{
  __int64 v4; // rcx
  int v5; // ecx
  __int64 v6; // rax
  __int64 *v7; // rax
  __int64 v8; // rcx
  __int64 **v9; // rdx

  *((_DWORD *)a1 + 13) = *((_DWORD *)a1 + 10);
  ApplyTimerDelay(a1);
  EtwTraceTimerProc(v4);
  v5 = *((_DWORD *)a1 + 12);
  if ( (v5 & 1) == 0 )
  {
    if ( (v5 & 0x10) != 0 )
    {
      v5 |= 0x20u;
      *((_DWORD *)a1 + 12) = v5;
    }
    if ( *((_DWORD *)a1 + 32) == *((_DWORD *)a1 + 33) )
      *((_DWORD *)a1 + 33) = a2;
    if ( (v5 & 4) != 0 )
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
      v6 = *((_QWORD *)a1 + 3);
      *((_DWORD *)a1 + 12) = v5 | 1;
      ++*(_DWORD *)(v6 + 604);
      v7 = (__int64 *)((char *)a1 + 56);
      v8 = *((_QWORD *)a1 + 3) + 1256LL;
      v9 = *(__int64 ***)(*((_QWORD *)a1 + 3) + 1264LL);
      if ( *v9 != (__int64 *)v8 )
        __fastfail(3u);
      *((_QWORD *)a1 + 8) = v9;
      *v7 = v8;
      *v9 = v7;
      *(_QWORD *)(v8 + 8) = v7;
      SetWakeBit(*((_QWORD *)a1 + 3), 0x10u);
      ++*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 424LL) + 1032LL);
    }
  }
}
