/*
 * XREFs of SepMakeLogonSessionsSiblings @ 0x140923ADC
 * Callers:
 *     SepRmMakeLogonSessionsSiblingsWrkr @ 0x140923E50 (SepRmMakeLogonSessionsSiblingsWrkr.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x14027DF30 (PsGetCurrentServerSilo.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 */

__int64 __fastcall SepMakeLogonSessionsSiblings(_DWORD *a1, _DWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v5; // r11
  __int64 v6; // r10
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdi
  struct _ERESOURCE *v10; // r12
  __int64 **v11; // r13
  struct _ERESOURCE *v12; // rbp
  struct _ERESOURCE *v13; // rcx
  struct _KTHREAD *v14; // rax
  unsigned int v15; // esi
  __int64 *i; // rbx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9

  CurrentThread = KeGetCurrentThread();
  v5 = (unsigned int)(1529154084 * *a1) >> 28;
  v6 = (unsigned int)(1529154084 * *a2) >> 28;
  v7 = v5 & 3;
  v8 = v6 & 3;
  v9 = SepLogonSessions + 8 * v5;
  v10 = &SepRmDbLock + v7;
  v11 = (__int64 **)(SepLogonSessions + 8 * v6);
  v12 = &SepRmDbLock + v8;
  --CurrentThread->KernelApcDisable;
  if ( (unsigned int)v5 >= (unsigned int)v6 )
  {
    ExAcquireResourceExclusiveLite(&SepRmDbLock + v8, 1u);
    v13 = v10;
  }
  else
  {
    ExAcquireResourceExclusiveLite(&SepRmDbLock + v7, 1u);
    v13 = v12;
  }
  v14 = KeGetCurrentThread();
  --v14->KernelApcDisable;
  ExAcquireResourceExclusiveLite(v13, 1u);
  v15 = 0;
  do
    v9 = *(_QWORD *)v9;
  while ( v9
       && (*(_QWORD *)(v9 + 160) != PsGetCurrentServerSilo()
        || *a1 != *(_DWORD *)(v9 + 8)
        || a1[1] != *(_DWORD *)(v9 + 12)) );
  for ( i = *v11;
        i && (i[20] != PsGetCurrentServerSilo() || *a2 != *((_DWORD *)i + 2) || a2[1] != *((_DWORD *)i + 3));
        i = (__int64 *)*i )
  {
    ;
  }
  if ( v9 && i )
  {
    v17 = *(_QWORD *)a2;
    *(_DWORD *)(v9 + 32) |= 0x40u;
    *(_QWORD *)(v9 + 168) = v17;
    v18 = *(_QWORD *)a1;
    *((_DWORD *)i + 8) |= 0x40u;
    i[21] = v18;
  }
  else
  {
    v15 = -1073741729;
  }
  ExReleaseResourceLite(v10);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v19, v20, v21);
  ExReleaseResourceLite(v12);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v22, v23, v24);
  return v15;
}
