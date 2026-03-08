/*
 * XREFs of ?SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_MONITORSET_SERIALIZATION@@@DMM@@@Z @ 0x1C03AEDC4
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C03A61F8 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C03A6C1C (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONITOR__@@@Z @ 0x1C000935C (-AcquireMonitorShared@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONI.c)
 *     ??1?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@QEAA@XZ @ 0x1C00093B0 (--1-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@QEAA@XZ.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ @ 0x1C004B3A4 (--1-$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ.c)
 *     ??1?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@UEAA@XZ @ 0x1C00670E4 (--1-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@UEAA@XZ.c)
 *     ?Enqueue@?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C006850C (-Enqueue@-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV-.c)
 *     ?Initialize@?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z @ 0x1C0068A3C (-Initialize@-$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_P.c)
 *     ?_SerializeMonitor@DXGMONITOR@@QEBAJPEA_KPEAU_DMM_MONITOR_SERIALIZATION@@@Z @ 0x1C03C520C (-_SerializeMonitor@DXGMONITOR@@QEBAJPEA_KPEAU_DMM_MONITOR_SERIALIZATION@@@Z.c)
 */

__int64 __fastcall DMMVIDEOPRESENTTARGETSET::SerializeConnectedMonitors(__int64 a1, _QWORD *a2)
{
  _QWORD *v5; // rcx
  unsigned __int64 v6; // rdx
  __int64 v7; // r14
  __int64 v8; // r14
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rsi
  __int64 v12; // r12
  __int64 v13; // rdx
  DXGMONITOR *v14; // rbx
  int v15; // edi
  int v16; // eax
  struct _DMM_MONITOR_SERIALIZATION *v17; // rdi
  DXGMONITOR *v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  _QWORD *v22; // rcx
  _QWORD *v23; // rax
  int v24; // eax
  int v25; // ebx
  __int64 v26; // rbx
  unsigned __int8 v27; // dl
  _BYTE *v28; // r14
  unsigned __int8 v29; // di
  char *v30; // rsi
  __int64 v31; // rbx
  _QWORD *v32; // rax
  __int64 v33; // [rsp+30h] [rbp-49h]
  DXGMONITOR *v34; // [rsp+38h] [rbp-41h] BYREF
  DXGMONITOR *v35[2]; // [rsp+40h] [rbp-39h] BYREF
  _QWORD v36[2]; // [rsp+50h] [rbp-29h] BYREF
  int v37; // [rsp+60h] [rbp-19h]
  _QWORD v38[2]; // [rsp+68h] [rbp-11h] BYREF
  unsigned __int64 v39; // [rsp+78h] [rbp-1h]
  int v40; // [rsp+80h] [rbp+7h]
  __int64 v41; // [rsp+88h] [rbp+Fh]
  unsigned __int64 v43; // [rsp+F0h] [rbp+77h] BYREF
  __int64 (__fastcall ***v44)(_QWORD, __int64); // [rsp+F8h] [rbp+7Fh] BYREF

  if ( !a2 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3221225485LL;
  }
  if ( a2[4] )
    WdLogSingleEntry0(1LL);
  v37 = 0;
  v36[0] = &Queue<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>::`vftable';
  v5 = v38;
  v38[0] = v38;
  v36[1] = &DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>>::`vftable';
  v6 = 0LL;
  v39 = 0LL;
  v38[1] = v38;
  v40 = 2;
  v7 = *(_QWORD *)(a1 + 24);
  v41 = 0LL;
  v33 = a1 + 24;
  if ( v7 == a1 + 24 || (v8 = v7 - 8) == 0 )
  {
LABEL_27:
    v20 = 1LL;
    if ( v6 > 1 )
      v20 = v6;
    v21 = 4 * v20 + 4;
    if ( v5 != v38 )
    {
      v22 = v5 - 1;
      while ( v22 )
      {
        v21 += v22[5];
        v23 = (_QWORD *)v22[1];
        v22 = v23 - 1;
        if ( v23 == v38 )
          v22 = 0LL;
      }
    }
    v24 = DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::Initialize(a2, v21);
    v25 = v24;
    if ( v24 >= 0 )
    {
      v27 = 1;
      v28 = (_BYTE *)a2[4];
      v29 = 0;
      *v28 = v39;
      if ( (unsigned __int8)v39 > 1u )
        v27 = v39;
      v30 = (char *)(a2[4] + 4LL + 4LL * v27);
      if ( (_QWORD *)v38[0] != v38 )
      {
        v31 = v38[0] - 8LL;
        if ( v38[0] != 8LL )
        {
          do
          {
            *(_DWORD *)&v28[4 * v29 + 4] = (_DWORD)v30 - (_DWORD)v28;
            memmove(v30, *(const void **)(v31 + 32), *(_QWORD *)(v31 + 40));
            v30 += *(_QWORD *)(v31 + 40);
            v32 = *(_QWORD **)(v31 + 8);
            v31 = (__int64)(v32 - 1);
            if ( v32 == v38 )
              v31 = 0LL;
            ++v29;
          }
          while ( v31 );
        }
      }
      if ( v29 != *(_BYTE *)a2[4] )
        WdLogSingleEntry0(1LL);
      v15 = 0;
    }
    else
    {
      WdLogSingleEntry1(2LL, v24);
      v15 = v25;
    }
    goto LABEL_57;
  }
  v9 = a1 + 24;
  while ( 1 )
  {
    if ( !*(_QWORD *)(v8 + 112) )
      goto LABEL_23;
    v10 = (_QWORD *)operator new[](0x38uLL, 0x4E506456u, 256LL);
    v11 = (__int64)v10;
    if ( v10 )
    {
      v10[1] = 0LL;
      v10[2] = 0LL;
      *v10 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
      v10[3] = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
      v10[4] = 0LL;
      v10[5] = 0LL;
      v10[6] = 256LL;
    }
    else
    {
      v11 = 0LL;
    }
    v44 = (__int64 (__fastcall ***)(_QWORD, __int64))v11;
    if ( !v11 )
      break;
    v12 = *(_QWORD *)(v8 + 112);
    if ( !v12 )
    {
      WdLogSingleEntry0(1LL);
      v15 = -1073741811;
LABEL_42:
      v26 = *(_QWORD *)(a1 + 88);
      if ( !*(_QWORD *)(v26 + 8) )
        goto LABEL_43;
      goto LABEL_44;
    }
    v13 = *(_QWORD *)(v8 + 112);
    v43 = 0LL;
    MONITOR_MGR::AcquireMonitorShared(v35, v13);
    v14 = v35[0];
    if ( !v35[0] )
    {
      v15 = -1073741275;
      WdLogSingleEntry1(2LL, -1073741275LL);
      RESOURCE_LOCK_ACCESSOR<DXGMONITOR const>::~RESOURCE_LOCK_ACCESSOR<DXGMONITOR const>((__int64 *)v35);
      goto LABEL_42;
    }
    v15 = DXGMONITOR::_SerializeMonitor(v35[0], &v43, 0LL);
    ExReleaseResourceLite((PERESOURCE)((char *)v14 + 24));
    KeLeaveCriticalRegion();
    if ( v15 < 0 && v15 != -1073741789 )
      goto LABEL_42;
    if ( v15 != -1073741789 )
      WdLogSingleEntry0(1LL);
    v16 = DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::Initialize((_QWORD *)v11, v43);
    v15 = v16;
    if ( v16 < 0 )
    {
      WdLogSingleEntry1(2LL, v16);
      goto LABEL_46;
    }
    v17 = *(struct _DMM_MONITOR_SERIALIZATION **)(v11 + 32);
    MONITOR_MGR::AcquireMonitorShared(&v34, v12);
    v18 = v34;
    if ( !v34 )
    {
      v15 = -1073741275;
      WdLogSingleEntry1(2LL, -1073741275LL);
      RESOURCE_LOCK_ACCESSOR<DXGMONITOR const>::~RESOURCE_LOCK_ACCESSOR<DXGMONITOR const>((__int64 *)&v34);
LABEL_37:
      v26 = *(_QWORD *)(a1 + 88);
      if ( !*(_QWORD *)(v26 + 8) )
LABEL_43:
        WdLogSingleEntry0(1LL);
LABEL_44:
      WdLogSingleEntry4(
        2LL,
        *(_QWORD *)(v8 + 112),
        *(unsigned int *)(v8 + 24),
        *(_QWORD *)(*(_QWORD *)(v26 + 8) + 16LL),
        v15);
      goto LABEL_46;
    }
    v15 = DXGMONITOR::_SerializeMonitor(v34, &v43, v17);
    ExReleaseResourceLite((PERESOURCE)((char *)v18 + 24));
    KeLeaveCriticalRegion();
    if ( v15 < 0 )
      goto LABEL_37;
    v44 = 0LL;
    Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::Enqueue(v36, v11);
    auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v44);
    v9 = v33;
LABEL_23:
    v19 = *(_QWORD *)(v8 + 8);
    v8 = v19 - 8;
    if ( v19 == v9 )
      v8 = 0LL;
    if ( !v8 )
    {
      v6 = v39;
      v5 = (_QWORD *)v38[0];
      goto LABEL_27;
    }
  }
  WdLogSingleEntry2(6LL, 56LL, v8);
  v15 = -1073741801;
LABEL_46:
  auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v44);
LABEL_57:
  Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::~Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>(v36);
  return (unsigned int)v15;
}
