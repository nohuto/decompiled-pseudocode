void __fastcall vUnreferencePdevWorker(struct tagUNREFDATA *a1)
{
  __int64 v1; // rdi
  unsigned int v3; // r12d
  int v4; // r15d
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rbx
  void *v8; // rdx
  void *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  _QWORD *v13; // rbx
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  void *v18; // rcx
  struct _ERESOURCE *v19; // rcx
  HSEMAPHORE v20; // rcx
  __int64 v21; // rbx
  __int64 (*v22)(void); // rax
  void *v23; // rsi
  _QWORD v24[2]; // [rsp+30h] [rbp-30h] BYREF
  _OWORD v25[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v26; // [rsp+90h] [rbp+30h] BYREF
  __int64 v27; // [rsp+98h] [rbp+38h] BYREF

  v1 = *(_QWORD *)a1;
  v3 = *((_DWORD *)a1 + 2);
  v4 = *(_DWORD *)(*(_QWORD *)a1 + 40LL) & 0x8000;
  v5 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  *((_DWORD *)a1 + 2) = 0;
  v26 = v1;
  memset(v25, 0, sizeof(v25));
  PushThreadGuardedObject(v25, a1, vUnreferencePdevWorker);
  while ( 1 )
  {
    v6 = *(_QWORD *)(v1 + 1520);
    if ( !v6 )
      break;
    v27 = *(_QWORD *)(v1 + 1520);
    v24[0] = *(_QWORD *)(v6 + 128);
    if ( qword_1C02D5D48 && (int)qword_1C02D5D48() >= 0 )
    {
      if ( qword_1C02D5D50 )
        qword_1C02D5D50(&v27, &v26, v24, v3);
    }
    v27 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v27);
  }
  PopThreadGuardedObject(v25);
  if ( *(_DWORD *)(v1 + 2072) && (*(_DWORD *)(v26 + 40) & 0x40) != 0 )
  {
    v20 = *(HSEMAPHORE *)(v5 + 48);
    v21 = 0LL;
    v27 = 0LL;
    EngAcquireSemaphore(v20);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemPublicPFT", *(_QWORD *)(v5 + 48), 14LL);
    if ( qword_1C02D5D58 && (int)qword_1C02D5D58() >= 0 )
    {
      v22 = qword_1C02D5D60;
      if ( qword_1C02D5D60 )
        v22 = (__int64 (*)(void))qword_1C02D5D60();
      v24[0] = *(_QWORD *)v22;
    }
    if ( qword_1C02D5D68 && (int)qword_1C02D5D68() >= 0 && qword_1C02D5D70 )
      v21 = qword_1C02D5D70(v24, v26, &v27);
    if ( (int)IsPFTOBJ_bUnloadWorkhorseSupported() >= 0 && qword_1C02D5D80 )
      qword_1C02D5D80(v24, v21, v27, 0LL);
  }
  v7 = *(_QWORD *)(v1 + 1680);
  while ( v7 )
  {
    *(_DWORD *)(v7 + 228) = 1;
    v23 = (void *)v7;
    if ( qword_1C02D5D88 && (int)qword_1C02D5D88() >= 0 && qword_1C02D5D90 )
      qword_1C02D5D90(v7 + 128);
    v7 = *(_QWORD *)(v7 + 248);
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v23);
  }
  if ( qword_1C02D5D98 && (int)qword_1C02D5D98() >= 0 && qword_1C02D5DA0 )
    qword_1C02D5DA0(v1);
  v8 = *(void **)(v1 + 2568);
  if ( v8 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v8);
  v9 = *(void **)(v1 + 3560);
  if ( v9 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v9);
    *(_QWORD *)(v1 + 3560) = 0LL;
  }
  if ( (*(_DWORD *)(v26 + 40) & 0x80000) == 0 )
  {
    v10 = *(_QWORD *)(v1 + 1424);
    if ( v10 != *(_QWORD *)(*(_QWORD *)(v5 + 3168) + 104LL) && qword_1C02D57E0 )
      qword_1C02D57E0(v10, 1LL);
    v11 = *(_QWORD *)(v1 + 1432);
    if ( v11 != *(_QWORD *)(*(_QWORD *)(v5 + 3168) + 104LL) && qword_1C02D57E0 )
      qword_1C02D57E0(v11, 1LL);
    v12 = *(_QWORD *)(v1 + 1440);
    if ( v12 != *(_QWORD *)(*(_QWORD *)(v5 + 3168) + 128LL) && qword_1C02D57E0 )
      qword_1C02D57E0(v12, 1LL);
    if ( (*(_DWORD *)(v1 + 40) & 1) != 0 )
    {
      v13 = (_QWORD *)(v1 + 1448);
      v14 = 6LL;
      do
      {
        bDeleteSurface(*v13++);
        --v14;
      }
      while ( v14 );
    }
  }
  PDEVOBJ::vDisableSurface((PDEVOBJ *)&v26, 1u);
  if ( *(_QWORD *)(v1 + 1504) && (int)IsPDEVOBJ_bDisableHalftoneSupported() >= 0 && qword_1C02D5C60 )
    qword_1C02D5C60(&v26);
  PDEVOBJ::vDeleteHTPATSIZEUSERAllocations((PDEVOBJ *)&v26);
  EBRUSHOBJ::vDelete((EBRUSHOBJ *)(v26 + 1536));
  if ( (*(_DWORD *)(v26 + 40) & 0x80000) == 0 )
  {
    if ( !*(_DWORD *)(*(_QWORD *)(SGDGetSessionState(v15) + 24) + 3192LL) )
    {
      v16 = *(_QWORD *)(v1 + 1776);
      if ( v16 )
        HmgDecrementShareReferenceCountEx(v16, 0LL);
      v17 = *(_QWORD *)(v1 + 1784);
      if ( v17 )
        HmgDecrementShareReferenceCountEx(v17, 0LL);
      v27 = *(_QWORD *)(v1 + 1784);
      if ( v27 )
        XEPALOBJ::bDeletePaletteInternal((XEPALOBJ *)&v27, 0);
    }
    if ( *(_QWORD *)(v26 + 2680) != *(_QWORD *)(v26 + 2664)
      && (unsigned int)PDEVOBJ::bAllowDDICall((PDEVOBJ *)&v26)
      && v3 )
    {
      (*(void (__fastcall **)(_QWORD))(v26 + 2680))(*(_QWORD *)(v1 + 1768));
    }
    if ( v4 )
    {
      if ( (int)IsUMPD_ldevUnloadImageSupported() >= 0 && qword_1C02D5C50 )
        qword_1C02D5C50(*(_QWORD *)(v1 + 1760));
    }
    else
    {
      v18 = *(void **)(v1 + 1760);
      if ( v18 )
        ldevUnloadImage(v18);
    }
  }
  if ( (*(_DWORD *)(v1 + 40) & 0x10000) == 0 )
  {
    v19 = *(struct _ERESOURCE **)(v1 + 48);
    if ( v19 )
      GreDeleteSemaphore(v19);
  }
  if ( (*(_DWORD *)(v1 + 40) & 1) != 0 )
    GreDeleteSemaphore(*(PERESOURCE *)(v1 + 56));
  vMarkSurfacesWithHDEV((struct PDEV *)v1);
  PDEV::Free((struct PDEV *)v1, v4);
}
