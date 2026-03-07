__int64 __fastcall MiInitializeScrubPacket(__int64 *a1)
{
  int v2; // edx
  unsigned int v3; // edi
  int v5; // r9d
  __int64 v6; // rsi
  PVOID PoolMm; // rax
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

  v2 = *((_DWORD *)a1 + 2) + 1;
  v8 = 0LL;
  MiInitializePageColorBase(
    (__int64)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26],
    v2,
    (__int64)&v8);
  v3 = 0;
  if ( !(unsigned int)MiCreateUltraThreadContext((__int64)(a1 + 6), (__int64)&v8, 15, 0) )
    return 3221225626LL;
  v5 = *((_DWORD *)a1 + 2);
  v6 = *a1;
  a1[22] = 0LL;
  a1[23] = 0LL;
  PoolMm = ExAllocatePoolMm(64, 0x1000uLL, 0x6363454Du, v5);
  a1[22] = (__int64)PoolMm;
  if ( PoolMm )
  {
    a1[24] = *(_QWORD *)(25408LL * *((unsigned int *)a1 + 2) + *(_QWORD *)(*(_QWORD *)(v6 + 48) + 16LL) + 23112);
  }
  else
  {
    v3 = -1073741670;
    MiReleaseScrubPacket(a1);
  }
  return v3;
}
