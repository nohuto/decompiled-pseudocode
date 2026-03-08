/*
 * XREFs of ParseRelease @ 0x1C005BF70
 * Callers:
 *     ReleaseASLMutex @ 0x1C0054DD0 (ReleaseASLMutex.c)
 * Callees:
 *     AcpiDiagTraceAmlError @ 0x1C0007768 (AcpiDiagTraceAmlError.c)
 *     PerformMutexDriverCallbacks @ 0x1C004C9F4 (PerformMutexDriverCallbacks.c)
 *     ReleaseGL @ 0x1C004CEA8 (ReleaseGL.c)
 *     LogError @ 0x1C004E224 (LogError.c)
 *     PrintDebugMessage @ 0x1C004EB7C (PrintDebugMessage.c)
 *     HeapFree @ 0x1C004EE4C (HeapFree.c)
 *     DequeueAndReadyContext @ 0x1C00548A4 (DequeueAndReadyContext.c)
 */

__int64 __fastcall ParseRelease(__int64 a1, __int64 a2, int a3)
{
  int v3; // r9d
  unsigned int *v4; // rsi
  const void *v5; // rdi
  KSPIN_LOCK *v8; // r14
  KIRQL v9; // r15
  int v10; // ecx
  __int64 v11; // rax
  const void *v12; // rdx
  const void *v13; // r8
  int v14; // r9d
  KIRQL v15; // al
  KIRQL v16; // r15
  __int64 v17; // rcx
  __int64 v18; // r8
  _QWORD *v19; // rax
  int v20; // eax
  __int64 v21; // rcx

  v3 = *(_DWORD *)(a2 + 16);
  v4 = *(unsigned int **)(a2 + 32);
  LODWORD(v5) = a3;
  if ( (v3 & 0xF) == 0 )
  {
    LODWORD(v5) = 0;
    v8 = (KSPIN_LOCK *)(v4 + 46);
    *(_DWORD *)(a2 + 16) = v3 + 1;
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v4 + 23);
    if ( v4[1] )
    {
      v11 = *((_QWORD *)v4 + 1);
      if ( v11 && *(_QWORD *)(v11 + 8) == a1 )
      {
        if ( *v4 <= *(_DWORD *)(a1 + 112) )
        {
          *(_DWORD *)(a1 + 112) = *v4;
          if ( v4[1] == 1 )
            *(_DWORD *)(a2 + 16) |= 0x80000u;
LABEL_18:
          KeReleaseSpinLock((PKSPIN_LOCK)v4 + 23, v9);
          v3 = *(_DWORD *)(a2 + 16);
          if ( (*(_BYTE *)(a2 + 16) & 0xF) == 3 )
            goto LABEL_30;
          if ( (v3 & 0x80000) == 0 )
          {
            ++v3;
LABEL_25:
            *(_DWORD *)(a2 + 16) = v3 + 1;
            v15 = KeAcquireSpinLockRaiseToDpc(v8);
            --v4[1];
            v16 = v15;
            if ( (*(_DWORD *)(a2 + 16) & 0x80000) != 0 )
            {
              v17 = *((_QWORD *)v4 + 1);
              v18 = *(_QWORD *)(v17 + 24);
              if ( *(_QWORD *)(v18 + 8) != v17 + 24 || (v19 = *(_QWORD **)(v17 + 32), *v19 != v17 + 24) )
                __fastfail(3u);
              *v19 = v18;
              *(_QWORD *)(v18 + 8) = v19;
              HeapFree(v17);
              *((_QWORD *)v4 + 1) = 0LL;
              DequeueAndReadyContext((char **)v4 + 2);
            }
            KeReleaseSpinLock(v8, v16);
            goto LABEL_30;
          }
          goto LABEL_21;
        }
        LODWORD(v5) = -1072431083;
        LogError(-1072431083);
        AcpiDiagTraceAmlError(a1, -1072431083);
        v12 = (const void *)*v4;
        v10 = 136;
        v13 = (const void *)*(unsigned int *)(a1 + 112);
LABEL_17:
        PrintDebugMessage(v10, v12, v13, 0LL, 0LL);
        *(_DWORD *)(a2 + 16) += 2;
        goto LABEL_18;
      }
      LODWORD(v5) = -1072431081;
      LogError(-1072431081);
      AcpiDiagTraceAmlError(a1, -1072431081);
      v10 = 138;
    }
    else
    {
      LODWORD(v5) = -1072431082;
      LogError(-1072431082);
      AcpiDiagTraceAmlError(a1, -1072431082);
      v10 = 137;
    }
    v13 = 0LL;
    v12 = 0LL;
    goto LABEL_17;
  }
  if ( (*(_DWORD *)(a2 + 16) & 0xF) == 1 )
  {
LABEL_21:
    v14 = v3 & 0x20000;
    if ( v4[8] == 3 )
    {
      LODWORD(v5) = PerformMutexDriverCallbacks(3u, (__int64)v4, a1 & -(__int64)(v14 != 0), 0LL, 0);
      if ( (_DWORD)v5 == 32772 )
        return (unsigned int)v5;
    }
    v3 = *(_DWORD *)(a2 + 16) + 1;
    goto LABEL_24;
  }
  if ( (*(_DWORD *)(a2 + 16) & 0xF) == 2 )
  {
LABEL_24:
    v8 = (KSPIN_LOCK *)(v4 + 46);
    goto LABEL_25;
  }
  if ( (*(_DWORD *)(a2 + 16) & 0xF) != 3 )
  {
    if ( (*(_DWORD *)(a2 + 16) & 0xF) != 4 )
      return (unsigned int)v5;
    goto LABEL_33;
  }
LABEL_30:
  if ( (++*(_DWORD *)(a2 + 16) & 0x10000) != 0 )
  {
    v20 = ReleaseGL();
    v5 = (const void *)v20;
    if ( v20 )
    {
      LogError(-1072431101);
      AcpiDiagTraceAmlError(a1, -1072431101);
      PrintDebugMessage(172, v5, 0LL, 0LL, 0LL);
      LODWORD(v5) = -1072431101;
    }
  }
LABEL_33:
  if ( (*(_DWORD *)(a2 + 16) & 0x40000) == 0 )
  {
    v21 = *(_QWORD *)(a1 + 416);
    *(_QWORD *)(a1 + 416) = *(_QWORD *)(v21 + 8);
    HeapFree(v21);
  }
  return (unsigned int)v5;
}
