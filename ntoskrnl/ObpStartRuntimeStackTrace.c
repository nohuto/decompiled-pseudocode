__int64 __fastcall ObpStartRuntimeStackTrace(__int64 a1)
{
  unsigned int inited; // r13d
  int v3; // esi
  char PreviousMode; // r9
  int v5; // r10d
  unsigned __int64 v6; // r11
  unsigned int i; // r9d
  unsigned int j; // r10d
  unsigned __int16 v9; // bx
  void *Pool2; // r13
  struct _KTHREAD *CurrentThread; // rax
  wchar_t *Buffer; // r14
  char v14; // cl
  struct _KTHREAD *v15; // rax
  bool v16; // zf
  wchar_t *v17; // rcx
  struct _KTHREAD *v18; // rax
  char v19; // [rsp+20h] [rbp-C8h]
  int v20; // [rsp+24h] [rbp-C4h]
  PVOID P[2]; // [rsp+38h] [rbp-B0h]
  __int128 v22; // [rsp+48h] [rbp-A0h]
  void *Src[2]; // [rsp+58h] [rbp-90h]
  _OWORD v24[4]; // [rsp+70h] [rbp-78h] BYREF

  memset(v24, 0, sizeof(v24));
  inited = 0;
  *(_OWORD *)P = 0LL;
  v3 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v19 = PreviousMode;
  v22 = *(_OWORD *)(a1 + 24);
  *(_OWORD *)Src = *(_OWORD *)(a1 + 8);
  v5 = *(unsigned __int8 *)(a1 + 1);
  v20 = v5;
  if ( (_WORD)v22 )
  {
    if ( (*(_OWORD *)(a1 + 24) & 1) != 0
      || ((((unsigned __int64)(unsigned __int16)v22 >> 1) % 5) & 0xFFFFFFFFFFFFFFFBuLL) != 0 )
    {
      return 3221225485LL;
    }
    v6 = ((unsigned __int64)(unsigned __int16)v22 + 2) / 0xA;
    if ( (unsigned int)v6 > 0x10 )
      LODWORD(v6) = 16;
    if ( PreviousMode )
    {
      if ( (BYTE8(v22) & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)(unsigned __int16)v22 + *((_QWORD *)&v22 + 1) > 0x7FFFFFFF0000LL
        || (unsigned __int64)(unsigned __int16)v22 + *((_QWORD *)&v22 + 1) < *((_QWORD *)&v22 + 1) )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    for ( i = 0; i < (unsigned int)v6; ++i )
    {
      for ( j = 0; j < 4; ++j )
        *((_DWORD *)v24 + i) = (*((_DWORD *)v24 + i) << 8) | *(unsigned __int16 *)(*((_QWORD *)&v22 + 1)
                                                                                 + 2LL * (5 * i - j + 3));
    }
    v3 = 16;
    v5 = v20;
  }
  if ( LOWORD(Src[0]) )
  {
    if ( ((__int64)Src[0] & 1) != 0 )
      return 3221225485LL;
    if ( LOWORD(Src[0]) >= 0x80u )
      v9 = 126;
    else
      v9 = (unsigned __int16)Src[0];
    LOWORD(P[0]) = v9;
    Pool2 = (void *)ExAllocatePool2(64LL, v9 + 2LL, 1951556175LL);
    P[1] = Pool2;
    if ( !Pool2 )
      return 3221225495LL;
    WORD1(P[0]) = v9 + 2;
    if ( v19 )
    {
      if ( ((__int64)Src[1] & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (char *)Src[1] + LOWORD(Src[0]) > (void *)0x7FFFFFFF0000LL || (char *)Src[1] + LOWORD(Src[0]) < Src[1] )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    memmove(Pool2, Src[1], v9);
    *((_WORD *)Pool2 + ((unsigned __int64)v9 >> 1)) = 0;
    v3 |= 0x20u;
    inited = 0;
    v5 = v20;
  }
  if ( !v3 )
    return 3221225485LL;
  if ( v5 )
    v3 |= 0x40u;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&ObpStackTraceLock, 0LL);
  if ( (ObpTraceFlags & 0x73) == 0 )
    inited = ObpInitStackAndObjectTables();
  if ( (inited & 0x80000000) != 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock);
    KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
    v18 = KeGetCurrentThread();
    v16 = v18->SpecialApcDisable++ == -1;
    if ( v16 && ($C71981A45BEB2B45F82C232A7085991E *)v18->ApcState.ApcListHead[0].Flink != &v18->152 )
      KiCheckForKernelApcDelivery();
    v17 = (wchar_t *)P[1];
    if ( !P[1] )
      return inited;
  }
  else
  {
    Buffer = ObpRuntimeTraceProcessName.Buffer;
    ObpRuntimeTraceProcessName = *(UNICODE_STRING *)P;
    ObpRuntimeTracePoolTags = v24[0];
    xmmword_140C3F4F0 = v24[1];
    xmmword_140C3F500 = v24[2];
    xmmword_140C3F510 = v24[3];
    v14 = v3 | ObpTraceFlags & 0x8E;
    ObpRuntimeTraceFlags = v3 | ObpTraceFlags & 0xFFFFFF8E | 2;
    ObpTraceFlags = v3 | ObpTraceFlags & 0xFFFFFF8E | 2;
    ObpTracePoolTags = (unsigned __int64)&ObpRuntimeTracePoolTags & -(__int64)((v14 & 0x10) != 0);
    ObpTraceProcessName = (PCUNICODE_STRING)((unsigned __int64)&ObpRuntimeTraceProcessName & -(__int64)((v14 & 0x20) != 0));
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock);
    KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
    v15 = KeGetCurrentThread();
    v16 = v15->SpecialApcDisable++ == -1;
    if ( v16 && ($C71981A45BEB2B45F82C232A7085991E *)v15->ApcState.ApcListHead[0].Flink != &v15->152 )
      KiCheckForKernelApcDelivery();
    if ( !Buffer )
      return inited;
    v17 = Buffer;
  }
  ExFreePoolWithTag(v17, 0x7452624Fu);
  return inited;
}
