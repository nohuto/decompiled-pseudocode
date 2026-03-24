/*
 * XREFs of VidSchiIsHardwareCompletedDependingCommandForFlip @ 0x1C0003A90
 * Callers:
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C0002FF0 (VidSchiSubmitMmIoFlipCommand.c)
 *     ?VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C00386C4 (-VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 * Callees:
 *     VidSchiUpdateLastCompletedPresentTimestamp @ 0x1C000D450 (VidSchiUpdateLastCompletedPresentTimestamp.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018AA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VidSchiIsHardwareCompletedDependingCommandForFlip(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rdi
  __int64 v5; // rdx
  __int64 v6; // r9
  _DWORD *v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // r10d
  unsigned int v10; // r11d
  bool v11; // cc
  unsigned int v13; // ecx
  __int64 v14; // rdx
  unsigned __int64 *v15; // rax
  __int64 v16; // rcx

  v3 = *(_QWORD *)(a1 + 1040);
  if ( *(_BYTE *)(v3 + 204) || _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 200), 0, 0) )
    return 1LL;
  v5 = *(unsigned int *)(a1 + 1092);
  if ( (*(_DWORD *)(a1 + 1136) & 0x4000) != 0 )
  {
    v13 = 0;
    if ( (_DWORD)v5 )
    {
      do
      {
        v14 = *(_QWORD *)(a1 + 8LL * v13);
        a3 = *(_QWORD *)(a1 + 8LL * v13 + 512);
        if ( !*(_BYTE *)(v14 + 28) )
        {
          v15 = *(unsigned __int64 **)(v14 + 64);
          if ( *(_BYTE *)(v14 + 29) )
          {
            if ( *v15 < a3 )
              return 0LL;
          }
          else if ( *(_DWORD *)v15 - (int)a3 < 0 )
          {
            return 0LL;
          }
        }
        ++v13;
      }
      while ( v13 < *(_DWORD *)(a1 + 1092) );
    }
    goto LABEL_17;
  }
  if ( (_DWORD)v5 )
    v6 = *(_QWORD *)(a1 + 8LL * (unsigned int)(v5 - 1));
  else
    v6 = 0LL;
  a3 = 0LL;
  if ( !(_DWORD)v5 )
  {
LABEL_15:
    if ( v6 )
    {
      LOBYTE(v5) = 1;
      VidSchiUpdateLastCompletedPresentTimestamp(v6, v5, 0LL);
    }
LABEL_17:
    if ( (*(_DWORD *)(a1 + 1136) & 0x8000) != 0 )
    {
      v16 = *(_QWORD *)(v3 + 32);
      if ( *(_BYTE *)(v16 + 56) )
        ((void (__fastcall *)(_QWORD, __int64 (*)(void), unsigned __int64))DxgCoreInterface[22])(
          *(_QWORD *)(v16 + 8),
          DxgCoreInterface[0],
          a3);
    }
    return 1LL;
  }
  v7 = (_DWORD *)(a1 + 520);
  while ( 1 )
  {
    v8 = *((_QWORD *)v7 - 65);
    if ( v8 )
    {
      v9 = v7[1];
      v10 = *(_DWORD *)(v8 + 164);
      v11 = v9 <= v10;
      if ( v9 == v10 )
      {
        if ( *v7 > *(_DWORD *)(v8 + 160) )
          return 0LL;
        v11 = v9 <= v10;
      }
      if ( !v11 )
        return 0LL;
    }
    a3 = (unsigned int)(a3 + 1);
    v7 += 2;
    if ( (unsigned int)a3 >= (unsigned int)v5 )
      goto LABEL_15;
  }
}
