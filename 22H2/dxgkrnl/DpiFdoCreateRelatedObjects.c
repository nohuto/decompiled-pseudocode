/*
 * XREFs of DpiFdoCreateRelatedObjects @ 0x1C0188434
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C0189268 (DpiFdoStartAdapter.c)
 * Callees:
 *     memset @ 0x1C0028FC0 (memset.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C012E1AC (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C012E510 (DxgkAcquireAdapterCoreSync.c)
 *     DpiFdoInvalidateChildRelations @ 0x1C01780D0 (DpiFdoInvalidateChildRelations.c)
 *     ?DmmInitializeAdapter@@YAJQEAX@Z @ 0x1C01862A8 (-DmmInitializeAdapter@@YAJQEAX@Z.c)
 *     DpiGdoCreateGdiObjects @ 0x1C0186564 (DpiGdoCreateGdiObjects.c)
 *     DpiFdoQueryAdapterInfoIntegratedDisplay @ 0x1C02CBA80 (DpiFdoQueryAdapterInfoIntegratedDisplay.c)
 *     DpiFdoQueryAdapterInfoIntegratedDisplay2 @ 0x1C02CBCF0 (DpiFdoQueryAdapterInfoIntegratedDisplay2.c)
 *     DpiFdoValidateIntegratedDisplayDescriptor @ 0x1C02CD038 (DpiFdoValidateIntegratedDisplayDescriptor.c)
 *     DpiPdoRemovePdoObjects @ 0x1C02D9E68 (DpiPdoRemovePdoObjects.c)
 *     DpiGdoDestroyGdiObjects @ 0x1C02DA350 (DpiGdoDestroyGdiObjects.c)
 */

__int64 __fastcall DpiFdoCreateRelatedObjects(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // r14
  unsigned int v7; // r15d
  __int64 v9; // rbx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int v16; // r14d
  _QWORD *v17; // r15
  _QWORD *v18; // rdi
  __int64 v19; // rax
  PVOID PoolWithTag; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  int AdapterInfoIntegratedDisplay; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdx

  v4 = *(_QWORD *)(a1 + 64);
  v5 = a4;
  v6 = a3;
  v7 = a2;
  LODWORD(v9) = 0;
  if ( (*(_BYTE *)(v4 + 3905) & 4) == 0 )
  {
LABEL_2:
    LODWORD(v9) = DpiFdoInvalidateChildRelations(a1, 6u, v5);
    if ( (int)v9 < 0 )
      goto LABEL_30;
    if ( (*(_BYTE *)(v4 + 3904) & 1) != 0 )
    {
      DxgkAcquireAdapterCoreSync(*(_QWORD *)(v4 + 3896), 2, v10);
      v9 = (int)DmmInitializeAdapter(*(DXGADAPTER **)(v4 + 3896), v11);
      DxgkReleaseAdapterCoreSync(*(_QWORD *)(v4 + 3896), 2u, v12);
      if ( (int)v9 < 0 )
      {
        v36 = WdLogNewEntry5_WdError(v14, v13);
        *(_QWORD *)(v36 + 24) = v9;
        WdLogEvent5_WdError(v36);
      }
      else
      {
        LODWORD(v9) = DpiGdoCreateGdiObjects(a1, v7, v6);
      }
    }
    if ( (int)v9 < 0 )
    {
LABEL_30:
      DpiGdoDestroyGdiObjects(a1);
      LOBYTE(v37) = 1;
      DpiPdoRemovePdoObjects(a1, v37, v5);
    }
    return (unsigned int)v9;
  }
  v16 = 0;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)(v4 + 3304), 1u);
  v17 = *(_QWORD **)(v4 + 3464);
  if ( v17 == (_QWORD *)(v4 + 3464) )
    goto LABEL_25;
  while ( 1 )
  {
    v18 = v17 - 4;
    v17 = (_QWORD *)*v17;
    v19 = *((unsigned __int16 *)v18 + 46);
    if ( !(_WORD)v19 )
      goto LABEL_18;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v19 + 128, 0x74727044u);
    v18[13] = PoolWithTag;
    if ( !PoolWithTag )
      break;
    memset(PoolWithTag, 0, *((unsigned __int16 *)v18 + 46) + 128LL);
    v25 = v18[13] + 128LL;
    v18[14] = v25;
    v18[15] = v25;
    if ( *(int *)(*(_QWORD *)(v4 + 3896) + 2596LL) < 2400 )
      AdapterInfoIntegratedDisplay = DpiFdoQueryAdapterInfoIntegratedDisplay(a1, v18);
    else
      AdapterInfoIntegratedDisplay = DpiFdoQueryAdapterInfoIntegratedDisplay2(a1, v18);
    v9 = AdapterInfoIntegratedDisplay;
    if ( AdapterInfoIntegratedDisplay < 0 )
    {
      v31 = WdLogNewEntry5_WdError(v28, v27);
      *(_QWORD *)(v31 + 24) = v9;
LABEL_22:
      WdLogEvent5_WdError(v31);
      goto LABEL_24;
    }
    LODWORD(v9) = DpiFdoValidateIntegratedDisplayDescriptor(v4, v18);
    if ( (int)v9 < 0 )
      goto LABEL_24;
    LOBYTE(v30) = *(_BYTE *)(v18[13] + 122LL);
    if ( ((1 << v30) & v16) != 0 )
    {
      LODWORD(v9) = -1073741811;
      v31 = WdLogNewEntry5_WdError(v30, v29);
      *(_QWORD *)(v31 + 24) = *(unsigned __int8 *)(v18[13] + 122LL);
      *(_QWORD *)(v31 + 32) = *((unsigned int *)v18 + 6);
      goto LABEL_22;
    }
    v16 |= 1 << v30;
LABEL_18:
    if ( v17 == (_QWORD *)(v4 + 3464) )
      goto LABEL_24;
  }
  v32 = WdLogNewEntry5_WdLowResource(v22, v21, v23, v24);
  *(_QWORD *)(v32 + 24) = (int)v9;
  WdLogEvent5_WdLowResource(v32);
  LODWORD(v9) = -1073741670;
LABEL_24:
  v5 = a4;
LABEL_25:
  ExReleaseResourceLite((PERESOURCE)(v4 + 3304));
  KeLeaveCriticalRegion();
  if ( ((v16 + 1) & v16) != 0 )
  {
    LODWORD(v9) = -1073741811;
    v35 = WdLogNewEntry5_WdError(v34, v33);
    *(_QWORD *)(v35 + 24) = v16;
    WdLogEvent5_WdError(v35);
  }
  if ( (int)v9 >= 0 )
  {
    v6 = a3;
    v7 = a2;
    goto LABEL_2;
  }
  return (unsigned int)v9;
}
