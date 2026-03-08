/*
 * XREFs of MiCheckForUserStackOverflow @ 0x14076B848
 * Callers:
 *     MiUserFault @ 0x140268260 (MiUserFault.c)
 * Callees:
 *     MiObtainReferencedVadEx @ 0x14031EFE0 (MiObtainReferencedVadEx.c)
 *     MiUnlockAndDereferenceVadShared @ 0x14031F7B0 (MiUnlockAndDereferenceVadShared.c)
 *     ZwAllocateVirtualMemory @ 0x140412610 (ZwAllocateVirtualMemory.c)
 *     ZwProtectVirtualMemory @ 0x140412D10 (ZwProtectVirtualMemory.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall MiCheckForUserStackOverflow(unsigned __int64 a1, int a2)
{
  int v3; // r12d
  unsigned int v4; // r14d
  char *v5; // r13
  struct _KTHREAD *CurrentThread; // r9
  char Queue; // al
  char v8; // r15
  void *v9; // rdi
  unsigned int v10; // esi
  unsigned int *Teb; // r8
  unsigned __int64 v12; // r11
  unsigned __int64 v13; // rdx
  ULONG_PTR v14; // rcx
  _DWORD *v15; // rdi
  ULONG_PTR v16; // rax
  char *v17; // rbx
  NTSTATUS v18; // eax
  char *v19; // rax
  _KPROCESS *Process; // rax
  __int16 v22; // ax
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  ULONG_PTR v25; // rcx
  __int64 v26; // rax
  unsigned __int64 v27; // rsi
  void *v28; // rax
  void *v29; // rdx
  ULONG_PTR RegionSize; // [rsp+38h] [rbp-60h] BYREF
  PVOID BaseAddress; // [rsp+40h] [rbp-58h] BYREF
  ULONG_PTR v32; // [rsp+48h] [rbp-50h] BYREF
  PVOID v33; // [rsp+50h] [rbp-48h] BYREF
  struct _KTHREAD *v34; // [rsp+58h] [rbp-40h]
  unsigned __int64 v35; // [rsp+60h] [rbp-38h]
  __int64 v36; // [rsp+68h] [rbp-30h]
  int v37; // [rsp+B8h] [rbp+20h] BYREF

  v3 = 0;
  RegionSize = 0LL;
  v4 = 0;
  v5 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v34 = CurrentThread;
  Queue = (char)CurrentThread[1].Queue;
  if ( Queue < 0 )
    return 2147483649LL;
  v8 = 1;
  if ( ((unsigned __int8)~(BYTE1(CurrentThread[1].Queue) >> 6) & ((Queue & 3) == 0)) == 0
    || CurrentThread->ApcStateIndex == 1 )
  {
    return 2147483649LL;
  }
  if ( a2 )
  {
    v10 = 275;
  }
  else
  {
    v33 = 0LL;
    v32 = 0LL;
    v9 = 0LL;
    if ( (MiFlags & 0x1000000) == 0 )
      goto LABEL_6;
    v26 = MiObtainReferencedVadEx(a1, 2, &v37);
    v9 = (void *)v26;
    if ( !v26 )
      goto LABEL_6;
    if ( (*(_DWORD *)(v26 + 48) & 0xA200000) != 0x8200000 )
      goto LABEL_6;
    v3 = 1;
    v27 = (*(unsigned int *)(v26 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v26 + 32) << 32)) << 12;
    MiUnlockAndDereferenceVadShared((PVOID)v26);
    v9 = 0LL;
    v4 = -1073741571;
    v32 = 4096LL;
    v28 = (void *)((a1 & 0xFFFFFFFFFFFFF000uLL) - 4096);
    v33 = v28;
    if ( (unsigned __int64)v28 > a1 )
      goto LABEL_6;
    if ( (unsigned __int64)v28 > v27 )
    {
      v10 = 275;
      if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v33, 0LL, &v32, 0x1000u, 0x102u) >= 0 )
        v4 = 275;
    }
    else
    {
LABEL_6:
      v10 = 275;
    }
    if ( v9 )
      MiUnlockAndDereferenceVadShared(v9);
    if ( v3 )
      return v4;
    CurrentThread = v34;
  }
  Teb = (unsigned int *)CurrentThread->Teb;
  v12 = *((_QWORD *)Teb + 1);
  v35 = v12;
  v36 = *((_QWORD *)Teb + 655);
  v13 = v36 & 0xFFFFFFFFFFFFF000uLL;
  v14 = (Teb[1490] + 4095LL) & 0xFFFFFFFFFFFFF000uLL;
  RegionSize = v14;
  v15 = Teb + 4;
  v16 = v14;
  if ( v14 )
  {
    v16 = v14 + 4096;
    v14 = v16;
    RegionSize = v16;
  }
  if ( v16 < 0x3000 )
  {
    v14 = 12288LL;
    RegionSize = 12288LL;
    v16 = 12288LL;
  }
  if ( a1 >= v12 || a1 < v13 )
  {
    Process = CurrentThread->ApcState.Process;
    if ( Process[1].Affinity.StaticBitmap[30] )
    {
      v22 = WORD2(Process[2].Affinity.StaticBitmap[20]);
      if ( v22 != 332 && v22 != 452 )
        v8 = 0;
      if ( v8 )
      {
        v5 = (char *)(Teb + 2048);
        if ( ((unsigned __int8)Teb & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v23 = Teb[2049];
        v35 = v23;
        v24 = Teb[2947];
        v36 = v24;
        v25 = Teb[3038];
        RegionSize = v25;
        v13 = v24 & 0xFFFFFFFFFFFFF000uLL;
        if ( a1 < v23 && a1 >= v13 )
        {
          v14 = (v25 + 4095) & 0xFFFFFFFFFFFFF000uLL;
          v16 = v14;
          RegionSize = v14;
          if ( v14 )
          {
            v14 += 4096LL;
            RegionSize = v14;
            v16 = v14;
          }
          if ( v16 < 0x2000 )
          {
            v14 = 0x2000LL;
            RegionSize = 0x2000LL;
            v16 = 0x2000LL;
          }
          v15 = Teb + 2050;
          goto LABEL_17;
        }
      }
    }
    return 2147483649LL;
  }
LABEL_17:
  v17 = (char *)((a1 & 0xFFFFFFFFFFFFF000uLL) - v16);
  BaseAddress = v17;
  if ( (unsigned __int64)v17 <= v13 )
  {
    v29 = (void *)(v13 + 4096);
LABEL_53:
    BaseAddress = v29;
    ZwProtectVirtualMemory(-1LL, (__int64)&BaseAddress);
    v19 = (char *)BaseAddress;
    v10 = -1073741571;
    goto LABEL_22;
  }
  if ( (*(_DWORD *)(CurrentThread->ApcState.Process[1].Affinity.StaticBitmap[24] + 188) & 0x10000) != 0 )
  {
    v18 = -1073741523;
  }
  else
  {
    v18 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 0x104u);
    v17 = (char *)BaseAddress;
    v14 = RegionSize;
  }
  if ( v18 < 0 )
  {
    RegionSize = v14 - 4096;
    v29 = v17 + 4096;
    goto LABEL_53;
  }
  v19 = &v17[v14];
LABEL_22:
  if ( v5 )
    *v15 = (_DWORD)v19;
  else
    *(_QWORD *)v15 = v19;
  return v10;
}
