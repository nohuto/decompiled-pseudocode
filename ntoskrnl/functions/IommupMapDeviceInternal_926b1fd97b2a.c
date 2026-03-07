__int64 __fastcall IommupMapDeviceInternal(KSPIN_LOCK *a1, __int64 *a2, int *a3)
{
  KSPIN_LOCK *v3; // r15
  KSPIN_LOCK *v4; // r14
  int *v5; // rbp
  __int64 v7; // rsi
  ULONG_PTR v8; // r12
  __int64 v9; // rcx
  __int64 v10; // rcx
  int DeviceSvmCapabilities; // r13d
  __int64 v12; // rcx
  __int64 v13; // rdx
  _QWORD *v14; // rdi
  __int64 v15; // rcx
  int v16; // eax
  bool v17; // zf
  __int64 v18; // rax
  KSPIN_LOCK *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  _QWORD *v23; // rax
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  __int64 v26; // rdx
  _QWORD *v27; // rax
  KSPIN_LOCK v28; // rcx
  KSPIN_LOCK *v29; // rax
  KSPIN_LOCK *v30; // rcx
  KSPIN_LOCK v31; // rdx
  KSPIN_LOCK *v32; // r8
  KSPIN_LOCK v33; // rcx
  KSPIN_LOCK **v34; // rax
  KSPIN_LOCK v35; // rdx
  unsigned __int8 v36; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v38; // r8
  int v39; // eax
  int v41; // [rsp+20h] [rbp-58h]
  __int64 v42; // [rsp+28h] [rbp-50h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp-48h]
  int v45; // [rsp+98h] [rbp+20h] BYREF

  v45 = 0;
  v3 = 0LL;
  v42 = 0LL;
  v4 = 0LL;
  v5 = a3;
  if ( HalpHvIommu )
  {
    v8 = a2[4];
    v12 = *a2;
    BugCheckParameter2 = v8;
    DeviceSvmCapabilities = IommupHvGetDeviceSvmCapabilities(v12, &v42, &v45);
    if ( DeviceSvmCapabilities < 0 )
      return (unsigned int)DeviceSvmCapabilities;
    v7 = v42;
    DeviceSvmCapabilities = IommupHvMapDevice(a2[4], v13, v42, v5);
    v41 = v45;
  }
  else
  {
    v7 = a2[4];
    LOBYTE(a3) = 1;
    v8 = a2[6];
    v42 = v7;
    BugCheckParameter2 = v8;
    v41 = *(_DWORD *)(v7 + 488);
    v9 = *(_QWORD *)(v7 + 16);
    v45 = v41;
    DeviceSvmCapabilities = (*(__int64 (__fastcall **)(__int64, ULONG_PTR, int *))(v7 + 216))(v9, v8, a3);
  }
  if ( DeviceSvmCapabilities < 0 )
    return (unsigned int)DeviceSvmCapabilities;
  v14 = (_QWORD *)HalpMmAllocCtxAlloc(v10, 4208LL);
  if ( v14 )
  {
    if ( !HalpHvIommu )
    {
      if ( !*((_DWORD *)a2 + 14) )
      {
        *((_DWORD *)a2 + 15) = ((unsigned int)*v5 >> 12) & 0x1F;
        ExInitializePushLock((PEX_RUNDOWN_REF)a2 + 8);
      }
      ++*((_DWORD *)a2 + 14);
    }
    a2[11] = (__int64)v14;
    memset(v14, 0, 0x1070uLL);
    *((_DWORD *)v14 + 8) = v41;
    v14[12] = a2;
    v14[3] = v7;
    v14[5] = v8;
    v16 = *v5;
    v14[2] = 0LL;
    v17 = HalpHvIommu == 0;
    *((_DWORD *)v14 + 12) = v16;
    v14[11] = v14 + 10;
    v14[10] = v14 + 10;
    v18 = v7 + 416;
    if ( !v17 )
      v18 = v7 + 24;
    *((_DWORD *)v14 + 26) = *(_DWORD *)(v18 + 16);
    v19 = (KSPIN_LOCK *)HalpMmAllocCtxAlloc(v15, 64LL);
    v3 = v19;
    if ( v19 )
    {
      memset(v19, 0, 0x40uLL);
      v3[5] = (KSPIN_LOCK)v14;
      v21 = HalpMmAllocCtxAlloc(v20, 40LL);
      v4 = (KSPIN_LOCK *)v21;
      if ( v21 )
      {
        *(_QWORD *)(v21 + 16) = v7;
        v23 = (_QWORD *)(v21 + 24);
        v23[1] = v23;
        *v23 = v23;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          if ( CurrentIrql == 15 )
            LODWORD(v26) = 0x8000;
          else
            v26 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
          v7 = v42;
          SchedulerAssist[5] |= v26;
        }
        KxAcquireSpinLock(a1 + 3);
        v27 = a1 + 6;
        v28 = a1[6];
        if ( *(KSPIN_LOCK **)(v28 + 8) == a1 + 6 )
        {
          v14[1] = v27;
          *v14 = v28;
          *(_QWORD *)(v28 + 8) = v14;
          *v27 = v14;
          v29 = a1 + 4;
          v30 = (KSPIN_LOCK *)a1[4];
          if ( v30 == a1 + 4 )
            goto LABEL_35;
          do
          {
            v31 = v30[2];
            v32 = v30;
            if ( v31 == v7 )
              goto LABEL_37;
            v30 = (KSPIN_LOCK *)*v30;
          }
          while ( v30 != v29 );
          if ( v31 != v7 )
          {
LABEL_35:
            v33 = *v29;
            if ( *(KSPIN_LOCK **)(*v29 + 8) != v29 )
              goto LABEL_51;
            *v4 = v33;
            v32 = v4;
            v4[1] = (KSPIN_LOCK)v29;
            *(_QWORD *)(v33 + 8) = v4;
            *v29 = (KSPIN_LOCK)v4;
            v4 = 0LL;
          }
LABEL_37:
          v34 = (KSPIN_LOCK **)(v32 + 3);
          v35 = v32[3];
          if ( *(KSPIN_LOCK **)(v35 + 8) == v32 + 3 )
          {
            *v3 = v35;
            v3[1] = (KSPIN_LOCK)v34;
            *(_QWORD *)(v35 + 8) = v3;
            *v34 = v3;
            v3 = 0LL;
            KxReleaseSpinLock((volatile signed __int64 *)a1 + 3);
            v22 = (unsigned int)KiIrqlFlags;
            if ( KiIrqlFlags )
            {
              v36 = KeGetCurrentIrql();
              if ( (KiIrqlFlags & 1) != 0 && v36 <= 0xFu && CurrentIrql <= 0xFu && v36 >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v22 = (unsigned int)CurrentIrql + 1;
                v38 = CurrentPrcb->SchedulerAssist;
                v39 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                v17 = (v39 & v38[5]) == 0;
                v38[5] &= v39;
                if ( v17 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
            __writecr8(CurrentIrql);
            goto LABEL_46;
          }
        }
LABEL_51:
        __fastfail(3u);
      }
    }
  }
  DeviceSvmCapabilities = -1073741670;
  if ( HalpHvIommu )
    IommupHvUnmapDevice(BugCheckParameter2);
  else
    (*(void (__fastcall **)(_QWORD, ULONG_PTR, _QWORD))(v7 + 216))(*(_QWORD *)(v7 + 16), BugCheckParameter2, 0LL);
  if ( v14 )
  {
    a2[11] = 0LL;
    v14[12] = 0LL;
    if ( !HalpHvIommu )
    {
      v17 = (*((_DWORD *)a2 + 14))-- == 1;
      if ( v17 )
      {
        *((_DWORD *)a2 + 15) = 0;
        ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)a2 + 8);
        ExRundownCompleted((PEX_RUNDOWN_REF)a2 + 8);
      }
    }
    HalpMmAllocCtxFree(v22, (__int64)v14);
LABEL_46:
    if ( v4 )
      HalpMmAllocCtxFree(v22, (__int64)v4);
  }
  if ( v3 )
    HalpMmAllocCtxFree(v22, (__int64)v3);
  return (unsigned int)DeviceSvmCapabilities;
}
