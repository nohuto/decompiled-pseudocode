__int64 __fastcall DXGADAPTER::PinFrameBufferForSave(
        DXGADAPTER *this,
        unsigned int a2,
        ULONG_PTR a3,
        unsigned int a4,
        struct _MDL **a5,
        struct _DXGK_ADL **a6)
{
  char v6; // r13
  __int64 v7; // rbx
  const wchar_t *v8; // r9
  __int64 v10; // rsi
  struct _MDL *v11; // r14
  struct _DXGK_ADL *v12; // r12
  __int64 v13; // r15
  __int64 v14; // rdx
  int v15; // r8d
  PMDL Mdl; // rax
  int PhysicalObjectForExistingMdl; // eax
  struct _DXGK_ADL **v18; // rbx
  int v19; // eax
  struct _DXGK_ADL *v20; // rax
  struct SYSMM_ADAPTER_OBJECT *v21; // [rsp+58h] [rbp-70h] BYREF
  struct _DXGK_ADL *v22; // [rsp+60h] [rbp-68h] BYREF
  struct SYSMM_PHYSICAL_OBJECT *v23; // [rsp+68h] [rbp-60h] BYREF
  PVOID MappedBase[11]; // [rsp+70h] [rbp-58h] BYREF
  ULONG_PTR ViewSize; // [rsp+E0h] [rbp+18h] BYREF
  unsigned int v27; // [rsp+E8h] [rbp+20h]

  v27 = a4;
  ViewSize = a3;
  v6 = 0;
  if ( a2 >= *((_DWORD *)this + 72) )
  {
    v7 = a2;
    WdLogSingleEntry1(2LL, a2);
    v8 = L"PinFrameBufferForSave Invalid physical adapter index. Index=%u";
LABEL_3:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v8, v7, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  if ( (a3 & 0xFFF) != 0 )
  {
    WdLogSingleEntry1(2LL, a3);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"PinFrameBufferForSave CommitSize (%I64u) is not a multiple of PAGE_SIZE",
      ViewSize,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v7 = a2;
  v10 = *((_QWORD *)this + 351) + 344LL * a2;
  MappedBase[1] = (PVOID)v10;
  if ( *(_QWORD *)(v10 + 88) )
  {
    WdLogSingleEntry1(2LL, a2);
    v8 = L"Frame buffer save area already pinned for PhysicalAdapterIndex %u. PinFrameBufferForSave cannot be called again"
          " without first calling Unpin.";
    goto LABEL_3;
  }
  v23 = 0LL;
  v21 = 0LL;
  MappedBase[0] = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v22 = 0LL;
  LODWORD(v13) = MmMapViewInSystemSpace(*(PVOID *)(v10 + 64), MappedBase, &ViewSize);
  if ( (int)v13 >= 0 )
  {
    Mdl = IoAllocateMdl(MappedBase[0], ViewSize, 0, 0, 0LL);
    v11 = Mdl;
    MappedBase[2] = Mdl;
    if ( Mdl )
    {
      MmProbeAndLockPages(Mdl, 0, IoModifyAccess);
      v6 = 1;
      PhysicalObjectForExistingMdl = SysMmCreatePhysicalObjectForExistingMdl(
                                       *((struct SYSMM_ADAPTER **)this + 28),
                                       (__int64)v11,
                                       (__int64)this,
                                       8,
                                       (ULONG_PTR **)&v23,
                                       (ULONG_PTR **)&v21);
      v13 = PhysicalObjectForExistingMdl;
      if ( PhysicalObjectForExistingMdl >= 0 )
      {
        *(_QWORD *)(v10 + 72) = v11;
        if ( a5 )
        {
          *a5 = v11;
        }
        else
        {
          v18 = a6;
          if ( a6 )
          {
            v19 = SysMmCreateAdl(v21, 0LL, ViewSize, v27, &v22);
            LODWORD(v13) = v19;
            if ( v19 < 0 )
            {
              WdLogSingleEntry1(3LL, v19);
              v12 = v22;
              goto LABEL_22;
            }
            v20 = v22;
            *(_QWORD *)(v10 + 80) = v22;
            *v18 = v20;
          }
        }
        *(_QWORD *)(v10 + 88) = v23;
        *(_QWORD *)(v10 + 96) = v21;
        return 0LL;
      }
      WdLogSingleEntry1(6LL, PhysicalObjectForExistingMdl);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to add iommu memory tracker for frame buffer save area, Status=0x%.8x",
        v13,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      WdLogSingleEntry1(6LL, 11239LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to allocate memory for Mdl.",
        11239LL,
        0LL,
        0LL,
        0LL,
        0LL);
      LODWORD(v13) = -1073741801;
    }
  }
  else
  {
    WdLogSingleEntry1(3LL, ViewSize);
  }
LABEL_22:
  if ( v12 )
    SysMmFreeAdl(v21, v12);
  if ( v23 )
  {
    SysMmClosePhysicalObject(v21, v14, v15);
    SysMmUnreferencePhysicalObject(v23);
  }
  if ( v6 )
    MmUnlockPages(v11);
  if ( v11 )
    IoFreeMdl(v11);
  if ( MappedBase[0] )
    MmUnmapViewInSystemSpace(MappedBase[0]);
  *(_QWORD *)(v10 + 72) = 0LL;
  *(_QWORD *)(v10 + 80) = 0LL;
  return (unsigned int)v13;
}
