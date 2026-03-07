// write access to const memory has been detected, the output may be wrong!
PSLIST_ENTRY __fastcall VidSchiProcessIsrFaultedPacket(__int64 a1, int a2, int a3, __int64 a4)
{
  __int64 v5; // rsi
  __int64 v7; // rcx
  __int64 v8; // rdi
  PSLIST_ENTRY result; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r14
  __int64 v13; // r12
  __int64 v14; // rax
  bool v15; // zf
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  _QWORD v21[2]; // [rsp+40h] [rbp-38h] BYREF
  __int128 v22; // [rsp+50h] [rbp-28h]

  v5 = *(_QWORD *)(a1 + 24);
  if ( *(_DWORD *)(a1 + 64) != a2 && *(_DWORD *)(a1 + 72) != a2 )
  {
    v7 = *(unsigned int *)(a1 + 1412);
    v8 = *(_QWORD *)(a1 + 8 * v7 + 1424);
    result = *(PSLIST_ENTRY *)(v8 + 48);
    v10 = *((_QWORD *)&result[6].Next + 1);
    if ( v10 == *(_QWORD *)(v5 + 240) || v10 == *(_QWORD *)(v5 + 256) )
    {
      if ( !*(_BYTE *)(v5 + 53) )
      {
        v20 = *(unsigned int *)(v8 + 104);
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 281LL, 5LL, v5, v10, v20);
        __debugbreak();
        JUMPOUT(0x1C003B0BCLL);
      }
      *(_DWORD *)(a1 + 2032) = 1;
      *(_BYTE *)(a1 + 2025) = 1;
    }
    else
    {
      _InterlockedExchange((volatile __int32 *)(a1 + 1412), ((_BYTE)v7 + 1) & 0xF);
      v11 = *(unsigned int *)(a1 + 1556);
      *(_DWORD *)(a1 + 500) = ((unsigned __int8)*(_DWORD *)(a1 + 500) + 1) & 0xF;
      v12 = *(_QWORD *)(a1 + 8 * v11 + 1568);
      v13 = ((_BYTE)v11 + 1) & 0xF;
      _InterlockedExchange((volatile __int32 *)(a1 + 1556), ((_BYTE)v11 + 1) & 0xF);
      *(_QWORD *)(a1 + 56) = *(_QWORD *)(v8 + 104);
      v14 = *(_QWORD *)(v8 + 104);
      *(_QWORD *)(a1 + 64) = v14;
      *(_QWORD *)(a1 + 72) = v14;
      *(_QWORD *)(a1 + 88) = *(_QWORD *)(v8 + 104);
      if ( a3 )
      {
        ++*(_QWORD *)(a1 + 40);
        ++*(_QWORD *)(v5 + 432);
      }
      *(_DWORD *)(v8 + 92) ^= (*(_DWORD *)(v8 + 92) ^ (a3 << 6)) & 0x40;
      v15 = *(_QWORD *)(v8 + 56) == 0LL;
      *(_QWORD *)(v8 + 80) = MEMORY[0xFFFFF78000000320];
      *(_DWORD *)(v8 + 72) = 18;
      if ( !v15 )
      {
        *(_QWORD *)(*(_QWORD *)(v8 + 56) + 56LL) = MEMORY[0xFFFFF78000000320];
        *(_DWORD *)(*(_QWORD *)(v8 + 56) + 52LL) = 18;
      }
      v16 = *(_DWORD *)a4;
      v21[0] = 0LL;
      *(_DWORD *)(v8 + 16) = v16;
      v17 = *(_QWORD *)(a4 + 16);
      v18 = *(_QWORD *)(v12 + 104);
      v22 = 0LL;
      v21[1] = v12;
      *(_QWORD *)(v18 + 208) = v17;
      *(_DWORD *)(*(_QWORD *)(v12 + 104) + 216LL) = *(_DWORD *)(a4 + 24);
      *(_DWORD *)(*(_QWORD *)(v12 + 104) + 220LL) = *(_DWORD *)(a4 + 28);
      *(_DWORD *)(*(_QWORD *)(v12 + 104) + 224LL) = *(_DWORD *)(a4 + 32);
      *(_QWORD *)(*(_QWORD *)(v12 + 104) + 232LL) = *(_QWORD *)(a4 + 40);
      *(_DWORD *)(*(_QWORD *)(v12 + 104) + 228LL) = *(_DWORD *)(a4 + 60);
      VidSchiUpdateContextRunningTimeAtISR(v21);
      v19 = *(_QWORD *)(a1 + 8 * v13 + 1568);
      if ( v19 )
      {
        if ( v19 != v12 )
          *(_QWORD *)(v19 + 464) = *(_QWORD *)(v12 + 464);
      }
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 2892));
      VidSchiProfilePerformanceTick(12LL, v5, a1, 0LL, 0LL, 0LL, v8, a4);
      return ExpInterlockedPushEntrySList((PSLIST_HEADER)(v5 + 1776), (PSLIST_ENTRY)(v8 + 32));
    }
  }
  return result;
}
