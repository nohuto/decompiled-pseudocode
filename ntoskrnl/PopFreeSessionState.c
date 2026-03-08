/*
 * XREFs of PopFreeSessionState @ 0x14067F574
 * Callers:
 *     NtPowerInformation @ 0x14068AB90 (NtPowerInformation.c)
 * Callees:
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     PopFreeRegistration @ 0x14067F624 (PopFreeRegistration.c)
 */

void __fastcall PopFreeSessionState(int a1)
{
  unsigned int i; // edi
  _DWORD **v3; // rbx
  _DWORD *j; // rax
  int v5; // ecx
  _QWORD *v6; // rcx
  __int64 v7; // rsi

  ExAcquireFastMutex(&PopSettingLock);
  for ( i = 0; i < 2; ++i )
  {
    v3 = (_DWORD **)((char *)&PopSessionSpecificLists + 16 * i);
    for ( j = *v3; j != (_DWORD *)v3; j = (_DWORD *)v7 )
    {
      v7 = *(_QWORD *)j;
      if ( j[12] == a1 )
      {
        v5 = j[13];
        if ( (v5 & 2) != 0 )
        {
          j[13] = v5 | 4;
        }
        else
        {
          if ( *(_DWORD **)(v7 + 8) != j || (v6 = (_QWORD *)*((_QWORD *)j + 1), (_DWORD *)*v6 != j) )
            __fastfail(3u);
          *v6 = v7;
          *(_QWORD *)(v7 + 8) = v6;
          PopFreeRegistration(j);
        }
      }
    }
  }
  ExReleaseFastMutex(&PopSettingLock);
}
