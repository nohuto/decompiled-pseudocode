/*
 * XREFs of VidSchiProcessIsrPreemptedPacket @ 0x1C00175D0
 * Callers:
 *     VidSchDdiNotifyInterruptWorker @ 0x1C000B040 (VidSchDdiNotifyInterruptWorker.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x1C0006E50 (VidSchiProfilePerformanceTick.c)
 *     VidSchiUpdateContextRunningTimeAtISR @ 0x1C000B910 (VidSchiUpdateContextRunningTimeAtISR.c)
 */

void __fastcall VidSchiProcessIsrPreemptedPacket(__int64 a1, int a2, int a3, __int64 a4)
{
  union _SLIST_HEADER *v5; // rbp
  int v8; // esi
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // r13
  __int64 v13; // rax
  unsigned int v14; // r12d
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rax
  bool v18; // zf
  _QWORD v19[2]; // [rsp+40h] [rbp-58h] BYREF
  __int128 v20; // [rsp+50h] [rbp-48h]
  unsigned int v21; // [rsp+A8h] [rbp+10h]

  v5 = *(union _SLIST_HEADER **)(a1 + 24);
  if ( *(_DWORD *)(a1 + 112) != a2 )
  {
    v8 = (a3 & 1) << 6;
    do
    {
      v9 = *(unsigned int *)(a1 + 1412);
      v10 = *(_QWORD *)(a1 + 8 * v9 + 1424);
      _InterlockedExchange((volatile __int32 *)(a1 + 1412), ((_BYTE)v9 + 1) & 0xF);
      v11 = *(unsigned int *)(a1 + 1556);
      *(_DWORD *)(a1 + 500) = ((unsigned __int8)*(_DWORD *)(a1 + 500) + 1) & 0xF;
      v12 = *(_QWORD *)(a1 + 8 * v11 + 1568);
      v21 = ((_BYTE)v11 + 1) & 0xF;
      _InterlockedExchange((volatile __int32 *)(a1 + 1556), v21);
      v13 = *(_QWORD *)(v10 + 104);
      if ( *(_DWORD *)(v10 + 88) == 3 )
      {
        *(_QWORD *)(a1 + 112) = v13;
        v14 = 8;
        *(_QWORD *)(v10 + 80) = MEMORY[0xFFFFF78000000320];
        *(_DWORD *)(v10 + 72) = 10;
        *(_DWORD *)(v10 + 16) = 1;
        _InterlockedDecrement((volatile signed __int32 *)(a1 + 2904));
      }
      else
      {
        *(_QWORD *)(a1 + 56) = v13;
        v17 = *(_QWORD *)(v10 + 104);
        ++*(_DWORD *)(a1 + 2908);
        *(_QWORD *)(a1 + 80) = v17;
        v18 = *(_QWORD *)(v10 + 56) == 0LL;
        *(_QWORD *)(v10 + 80) = MEMORY[0xFFFFF78000000320];
        *(_DWORD *)(v10 + 72) = 11;
        *(_DWORD *)(v10 + 16) = 2;
        if ( !v18 )
        {
          *(_QWORD *)(*(_QWORD *)(v10 + 56) + 56LL) = MEMORY[0xFFFFF78000000320];
          *(_DWORD *)(*(_QWORD *)(v10 + 56) + 52LL) = 11;
        }
        v14 = 10;
      }
      if ( a3 )
      {
        ++*(_QWORD *)(a1 + 40);
        ++v5[27].Alignment;
      }
      v15 = *(_DWORD *)(v10 + 92);
      v19[0] = 0LL;
      v19[1] = v12;
      *(_DWORD *)(v10 + 92) = v8 | v15 & 0xFFFFFFBF;
      v20 = 0LL;
      VidSchiUpdateContextRunningTimeAtISR(v19);
      v16 = *(_QWORD *)(a1 + 8LL * v21 + 1568);
      if ( v16 )
      {
        if ( v16 != v12 )
          *(_QWORD *)(v16 + 464) = *(_QWORD *)(v12 + 464);
      }
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 2892));
      VidSchiProfilePerformanceTick(v14, (__int64)v5, a1, 0LL, 0LL, 0LL, v10, a4);
      ExpInterlockedPushEntrySList(v5 + 111, (PSLIST_ENTRY)(v10 + 32));
    }
    while ( *(_DWORD *)(a1 + 112) != a2 );
  }
}
