__int64 __fastcall RtlpFlsFree(__int64 a1, int a2, _QWORD *a3)
{
  unsigned int v4; // edi
  int v5; // ecx
  __int64 v6; // r8
  unsigned __int64 v7; // rcx
  ULONG_PTR v8; // rsi
  __int64 v9; // rax
  __int64 v10; // r12
  ULONG_PTR v11; // rcx
  __int64 **v12; // r15
  __int64 *v13; // rcx
  unsigned int v14; // edx
  __int64 v15; // r8
  __int64 *v16; // r9
  __int64 v17; // r10
  __int64 v18; // rax
  __int64 **v19; // rax
  _QWORD *v20; // r14
  __int64 v21; // rbp
  unsigned int v23; // [rsp+24h] [rbp-154h]
  _QWORD v25[31]; // [rsp+38h] [rbp-140h] BYREF

  if ( (unsigned int)(a2 - 1) <= 0xEE
    && (v4 = 0,
        _BitScanReverse((unsigned int *)&v5, a2 + 16),
        v23 = a2 + 16,
        (v6 = *(&PspTlsContext + (unsigned int)(v5 - 4) + 1)) != 0)
    && (v7 = (unsigned int)(a2 + 16) ^ (unsigned __int64)(unsigned int)(1 << v5), (v8 = v6 + 8 * (v7 + 4 * v7 + 1)) != 0)
    && (v9 = *(_QWORD *)(v8 + 8)) != 0 )
  {
    v10 = 0LL;
    v11 = v6 + 8 * (v7 + 4 * v7 + 1);
    if ( v9 != -1 )
      v10 = *(_QWORD *)(v8 + 8);
    ExAcquirePushLockExclusiveEx(v11, 0LL);
    v12 = (__int64 **)(v8 + 24);
LABEL_8:
    v13 = *v12;
    v14 = 0;
    if ( *v12 != (__int64 *)v12 )
    {
      while ( 1 )
      {
        if ( v14 >= 0x10 )
        {
LABEL_19:
          if ( v14 )
          {
            v20 = v25;
            v21 = v14;
            do
            {
              ((void (__fastcall *)(_QWORD))*(v20 - 1))(*v20);
              v20 += 2;
              --v21;
            }
            while ( v21 );
            goto LABEL_8;
          }
          break;
        }
        v15 = *v13;
        v16 = v13 - 1;
        if ( v10 )
        {
          if ( v13 != (__int64 *)8 )
          {
            v17 = *v16;
            if ( *v16 )
            {
              v18 = 2LL * v14++;
              v25[v18 - 1] = v10;
              v25[v18] = v17;
LABEL_15:
              *v16 = 0LL;
              if ( *(__int64 **)(v15 + 8) != v13 || (v19 = (__int64 **)v13[1], *v19 != v13) )
                __fastfail(3u);
              *v19 = (__int64 *)v15;
              *(_QWORD *)(v15 + 8) = v19;
              v13[1] = (__int64)v13;
              *v13 = (__int64)v13;
            }
          }
        }
        else if ( v13 != (__int64 *)8 )
        {
          goto LABEL_15;
        }
        v13 = (__int64 *)v15;
        if ( (__int64 **)v15 == v12 )
          goto LABEL_19;
      }
    }
    *(_QWORD *)(v8 + 8) = -2LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v8);
    KeAbPostRelease(v8);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspTlsContext, 0LL);
    *(_QWORD *)(v8 + 8) = 0LL;
    if ( a3 )
      *a3 = *(_QWORD *)(v8 + 16);
    RTL_BINARY_ARRAY<RTLP_FLS_CALLBACK_ENTRY,4,4>::SlotFree((__int64)(&PspTlsContext + 1), v23);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspTlsContext, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PspTlsContext);
    KeAbPostRelease((ULONG_PTR)&PspTlsContext);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
