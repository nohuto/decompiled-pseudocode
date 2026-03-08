/*
 * XREFs of VidSchiCompleteRewindPacket @ 0x1C00107E8
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0004B90 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiProcessDpcPreemptedPacket @ 0x1C000FCEC (VidSchiProcessDpcPreemptedPacket.c)
 *     VidSchiRewindPacket @ 0x1C0010730 (VidSchiRewindPacket.c)
 * Callees:
 *     VidSchiUpdateContextStatus @ 0x1C0008230 (VidSchiUpdateContextStatus.c)
 *     VidSchiSetNextRunPacket @ 0x1C0010A40 (VidSchiSetNextRunPacket.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VidSchiCompleteRewindPacket(__int64 a1, int a2)
{
  __int64 v2; // rbp
  unsigned int v3; // edi
  __int64 v6; // r14
  __int64 v7; // rsi
  __int64 v8; // r8
  int v9; // eax
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v14; // rcx
  __int64 v15; // rdx
  void (__fastcall *v16)(_QWORD); // rax

  v2 = *(_QWORD *)(a1 + 96);
  v3 = 0;
  v6 = *(_QWORD *)(v2 + 24);
  if ( (*(_DWORD *)(a1 + 184) & 8) == 0 )
  {
    *(_DWORD *)(a1 + 184) &= ~4u;
    WdLogSingleEntry5(
      4LL,
      a1,
      *(_QWORD *)(a1 + 648),
      *(_QWORD *)(a1 + 656),
      0LL,
      _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0]);
    v7 = *(_QWORD *)(a1 + 656);
    if ( v7 )
    {
      v8 = *(_QWORD *)(a1 + 648);
      if ( v8 )
      {
        v14 = *(_QWORD *)(a1 + 656);
        while ( 1 )
        {
          v15 = *(_QWORD *)(v14 + 32);
          v14 = v15 - 32;
          if ( v15 - 32 == v8 )
            break;
          if ( v15 == a1 + 664 )
            goto LABEL_12;
        }
      }
      do
      {
        WdLogSingleEntry4(4LL, v7, *(int *)(v7 + 52), *(_QWORD *)(a1 + 648), *(unsigned int *)(a1 + 780));
        v9 = *(_DWORD *)(v7 + 80);
        if ( (v9 & 0x10) != 0 )
        {
          *(_DWORD *)(v7 + 80) = v9 & 0xFFFFFFEF;
          if ( *(_DWORD *)(v2 + 11272) != -1 )
          {
            v16 = *(void (__fastcall **)(_QWORD))(v6 + 3088);
            if ( v16 )
              v16(*(_QWORD *)(v6 + 3120));
          }
        }
        ++*(_DWORD *)(a1 + 780);
        ++*(_DWORD *)(v2 + 2880);
        ++*(_DWORD *)(v6 + 720);
        if ( a2 )
        {
          v10 = *(_DWORD *)(v7 + 48);
          if ( v10 )
          {
            if ( v10 == 5 || v10 == 7 )
              *(_DWORD *)(v7 + 80) &= ~1u;
          }
          else if ( (*(_DWORD *)(v7 + 64) & 4) != 0 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v2 + 2872));
            RtlSetBitEx(v6 + 488, *(unsigned __int16 *)(v2 + 4));
          }
        }
        v11 = *(_QWORD *)(v7 + 32);
        v7 = v11 - 32;
      }
      while ( v11 - 32 != *(_QWORD *)(a1 + 648) && v11 != a1 + 664 );
      VidSchiSetNextRunPacket(a1, *(_QWORD *)(a1 + 656));
    }
LABEL_12:
    v12 = *(_DWORD *)(a1 + 184);
    *(_QWORD *)(a1 + 656) = 0LL;
    if ( (v12 & 0x200) != 0 )
    {
      if ( (((unsigned __int8)(*(_DWORD *)(a1 + 184) >> 9) | *(_BYTE *)(a1 + 184)) & 2) == 0 )
        VidSchiUpdateContextStatus(a1, 10LL, 15739);
    }
    else if ( *(_DWORD *)(a1 + 780)
           && (*(_DWORD *)(a1 + 184) & 1) == 0
           && (*(_DWORD *)(a1 + 184) & 0x10) == 0
           && (*(_DWORD *)(a1 + 184) & 0x40) == 0
           && (*(_DWORD *)(a1 + 184) & 0x20) == 0 )
    {
      return (unsigned int)VidSchiUpdateContextStatus(a1, 5LL, 15752);
    }
  }
  return v3;
}
