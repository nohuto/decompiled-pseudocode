char __fastcall NVMeControllerRemove(__int64 a1)
{
  __int64 v1; // rbp
  unsigned int v2; // kr00_4
  unsigned int v3; // esi
  unsigned int v5; // r15d
  int v6; // ebx
  unsigned __int128 v7; // rax
  __int64 v8; // r8
  unsigned __int64 v9; // r9
  unsigned int v10; // eax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 v13; // rbp
  unsigned int v14; // r10d
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // r9
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r9
  unsigned int i; // r14d
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // r8
  __int64 v34; // r9
  int v35; // eax
  unsigned int j; // r14d
  int v37; // eax
  signed __int32 v39[14]; // [rsp+0h] [rbp-38h] BYREF

  v1 = *(_QWORD *)(a1 + 1840);
  v2 = *(_DWORD *)(a1 + 212);
  *(_DWORD *)(a1 + 32) &= 0xFFFFFDFE;
  v3 = 0;
  v5 = v2 / 0xA;
  LOBYTE(v6) = 0;
  NVMePowerCleanUp();
  if ( *(_QWORD *)(a1 + 4000) )
    NVMeFreeHostMemoryBuffer(a1);
  v10 = *(_DWORD *)(v1 + 88);
  if ( v10 )
  {
    v8 = v10;
    v9 = 0x346DC5D63886594BLL;
    v11 = 10000 * (v10 / 0x2710uLL);
    v12 = v11 + 10000;
    if ( v10 == v11 )
      v12 = v10;
    v7 = v12 * (unsigned __int128)0x346DC5D63886594BuLL;
    v13 = *((_QWORD *)&v7 + 1) >> 11;
  }
  else
  {
    LODWORD(v13) = 500;
  }
  v14 = *(unsigned __int8 *)(a1 + 55);
  if ( (_BYTE)v14 )
  {
    v8 = (unsigned int)v13;
    v15 = 100 * ((unsigned int)v13 / 0x64uLL);
    v16 = v15 + 100;
    if ( (unsigned int)v13 == v15 )
      v16 = (unsigned int)v13;
    *((_QWORD *)&v7 + 1) = (v16 * (unsigned __int128)0x47AE147AE147AE15uLL) >> 64;
    LODWORD(v7) = *(unsigned __int8 *)(a1 + 55);
    v9 = v16 / 0x64;
    if ( (unsigned int)v9 > v14 )
      LODWORD(v7) = v9;
    LODWORD(v13) = 100 * v7;
  }
  IoQueuesFreeResources(a1, *((__int64 *)&v7 + 1), v8, v9);
  AdminQueuesFreeResources(a1, v17, v18, v19);
  NVMeFreeDmaBuffer(a1, 4096LL, a1 + 3992, *(_QWORD *)(a1 + 4216));
  NVMeFreeDmaBuffer(a1, 512LL, a1 + 4208, *(_QWORD *)(a1 + 4224));
  v22 = *(_QWORD *)(a1 + 4264);
  if ( v22 )
    StorPortExtendedFunction(1LL, a1, v22, v21);
  FreeProcessorInfo(a1, v20, v22, v21);
  FreeProcessorGroupInfo(a1, v23, v24, v25);
  FreeMsiInfo(a1, v26, v27, v28);
  NVMeDisableThrottling(a1);
  if ( !*(_BYTE *)(a1 + 20) )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 232); ++i )
    {
      v31 = *(_QWORD *)(a1 + 8LL * i + 1952);
      if ( v31 )
        StorPortExtendedFunction(1LL, a1, v31, v29);
    }
  }
  memset((void *)(a1 + 1952), 0, 0x7F8uLL);
  v33 = *(_QWORD *)(a1 + 4088);
  *(_DWORD *)(a1 + 220) = 0;
  if ( v33 )
  {
    StorPortExtendedFunction(1LL, a1, v33, v32);
    *(_QWORD *)(a1 + 4088) = 0LL;
  }
  if ( (unsigned int)Feature_Servicing_Huawei22H2BluescreenAfterSleep__private_IsEnabledDeviceUsage() )
    NVMeControllerDeleteLocalCommandPool(a1);
  if ( (*(_DWORD *)(a1 + 32) & 0x8000) != 0 )
  {
    v35 = *(unsigned __int8 *)(a1 + 150);
    if ( !(_BYTE)v35 )
      return 1;
    if ( (unsigned int)v13 <= 100 * v35 )
      LODWORD(v13) = 100 * v35;
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 184) + 20LL) = *(_DWORD *)(*(_QWORD *)(a1 + 184) + 20LL) & 0xFFFF3FFF | 0x4000;
  _InterlockedOr(v39, 0);
  for ( j = 0; j < (unsigned int)v13; ++j )
  {
    v6 = *(_DWORD *)(*(_QWORD *)(a1 + 184) + 28LL);
    if ( (v6 & 0xC) == 8 )
      break;
    StorPortExtendedFunction(81LL, a1, 10000LL, v34);
  }
  if ( (*(_DWORD *)(a1 + 64) & 0x2000) != 0 && (*(_BYTE *)(a1 + 12) & 2) != 0 && (v6 & 1) != 0 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 184) + 20LL) &= ~1u;
    _InterlockedOr(v39, 0);
    v37 = *(_DWORD *)(*(_QWORD *)(a1 + 184) + 28LL);
    if ( !v5 )
      v5 = 3000;
    do
    {
      if ( (v37 & 1) == 0 )
        break;
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 184) + 40LL) == -1LL )
        break;
      StorPortExtendedFunction(81LL, a1, 10000LL, v34);
      ++v3;
      v37 = *(_DWORD *)(*(_QWORD *)(a1 + 184) + 28LL);
    }
    while ( v3 < v5 );
  }
  return 1;
}
