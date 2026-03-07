__int64 __fastcall MiCopyLargeVad(ULONG_PTR a1, __int64 a2, __int64 a3)
{
  __int64 VadEvent; // rax
  __int64 v6; // r8
  _KPROCESS *v7; // r9
  __int64 v8; // rax
  __int64 v9; // rdi
  int v10; // edi
  int v12; // r12d
  int v13; // r13d
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // rsi
  size_t v18; // rdi
  void *v19; // rcx
  struct _MDL *v20; // r15
  void *v21; // [rsp+30h] [rbp-39h] BYREF
  PVOID v22; // [rsp+38h] [rbp-31h] BYREF
  PVOID P; // [rsp+40h] [rbp-29h] BYREF
  void *Src; // [rsp+48h] [rbp-21h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+50h] [rbp-19h]
  $115DCDF994C6370D29323EAB0E0C9502 v26; // [rsp+58h] [rbp-11h] BYREF

  BugCheckParameter1 = a1;
  Src = 0LL;
  P = 0LL;
  v22 = 0LL;
  v21 = 0LL;
  memset(&v26, 0, sizeof(v26));
  MiLocateLockedVadEvent(a3, 16);
  VadEvent = MiLocateVadEvent();
  if ( v6 )
  {
    *(_BYTE *)(v6 + 8) = *(_BYTE *)(VadEvent + 8);
    *(_QWORD *)(v6 + 16) = *(_QWORD *)(VadEvent + 16);
  }
  KiStackAttachProcess(v7, 0, (__int64)&v26);
  v8 = KeAbPreAcquire(a3 + 40, 0LL);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 40), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a3 + 40), v8, a3 + 40);
  if ( v9 )
    *(_BYTE *)(v9 + 18) = 1;
  v10 = MiMapUserLargePages(a3, 0, 0, 0LL);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a3 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a3 + 40));
  KeAbPostRelease(a3 + 40);
  KiUnstackDetachProcess(&v26);
  if ( v10 < 0 )
    return (unsigned int)v10;
  v12 = 0;
  v13 = *(_DWORD *)(a3 + 48) & 0x200;
  v14 = 4292870144LL;
  v15 = *(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32);
  v16 = v15 << 12;
  v17 = ((*(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32)) - v15 + 1) << 12;
  while ( v17 )
  {
    v18 = v14;
    if ( v17 <= v14 )
      v18 = v17;
    v12 = ExLockUserBuffer(v16, v18, 1, IoReadAccess, &Src, (struct _MDL **)&P);
    if ( v12 < 0 )
      goto LABEL_15;
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)&v26);
    v19 = (void *)v16;
    if ( v13 )
    {
      v20 = 0LL;
      v21 = (void *)v16;
      v22 = 0LL;
    }
    else
    {
      v12 = ExLockUserBuffer(v16, v18, 1, IoWriteAccess, &v21, (struct _MDL **)&v22);
      if ( v12 < 0 )
      {
        KiUnstackDetachProcess(&v26);
        ExUnlockUserBuffer((struct _MDL *)P);
LABEL_15:
        v14 = (v18 >> 1) & 0x7FFFFFFFFFE00000LL;
        if ( v14 < 0x200000 )
          return (unsigned int)v12;
        continue;
      }
      v20 = (struct _MDL *)v22;
      v19 = v21;
    }
    memmove(v19, Src, v18);
    if ( !v13 )
      ExUnlockUserBuffer(v20);
    KiUnstackDetachProcess(&v26);
    ExUnlockUserBuffer((struct _MDL *)P);
    v17 -= v18;
    v16 += v18;
  }
  return (unsigned int)v12;
}
