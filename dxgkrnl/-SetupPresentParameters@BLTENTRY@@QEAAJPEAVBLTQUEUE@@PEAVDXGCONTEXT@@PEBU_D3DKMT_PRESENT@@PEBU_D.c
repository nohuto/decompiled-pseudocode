/*
 * XREFs of ?SetupPresentParameters@BLTENTRY@@QEAAJPEAVBLTQUEUE@@PEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C03CFA08
 * Callers:
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C03CE0B0 (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C001B524 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0194420 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C01B2F2C (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?AssignNull@DXGALLOCATIONREFERENCE@@QEAAXXZ @ 0x1C02D24A4 (-AssignNull@DXGALLOCATIONREFERENCE@@QEAAXXZ.c)
 *     ?DxgkpGetDodPrimaryInfo@@YAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAU_D3DKMT_KMDOD_ESCAPE@@@Z @ 0x1C03CD1E8 (-DxgkpGetDodPrimaryInfo@@YAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAU_D3DKMT_KMDOD_ESCAPE@@@Z.c)
 *     ?SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@IPEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C03CF2FC (-SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@IPEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3.c)
 */

__int64 __fastcall BLTENTRY::SetupPresentParameters(
        LARGE_INTEGER *this,
        struct BLTQUEUE *a2,
        struct DXGCONTEXT *a3,
        const struct _D3DKMT_PRESENT *a4,
        const struct _DXGKARG_PRESENT *a5,
        struct COREDEVICEACCESS *a6,
        unsigned __int8 a7)
{
  __int64 v8; // rbx
  struct _EX_RUNDOWN_REF **v10; // r15
  __int64 v11; // rcx
  D3DKMT_HANDLE *p_hSource; // r14
  D3DKMT_HANDLE hDestination; // r8d
  struct _EX_RUNDOWN_REF **AllocationSafe; // rax
  struct _EX_RUNDOWN_REF *v15; // rsi
  const wchar_t *v16; // r9
  const struct tagRECT *v18; // r14
  __int64 v19; // rdx
  int v20; // ebx
  __int64 v21; // rsi
  void *v22; // rcx
  NTSTATUS v23; // eax
  void *v24; // rcx
  NTSTATUS v25; // eax
  __int64 v26; // rbx
  struct _EX_RUNDOWN_REF *HandleInformation; // [rsp+28h] [rbp-100h]
  __int64 v28; // [rsp+30h] [rbp-F8h]
  PVOID v29; // [rsp+50h] [rbp-D8h] BYREF
  PVOID Object; // [rsp+58h] [rbp-D0h] BYREF
  struct COREDEVICEACCESS *v31; // [rsp+60h] [rbp-C8h]
  LARGE_INTEGER *v32; // [rsp+68h] [rbp-C0h]
  struct DXGCONTEXT *v33; // [rsp+70h] [rbp-B8h]
  __int128 *v34; // [rsp+78h] [rbp-B0h]
  unsigned int v35[20]; // [rsp+80h] [rbp-A8h] BYREF
  __int128 v36; // [rsp+D0h] [rbp-58h] BYREF

  v8 = (__int64)a3;
  v32 = this;
  v33 = a3;
  v31 = a6;
  this[3].QuadPart = (LONGLONG)a2;
  this[5].QuadPart = 0LL;
  this[6].QuadPart = 0LL;
  v10 = (struct _EX_RUNDOWN_REF **)&this[4];
  v11 = *(_QWORD *)(*((_QWORD *)a3 + 2) + 40LL);
  p_hSource = &a4->hSource;
  if ( (a4->Flags.Value & 4) != 0 )
    hDestination = *p_hSource;
  else
    hDestination = a4->hDestination;
  AllocationSafe = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationSafe(
                                                v11,
                                                (DXGALLOCATIONREFERENCE *)&v29,
                                                hDestination);
  DXGALLOCATIONREFERENCE::MoveAssign(v10, AllocationSafe);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v29);
  v15 = *v10;
  if ( !*v10 )
  {
    WdLogSingleEntry3(2LL, v8, *p_hSource, -1073741811LL);
    v28 = -1073741811LL;
    HandleInformation = (struct _EX_RUNDOWN_REF *)*p_hSource;
    v16 = L"Context 0x%I64x: Invalid hAllocation specified: 0x%I64x, returning 0x%I64x";
LABEL_6:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v16, v8, (__int64)HandleInformation, v28, 0LL, 0LL);
    return 3221225485LL;
  }
  v18 = 0LL;
  if ( !a7 )
  {
    v19 = *(_QWORD *)(v8 + 16);
    if ( *(_QWORD *)(*(_QWORD *)(v15[1].Count + 16) + 16LL) != *(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL) )
    {
      WdLogSingleEntry3(2LL, v19, *v10, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
        *(_QWORD *)(v8 + 16),
        (__int64)*v10,
        -1073741811LL,
        0LL,
        0LL);
      return 3221225485LL;
    }
  }
  if ( (*(_DWORD *)(v15[6].Count + 4) & 4) == 0 && !a7 )
  {
    WdLogSingleEntry3(2LL, v8, *v10, -1073741811LL);
    v28 = -1073741811LL;
    HandleInformation = *v10;
    v16 = L"Context 0x%I64x: Source allocation: 0x%I64x for Present is not DOD primary, returning 0x%I64x";
    goto LABEL_6;
  }
  this[65].QuadPart = 0LL;
  if ( a7 )
  {
    this[65].LowPart = 1;
LABEL_33:
    this[8].LowPart = a4->Flags.Value;
    this[7].LowPart = a4->FlipInterval;
    this[7].HighPart = a4->PresentCount;
    *(_OWORD *)&this[66].LowPart = 0LL;
    *(_OWORD *)&this[68].LowPart = 0LL;
    this[67] = KeQueryPerformanceCounter(0LL);
    v26 = MEMORY[0xFFFFF78000000320];
    this[66].QuadPart = v26 * KeQueryTimeIncrement();
    return 0LL;
  }
  if ( *(_BYTE *)(v8 + 442) )
  {
    v20 = PRESENTDODARG::SetPresentDodArg(
            (PRESENTDODARG *)&this[9],
            (struct DXGCONTEXT *)v8,
            *(_DWORD *)(this[3].QuadPart + 256),
            (struct DXGALLOCATION *)v15,
            0,
            0,
            0LL,
            a4,
            a5,
            v31);
    if ( v20 >= 0 )
    {
      this[65].LowPart |= 1u;
      goto LABEL_33;
    }
LABEL_18:
    DXGALLOCATIONREFERENCE::AssignNull(v10);
    return (unsigned int)v20;
  }
  memset(v35, 0, sizeof(v35));
  DxgkpGetDodPrimaryInfo(
    *(struct DXGDEVICE **)(v8 + 16),
    (struct DXGALLOCATION *)v15,
    (struct _D3DKMT_KMDOD_ESCAPE *)v35);
  if ( !v35[8] )
  {
    v8 = 131LL;
    WdLogSingleEntry1(2LL, 131LL);
    v28 = 0LL;
    HandleInformation = 0LL;
    v16 = L"Primary pitch invalid";
    goto LABEL_6;
  }
  v21 = *(_QWORD *)(v8 + 56);
  v36 = 0LL;
  if ( *(_DWORD *)v21 == -791674878 )
  {
    v22 = *(void **)(v21 + 16);
    if ( v22 )
    {
      if ( *(_QWORD *)(v21 + 24) )
      {
        Object = 0LL;
        v23 = ObReferenceObjectByHandle(v22, 2u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
        this[5].QuadPart = (LONGLONG)Object;
        if ( v23 < 0 )
          return 3221225485LL;
        v24 = *(void **)(v21 + 24);
        v29 = 0LL;
        v25 = ObReferenceObjectByHandle(v24, 2u, (POBJECT_TYPE)ExEventObjectType, 1, &v29, 0LL);
        this[6].QuadPart = (LONGLONG)v29;
        if ( v25 < 0 )
          return 3221225485LL;
        if ( *(_QWORD *)(v21 + 32) == v21 + 32 && *(int *)(v21 + 40) < 0 )
        {
          v36 = *(_OWORD *)(v21 + 44);
          v18 = (const struct tagRECT *)&v36;
          v34 = &v36;
        }
        v20 = PRESENTDODARG::SetPresentDodArg(
                (PRESENTDODARG *)&this[9],
                (struct DXGCONTEXT *)v8,
                *(_DWORD *)(this[3].QuadPart + 256),
                (struct DXGALLOCATION *)*v10,
                v35[8],
                v35[10],
                v18,
                a4,
                a5,
                v31);
        if ( v20 >= 0 )
          goto LABEL_33;
        goto LABEL_18;
      }
    }
  }
  WdLogSingleEntry1(2LL, 145LL);
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid Dod esacpe", 145LL, 0LL, 0LL, 0LL, 0LL);
  return 3221225485LL;
}
