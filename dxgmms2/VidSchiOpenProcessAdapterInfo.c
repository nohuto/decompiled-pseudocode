/*
 * XREFs of VidSchiOpenProcessAdapterInfo @ 0x1C00ACA8C
 * Callers:
 *     VidSchiCreateDeviceInternal @ 0x1C00AC5B0 (VidSchiCreateDeviceInternal.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001A30 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C00023B8 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     RtlStringCbPrintfW @ 0x1C00144CC (RtlStringCbPrintfW.c)
 *     ??0VIDSCH_PROCESS_ADAPTER_INFO@@QEAA@XZ @ 0x1C0014730 (--0VIDSCH_PROCESS_ADAPTER_INFO@@QEAA@XZ.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@PEAU_VIDSCH_NODE_STATISTICS@@$07$0DCGBGJFG@@@QEAAPEAPEAU_VIDSCH_NODE_STATISTICS@@I@Z @ 0x1C0014768 (-AllocateElements@-$NonPagedPoolZeroedArray@PEAU_VIDSCH_NODE_STATISTICS@@$07$0DCGBGJFG@@@QEAAPEA.c)
 *     ??_GVIDSCH_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z @ 0x1C0014854 (--_GVIDSCH_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall VidSchiOpenProcessAdapterInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r13
  _DWORD *v6; // rcx
  VIDSCH_PROCESS_ADAPTER_INFO *Pool2; // rax
  NTSTATUS v8; // r12d
  unsigned int v9; // r14d
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 *v12; // rcx
  __int64 v13; // r15
  __int64 v14; // rcx
  _QWORD *v15; // rax
  unsigned int v16; // r10d
  __int64 v17; // r11
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rcx
  int *v23; // r10
  __int64 v24; // rax
  wchar_t *v25; // r10
  __int64 v26; // rax
  __int64 v27; // rcx
  unsigned int v28; // r8d
  const void **v29; // rcx
  const void **v30; // rdx
  const void *v31; // rdx
  unsigned int v32; // r14d
  _QWORD *v33; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  unsigned int i; // r14d
  void *v38; // rcx
  unsigned int j; // r14d
  __int64 v40; // rcx
  unsigned int v41; // edx
  PVOID *v42; // rcx
  PVOID *v43; // rax
  __int64 v44; // r15
  __int64 v45; // rcx
  unsigned int v46; // eax
  _QWORD *v47; // rdx
  _QWORD *v48; // rcx
  VIDSCH_PROCESS_ADAPTER_INFO *v49; // rcx
  PPCW_DATA Data; // [rsp+20h] [rbp-88h]
  __int64 v51; // [rsp+28h] [rbp-80h]
  __int64 v52; // [rsp+30h] [rbp-78h]
  __int64 v53; // [rsp+38h] [rbp-70h]
  struct _PCW_DATA v54; // [rsp+50h] [rbp-58h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-48h] BYREF
  unsigned int v56; // [rsp+B0h] [rbp+8h]
  wchar_t *pszDest; // [rsp+B8h] [rbp+10h]
  __int64 v58; // [rsp+C0h] [rbp+18h]

  v2 = *(unsigned int *)(a2 + 4);
  v3 = a1 + 2664;
  ExAcquirePushLockExclusiveEx(a1 + 2664, 0LL);
  v6 = *(_DWORD **)(*(_QWORD *)(a1 + 32) + 8 * v2);
  if ( v6 )
  {
    ++*v6;
    goto LABEL_31;
  }
  Pool2 = (VIDSCH_PROCESS_ADAPTER_INFO *)ExAllocatePool2(64LL, 232LL, 845244758LL);
  if ( Pool2 )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v2) = VIDSCH_PROCESS_ADAPTER_INFO::VIDSCH_PROCESS_ADAPTER_INFO(Pool2);
    **(_DWORD **)(*(_QWORD *)(a1 + 32) + 8 * v2) = 1;
    if ( NonPagedPoolZeroedArray<_VIDSCH_NODE_STATISTICS *,8,845244758>::AllocateElements(
           (__int64 *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v2) + 8LL),
           *(_DWORD *)(a2 + 84)) )
    {
      v8 = 0;
      pszDest = (wchar_t *)operator new[](520LL, 0x4B677844u, 256LL);
      if ( pszDest )
      {
        v9 = 0;
        if ( *(_DWORD *)(a2 + 80) )
        {
          do
          {
            v10 = ExAllocatePool2(64LL, 224LL, 845244758LL);
            v11 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v2);
            v12 = *(__int64 **)(v11 + 8);
            if ( v9 < *(_DWORD *)(v11 + 80) )
              v12 += v9;
            *v12 = v10;
            v13 = 8LL * v9;
            v14 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v2);
            v15 = *(_QWORD **)(v14 + 8);
            if ( v9 < *(_DWORD *)(v14 + 80) )
              v15 = (_QWORD *)((char *)v15 + v13);
            if ( !*v15 )
              goto LABEL_38;
            v16 = *(_DWORD *)(a2 + 704);
            v17 = *(_QWORD *)(a2 + 632);
            v56 = v16;
            v58 = *(_QWORD *)(a2 + 16);
            v18 = v17 + v13;
            v19 = v17 + v13;
            if ( v9 >= v16 )
              v19 = *(_QWORD *)(a2 + 632);
            v20 = *(_QWORD *)(344LL * *(unsigned __int16 *)(*(_QWORD *)v19 + 6LL)
                            + *(_QWORD *)(*(_QWORD *)(a2 + 16) + 2808LL)
                            + 32);
            v21 = v17 + v13;
            if ( v9 >= v16 )
              v21 = *(_QWORD *)(a2 + 632);
            v22 = *(unsigned __int16 *)(*(_QWORD *)v21 + 8LL);
            DestinationString = 0LL;
            v23 = (int *)(v20 + 74 * v22);
            v24 = *v23;
            if ( (_DWORD)v24 )
              v25 = off_1C004EF00[v24];
            else
              v25 = (wchar_t *)(v23 + 1);
            v26 = v17 + v13;
            if ( v9 >= v56 )
            {
              v26 = v17;
              v18 = v17;
            }
            LODWORD(v53) = *(unsigned __int16 *)(*(_QWORD *)v26 + 8LL);
            LODWORD(v52) = *(unsigned __int16 *)(*(_QWORD *)v18 + 6LL);
            LODWORD(v51) = *(_DWORD *)(v58 + 404);
            LODWORD(Data) = *(_DWORD *)(v58 + 408);
            v8 = RtlStringCbPrintfW(
                   pszDest,
                   0x208uLL,
                   L"pid_%Iu_luid_0x%08X_0x%08X_phys_%u_eng_%u_engtype_%s",
                   *(_QWORD *)(a1 + 2640),
                   Data,
                   v51,
                   v52,
                   v53,
                   v25);
            if ( v8 < 0 )
              goto LABEL_37;
            RtlInitUnicodeString(&DestinationString, pszDest);
            v27 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v2);
            v28 = *(_DWORD *)(v27 + 80);
            v29 = *(const void ***)(v27 + 8);
            v30 = &v29[(unsigned __int64)v13 / 8];
            if ( v9 >= v28 )
              v30 = v29;
            v31 = *v30;
            if ( v9 < v28 )
              v29 = (const void **)((char *)v29 + v13);
            v54.Data = v31;
            v54.Size = 224;
            v8 = PcwCreateInstance(
                   (PPCW_INSTANCE *)*v29 + 27,
                   GpuPerformanceCounterSetEngine,
                   &DestinationString,
                   1u,
                   &v54);
            if ( v8 < 0 )
            {
LABEL_37:
              WdLogSingleEntry0(1LL);
              DxgkLogInternalTriageEvent(v36, 0x40000LL);
              break;
            }
          }
          while ( ++v9 < *(_DWORD *)(a2 + 80) );
        }
        operator delete(pszDest);
        if ( v8 >= 0 )
        {
          v32 = 0;
          if ( *(_DWORD *)(a2 + 40) )
          {
            while ( 1 )
            {
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v2) + 8LL * v32 + 88) = ExAllocatePool2(
                                                                                           64LL,
                                                                                           12LL,
                                                                                           845244758LL);
              if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v2) + 8LL * v32 + 88) )
                break;
              if ( ++v32 >= *(_DWORD *)(a2 + 40) )
                goto LABEL_30;
            }
LABEL_38:
            WdLogSingleEntry0(3LL);
            goto LABEL_39;
          }
LABEL_30:
          v33 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v2) + 216LL);
          v33[1] = v33;
          *v33 = v33;
LABEL_31:
          ExReleasePushLockExclusiveEx(v3, 0LL);
          return 0LL;
        }
      }
      else
      {
        WdLogSingleEntry0(1LL);
        DxgkLogInternalTriageEvent(v35, 0x40000LL);
      }
    }
    else
    {
      WdLogSingleEntry0(3LL);
    }
LABEL_39:
    for ( i = 0; i < *(_DWORD *)(a2 + 40); ++i )
    {
      v38 = *(void **)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v2) + 8LL * i + 88);
      if ( v38 )
      {
        ExFreePoolWithTag(v38, 0);
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v2) + 8LL * i + 88) = 0LL;
      }
    }
    for ( j = 0; j < *(_DWORD *)(a2 + 80); ++j )
    {
      v40 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v2);
      v41 = *(_DWORD *)(v40 + 80);
      v42 = *(PVOID **)(v40 + 8);
      v43 = &v42[j];
      if ( j >= v41 )
        v43 = v42;
      if ( *v43 )
      {
        v44 = j;
        if ( j < v41 )
          v42 = (PVOID *)((char *)v42 + v44 * 8);
        ExFreePoolWithTag(*v42, 0);
        v45 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v2);
        v46 = *(_DWORD *)(v45 + 80);
        v47 = *(_QWORD **)(v45 + 8);
        v48 = &v47[v44];
        if ( j >= v46 )
          v48 = v47;
        *v48 = 0LL;
      }
    }
    v49 = *(VIDSCH_PROCESS_ADAPTER_INFO **)(*(_QWORD *)(a1 + 32) + 8 * v2);
    if ( v49 )
    {
      VIDSCH_PROCESS_ADAPTER_INFO::`scalar deleting destructor'(v49);
      ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(a1 + 32) + 8 * v2), 0);
      *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v2) = 0LL;
    }
    goto LABEL_55;
  }
  WdLogSingleEntry0(3LL);
LABEL_55:
  ExReleasePushLockExclusiveEx(v3, 0LL);
  return 3221225495LL;
}
