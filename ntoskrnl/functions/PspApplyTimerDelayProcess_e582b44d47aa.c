__int64 __fastcall PspApplyTimerDelayProcess(__int64 a1, _DWORD *a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r14
  unsigned int v4; // esi
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r9
  unsigned __int64 v10; // rbx
  signed __int64 v11; // rax
  __int64 v12; // rtt
  signed __int64 v13; // rcx
  unsigned __int64 v14; // rdi
  bool v15; // zf

  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  v6 = 0LL;
  --CurrentThread->SpecialApcDisable;
  _interlockedbittestandset((volatile signed __int32 *)(a1 + 632), 4u);
  if ( a2 )
  {
    LOBYTE(a3) = 0;
    v6 = (*a2 / 0x2710u) & 0x3FFFFFFF | ((unsigned __int64)((a2[1] / 0x2710u) & 0x3FFFFFFF) << 30);
  }
  else
  {
    LOBYTE(a3) = 1;
  }
  v7 = *(_QWORD *)(a1 + 2416);
  if ( (_BYTE)a3 )
  {
    if ( ((v7 | (v7 >> 30)) & 0x3FFFFFFF) == 0 )
      goto LABEL_22;
    v6 = v7 & 0xFFFFFFFFFFFFFFFLL;
  }
  else if ( (((unsigned int)v6 ^ (unsigned int)v7) & 0x3FFFFFFF) == 0
         && (v7 & 0xFFFFFFFC0000000LL) == (v6 & 0xFFFFFFFFC0000000uLL) )
  {
    goto LABEL_22;
  }
  v8 = 0x8000000000000000uLL;
  v9 = 0x4000000000000000LL;
  v10 = ((unsigned __int64)(unsigned __int8)a3 << 61) | 0x8000000000000000uLL | v6;
  v12 = v7 & 0x7FFFFFFFFFFFFFFFLL;
  v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 2416), v10, v7 & 0x7FFFFFFFFFFFFFFFLL);
  if ( v12 != v11 )
  {
    do
    {
      v13 = v11;
      if ( v11 < 0 )
      {
        if ( (_BYTE)a3 )
        {
          v8 = v11 & 0xFFFFFFFFFFFFFFFLL;
          v10 = v11 & 0xFFFFFFFFFFFFFFFLL | v10 & 0xF000000000000000uLL;
        }
        else
        {
          v8 = (unsigned __int64)v11 >> 61;
          if ( (v11 & 0x2000000000000000LL) == 0 )
            goto LABEL_22;
        }
        v10 |= 0x4000000000000000uLL;
      }
      else
      {
        v8 = 0xBFFFFFFFFFFFFFFFuLL;
        v10 &= ~0x4000000000000000uLL;
        if ( (_BYTE)a3 )
        {
          v8 = (v11 ^ v10) & 0xFFFFFFFFFFFFFFFLL;
          v10 ^= v8;
        }
      }
      v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 2416), v10, v11);
    }
    while ( v11 != v13 );
  }
  if ( (v10 & 0x4000000000000000LL) == 0 )
  {
    do
    {
      v14 = v10;
      PspSetProcessTimerDelayForKTimers(a1, v8, a3, v9);
      v4 = PspSetProcessTimerDelayForWin32(a1);
      v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 2416), v10 & 0x1FFFFFFFFFFFFFFFLL, v10);
    }
    while ( v14 != v10 );
  }
LABEL_22:
  v15 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v15 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return v4;
}
