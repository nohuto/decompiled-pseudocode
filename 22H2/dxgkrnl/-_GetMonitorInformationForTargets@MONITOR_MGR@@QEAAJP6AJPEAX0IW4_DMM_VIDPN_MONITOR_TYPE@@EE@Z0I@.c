/*
 * XREFs of ?_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@Z @ 0x1C013D7F0
 * Callers:
 *     ?_FillTargetInfoAdaptersCallback@CCD_TOPOLOGY@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C013D450 (-_FillTargetInfoAdaptersCallback@CCD_TOPOLOGY@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?_DRTGetTargetInformation@MONITOR_MGR@@QEAAJPEAU_D3DKMT_DRT_MONITOR@@@Z @ 0x1C02F23AC (-_DRTGetTargetInformation@MONITOR_MGR@@QEAAJPEAU_D3DKMT_DRT_MONITOR@@@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003700 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003960 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ??1?$auto_rc@$$CBVDMMVIDEOPRESENTTARGETSET@@@@QEAA@XZ @ 0x1C00499E4 (--1-$auto_rc@$$CBVDMMVIDEOPRESENTTARGETSET@@@@QEAA@XZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0133648 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?DmmGetNextVideoPresentTarget@@YAJQEAXIPEAI@Z @ 0x1C013DCAC (-DmmGetNextVideoPresentTarget@@YAJQEAXIPEAI@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_GetMonitorInformationForTargets(
        struct _FAST_MUTEX *this,
        int (__high *a2)(void *, void *, unsigned int, enum _DMM_VIDPN_MONITOR_TYPE, unsigned __int8, unsigned __int8),
        void *a3,
        unsigned int a4)
{
  void *const *Owner; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  int NextVideoPresentTarget; // ebx
  char v9; // r12
  __int64 v10; // rsi
  unsigned int v11; // r15d
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rbx
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // eax
  int v27; // eax
  char v28; // bp
  void (__fastcall ***v29)(_QWORD, __int64); // rcx
  int v30; // ebx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rsi
  __int64 v34; // rdx
  ULONG *p_Contention; // rcx
  MONITOR_MGR *v36; // rax
  char *v37; // rdi
  char *v38; // rax
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  unsigned int v45; // ebp
  __int64 v46; // rbx
  __int64 v47; // rax
  __int64 v48; // r14
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rbx
  __int64 v52; // rdi
  __int64 v53; // rsi
  __int64 v54; // rdi
  __int64 v55; // rdi
  __int64 v56; // rax
  __int64 v57; // r8
  void (__fastcall ***v58)(_QWORD, __int64); // rcx
  int v59; // ebx
  int MonitorInstance; // eax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rdx
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  _QWORD *v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rcx
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // rbx
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rdx
  __int64 v88; // rdx
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // rax
  __int64 v92; // rax
  int v93; // [rsp+20h] [rbp-78h]
  int v94; // [rsp+28h] [rbp-70h]
  __int64 v95; // [rsp+40h] [rbp-58h] BYREF
  __int64 v96; // [rsp+48h] [rbp-50h] BYREF
  struct DXGMONITOR *v97; // [rsp+A0h] [rbp+8h] BYREF
  int (__high *v98)(void *, void *, unsigned int, enum _DMM_VIDPN_MONITOR_TYPE, unsigned __int8, unsigned __int8); // [rsp+A8h] [rbp+10h]
  void *v99; // [rsp+B0h] [rbp+18h]
  unsigned int v100; // [rsp+B8h] [rbp+20h] BYREF

  v100 = a4;
  v99 = a3;
  v98 = a2;
  if ( !a2 )
  {
    v65 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v65);
  }
  Owner = (void *const *)this->Owner;
  v100 = -1;
  NextVideoPresentTarget = DmmGetNextVideoPresentTarget(Owner[2], 0xFFFFFFFF, &v100);
  if ( NextVideoPresentTarget < 0 )
    return (unsigned int)NextVideoPresentTarget;
  while ( 1 )
  {
    v9 = 0;
    v10 = v100;
    v11 = 0;
    v12 = *((_QWORD *)this->Owner + 2);
    if ( !v12 )
    {
      v92 = WdLogNewEntry5_WdError(v7, v6);
      *(_QWORD *)(v92 + 24) = 0LL;
      goto LABEL_114;
    }
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v12 + 184)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v12 + 168)) )
    {
      v66 = WdLogNewEntry5_WdAssertion(v7, v6);
      WdLogEvent5_WdAssertion(v66);
    }
    v13 = *(_QWORD *)(v12 + 2696);
    if ( !v13 )
    {
      v92 = WdLogNewEntry5_WdError(v7, v6);
      *(_QWORD *)(v92 + 24) = v12;
LABEL_114:
      WdLogEvent5_WdError(v92);
      NextVideoPresentTarget = -1071775742;
      goto LABEL_115;
    }
    v14 = *(_QWORD *)(v13 + 88);
    if ( !v14 )
    {
      v91 = WdLogNewEntry5_WdError(v7, v6);
      *(_QWORD *)(v91 + 24) = v12;
      WdLogEvent5_WdError(v91);
      NextVideoPresentTarget = -1071774923;
      goto LABEL_115;
    }
    DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v14 + 40));
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v14 + 80) + 72LL));
    v18 = *(_QWORD *)(v14 + 80);
    v19 = *(_QWORD *)(v18 + 24);
    v96 = v18;
    if ( v19 == v18 + 24 )
    {
      v20 = 0LL;
    }
    else
    {
      v20 = v19 - 8;
      if ( !v20 )
        break;
      while ( *(_DWORD *)(v20 + 24) != (_DWORD)v10 )
      {
        v21 = *(_QWORD *)(v20 + 8);
        if ( v21 == v18 + 24 )
          v20 = 0LL;
        else
          v20 = v21 - 8;
        if ( !v20 )
          goto LABEL_108;
      }
    }
    if ( !v20 )
      break;
    v22 = *(_QWORD *)(v20 + 40);
    if ( !v22 )
    {
      v67 = WdLogNewEntry5_WdAssertion(v16, v15);
      WdLogEvent5_WdAssertion(v67);
      v22 = *(_QWORD *)(v20 + 40);
    }
    v23 = *(_QWORD *)(v22 + 88);
    v24 = *(_QWORD *)(v23 + 8);
    if ( !v24 )
    {
      v68 = WdLogNewEntry5_WdAssertion(v16, v15);
      WdLogEvent5_WdAssertion(v68);
      v24 = *(_QWORD *)(v23 + 8);
    }
    v25 = *(_QWORD *)(v24 + 16);
    if ( *(_DWORD *)(v25 + 324) == 21299 && *(int *)(*(_QWORD *)(*(_QWORD *)(v25 + 2696) + 16LL) + 2596LL) < 1105 )
    {
LABEL_27:
      v28 = 0;
      goto LABEL_28;
    }
    if ( *(_DWORD *)(v20 + 128) == -1 )
    {
      v26 = *(_DWORD *)(v20 + 408);
      if ( v26 == -1 )
      {
        v27 = *(_DWORD *)(v20 + 80);
        if ( v27 >= 4 && v27 < 14 || v27 < 0 || v27 > 3 && v27 != 14 )
          goto LABEL_27;
      }
      else if ( v26 != 1 )
      {
        goto LABEL_27;
      }
      v28 = 1;
    }
    else
    {
      v28 = 1;
    }
LABEL_28:
    if ( v18 )
    {
      v29 = (void (__fastcall ***)(_QWORD, __int64))(v18 + 64);
      v30 = _InterlockedDecrement((volatile signed __int32 *)(v18 + 72));
      if ( v30 )
      {
        if ( v30 < 0 )
        {
          v69 = WdLogNewEntry5_WdError(v29, v15);
          *(_QWORD *)(v69 + 24) = v30;
          WdLogEvent5_WdError(v69);
        }
      }
      else if ( v29 )
      {
        (**v29)(v29, 1LL);
      }
    }
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v14 + 40), v15);
    v33 = v100;
    if ( v100 == -1 )
    {
      v70 = WdLogNewEntry5_WdAssertion(v32, v31);
      WdLogEvent5_WdAssertion(v70);
    }
    if ( this == (struct _FAST_MUTEX *)-168LL )
    {
      v71 = WdLogNewEntry5_WdAssertion(v32, v31);
      WdLogEvent5_WdAssertion(v71);
    }
    KeAcquireGuardedMutex(this + 3);
    p_Contention = &this[2].Contention;
    v36 = *(MONITOR_MGR **)&this[2].Contention;
    if ( v36 == (MONITOR_MGR *)&this[2].Contention )
      goto LABEL_42;
    v37 = (char *)v36 - 16;
    if ( !v36 )
      v37 = 0LL;
    if ( !v37 )
    {
LABEL_42:
      v39 = WdLogNewEntry5_WdTrace(p_Contention, v34);
      *(_QWORD *)(v39 + 24) = v33;
      *(_QWORD *)(v39 + 32) = this;
      if ( this == (struct _FAST_MUTEX *)-168LL )
      {
        v74 = WdLogNewEntry5_WdAssertion(v41, v40);
        WdLogEvent5_WdAssertion(v74);
      }
      KeReleaseGuardedMutex(this + 3);
    }
    else
    {
      while ( *((_DWORD *)v37 + 11) != (_DWORD)v33 )
      {
        v38 = (char *)*((_QWORD *)v37 + 2);
        if ( v38 != (char *)p_Contention )
        {
          v37 = v38 - 16;
          if ( !v38 )
            v37 = 0LL;
          if ( v37 )
            continue;
        }
        goto LABEL_42;
      }
      v97 = (struct DXGMONITOR *)v37;
      if ( this == (struct _FAST_MUTEX *)-168LL )
      {
        v72 = WdLogNewEntry5_WdAssertion(p_Contention, v34);
        WdLogEvent5_WdAssertion(v72);
      }
      KeReleaseGuardedMutex(this + 3);
      v11 = *((_DWORD *)v37 + 108);
      MonitorInstance = MONITOR_MGR::_GetMonitorInstance(this, v100, 1, &v97);
      NextVideoPresentTarget = MonitorInstance;
      if ( MonitorInstance < 0 )
      {
        if ( MonitorInstance != -1073741275 )
        {
          v73 = (_QWORD *)WdLogNewEntry5_WdError(v62, v61);
          v73[3] = v100;
          goto LABEL_116;
        }
      }
      else
      {
        v9 = 1;
      }
    }
    LOBYTE(v94) = v9;
    LOBYTE(v93) = v28;
    v42 = ((__int64 (__fastcall *)(_QWORD, void *, _QWORD, _QWORD, int, int))v98)(
            *((_QWORD *)this->Owner + 2),
            v99,
            v100,
            v11,
            v93,
            v94);
    v45 = v100;
    NextVideoPresentTarget = v42;
    if ( v100 == -1 || v42 < 0 )
      return (unsigned int)NextVideoPresentTarget;
    v46 = *((_QWORD *)this->Owner + 2);
    v100 = -1;
    if ( !v46 )
    {
      v81 = WdLogNewEntry5_WdError(v44, v43);
      *(_QWORD *)(v81 + 24) = 0LL;
      WdLogEvent5_WdError(v81);
      return (unsigned int)-1071775742;
    }
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v46 + 184)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v46 + 168)) )
    {
      v75 = WdLogNewEntry5_WdAssertion(v44, v43);
      WdLogEvent5_WdAssertion(v75);
    }
    v47 = *(_QWORD *)(v46 + 2696);
    if ( !v47 )
    {
      v80 = WdLogNewEntry5_WdError(v44, v43);
      *(_QWORD *)(v80 + 24) = v46;
      WdLogEvent5_WdError(v80);
      return (unsigned int)-1071775742;
    }
    v48 = *(_QWORD *)(v47 + 88);
    if ( !v48 )
    {
      v79 = WdLogNewEntry5_WdError(v44, v43);
      *(_QWORD *)(v79 + 24) = v46;
      WdLogEvent5_WdError(v79);
      return (unsigned int)-1071774923;
    }
    DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v48 + 40));
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v48 + 80) + 72LL));
    v51 = *(_QWORD *)(v48 + 80);
    v95 = v51;
    if ( v45 != -1 )
    {
      v52 = *(_QWORD *)(v51 + 24);
      v53 = v51 + 24;
      if ( v52 == v51 + 24 )
      {
        v54 = 0LL;
      }
      else
      {
        v54 = v52 - 8;
        if ( !v54 )
        {
LABEL_102:
          v77 = WdLogNewEntry5_WdAssertion(v50, v49);
          WdLogEvent5_WdAssertion(v77);
LABEL_62:
          v56 = *(_QWORD *)(v54 + 8);
          v57 = v56 - 8;
          if ( v56 == v53 )
            v57 = 0LL;
          goto LABEL_64;
        }
        while ( *(_DWORD *)(v54 + 24) != v45 )
        {
          v55 = *(_QWORD *)(v54 + 8);
          if ( v55 == v53 )
            v54 = 0LL;
          else
            v54 = v55 - 8;
          if ( !v54 )
            goto LABEL_102;
        }
      }
      if ( v54 )
        goto LABEL_62;
      goto LABEL_102;
    }
    v76 = *(_QWORD *)(v51 + 24);
    v49 = v51 + 24;
    v57 = 0LL;
    if ( v76 != v51 + 24 )
      v57 = v76 - 8;
LABEL_64:
    if ( !v57 )
    {
      auto_rc<DMMVIDEOPRESENTTARGETSET const>::~auto_rc<DMMVIDEOPRESENTTARGETSET const>(&v95, v49);
      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v48 + 40), v63);
      return (unsigned int)-1073741275;
    }
    v100 = *(_DWORD *)(v57 + 24);
    if ( v51 )
    {
      v58 = (void (__fastcall ***)(_QWORD, __int64))(v51 + 64);
      v59 = _InterlockedDecrement((volatile signed __int32 *)(v51 + 72));
      if ( v59 )
      {
        if ( v59 < 0 )
        {
          v78 = WdLogNewEntry5_WdError(v58, v49);
          *(_QWORD *)(v78 + 24) = v59;
          WdLogEvent5_WdError(v78);
        }
      }
      else if ( v58 )
      {
        (**v58)(v58, 1LL);
      }
    }
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v48 + 40), v49);
  }
LABEL_108:
  v84 = WdLogNewEntry5_WdWarning(v16, v15, v17);
  *(_QWORD *)(v84 + 24) = v10;
  v85 = *(_QWORD *)(v14 + 8);
  if ( !v85 )
  {
    v86 = WdLogNewEntry5_WdAssertion(v83, v82);
    WdLogEvent5_WdAssertion(v86);
    v85 = *(_QWORD *)(v14 + 8);
  }
  *(_QWORD *)(v84 + 32) = *(_QWORD *)(v85 + 16);
  WdLogEvent5_WdWarning(v84);
  auto_rc<DMMVIDEOPRESENTTARGETSET const>::~auto_rc<DMMVIDEOPRESENTTARGETSET const>(&v96, v87);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v14 + 40), v88);
  NextVideoPresentTarget = -1071774971;
LABEL_115:
  v73 = (_QWORD *)WdLogNewEntry5_WdError(v90, v89);
  v73[3] = v100;
  v73[5] = NextVideoPresentTarget;
LABEL_116:
  v73[4] = this;
  WdLogEvent5_WdError(v73);
  return (unsigned int)NextVideoPresentTarget;
}
