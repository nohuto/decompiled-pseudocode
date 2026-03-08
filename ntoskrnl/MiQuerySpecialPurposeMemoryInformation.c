/*
 * XREFs of MiQuerySpecialPurposeMemoryInformation @ 0x140854164
 * Callers:
 *     NtManagePartition @ 0x140705650 (NtManagePartition.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402413F0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ProbeForWrite @ 0x1407C4030 (ProbeForWrite.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiQuerySpecialPurposeMemoryInformation(__int64 a1, volatile void *a2, unsigned int a3, char a4)
{
  __int64 v4; // r15
  _DWORD *Pool; // rsi
  unsigned int v6; // r14d
  struct _KTHREAD *CurrentThread; // r13
  signed __int64 *v8; // rdi
  __int64 v9; // r15
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdi
  _QWORD *v12; // r15
  _QWORD *v13; // rcx
  unsigned int v14; // edi
  int v15; // eax
  bool v16; // zf
  _DWORD *v18; // rcx
  char *v19; // r8
  _QWORD *i; // rdx
  int v21; // r13d
  _QWORD *v22; // r8
  __int64 v23; // r9
  unsigned __int64 v24; // rdx
  unsigned int v25; // r10d
  _QWORD *v26; // r9
  unsigned int v27; // [rsp+30h] [rbp-58h]
  struct _KTHREAD *v28; // [rsp+40h] [rbp-48h]
  unsigned __int64 v29; // [rsp+48h] [rbp-40h]

  v4 = a1;
  Pool = 0LL;
  v6 = 0;
  CurrentThread = KeGetCurrentThread();
  v28 = CurrentThread;
  if ( a3 < 4 )
  {
    v14 = -1073741820;
    v15 = 0;
  }
  else
  {
    if ( a4 )
      ProbeForWrite(a2, a3, 8u);
    --CurrentThread->SpecialApcDisable;
    v8 = (signed __int64 *)(v4 + 16992);
    v9 = KeAbPreAcquire(v4 + 16992, 0LL);
    if ( _InterlockedCompareExchange64(v8, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v8, 0, v9, (__int64)v8);
    if ( v9 )
      *(_BYTE *)(v9 + 18) = 1;
    v10 = (unsigned int)(dword_140C66978 + 32);
    v29 = v10;
    v11 = v10;
    v27 = dword_140C66978 + 32;
    v12 = (_QWORD *)(a1 + 16944);
    v13 = *(_QWORD **)(a1 + 16944);
    if ( v13 != (_QWORD *)(a1 + 16944) )
    {
      v21 = dword_140C66978 + 32;
      do
      {
        v11 += v10;
        v21 += v10;
        v22 = v13 + 3;
        v23 = 4LL;
        do
        {
          v24 = v11 + 16;
          if ( *v22 == -1LL )
            v24 = v11;
          ++v22;
          --v23;
          v11 = v24;
        }
        while ( v23 );
        v13 = (_QWORD *)*v13;
      }
      while ( v13 != v12 );
      v27 = v21;
      v6 = 0;
      CurrentThread = v28;
    }
    if ( v11 > 0xFFFFFFFF )
    {
      v14 = -1073741675;
      v15 = 1;
      v4 = a1;
    }
    else
    {
      Pool = MiAllocatePool(256, (unsigned int)v11, 0x7153694Du);
      if ( Pool )
      {
        if ( v11 <= a3 )
        {
          v18 = Pool;
          v19 = (char *)Pool + v27;
          for ( i = (_QWORD *)*v12; i != v12; i = (_QWORD *)*i )
          {
            *v18 = v29;
            v18[1] = 32;
            v18[3] = (_DWORD)v19 - (_DWORD)v18;
            *((_QWORD *)v18 + 3) = i[2];
            if ( i[9] )
              v18[2] |= 1u;
            v25 = 0;
            v26 = i + 3;
            do
            {
              if ( *v26 != -1LL )
              {
                *(_DWORD *)v19 = v25;
                *((_QWORD *)v19 + 1) = *v26;
                ++v18[4];
                v19 += 16;
              }
              ++v25;
              ++v26;
            }
            while ( v25 < 4 );
            v18 = (_DWORD *)((char *)v18 + v29);
          }
          v6 = v11;
          v14 = 0;
        }
        else
        {
          *Pool = v11;
          v14 = -1073741789;
          v6 = 4;
        }
      }
      else
      {
        v14 = -1073741670;
      }
      v15 = 1;
      v4 = a1;
    }
  }
  if ( v15 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 16992), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v4 + 16992));
    KeAbPostRelease(v4 + 16992);
    v16 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v16 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  if ( v6 )
    memmove((void *)a2, Pool, v6);
  if ( Pool )
    ExFreePoolWithTag(Pool, 0);
  return v14;
}
