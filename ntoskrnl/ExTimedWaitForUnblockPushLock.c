/*
 * XREFs of ExTimedWaitForUnblockPushLock @ 0x1402BF9A0
 * Callers:
 *     ExBlockOnAddressPushLock @ 0x1402BF8C0 (ExBlockOnAddressPushLock.c)
 *     ExpUnblockPushLock @ 0x1402BFD34 (ExpUnblockPushLock.c)
 *     ExWaitForUnblockPushLock @ 0x140607730 (ExWaitForUnblockPushLock.c)
 * Callees:
 *     ExpUnblockPushLock @ 0x1402BFD34 (ExpUnblockPushLock.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 */

__int64 __fastcall ExTimedWaitForUnblockPushLock(__int64 a1, char *a2, LARGE_INTEGER *a3)
{
  volatile signed __int32 *v3; // r9
  __int64 v4; // rbx
  int v8; // edx
  unsigned int v9; // ebx
  __int64 v10; // r8
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax

  *(_WORD *)a2 = 0;
  *((_DWORD *)a2 + 1) = 0;
  v3 = (volatile signed __int32 *)(a2 + 52);
  v4 = (unsigned int)ExpSpinCycleCount;
  *((_QWORD *)a2 + 2) = a2 + 8;
  *((_QWORD *)a2 + 1) = a2 + 8;
  a2[2] = 6;
  if ( MEMORY[0xFFFFF7800000036A] <= 1u )
  {
LABEL_8:
    if ( _interlockedbittestandreset(v3, 1u) )
    {
      v9 = KeWaitForSingleObject(a2, WrPushLock, 0, 0, a3);
      if ( v9 )
      {
        LOBYTE(v10) = 1;
        ExpUnblockPushLock(a1, a2, v10);
      }
    }
    else
    {
      return 0;
    }
    return v9;
  }
  else
  {
    if ( a2 != (char *)-52LL && MEMORY[0xFFFFF78000000297] )
    {
      v12 = __rdtsc();
      v13 = v12 + v4;
      while ( 1 )
      {
        __asm { monitorx rax, rcx, rdx }
        if ( (*v3 & 2) == 0 )
          break;
        v14 = v12;
        v15 = __rdtsc();
        v12 = v15;
        if ( v15 <= v14 || v15 >= v13 )
          goto LABEL_8;
        __asm { mwaitx  rax, rcx, rbx }
      }
    }
    else
    {
      v8 = 0;
      while ( (*v3 & 2) != 0 )
      {
        if ( v8 == (unsigned int)v4 / MEMORY[0xFFFFF780000002D6] )
          goto LABEL_8;
        _mm_pause();
        ++v8;
      }
    }
    return 0LL;
  }
}
