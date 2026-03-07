// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW::UnlockRange(
        VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW **this,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *v3; // rax
  struct _EPROCESS *CurrentProcess; // r13
  struct VIDMM_MDL_RANGE *v6; // rdi
  int v7; // r9d
  unsigned int v8; // r10d
  bool v9; // zf
  char *v10; // rbp
  unsigned __int64 *NextRange; // rsi
  unsigned __int64 v12; // r14
  char v13; // bl
  struct VIDMM_MDL_RANGE *v14; // r8
  __int64 v15; // rcx
  _QWORD *v16; // rax
  _QWORD *v17; // rdx
  unsigned int v18; // ebx
  VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *v20; // rdx
  unsigned __int64 v21; // r12
  int v22; // ecx
  char *v23; // r15
  int v24; // eax
  __int64 v25; // r9
  unsigned int v26; // r8d
  VIDMM_RECYCLE_HEAP_MGR *v27; // rcx
  __int64 v28; // rdx
  VIDMM_MDL_RANGE *v29; // rax
  VIDMM_MDL_RANGE *v30; // r14
  VIDMM_MDL_RANGE *v31; // rax
  enum _LOCK_OPERATION v32; // r8d
  VIDMM_MDL_RANGE *v33; // rbx
  enum _LOCK_OPERATION v34; // r8d
  __int64 v35; // rcx
  struct VIDMM_MDL_RANGE *v36; // rbp
  struct VIDMM_MDL_RANGE *v37; // r13
  char v38; // r15
  struct VIDMM_MDL_RANGE *v39; // r9
  __int64 v40; // rcx
  _QWORD *v41; // rax
  _QWORD *v42; // r8
  VIDMM_MDL_RANGE *v43; // r8
  __int64 v44; // rcx
  _QWORD *v45; // rax
  __int64 v46; // rcx
  _QWORD *v47; // rdx
  char v48; // bp
  struct VIDMM_MDL_RANGE *v49; // rbx
  struct VIDMM_MDL_RANGE *v50; // r8
  __int64 v51; // rcx
  _QWORD *v52; // rax
  _QWORD *v53; // rdx
  int v54; // eax
  unsigned int v55; // r15d
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rcx
  __int64 v61; // rcx
  __int64 v62; // r8
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  int v64; // [rsp+50h] [rbp-58h]
  PVOID MappedBase; // [rsp+58h] [rbp-50h] BYREF
  void *v66; // [rsp+60h] [rbp-48h] BYREF
  VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *v67; // [rsp+B0h] [rbp+8h]
  unsigned __int64 v68; // [rsp+C0h] [rbp+18h]
  unsigned __int8 v69; // [rsp+C8h] [rbp+20h] BYREF

  v68 = a3;
  v67 = (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)this;
  v3 = this[1];
  CurrentProcess = 0LL;
  v6 = 0LL;
  v7 = -1;
  v8 = 1;
  if ( v3 != (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)(this + 1) )
  {
    while ( 1 )
    {
      v9 = v7 == 0;
      if ( v7 >= 0 )
        break;
      v6 = (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)((char *)v3 - 24);
      if ( *((_QWORD *)v3 - 1) > a2 )
        v7 = *((_QWORD *)v6 + 1) >= a3;
      else
        v7 = -1;
      v3 = *(VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW **)v3;
      if ( v3 == (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)(this + 1) )
      {
        v9 = v7 == 0;
        break;
      }
    }
    if ( v9 )
    {
      v10 = (char *)*((_QWORD *)v6 + 1);
      NextRange = (unsigned __int64 *)v6;
      if ( *((_QWORD *)v6 + 2) < a3 )
      {
        do
          NextRange = (unsigned __int64 *)VIDMM_MDL_RANGE::GetNextRange((VIDMM_MDL_RANGE *)NextRange);
        while ( NextRange[2] < a3 );
        this = (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW **)v67;
      }
      v12 = NextRange[2];
      if ( (unsigned __int64)v10 >= a2 && v12 <= a3 )
      {
        v13 = 0;
        do
        {
          MmUnlockPages(*(PMDL *)v6);
          IoFreeMdl(*(PMDL *)v6);
          *(_QWORD *)v6 = 0LL;
          v14 = v6;
          if ( v6 == (struct VIDMM_MDL_RANGE *)NextRange )
            v13 = 1;
          else
            v6 = VIDMM_MDL_RANGE::GetNextRange(v6);
          v15 = *((_QWORD *)v14 + 3);
          v16 = (_QWORD *)((char *)v14 + 24);
          if ( *(struct VIDMM_MDL_RANGE **)(v15 + 8) != (struct VIDMM_MDL_RANGE *)((char *)v14 + 24) )
            goto LABEL_62;
          v17 = (_QWORD *)*((_QWORD *)v14 + 4);
          if ( (_QWORD *)*v17 != v16 )
            goto LABEL_62;
          *v17 = v15;
          *(_QWORD *)(v15 + 8) = v17;
          *v16 = 0LL;
          *((_QWORD *)v14 + 4) = 0LL;
          operator delete(v14);
        }
        while ( !v13 );
        return 0;
      }
      v20 = *this;
      v21 = v12 - (_QWORD)v10;
      v66 = 0LL;
      MappedBase = 0LL;
      v69 = 0;
      v22 = **((_DWORD **)v20 + 4);
      if ( (unsigned int)(v22 - 3) > 3 || v22 - 5 <= v8 )
      {
        v23 = v10;
        v66 = v10;
      }
      else
      {
        v54 = VidMmRecycleHeapMapSection(
                *((PVOID *)v20 + 7),
                (__int64)v10,
                v12 - (_QWORD)v10,
                v22 == 4,
                &v66,
                &MappedBase,
                0,
                &v69);
        v55 = v54;
        if ( v54 < 0 )
        {
          _InterlockedIncrement(&dword_1C0076894);
          WdLogSingleEntry4(6LL, v12 - (_QWORD)v10, *((_QWORD *)v6 + 1), *(_QWORD *)v67, v54);
          DxgkLogInternalTriageEvent(v56, 262145LL);
          return v55;
        }
        v23 = (char *)v66;
        a3 = v68;
      }
      if ( (unsigned __int64)v10 >= a2 )
      {
        if ( v12 > a3 )
        {
          v24 = VIDMM_MDL_RANGE::LockUnlock(
                  (VIDMM_MDL_RANGE *)NextRange,
                  &v23[a3 - *((_QWORD *)v6 + 1)],
                  a3,
                  NextRange[2]);
          v26 = v24;
          v64 = v24;
          if ( v24 >= 0 )
          {
            if ( v6 == (struct VIDMM_MDL_RANGE *)NextRange )
              goto LABEL_27;
            while ( 1 )
            {
              MmUnlockPages(*(PMDL *)v6);
              IoFreeMdl(*(PMDL *)v6);
              *(_QWORD *)v6 = 0LL;
              v6 = VIDMM_MDL_RANGE::GetNextRange(v6);
              v45 = (_QWORD *)(v44 + 24);
              v46 = *(_QWORD *)(v44 + 24);
              if ( *(_QWORD **)(v46 + 8) != v45 )
                goto LABEL_62;
              v47 = (_QWORD *)v45[1];
              if ( (_QWORD *)*v47 != v45 )
                goto LABEL_62;
              *v47 = v46;
              *(_QWORD *)(v46 + 8) = v47;
              *v45 = 0LL;
              *((_QWORD *)v43 + 4) = 0LL;
              VIDMM_MDL_RANGE::`scalar deleting destructor'(v43);
              if ( v6 == (struct VIDMM_MDL_RANGE *)NextRange )
                goto LABEL_45;
            }
          }
LABEL_67:
          _InterlockedIncrement(&dword_1C0076864);
          v18 = v24;
          WdLogSingleEntry1(6LL, v24);
          DxgkLogInternalTriageEvent(v57, 262145LL);
          goto LABEL_28;
        }
      }
      else if ( v12 <= a3 )
      {
        v24 = VIDMM_MDL_RANGE::LockUnlock(v6, v23, *((_QWORD *)v6 + 1), a2);
        v26 = v24;
        v64 = v24;
        if ( v24 >= 0 )
        {
          if ( v6 == (struct VIDMM_MDL_RANGE *)NextRange )
          {
LABEL_27:
            v18 = v26;
            goto LABEL_28;
          }
          v48 = 0;
          v49 = VIDMM_MDL_RANGE::GetNextRange(v6);
          while ( 1 )
          {
            MmUnlockPages(*(PMDL *)v49);
            IoFreeMdl(*(PMDL *)v49);
            *(_QWORD *)v49 = 0LL;
            v50 = v49;
            if ( v49 == (struct VIDMM_MDL_RANGE *)NextRange )
              v48 = 1;
            else
              v49 = VIDMM_MDL_RANGE::GetNextRange(v49);
            v51 = *((_QWORD *)v50 + 3);
            v52 = (_QWORD *)((char *)v50 + 24);
            if ( *(struct VIDMM_MDL_RANGE **)(v51 + 8) != (struct VIDMM_MDL_RANGE *)((char *)v50 + 24) )
              break;
            v53 = (_QWORD *)*((_QWORD *)v50 + 4);
            if ( (_QWORD *)*v53 != v52 )
              break;
            *v53 = v51;
            *(_QWORD *)(v51 + 8) = v53;
            *v52 = 0LL;
            *((_QWORD *)v50 + 4) = 0LL;
            VIDMM_MDL_RANGE::`scalar deleting destructor'(v50);
            if ( v48 )
              goto LABEL_45;
          }
LABEL_62:
          __fastfail(3u);
        }
        goto LABEL_67;
      }
      v29 = (VIDMM_MDL_RANGE *)operator new(48LL, 0x32316956u, 258LL);
      v30 = v29;
      if ( v29 )
      {
        *((_QWORD *)v29 + 1) = *((_QWORD *)v6 + 1);
        *(_QWORD *)v29 = 0LL;
        *((_QWORD *)v29 + 2) = a2;
        *((_QWORD *)v29 + 5) = v67;
        *((_QWORD *)v29 + 3) = 0LL;
        *((_QWORD *)v29 + 4) = 0LL;
        v31 = (VIDMM_MDL_RANGE *)operator new(48LL, 0x32316956u, 258LL);
        v33 = v31;
        if ( !v31 )
        {
          _InterlockedIncrement(&dword_1C0076864);
          WdLogSingleEntry1(6LL, 6529LL);
          DxgkLogInternalTriageEvent(v61, 262145LL);
          VIDMM_MDL_RANGE::`scalar deleting destructor'(v30);
          v18 = -1073741801;
          goto LABEL_28;
        }
        *((_QWORD *)v31 + 2) = NextRange[2];
        *((_QWORD *)v31 + 1) = v68;
        *(_QWORD *)v31 = 0LL;
        *((_QWORD *)v31 + 5) = v67;
        *((_QWORD *)v31 + 3) = 0LL;
        *((_QWORD *)v31 + 4) = 0LL;
        if ( (int)VIDMM_MDL_RANGE::Lock(v30, v23, v32, 0LL, 0LL) < 0 )
        {
          _InterlockedIncrement(&dword_1C0076864);
          WdLogSingleEntry1(6LL, 6547LL);
          DxgkLogInternalTriageEvent(v58, 262145LL);
        }
        else
        {
          v64 = VIDMM_MDL_RANGE::Lock(v33, &v23[v68 - *((_QWORD *)v6 + 1)], v34, 0LL, 0LL);
          if ( v64 >= 0 )
          {
            v35 = *((_QWORD *)v6 + 4);
            v36 = (struct VIDMM_MDL_RANGE *)(v35 - 24);
            if ( v35 == *((_QWORD *)v6 + 5) + 8LL )
              v36 = 0LL;
            v37 = VIDMM_MDL_RANGE::GetNextRange((VIDMM_MDL_RANGE *)NextRange);
            v38 = 0;
            do
            {
              MmUnlockPages(*(PMDL *)v6);
              IoFreeMdl(*(PMDL *)v6);
              v39 = v6;
              *(_QWORD *)v6 = 0LL;
              if ( v6 == (struct VIDMM_MDL_RANGE *)NextRange )
                v38 = 1;
              else
                v6 = VIDMM_MDL_RANGE::GetNextRange(v6);
              v40 = *((_QWORD *)v39 + 3);
              v41 = (_QWORD *)((char *)v39 + 24);
              if ( *(struct VIDMM_MDL_RANGE **)(v40 + 8) != (struct VIDMM_MDL_RANGE *)((char *)v39 + 24) )
                goto LABEL_62;
              v42 = (_QWORD *)*((_QWORD *)v39 + 4);
              if ( (_QWORD *)*v42 != v41 )
                goto LABEL_62;
              *v42 = v40;
              *(_QWORD *)(v40 + 8) = v42;
              *v41 = 0LL;
              *((_QWORD *)v39 + 4) = 0LL;
              VIDMM_MDL_RANGE::`scalar deleting destructor'(v39);
            }
            while ( !v38 );
            VIDMM_MDL_RANGE::InsertBetween(v30, v36, v33);
            VIDMM_MDL_RANGE::InsertBetween(v33, v30, v37);
            CurrentProcess = 0LL;
LABEL_45:
            v18 = v64;
            goto LABEL_28;
          }
          _InterlockedIncrement(&dword_1C0076864);
          WdLogSingleEntry1(6LL, 6567LL);
          DxgkLogInternalTriageEvent(v59, 262145LL);
          MmUnlockPages(*(PMDL *)v30);
          IoFreeMdl(*(PMDL *)v30);
          *(_QWORD *)v30 = 0LL;
        }
        VIDMM_MDL_RANGE::`scalar deleting destructor'(v30);
        VIDMM_MDL_RANGE::`scalar deleting destructor'(v33);
      }
      else
      {
        _InterlockedIncrement(&dword_1C0076864);
        WdLogSingleEntry1(6LL, 6518LL);
        DxgkLogInternalTriageEvent(v60, 262145LL);
      }
      v18 = -1073741801;
LABEL_28:
      v27 = *(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)v67 + 32LL);
      v28 = *(unsigned int *)v27;
      if ( (unsigned int)(v28 - 3) <= 3 && (unsigned int)(v28 - 5) > 1 )
      {
        if ( !v69 )
          CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v27, v28, v67, v25);
        if ( v21 <= VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationSize(v27, 0) )
        {
          if ( CurrentProcess )
          {
            VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
            (*((void (__fastcall **)(struct _EPROCESS *, PVOID))VirtualMemoryInterface + 4))(CurrentProcess, MappedBase);
          }
          else
          {
            MmUnmapViewInSystemSpace(MappedBase);
          }
        }
        else
        {
          VidMmUnmapViewAsync(CurrentProcess, *(void **)(*(_QWORD *)v62 + 56LL), MappedBase);
        }
      }
      return v18;
    }
  }
  g_DxgMmsBugcheckExportIndex = 1;
  WdLogSingleEntry5(0LL, 270LL, 52LL, 9LL, 0LL, 0LL);
  return 3221225473LL;
}
