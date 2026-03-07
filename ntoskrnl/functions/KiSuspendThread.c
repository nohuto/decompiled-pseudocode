char __fastcall KiSuspendThread(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // si
  __int64 v6; // r11
  char v7; // di
  char result; // al
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // r14
  volatile signed __int32 *v13; // rbp
  __int64 v14; // rcx
  _QWORD *v15; // rax
  char v16; // al
  unsigned __int64 v17; // rbp
  unsigned __int64 v18; // rcx
  int v19; // [rsp+50h] [rbp+8h] BYREF
  int v20; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  v19 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v19);
    while ( *(_QWORD *)(a1 + 64) );
  }
  if ( (*(_DWORD *)(a1 + 116) & 0x4000) != 0 )
  {
    v4 = 1;
    if ( *(_DWORD *)(a1 + 740) )
    {
      v6 = a1 + 648;
      *(_DWORD *)(a1 + 740) = 0;
      v7 = 0;
      if ( !*(_BYTE *)(a1 + 730) )
      {
        *(_BYTE *)(a1 + 730) = 1;
        v7 = 1;
        KiInsertQueueApc(a1 + 648, a2, a3);
      }
      if ( KiDisableLightWeightSuspend
        || *(_BYTE *)(a1 + 388) != 5
        || (*(_BYTE *)(a1 + 112) & 7) != 1
        || *(_DWORD *)(a1 + 484)
        || *(_BYTE *)(a1 + 390)
        || *(_BYTE *)(a1 + 192)
        || *(_BYTE *)(a1 + 586)
        || *(_BYTE *)(*(_QWORD *)(a1 + 208) + 17LL) != 5 && *(_BYTE *)(*(_QWORD *)(a1 + 208) + 16LL) != 1 )
      {
        if ( v7 )
          KiSignalThreadForApc(a2, v6, 2);
      }
      else
      {
        v9 = (*(_DWORD *)(a1 + 116) ^ (*(char *)(a1 + 391) << 18)) & 0x40000;
        *(_BYTE *)(a1 + 112) = 3;
        *(_DWORD *)(a1 + 116) ^= v9;
        *(_BYTE *)(a1 + 193) = 1;
        *(_QWORD *)(a1 + 64) = 0LL;
        v10 = *(_QWORD *)(a1 + 208);
        v11 = v10 + 17;
        v12 = v10 + 48LL * *(unsigned __int8 *)(a1 + 587);
        do
        {
          if ( *(_BYTE *)v11 < 5u )
          {
            v13 = *(volatile signed __int32 **)(v11 + 15);
            KiAcquireKobjectLockSafe(v13);
            if ( *(_BYTE *)v11 == 4 )
            {
              v14 = *(_QWORD *)(v11 - 17);
              if ( *(_QWORD *)(v14 + 8) != v11 - 17 || (v15 = *(_QWORD **)(v11 - 9), *v15 != v11 - 17) )
                __fastfail(3u);
              *v15 = v14;
              *(_QWORD *)(v14 + 8) = v15;
            }
            _InterlockedAnd(v13, 0xFFFFFF7F);
            *(_BYTE *)v11 = 6;
          }
          v11 += 48LL;
        }
        while ( v11 - 17 != v12 );
        if ( (*(_DWORD *)(a1 + 116) & 0x200) != 0 )
        {
          v17 = MEMORY[0xFFFFF78000000008];
          if ( (unsigned __int8)KiCancelTimer(a1 + 256, 1) )
          {
            v18 = *(_QWORD *)(a1 + 280);
            if ( v18 <= v17 )
            {
              *(_QWORD *)(a1 + 280) = 0LL;
            }
            else if ( (*(_BYTE *)(a1 + 257) & 1) != 0 )
            {
              *(_QWORD *)(a1 + 280) += MEMORY[0xFFFFF78000000014] - v17;
            }
            else
            {
              *(_QWORD *)(a1 + 280) = v17 - v18;
            }
          }
          else
          {
            *(_QWORD *)(a1 + 280) = 0LL;
            *(_BYTE *)(a1 + 481) = 4;
            *(_QWORD *)(a1 + 264) = a1 + 464;
            *(_QWORD *)(a1 + 272) = a1 + 464;
          }
        }
        if ( (*(_DWORD *)(a1 + 120) & 0x4000) != 0
          && !_interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 0x14u) )
        {
          KiDecrementProcessStackCount(*(_QWORD *)(a1 + 184));
        }
        v20 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
        {
          do
            KeYieldProcessorEx(&v20);
          while ( *(_QWORD *)(a1 + 64) );
        }
        v16 = *(_BYTE *)(a1 + 112) & 0xFC;
        *(_DWORD *)(a1 + 116) = *(_DWORD *)(a1 + 116) & 0xFFFDFDFF | ((*(_DWORD *)(a1 + 116) & 0x200) << 8);
        v16 |= 4u;
        *(_BYTE *)(a1 + 112) = v16;
        if ( (v16 & 0x20) != 0 )
          KiSignalThread(a2, a1, 256LL, 0LL);
      }
    }
  }
  result = v4;
  *(_QWORD *)(a1 + 64) = 0LL;
  return result;
}
