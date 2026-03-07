__int64 __fastcall MiMarkSharedImageCfgBits(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbp
  __int64 *v4; // rcx
  __int64 ControlAreaLoadConfig; // rax
  __int64 v6; // r8
  ULONG_PTR v7; // r12
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r15
  unsigned __int64 *v10; // rdi
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rbx
  unsigned __int64 v17; // r13
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // rbx
  int IsCfgBitMapPageShared; // eax
  unsigned __int64 v21; // rsi
  int v22; // ebp
  __int64 v24; // r8
  unsigned int v25; // eax
  int v26; // [rsp+50h] [rbp-78h] BYREF
  int v27; // [rsp+54h] [rbp-74h] BYREF
  _QWORD *v28; // [rsp+58h] [rbp-70h]
  unsigned __int64 v29; // [rsp+60h] [rbp-68h]
  _KPROCESS *Process; // [rsp+68h] [rbp-60h]
  __int128 v31; // [rsp+70h] [rbp-58h] BYREF
  int v32; // [rsp+80h] [rbp-48h]

  v26 = 0;
  v3 = a1;
  v27 = 0;
  v28 = a1;
  v4 = *(__int64 **)(a3 + 72);
  Process = KeGetCurrentThread()->ApcState.Process;
  ControlAreaLoadConfig = MiGetControlAreaLoadConfig(*v4);
  v7 = v3[2];
  v8 = (unsigned __int64)*(unsigned __int8 *)(v6 + 33) << 32;
  v9 = (unsigned __int64)*(unsigned __int8 *)(v6 + 32) << 32;
  v29 = *(_QWORD *)(ControlAreaLoadConfig + 8);
  v10 = (unsigned __int64 *)(v7 + 40);
  v11 = (*(unsigned int *)(v6 + 24) | v9) << 12;
  v12 = 2 * (((((*(unsigned int *)(v6 + 28) | v8) << 12) | 0xFFF) - v11 + 1) >> 4);
  v13 = *v3 + ((2 * (v11 >> 4)) >> 3);
  v14 = v12 >> 3;
  v15 = KeAbPreAcquire(v7 + 40, 0LL);
  v16 = v15;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 40), 0LL) )
    ExfAcquirePushLockExclusiveEx(v10, v15, (__int64)v10);
  if ( v16 )
    *(_BYTE *)(v16 + 18) = 1;
  if ( (unsigned int)MiVadDeleted(v7) )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v10);
    KeAbPostRelease((ULONG_PTR)v10);
    return 3221225738LL;
  }
  v17 = v14 + v13;
  v32 = 0;
  v18 = (v14 + v13 - 1) | 0xFFF;
  v19 = v13 & 0xFFFFFFFFFFFFF000uLL;
  v31 = 0LL;
  while ( v19 <= v18 )
  {
    IsCfgBitMapPageShared = MiIsCfgBitMapPageShared(v19, v7);
    if ( IsCfgBitMapPageShared == 2 )
    {
      v21 = v19 | 0xFFF;
      goto LABEL_10;
    }
    if ( IsCfgBitMapPageShared != 1 )
    {
      if ( IsCfgBitMapPageShared == 3 )
      {
        v21 = v18;
        if ( (v19 | 0x1FFFFF) <= v18 )
          v21 = v19 | 0x1FFFFF;
LABEL_10:
        v22 = MiSetProtectionOnSection((__int64)Process, v7, v19, v21, 2u, 0, &v27, (__int64)&v26);
        if ( v22 < 0 )
          goto LABEL_15;
        v19 = v21 - 4095;
      }
      else
      {
        if ( v19 < v13 )
          v24 = (unsigned int)(v13 - v19);
        else
          v24 = 0LL;
        if ( v19 + 4096 <= v17 )
        {
          v25 = 4096 - v24;
        }
        else
        {
          v25 = v17 - v19 - v24;
          if ( (_DWORD)v17 - (_DWORD)v19 == (_DWORD)v24 )
            break;
        }
        v22 = MiCopyToCfgBitMap(
                (__int64)v3,
                v29,
                v24,
                0,
                v19 + (unsigned int)v24,
                v7,
                (unsigned int)(v24 + v19 - v13) >> 1 << 7,
                &v31,
                v25);
        if ( v22 < 0 )
          goto LABEL_15;
      }
      v3 = v28;
    }
    v19 += 4096LL;
  }
  v22 = 0;
LABEL_15:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v7 + 40));
  KeAbPostRelease(v7 + 40);
  return (unsigned int)v22;
}
