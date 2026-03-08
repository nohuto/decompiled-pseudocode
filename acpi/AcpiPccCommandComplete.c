/*
 * XREFs of AcpiPccCommandComplete @ 0x1C0004760
 * Callers:
 *     AcpiPccWatchdog @ 0x1C0004900 (AcpiPccWatchdog.c)
 *     ACPIPccProcessSci @ 0x1C0033B3C (ACPIPccProcessSci.c)
 * Callees:
 *     <none>
 */

void __fastcall AcpiPccCommandComplete(__int64 a1)
{
  LARGE_INTEGER PerformanceCounter; // rbx
  KIRQL v3; // al
  __int16 *v4; // rcx
  KIRQL v5; // bp
  int v6; // ecx
  __int64 v7; // rbx
  int v8; // edx
  void *v9; // rdx
  _QWORD *v10; // rcx
  _QWORD *v11; // rdx
  __int64 v12; // rax
  unsigned int v13; // eax

  if ( _InterlockedExchange((volatile __int32 *)(a1 + 432), 0) )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 648));
    v4 = *(__int16 **)(a1 + 48);
    v5 = v3;
    *(LARGE_INTEGER *)(a1 + 288) = PerformanceCounter;
    if ( *v4 < 0 && ((*(_BYTE *)a1 + 1) & 0xFE) == 0 )
      _InterlockedDecrement(&AcpiPccSciReferenceCount);
    KeCancelTimer2(a1 + 440, 0LL);
    if ( (**(_WORD **)(a1 + 56) & 1) != 0 )
    {
      v6 = 0;
      if ( (**(_WORD **)(a1 + 56) & 4) != 0 )
        v6 = -1073741435;
    }
    else
    {
      v6 = -1073741643;
    }
    _InterlockedAnd16(*(volatile signed __int16 **)(a1 + 56), 0xFFF8u);
    v7 = 0LL;
    v8 = *(_DWORD *)(a1 + 4) & 0x1E;
    if ( v8 == 12 )
    {
      v9 = (void *)v6;
    }
    else
    {
      if ( v8 != 20 )
      {
        v10 = (_QWORD *)(a1 + 232);
        v11 = *(_QWORD **)(a1 + 232);
        if ( v11 == (_QWORD *)(a1 + 232) )
        {
          v13 = *(_DWORD *)(a1 + 4) & 0xFFFFFFE1 | 6;
        }
        else
        {
          v7 = *(_QWORD *)(a1 + 232);
          if ( (_QWORD *)v11[1] != v10 || (v12 = *v11, *(_QWORD **)(*v11 + 8LL) != v11) )
            __fastfail(3u);
          *v10 = v12;
          *(_QWORD *)(v12 + 8) = v10;
          v13 = *(_DWORD *)(a1 + 4) & 0xFFFFFFE1 | 0xA;
        }
        *(_DWORD *)(a1 + 4) = v13;
        goto LABEL_21;
      }
      v9 = 0LL;
    }
    KeInsertQueueDpc((PRKDPC)(a1 + 576), v9, 0LL);
LABEL_21:
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 648), v5);
    if ( v7 )
    {
      *(_DWORD *)(v7 + 40) = 0;
      KeSetEvent((PRKEVENT)(v7 + 16), 0, 0);
    }
  }
}
