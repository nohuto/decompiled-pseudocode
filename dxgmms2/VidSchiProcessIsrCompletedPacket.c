// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VidSchiProcessIsrCompletedPacket(__int64 a1, unsigned int a2, int a3, _DWORD *a4)
{
  __int64 v4; // r13
  unsigned int v5; // ebp
  __int64 v6; // r15
  _BOOL8 v7; // r14
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // r12
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // rcx
  __int64 result; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD v19[2]; // [rsp+40h] [rbp-58h] BYREF
  __int128 v20; // [rsp+50h] [rbp-48h]
  unsigned int v21; // [rsp+A8h] [rbp+10h]
  int v22; // [rsp+B0h] [rbp+18h]

  v22 = a3;
  v4 = *(_QWORD *)(a1 + 24);
  v5 = 0;
  v6 = a2;
  v7 = *a4 == 9;
  if ( a2 == *(_DWORD *)(a1 + 72) )
    return 0LL;
  if ( *(_DWORD *)(a1 + 64) == a2 )
    return v5;
  while ( 1 )
  {
    v9 = *(unsigned int *)(a1 + 1412);
    v10 = *(_QWORD *)(a1 + 8 * v9 + 1424);
    if ( !v10 )
      break;
    if ( *(_DWORD *)(v10 + 88) == 3 || v7 && *(_DWORD *)(v10 + 104) == (_DWORD)v6 )
      return 1;
    _InterlockedExchange((volatile __int32 *)(a1 + 1412), ((_BYTE)v9 + 1) & 0xF);
    v11 = *(unsigned int *)(a1 + 1556);
    *(_DWORD *)(a1 + 500) = ((unsigned __int8)*(_DWORD *)(a1 + 500) + 1) & 0xF;
    v12 = *(_QWORD *)(a1 + 8 * v11 + 1568);
    v21 = ((_BYTE)v11 + 1) & 0xF;
    _InterlockedExchange((volatile __int32 *)(a1 + 1556), v21);
    *(_QWORD *)(a1 + 56) = *(_QWORD *)(v10 + 104);
    v13 = *(_QWORD *)(v10 + 104);
    v14 = a3 << 6;
    if ( a3 )
    {
      ++*(_QWORD *)(a1 + 40);
      *(_QWORD *)(a1 + 64) = v13;
      *(_QWORD *)(a1 + 72) = v13;
      ++*(_QWORD *)(v4 + 432);
      *(_DWORD *)(v10 + 92) ^= (*(_DWORD *)(v10 + 92) ^ v14) & 0x40;
      if ( !v7 )
        ++*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 104) + 40LL) + 2848LL);
    }
    else
    {
      *(_DWORD *)(v10 + 92) ^= (*(_DWORD *)(v10 + 92) ^ v14) & 0x40;
    }
    *(_QWORD *)(v10 + 80) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(v10 + 72) = 10;
    if ( *(_QWORD *)(v10 + 56) )
    {
      *(_QWORD *)(*(_QWORD *)(v10 + 56) + 56LL) = MEMORY[0xFFFFF78000000320];
      *(_DWORD *)(*(_QWORD *)(v10 + 56) + 52LL) = 10;
    }
    *(_DWORD *)(v10 + 16) = 1;
    v19[0] = 0LL;
    v20 = 0LL;
    v19[1] = v12;
    VidSchiUpdateContextRunningTimeAtISR(v19, 0xFFFFF78000000320uLL);
    v15 = *(_QWORD *)(a1 + 8LL * v21 + 1568);
    if ( v15 && v15 != v12 )
      *(_QWORD *)(v15 + 464) = *(_QWORD *)(v12 + 464);
    if ( (*(_DWORD *)(v10 + 92) & 0x200) != 0 )
    {
      VidSchiUpdateCurrentIsrFrameTime(
        v4,
        *(_QWORD *)(v4 + 8LL * *(unsigned int *)(*(_QWORD *)(v10 + 56) + 160LL) + 3200),
        0LL);
      *(_QWORD *)(*(_QWORD *)(v10 + 56) + 136LL) = *(_QWORD *)(*(_QWORD *)(v4
                                                                         + 8LL
                                                                         * *(unsigned int *)(*(_QWORD *)(v10 + 56)
                                                                                           + 160LL)
                                                                         + 3200)
                                                             + 44144LL);
      *(_DWORD *)(*(_QWORD *)(v10 + 56) + 132LL) = *(_DWORD *)(*(_QWORD *)(v4
                                                                         + 8LL
                                                                         * *(unsigned int *)(*(_QWORD *)(v10 + 56)
                                                                                           + 160LL)
                                                                         + 3200)
                                                             + 44152LL);
    }
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 2892));
    VidSchiProfilePerformanceTick(8LL, v4, a1, 0LL, 0LL, 0LL, v10, 0LL);
    ExpInterlockedPushEntrySList((PSLIST_HEADER)(v4 + 1776), (PSLIST_ENTRY)(v10 + 32));
    if ( (_DWORD)v13 == (_DWORD)v6 )
      return v5;
    a3 = v22;
  }
  if ( !*(_BYTE *)(v4 + 53) )
  {
    v17 = *(_QWORD *)(v4 + 16);
    v18 = *(unsigned int *)(a1 + 152);
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 1LL, v6, v18, v17);
    __debugbreak();
    JUMPOUT(0x1C0024736LL);
  }
  *(_DWORD *)(a1 + 2032) = 1;
  result = 0LL;
  *(_BYTE *)(a1 + 2025) = 1;
  return result;
}
