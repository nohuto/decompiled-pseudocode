/*
 * XREFs of EtwpEnableMetaProviderGuid @ 0x140204F18
 * Callers:
 *     EtwpEnableGuid @ 0x14068EEBC (EtwpEnableGuid.c)
 * Callees:
 *     EtwpGetMetaProviderContext @ 0x140204F94 (EtwpGetMetaProviderContext.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     KeReleaseMutant @ 0x14030E920 (KeReleaseMutant.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     EtwpUpdateSelectedGroupMasks @ 0x14037F908 (EtwpUpdateSelectedGroupMasks.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     EtwpUpdateTagFilter @ 0x1408589E8 (EtwpUpdateTagFilter.c)
 */

__int64 __fastcall EtwpEnableMetaProviderGuid(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6)
{
  __int64 MetaProviderContext; // r11
  unsigned int v11; // ecx
  _DWORD *v12; // rax
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rdx
  unsigned int v16; // eax
  __int64 v17; // r9
  __int64 *v18; // rcx
  __int64 v19; // r8
  unsigned __int64 v20; // rax
  int v21; // edx
  unsigned __int64 v22; // rax
  struct _KTHREAD *CurrentThread; // rax
  unsigned int updated; // eax
  struct _KMUTANT *v25; // rcx
  unsigned int v26; // ebx
  _OWORD v27[2]; // [rsp+30h] [rbp-68h] BYREF
  _OWORD v28[2]; // [rsp+50h] [rbp-48h] BYREF

  MetaProviderContext = EtwpGetMetaProviderContext(a2);
  if ( !MetaProviderContext )
    return 3221226133LL;
  if ( !a1 || a3 > 1 || (*(_DWORD *)(a1 + 12) & 0x2000000) == 0 )
    return 3221225485LL;
  if ( (__int64 (**)[32])MetaProviderContext != &MemoryMetaProviderContext )
    goto LABEL_20;
  if ( !a5 )
    goto LABEL_20;
  if ( *(_QWORD *)(a1 + 1096) != EtwpHostSiloState )
    goto LABEL_20;
  v11 = 0;
  if ( !a6 )
    goto LABEL_20;
  v12 = (_DWORD *)(a5 + 8);
  while ( v12[1] != 0x80000000 || *v12 <= 0x18u )
  {
    ++v11;
    v12 += 4;
    if ( v11 >= a6 )
      goto LABEL_20;
  }
  v13 = *(_QWORD *)(a5 + 16LL * v11);
  v14 = *(unsigned int *)(v13 + 16);
  if ( *(unsigned int *)(a5 + 16LL * v11 + 8) < (unsigned __int64)(v14 + 24) )
    return 2147483653LL;
  if ( *(_WORD *)v13 != 1 )
    goto LABEL_20;
  v15 = (unsigned int)v14 >> 2;
  if ( (unsigned int)v15 > 4 )
    return 3221225485LL;
  EtwpUpdateTagFilter(v13 + 24, v15, (char *)&EtwpPoolTagFilter + 20 * *(unsigned __int8 *)(a1 + 818));
LABEL_20:
  v16 = *(_DWORD *)(MetaProviderContext + 8);
  v17 = -1LL;
  if ( a4 )
    v17 = a4;
  memset(v28, 0, sizeof(v28));
  memset(v27, 0, sizeof(v27));
  if ( v16 )
  {
    v18 = *(__int64 **)MetaProviderContext;
    v19 = v16;
    do
    {
      v20 = *((unsigned int *)v18 + 2);
      v21 = v20 & 0x1FFFFFFF;
      v22 = v20 >> 29;
      *((_DWORD *)v28 + v22) |= v21;
      if ( a3 == 1 && (v17 & *v18) != 0 )
        *((_DWORD *)v27 + v22) |= v21;
      v18 += 2;
      --v19;
    }
    while ( v19 );
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  KeWaitForSingleObject((PVOID)(a1 + 632), Executive, 0, 0, 0LL);
  updated = EtwpUpdateSelectedGroupMasks(a1, v28, v27);
  v25 = (struct _KMUTANT *)(a1 + 632);
  v26 = updated;
  KeReleaseMutant(v25, 1, 0, 0);
  KeLeaveCriticalRegion();
  return v26;
}
