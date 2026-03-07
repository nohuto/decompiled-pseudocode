__int64 __fastcall AcpiPccExecuteCommandAsync(char *DeferredContext, char a2, __int64 a3, __int64 a4)
{
  KSPIN_LOCK *v4; // r14
  unsigned __int64 v9; // rbx
  KIRQL v10; // r12
  LARGE_INTEGER v11; // rax
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rax
  int v15; // ecx
  unsigned int v16; // esi
  unsigned int v17; // ecx
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+60h] [rbp+8h] BYREF

  v4 = (KSPIN_LOCK *)(DeferredContext + 648);
  PerformanceFrequency.QuadPart = 0LL;
  v9 = 0LL;
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)DeferredContext + 81);
  if ( *((_QWORD *)DeferredContext + 37) )
  {
    v11 = KeQueryPerformanceCounter(&PerformanceFrequency);
    v12 = *((_QWORD *)DeferredContext + 37) + *((_QWORD *)DeferredContext + 36);
    if ( v12 > v11.QuadPart )
    {
      v13 = v12 - v11.QuadPart;
      if ( is_mul_ok(v13, 0x989680uLL) )
        v14 = v13 * (unsigned __int128)0x989680uLL / (unsigned __int64)PerformanceFrequency.QuadPart;
      else
        v14 = -10000000 / PerformanceFrequency.QuadPart;
      v9 = v14;
    }
  }
  v15 = *((_DWORD *)DeferredContext + 1);
  v16 = -1073741823;
  if ( (DeferredContext[4] & 0x1E) == 0xA )
  {
    if ( a3 )
    {
      *((_QWORD *)DeferredContext + 31) = a3;
      v17 = v15 & 0xFFFFFFE1 | 0xC;
    }
    else
    {
      v17 = v15 & 0xFFFFFFE1 | 0x10;
    }
    *((_DWORD *)DeferredContext + 1) = v17;
    *((_QWORD *)DeferredContext + 32) = a4;
    if ( v9 )
      *((_DWORD *)DeferredContext + 1) = v17 ^ ((unsigned __int8)v17 ^ (unsigned __int8)(v17 + 2)) & 0x1E;
    v16 = 259;
  }
  KeReleaseSpinLock(v4, v10);
  if ( v16 == 259 )
  {
    **((_BYTE **)DeferredContext + 6) = a2;
    if ( (unsigned __int8)(*DeferredContext - 1) <= 1u )
      **((_WORD **)DeferredContext + 6) &= ~0x8000u;
    else
      **((_WORD **)DeferredContext + 6) = **((_WORD **)DeferredContext + 6) & 0x7FFF | (*((_WORD *)DeferredContext + 2) << 15);
    if ( v9 <= 0x1F4 )
    {
      if ( v9 )
        KeStallExecutionProcessor((v9 + 5) / 0xA);
      AcpiPccRingDoorbell(0LL, DeferredContext, 0LL, 0LL);
    }
    else
    {
      KeSetTimer((PKTIMER)(DeferredContext + 304), (LARGE_INTEGER)-(__int64)v9, (PKDPC)(DeferredContext + 368));
    }
  }
  return v16;
}
