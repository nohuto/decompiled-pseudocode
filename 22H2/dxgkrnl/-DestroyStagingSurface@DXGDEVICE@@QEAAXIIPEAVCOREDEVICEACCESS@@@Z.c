/*
 * XREFs of ?DestroyStagingSurface@DXGDEVICE@@QEAAXIIPEAVCOREDEVICEACCESS@@@Z @ 0x1C0254C34
 * Callers:
 *     ?CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PEAI2@Z @ 0x1C0254A84 (-CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PE.c)
 *     ?PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z @ 0x1C0281DC8 (-PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z.c)
 *     ?CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z @ 0x1C02BA390 (-CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00033B0 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00051D8 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005230 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0126818 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 */

void __fastcall DXGDEVICE::DestroyStagingSurface(
        DXGDEVICE *this,
        unsigned int a2,
        unsigned int a3,
        struct COREDEVICEACCESS *a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v15; // rax
  struct DXGRESOURCE *v16; // rbp
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // edi
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // r8
  int v24; // edx
  unsigned __int64 v25; // rax
  unsigned int v26; // edi
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // rax
  int v30; // edx
  struct DXGALLOCATION **v31; // r8
  struct DXGRESOURCE *v32; // r9
  unsigned int v33; // edx
  _BYTE v34[32]; // [rsp+30h] [rbp-48h] BYREF
  struct DXGALLOCATION *v35; // [rsp+80h] [rbp+8h] BYREF
  struct COREDEVICEACCESS *v36; // [rsp+98h] [rbp+20h]

  v36 = a4;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v8, v7);
    *(_QWORD *)(v11 + 24) = 8746LL;
    WdLogEvent5_WdAssertion(v11);
  }
  Current = DXGPROCESS::GetCurrent(v8, v7, v9, v10);
  if ( !Current )
  {
    v15 = WdLogNewEntry5_WdAssertion(v13, v12);
    *(_QWORD *)(v15 + 24) = 8754LL;
    WdLogEvent5_WdAssertion(v15);
  }
  v16 = 0LL;
  v35 = 0LL;
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
    (DXGHANDLETABLELOCKEXCLUSIVE *)v34,
    (struct _KTHREAD **)Current);
  if ( !a3 )
  {
    v26 = (a2 >> 6) & 0xFFFFFF;
    if ( v26 < *((_DWORD *)Current + 64) )
    {
      v27 = *((_QWORD *)Current + 30);
      v18 = (a2 >> 25) & 0x60;
      v17 = *(unsigned int *)(v27 + 16LL * v26 + 8);
      if ( ((a2 >> 25) & 0x60) == (*(_BYTE *)(v27 + 16LL * v26 + 8) & 0x60) && (v17 & 0x2000) == 0 && (v17 & 0x1F) != 0 )
      {
        v17 &= 0x1Fu;
        if ( (_BYTE)v17 == 5 )
        {
          v35 = *(struct DXGALLOCATION **)(v27 + 16LL * v26);
          if ( v35 )
            goto LABEL_29;
        }
        else
        {
          v28 = WdLogNewEntry5_WdError(v18, v17);
          *(_QWORD *)(v28 + 24) = 316LL;
          WdLogEvent5_WdError(v28);
        }
      }
    }
    v29 = WdLogNewEntry5_WdAssertion(v18, v17);
    *(_QWORD *)(v29 + 24) = 8771LL;
    WdLogEvent5_WdAssertion(v29);
LABEL_29:
    if ( v26 >= *((_DWORD *)Current + 64) )
      goto LABEL_35;
    v23 = *((_QWORD *)Current + 30);
    v30 = *(_DWORD *)(v23 + 16LL * v26 + 8);
    if ( ((a2 >> 25) & 0x60) != (*(_BYTE *)(v23 + 16LL * v26 + 8) & 0x60) || (v30 & 0x2000) != 0 || (v30 & 0x1F) == 0 )
      goto LABEL_35;
    v25 = a2;
    goto LABEL_34;
  }
  v19 = (a3 >> 6) & 0xFFFFFF;
  if ( v19 >= *((_DWORD *)Current + 64) )
    goto LABEL_12;
  v20 = *((_QWORD *)Current + 30);
  v18 = (a3 >> 25) & 0x60;
  v17 = *(unsigned int *)(v20 + 16LL * v19 + 8);
  if ( ((a3 >> 25) & 0x60) != (*(_BYTE *)(v20 + 16LL * v19 + 8) & 0x60) || (v17 & 0x2000) != 0 || (v17 & 0x1F) == 0 )
    goto LABEL_12;
  v17 &= 0x1Fu;
  if ( (_BYTE)v17 != 4 )
  {
    v21 = WdLogNewEntry5_WdError(v18, v17);
    *(_QWORD *)(v21 + 24) = 316LL;
    WdLogEvent5_WdError(v21);
LABEL_12:
    v16 = 0LL;
LABEL_13:
    v22 = WdLogNewEntry5_WdAssertion(v18, v17);
    *(_QWORD *)(v22 + 24) = 8765LL;
    WdLogEvent5_WdAssertion(v22);
    goto LABEL_14;
  }
  v16 = *(struct DXGRESOURCE **)(v20 + 16LL * v19);
  if ( !v16 )
    goto LABEL_13;
LABEL_14:
  if ( v19 >= *((_DWORD *)Current + 64) )
    goto LABEL_35;
  v23 = *((_QWORD *)Current + 30);
  v24 = *(_DWORD *)(v23 + 16LL * v19 + 8);
  if ( ((a3 >> 25) & 0x60) != (*(_BYTE *)(v23 + 16LL * v19 + 8) & 0x60) || (v24 & 0x2000) != 0 || (v24 & 0x1F) == 0 )
    goto LABEL_35;
  v25 = a3;
LABEL_34:
  *(_DWORD *)(v23 + 16 * ((v25 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
LABEL_35:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v34);
  if ( a3 )
  {
    v31 = 0LL;
    v32 = v16;
    v33 = 0;
  }
  else
  {
    v32 = 0LL;
    v31 = &v35;
    v33 = 1;
  }
  DXGDEVICE::DestroyAllocationInternal(this, v33, v31, v32, v36, DXGDEVICE::DestroyFlagsDefault);
}
