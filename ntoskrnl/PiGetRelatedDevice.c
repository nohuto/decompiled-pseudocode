/*
 * XREFs of PiGetRelatedDevice @ 0x1406C8018
 * Callers:
 *     PiCMGetRelatedDeviceInstance @ 0x1406C6068 (PiCMGetRelatedDeviceInstance.c)
 *     PiControlGetRelatedDevice @ 0x1406C7ED0 (PiControlGetRelatedDevice.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14025D790 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     PpDevNodeUnlockTree @ 0x1406CB8B0 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1406CB944 (PpDevNodeLockTree.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1406CDF08 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 */

__int64 __fastcall PiGetRelatedDevice(__int64 a1, char *a2, _DWORD *a3, int a4)
{
  unsigned int v5; // esi
  __int64 v9; // rax
  void *v10; // r14
  __int64 *v11; // rdi
  __int64 v12; // rbp
  int v14; // eax
  int v15; // eax
  struct _KTHREAD *CurrentThread; // rax
  void *v17; // rax

  v5 = 0;
  PpDevNodeLockTree(0LL);
  v9 = PnpDeviceObjectFromDeviceInstanceWithTag(a1, 1131441744LL);
  v10 = (void *)v9;
  if ( !v9
    || (v11 = *(__int64 **)(*(_QWORD *)(v9 + 312) + 40LL)) == 0LL
    || (unsigned int)(*((_DWORD *)v11 + 75) - 789) <= 1 )
  {
LABEL_25:
    v5 = -1073741810;
    goto LABEL_10;
  }
  switch ( a4 )
  {
    case 1:
      v11 = (__int64 *)v11[2];
      goto LABEL_6;
    case 2:
      v11 = (__int64 *)v11[1];
      if ( !v11
        || (v15 = *((_DWORD *)v11 + 99), (v15 & 0x2000) == 0)
        || *((_DWORD *)v11 + 101) != 24
        || (v15 & 0x1000) == 0 )
      {
LABEL_20:
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
        if ( v11 )
        {
          while ( 1 )
          {
            if ( v11[6] )
            {
              v17 = (void *)PnpDeviceObjectFromDeviceInstanceWithTag(v11 + 5, 1131441744LL);
              if ( v17 )
                break;
            }
            v11 = (__int64 *)*v11;
            if ( !v11 )
              goto LABEL_24;
          }
          ObfDereferenceObjectWithTag(v17, 0x43706E50u);
        }
LABEL_24:
        ExReleaseResourceLite(&PnpRegistryDeviceResource);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
LABEL_6:
        if ( v11 )
        {
          v12 = *((unsigned __int16 *)v11 + 20);
          if ( *a3 <= (unsigned int)v12 )
          {
            v5 = -1073741789;
            LODWORD(v12) = v12 + 2;
          }
          else
          {
            memmove(a2, (const void *)v11[6], *((unsigned __int16 *)v11 + 20));
            *(_WORD *)&a2[v12] = 0;
          }
          *a3 = v12;
          goto LABEL_10;
        }
        goto LABEL_25;
      }
      do
      {
LABEL_15:
        v11 = (__int64 *)*v11;
        if ( !v11 )
          break;
        v14 = *((_DWORD *)v11 + 99);
        if ( (v14 & 0x2000) == 0 )
          break;
      }
      while ( *((_DWORD *)v11 + 101) == 24 && (v14 & 0x1000) != 0 );
      goto LABEL_20;
    case 3:
      goto LABEL_15;
  }
  v5 = -1073741811;
LABEL_10:
  PpDevNodeUnlockTree(0LL);
  if ( v10 )
    ObfDereferenceObjectWithTag(v10, 0x43706E50u);
  return v5;
}
