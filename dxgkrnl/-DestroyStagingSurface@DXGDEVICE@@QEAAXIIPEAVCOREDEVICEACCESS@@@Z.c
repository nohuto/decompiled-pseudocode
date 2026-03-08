/*
 * XREFs of ?DestroyStagingSurface@DXGDEVICE@@QEAAXIIPEAVCOREDEVICEACCESS@@@Z @ 0x1C02E43A4
 * Callers:
 *     ?CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PEAI2@Z @ 0x1C02E41A0 (-CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PE.c)
 *     ?CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z @ 0x1C02F235C (-CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z.c)
 *     ?PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z @ 0x1C033B400 (-PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0009B78 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C01C6838 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 */

void __fastcall DXGDEVICE::DestroyStagingSurface(
        DXGDEVICE *this,
        unsigned int a2,
        unsigned int a3,
        struct COREDEVICEACCESS *a4)
{
  DXGDEVICE *v4; // r14
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // rbx
  struct DXGRESOURCE *v9; // rbp
  unsigned int v10; // eax
  unsigned int v11; // edi
  unsigned int v12; // r15d
  __int64 v13; // rdx
  unsigned int v14; // ecx
  int v15; // ecx
  __int64 v16; // rdx
  unsigned int v17; // ecx
  unsigned __int64 v18; // rax
  unsigned int v19; // edi
  unsigned int v20; // r15d
  __int64 v21; // r8
  unsigned int v22; // ecx
  int v23; // ecx
  unsigned int v24; // ecx
  struct DXGALLOCATION **v25; // r8
  struct DXGRESOURCE *v26; // r9
  unsigned int v27; // edx
  struct DXGALLOCATION *v28; // [rsp+50h] [rbp-58h] BYREF
  _BYTE v29[80]; // [rsp+58h] [rbp-50h] BYREF

  v4 = this;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 8848LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      8848LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  Current = DXGPROCESS::GetCurrent(v7);
  if ( !Current )
  {
    WdLogSingleEntry1(1LL, 8856LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pProcess != NULL", 8856LL, 0LL, 0LL, 0LL, 0LL);
  }
  v28 = 0LL;
  v9 = 0LL;
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v29, Current);
  v10 = *((_DWORD *)Current + 74);
  if ( !a3 )
  {
    v19 = (a2 >> 6) & 0xFFFFFF;
    v20 = a2 >> 30;
    if ( v19 < v10 )
    {
      v21 = *((_QWORD *)Current + 35);
      v22 = *(_DWORD *)(v21 + 16LL * v19 + 8);
      if ( v20 == ((v22 >> 5) & 3) && (v22 & 0x2000) == 0 )
      {
        v23 = v22 & 0x1F;
        if ( v23 )
        {
          if ( v23 == 5 )
          {
            v28 = *(struct DXGALLOCATION **)(v21 + 16LL * v19);
            if ( v28 )
              goto LABEL_29;
          }
          else
          {
            WdLogSingleEntry1(2LL, 267LL);
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
            v4 = this;
          }
        }
      }
    }
    WdLogSingleEntry1(1LL, 8873LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pAllocation != NULL", 8873LL, 0LL, 0LL, 0LL, 0LL);
LABEL_29:
    if ( v19 >= *((_DWORD *)Current + 74) )
      goto LABEL_35;
    v16 = *((_QWORD *)Current + 35);
    v24 = *(_DWORD *)(v16 + 16LL * v19 + 8);
    if ( v20 != ((v24 >> 5) & 3) || (v24 & 0x2000) != 0 || (v24 & 0x1F) == 0 )
      goto LABEL_35;
    v18 = a2;
    goto LABEL_34;
  }
  v11 = (a3 >> 6) & 0xFFFFFF;
  v12 = a3 >> 30;
  if ( v11 < v10
    && (v13 = *((_QWORD *)Current + 35), v14 = *(_DWORD *)(v13 + 16LL * v11 + 8), v12 == ((v14 >> 5) & 3))
    && (v14 & 0x2000) == 0
    && (v15 = v14 & 0x1F) != 0 )
  {
    if ( v15 == 4 )
    {
      v9 = *(struct DXGRESOURCE **)(v13 + 16LL * v11);
      if ( v9 )
        goto LABEL_16;
    }
    else
    {
      WdLogSingleEntry1(2LL, 267LL);
      v9 = 0LL;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      v4 = this;
    }
  }
  else
  {
    v9 = 0LL;
  }
  WdLogSingleEntry1(1LL, 8867LL);
  DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pResource != NULL", 8867LL, 0LL, 0LL, 0LL, 0LL);
LABEL_16:
  if ( v11 >= *((_DWORD *)Current + 74) )
    goto LABEL_35;
  v16 = *((_QWORD *)Current + 35);
  v17 = *(_DWORD *)(v16 + 16LL * v11 + 8);
  if ( v12 != ((v17 >> 5) & 3) || (v17 & 0x2000) != 0 || (v17 & 0x1F) == 0 )
    goto LABEL_35;
  v18 = a3;
LABEL_34:
  *(_DWORD *)(v16 + 16 * ((v18 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
LABEL_35:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v29);
  if ( a3 )
  {
    v25 = 0LL;
    v26 = v9;
    v27 = 0;
  }
  else
  {
    v26 = 0LL;
    v25 = &v28;
    v27 = 1;
  }
  DXGDEVICE::DestroyAllocationInternal(
    v4,
    v27,
    v25,
    v26,
    a4,
    (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)DXGDEVICE::DestroyFlagsDefault.0);
}
