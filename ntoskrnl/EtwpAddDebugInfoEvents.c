void __fastcall EtwpAddDebugInfoEvents(__int64 a1, __int64 a2, int a3, __int64 *a4, int a5)
{
  int v5; // edi
  __int64 *v6; // r12
  char v9; // r15
  bool v10; // zf
  int v11; // r13d
  __int64 v12; // rax
  int v13; // r15d
  int v14; // esi
  __int64 *v15; // rsi
  __int64 *v16; // rax
  _OWORD *v17; // rax
  __int64 *v18; // rcx
  int v20; // [rsp+90h] [rbp+18h] BYREF
  __int64 v21; // [rsp+98h] [rbp+20h] BYREF

  v20 = 0;
  v5 = a3 - *(_DWORD *)(a2 + 48);
  v6 = a4;
  v21 = 0LL;
  if ( !a4 )
  {
    v21 = 0LL;
    v6 = &v21;
  }
  v9 = a5;
  v10 = (a5 & 2) == 0;
  v11 = a5 & 2;
  a5 = v11;
  if ( !v10 )
    ExAcquirePushLockExclusiveEx(a1 + 688, 0LL);
  if ( (v9 & 1) != 0 && *(_QWORD *)(a1 + 96) != a1 + 96 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( NtBuildLabEx[v12] );
    if ( !EtwpAddEventToBuffer(a2, 66LL, v6, NtBuildLabEx, (int)v12 + 1, v5, &v20) )
      goto LABEL_20;
    v5 -= v20;
  }
  v13 = v9 & 4;
  if ( v13 )
  {
    v16 = *(__int64 **)(a1 + 112);
    v14 = 0;
    if ( !v16 )
      goto LABEL_14;
    do
    {
      if ( *((_BYTE *)v16 + 40) )
        break;
      v16 = (__int64 *)*v16;
      ++v14;
    }
    while ( v16 );
  }
  else
  {
    v14 = *(_DWORD *)(a1 + 120);
  }
  if ( v14 )
  {
    v17 = (_OWORD *)EtwpAddEventToBuffer(a2, 68LL, v6, 0LL, 32 * v14, v5, &v20);
    if ( v17 )
    {
      v18 = *(__int64 **)(a1 + 112);
      do
      {
        *v17 = *(_OWORD *)(v18 + 1);
        v17 += 2;
        *(v17 - 1) = *(_OWORD *)(v18 + 3);
        v18 = (__int64 *)*v18;
        --v14;
      }
      while ( v14 );
      v5 -= v20;
    }
  }
LABEL_14:
  v15 = *(__int64 **)(a1 + 96);
  if ( v15 != (__int64 *)(a1 + 96) )
  {
    do
    {
      if ( !v13 || !*((_BYTE *)v15 + 16) )
      {
        if ( !EtwpAddEventToBuffer(a2, 64LL, v6, (char *)v15 + 28, *((_DWORD *)v15 + 5) - 4, v5, &v20) )
          break;
        v5 -= v20;
      }
      v15 = (__int64 *)*v15;
    }
    while ( v15 != (__int64 *)(a1 + 96) );
    v11 = a5;
  }
LABEL_20:
  if ( v11 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 688), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 688));
    KeAbPostRelease(a1 + 688);
  }
}
