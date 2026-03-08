/*
 * XREFs of MiAgeWorkingSetTail @ 0x1402C9E50
 * Callers:
 *     MiAgePte @ 0x1403260A0 (MiAgePte.c)
 * Callees:
 *     KeFlushTb @ 0x140323CB0 (KeFlushTb.c)
 *     MiFreeWsleList @ 0x14032B2B0 (MiFreeWsleList.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x140387610 (KeFlushMultipleRangeCurrentTb.c)
 *     KeFlushCurrentTbOnly @ 0x1403876F4 (KeFlushCurrentTbOnly.c)
 *     KeFlushMultipleRangeTb @ 0x14038C374 (KeFlushMultipleRangeTb.c)
 *     MiProcessVmAccessedInfo @ 0x140463A5E (MiProcessVmAccessedInfo.c)
 *     MiQueryEPTAccessedState @ 0x140463B2C (MiQueryEPTAccessedState.c)
 */

__int64 __fastcall MiAgeWorkingSetTail(__int64 a1)
{
  __int64 v1; // rbx
  int i; // r14d
  int *v4; // rdi
  __int64 v5; // rcx
  _DWORD *v6; // rdx
  __int64 v8; // r8
  unsigned __int64 v9; // r9
  _KPROCESS *Process; // rdx
  unsigned int v11; // eax
  __int64 v12; // rdx
  unsigned __int64 *v13; // r15

  v1 = *(_QWORD *)(a1 + 168);
  for ( i = 0; ; i = 1 )
  {
    v4 = *(int **)(v1 + 56);
    if ( !v4 )
      goto LABEL_4;
    v5 = (unsigned int)v4[3];
    if ( !(_DWORD)v5 )
      goto LABEL_4;
    v8 = *((unsigned __int8 *)v4 + 4);
    v9 = qword_140C65810;
    if ( (v8 & 2) != 0 || *v4 != 1 )
    {
      v11 = *v4;
      if ( *v4 != 1 )
      {
        if ( (v8 & 8) != 0 )
          v12 = 2LL;
        else
          v12 = 1LL;
        goto LABEL_16;
      }
    }
    else
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process[2].Affinity.StaticBitmap[5] || Process->SecureState.SecureHandle )
      {
        v11 = *v4;
        v9 = -1LL;
      }
      else
      {
        v11 = *v4;
      }
    }
    v12 = 0LL;
LABEL_16:
    v13 = (unsigned __int64 *)(v4 + 4);
    if ( *((_BYTE *)v4 + 5) || *v13 > v9 )
    {
      if ( (v8 & 1) != 0 )
        KeFlushCurrentTbOnly(v11, v12, v8, v9);
      else
        KeFlushTb(v11, v12);
      *((_BYTE *)v4 + 5) = 0;
    }
    else if ( (v8 & 1) != 0 )
    {
      KeFlushMultipleRangeCurrentTb(v5, v4 + 6, v11);
    }
    else
    {
      KeFlushMultipleRangeTb(v5, v4 + 6, v11, (unsigned int)v12);
    }
    *((_BYTE *)v4 + 4) &= ~8u;
    v4[3] = 0;
    *v13 = 0LL;
LABEL_4:
    if ( *(_DWORD *)(v1 + 76) )
      MiFreeWsleList(*(_QWORD *)(a1 + 24), v1 + 64, 0LL);
    v6 = *(_DWORD **)(v1 + 248);
    if ( !v6 || !*v6 || !(unsigned int)MiQueryEPTAccessedState(a1, v6, (*(_DWORD *)v1 & 3) != 0) )
      break;
    MiProcessVmAccessedInfo(a1, *(_QWORD *)(v1 + 248), MiAgeWorkingSetEPTCallback, v1);
  }
  if ( (*(_BYTE *)(a1 + 4) & 2) != 0 || i )
    *(_BYTE *)(v1 + 6) = 1;
  return 0LL;
}
