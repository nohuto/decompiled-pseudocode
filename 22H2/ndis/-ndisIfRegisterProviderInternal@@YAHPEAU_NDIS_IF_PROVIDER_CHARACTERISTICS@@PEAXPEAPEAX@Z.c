/*
 * XREFs of ?ndisIfRegisterProviderInternal@@YAHPEAU_NDIS_IF_PROVIDER_CHARACTERISTICS@@PEAXPEAPEAX@Z @ 0x1C0032CC0
 * Callers:
 *     NdisIfRegisterProvider @ 0x1C0032BF0 (NdisIfRegisterProvider.c)
 *     ?ndisIfNdisProvidedInterfaceSubsystemInitialize@@YAJXZ @ 0x1C0109648 (-ndisIfNdisProvidedInterfaceSubsystemInitialize@@YAJXZ.c)
 * Callees:
 *     memmove @ 0x1C0040840 (memmove.c)
 *     memset @ 0x1C0040B00 (memset.c)
 */

__int64 __fastcall ndisIfRegisterProviderInternal(struct _NDIS_IF_PROVIDER_CHARACTERISTICS *Src, void *a2, void **a3)
{
  unsigned int v3; // ebx
  unsigned __int16 v7; // si
  PVOID PoolWithTag; // rax
  _QWORD *v9; // r14
  KIRQL v10; // al
  __int64 v11; // rdx
  _QWORD *v12; // rcx

  v3 = 0;
  if ( !Src )
    return (unsigned int)-1073741811;
  if ( Src->Header.Revision != 1 )
    return (unsigned int)-1073741637;
  if ( Src->Header.Size < 0x28u )
    return (unsigned int)-1073741811;
  *a3 = 0LL;
  v7 = Src->Header.Size + 48;
  if ( v7 >= 0x58u && (PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v7, 0x6669444Eu), (v9 = PoolWithTag) != 0LL) )
  {
    memset(PoolWithTag, 0, v7);
    *(_WORD *)v9 = -29183;
    v9[4] = v9 + 3;
    v9[3] = v9 + 3;
    *((_WORD *)v9 + 1) = v7;
    v9[5] = a2;
    memmove(v9 + 6, Src, Src->Header.Size);
    v10 = KeAcquireSpinLockRaiseToDpc(&qword_1C00E6F78);
    v11 = qword_1C00E6F68;
    v12 = v9 + 1;
    if ( *(__int64 **)(qword_1C00E6F68 + 8) != &qword_1C00E6F68 )
      __fastfail(3u);
    *v12 = qword_1C00E6F68;
    v9[2] = &qword_1C00E6F68;
    *(_QWORD *)(v11 + 8) = v12;
    qword_1C00E6F68 = (__int64)(v9 + 1);
    KeReleaseSpinLock(&qword_1C00E6F78, v10);
    *a3 = v9;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v3;
}
