/*
 * XREFs of NVMeControllerRemove @ 0x1C000E434
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0006080 (NVMeHwAdapterControl.c)
 * Callees:
 *     NVMeFreeDmaBuffer @ 0x1C0005AAC (NVMeFreeDmaBuffer.c)
 *     memset @ 0x1C0008040 (memset.c)
 *     AdminQueuesFreeResources @ 0x1C000B248 (AdminQueuesFreeResources.c)
 *     FreeMsiInfo @ 0x1C000B5A0 (FreeMsiInfo.c)
 *     FreeProcessorGroupInfo @ 0x1C000B614 (FreeProcessorGroupInfo.c)
 *     FreeProcessorInfo @ 0x1C000B660 (FreeProcessorInfo.c)
 *     IoQueuesFreeResources @ 0x1C000C684 (IoQueuesFreeResources.c)
 *     NVMeDisableThrottling @ 0x1C000E930 (NVMeDisableThrottling.c)
 *     NVMeFreeHostMemoryBuffer @ 0x1C000EA6C (NVMeFreeHostMemoryBuffer.c)
 *     NVMePowerCleanUp @ 0x1C000FE54 (NVMePowerCleanUp.c)
 */

char __fastcall NVMeControllerRemove(__int64 a1)
{
  __int64 v1; // rsi
  unsigned __int128 v3; // rax
  __int64 v4; // r8
  unsigned __int64 v5; // r9
  unsigned int v6; // edi
  unsigned int v7; // eax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  __int64 v10; // rsi
  unsigned int v11; // r10d
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r9
  unsigned int i; // ebp
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r8
  int v31; // eax
  signed __int32 v33[10]; // [rsp+0h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 1624);
  *(_DWORD *)(a1 + 24) &= ~1u;
  NVMePowerCleanUp();
  v6 = 0;
  if ( *(_QWORD *)(a1 + 3784) )
    NVMeFreeHostMemoryBuffer(a1);
  v7 = *(_DWORD *)(v1 + 88);
  if ( v7 )
  {
    v4 = v7;
    v5 = 0x346DC5D63886594BLL;
    v8 = 10000 * (v7 / 0x2710uLL);
    v9 = v8 + 10000;
    if ( v7 == v8 )
      v9 = v7;
    v3 = v9 * (unsigned __int128)0x346DC5D63886594BuLL;
    v10 = *((_QWORD *)&v3 + 1) >> 11;
  }
  else
  {
    LODWORD(v10) = 500;
  }
  v11 = *(unsigned __int8 *)(a1 + 47);
  if ( (_BYTE)v11 )
  {
    v4 = (unsigned int)v10;
    v12 = 100 * ((unsigned int)v10 / 0x64uLL);
    v13 = v12 + 100;
    if ( (unsigned int)v10 == v12 )
      v13 = (unsigned int)v10;
    *((_QWORD *)&v3 + 1) = (v13 * (unsigned __int128)0x47AE147AE147AE15uLL) >> 64;
    LODWORD(v3) = *(unsigned __int8 *)(a1 + 47);
    v5 = v13 / 0x64;
    if ( (unsigned int)v5 > v11 )
      LODWORD(v3) = v5;
    LODWORD(v10) = 100 * v3;
  }
  IoQueuesFreeResources(a1, *((__int64 *)&v3 + 1), v4, v5);
  AdminQueuesFreeResources(a1, v14, v15, v16);
  NVMeFreeDmaBuffer(a1, 4096LL, (__int64 *)(a1 + 3776), *(_QWORD *)(a1 + 4000));
  NVMeFreeDmaBuffer(a1, 512LL, (__int64 *)(a1 + 3992), *(_QWORD *)(a1 + 4008));
  FreeProcessorInfo(a1, v17, v18, v19);
  FreeProcessorGroupInfo(a1, v20, v21, v22);
  FreeMsiInfo(a1, v23, v24, v25);
  NVMeDisableThrottling(a1);
  if ( !*(_BYTE *)(a1 + 16) )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 208); ++i )
    {
      v28 = *(_QWORD *)(a1 + 8LL * i + 1736);
      if ( v28 )
        StorPortExtendedFunction(1LL, a1, v28, v26);
    }
  }
  memset((void *)(a1 + 1736), 0, 0x7F8uLL);
  v30 = *(_QWORD *)(a1 + 3872);
  *(_DWORD *)(a1 + 196) = 0;
  if ( v30 )
  {
    StorPortExtendedFunction(1LL, a1, v30, v29);
    *(_QWORD *)(a1 + 3872) = 0LL;
  }
  if ( (*(_DWORD *)(a1 + 24) & 0x1000) != 0 )
  {
    v31 = *(unsigned __int8 *)(a1 + 144);
    if ( !(_BYTE)v31 )
      return 1;
    if ( (unsigned int)v10 <= 100 * v31 )
      LODWORD(v10) = 100 * v31;
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 160) + 20LL) = *(_DWORD *)(*(_QWORD *)(a1 + 160) + 20LL) & 0xFFFF3FFF | 0x4000;
  _InterlockedOr(v33, 0);
  if ( (_DWORD)v10 )
  {
    do
    {
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 160) + 28LL) & 0xC) == 8 )
        break;
      StorPortExtendedFunction(81LL, a1, 10000LL, v29);
      ++v6;
    }
    while ( v6 < (unsigned int)v10 );
  }
  return 1;
}
