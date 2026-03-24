/*
 * XREFs of ?DmmGetTargetIdFromCcdMonitorId@@YAJQEAXPEBU_UNICODE_STRING@@IPEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@3PEAE4@Z @ 0x1C0140780
 * Callers:
 *     ?_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@Z @ 0x1C01403D0 (-_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003960 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00051D8 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0006454 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0009550 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C00097F0 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ??1?$AutoBuffer@G@DMM@@UEAA@XZ @ 0x1C000A4F0 (--1-$AutoBuffer@G@DMM@@UEAA@XZ.c)
 *     ?Initialize@?$AutoBuffer@G@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C000A554 (-Initialize@-$AutoBuffer@G@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0133648 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     MonitorGetCCDMonitorID @ 0x1C0133BCC (MonitorGetCCDMonitorID.c)
 *     ?_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ @ 0x1C0133DF8 (-_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ.c)
 */

__int64 __fastcall DmmGetTargetIdFromCcdMonitorId(
        DXGADAPTER *this,
        const struct _UNICODE_STRING *a2,
        int a3,
        unsigned int *a4,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a5,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a6,
        bool *a7,
        bool *a8)
{
  const struct _UNICODE_STRING *v9; // r13
  DXGADAPTER *v10; // rsi
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v11; // rax
  bool *v12; // r8
  __int64 Length; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rbx
  unsigned int *v20; // rdx
  bool v21; // r15
  _QWORD *v22; // rbx
  _QWORD *v23; // r14
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // r14
  __int64 v25; // r12
  int CCDMonitorID; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rdi
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v31; // rcx
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v32; // eax
  bool v33; // r14
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v34; // rcx
  __int64 v35; // r12
  __int64 v36; // r13
  struct _FAST_MUTEX *v37; // rcx
  int MonitorInstance; // eax
  struct DXGMONITOR *v39; // r14
  __int64 v40; // rdx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  _QWORD *v48; // rax
  unsigned int *v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  _QWORD *v55; // rax
  __int64 v56; // [rsp+20h] [rbp-40h] BYREF
  void **v57; // [rsp+28h] [rbp-38h] BYREF
  __int128 v58; // [rsp+30h] [rbp-30h]
  void **v59; // [rsp+40h] [rbp-20h]
  void *Source2; // [rsp+48h] [rbp-18h]
  __int64 v61; // [rsp+50h] [rbp-10h]
  int v62; // [rsp+58h] [rbp-8h]
  struct DXGMONITOR *v63; // [rsp+A8h] [rbp+48h] BYREF
  int v64; // [rsp+B0h] [rbp+50h]
  unsigned int *v65; // [rsp+B8h] [rbp+58h]

  v65 = a4;
  v64 = a3;
  v9 = a2;
  v10 = this;
  if ( !a2
    || !a4
    || (this = (DXGADAPTER *)a5) == 0LL
    || (v11 = a6) == 0LL
    || (a2 = (const struct _UNICODE_STRING *)a7) == 0LL
    || (v12 = a8) == 0LL )
  {
    v55 = (_QWORD *)WdLogNewEntry5_WdError(this, a2);
    v55[5] = a5;
    v55[6] = a6;
    v55[3] = v9;
    v55[4] = a4;
    WdLogEvent5_WdError(v55);
    return 3221225485LL;
  }
  *a4 = -1;
  Source2 = 0LL;
  v61 = 0LL;
  *(_DWORD *)this = -2;
  *v11 = D3DKMDT_VOT_UNINITIALIZED;
  LOBYTE(a2->Length) = 0;
  Length = v9->Length;
  v57 = &DMM::AutoBuffer<unsigned short>::`vftable'{for `SetElement'};
  *v12 = 0;
  v59 = &DMM::AutoBuffer<unsigned short>::`vftable'{for `NonReferenceCounted'};
  v58 = 0LL;
  v62 = 3;
  DMM::AutoBuffer<unsigned short>::Initialize((__int64)&v57, Length + 2);
  if ( !Source2 )
  {
    v43 = WdLogNewEntry5_WdError(v15, v14);
    *(_QWORD *)(v43 + 24) = ((unsigned __int64)v9->Length >> 1) + 2;
    *(_QWORD *)(v43 + 32) = v10;
    WdLogEvent5_WdError(v43);
    LODWORD(v30) = -1073741801;
    goto LABEL_37;
  }
  if ( !v10 )
  {
    v44 = WdLogNewEntry5_WdError(v15, v14);
    *(_QWORD *)(v44 + 24) = 0LL;
LABEL_46:
    WdLogEvent5_WdError(v44);
    LODWORD(v30) = -1071775742;
    goto LABEL_37;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v10) )
  {
    v45 = WdLogNewEntry5_WdAssertion(v17, v16);
    WdLogEvent5_WdAssertion(v45);
  }
  v18 = *((_QWORD *)v10 + 337);
  if ( !v18 )
  {
    v44 = WdLogNewEntry5_WdError(v17, v16);
    *(_QWORD *)(v44 + 24) = v10;
    goto LABEL_46;
  }
  v19 = *(_QWORD *)(v18 + 88);
  if ( !v19 )
  {
    v46 = WdLogNewEntry5_WdError(v17, v16);
    *(_QWORD *)(v46 + 24) = v10;
    WdLogEvent5_WdError(v46);
    LODWORD(v30) = -1071774923;
    goto LABEL_37;
  }
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v56, v19);
  v21 = 1;
  _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(v19 + 80) + 72LL), 1u);
  v22 = *(_QWORD **)(v19 + 80);
  v64 = 0;
  v23 = (_QWORD *)v22[3];
  if ( v23 == v22 + 3 || (NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(v23 - 1)) == 0LL )
  {
LABEL_42:
    LODWORD(v30) = -1073741275;
    goto LABEL_36;
  }
  while ( 1 )
  {
    if ( *((_DWORD *)NextTarget + 22) )
      goto LABEL_49;
    v25 = *((_QWORD *)NextTarget + 14);
    if ( !v25 )
      goto LABEL_49;
    CCDMonitorID = MonitorGetCCDMonitorID(
                     *((struct HDXGMONITOR__ **)NextTarget + 14),
                     (unsigned int)v61 >> 1,
                     (unsigned __int16 *)Source2);
    v30 = CCDMonitorID;
    if ( CCDMonitorID == -2147483643 || CCDMonitorID == -1073741789 )
      goto LABEL_49;
    if ( CCDMonitorID < 0 )
      break;
    if ( RtlCompareMemory(v9->Buffer, Source2, v9->Length) == v9->Length )
    {
      if ( !v64 )
      {
        v20 = v65;
        v31 = a5;
        *v65 = *((_DWORD *)NextTarget + 6);
        *v31 = *((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)NextTarget + 20);
        v32 = *((_DWORD *)NextTarget + 21);
        v33 = 1;
        v34 = a6;
        *a6 = v32;
        v35 = *v20;
        if ( (_DWORD)v35 == -1 )
        {
          LODWORD(v30) = -1073741811;
          goto LABEL_34;
        }
        v36 = *((_QWORD *)v10 + 337);
        if ( !v36 )
        {
          v47 = WdLogNewEntry5_WdError(v34, v20);
          *(_QWORD *)(v47 + 24) = 9262LL;
          WdLogEvent5_WdError(v47);
          LODWORD(v30) = -1073741811;
          goto LABEL_52;
        }
        v37 = *(struct _FAST_MUTEX **)(v36 + 96);
        LOBYTE(v64) = 0;
        if ( v37 )
        {
          v63 = 0LL;
          MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v37, (unsigned int)v35, 1, &v63);
          LODWORD(v30) = MonitorInstance;
          if ( MonitorInstance == -1073741275 )
          {
            v42 = WdLogNewEntry5_WdDmmEvent(v34);
            *(_QWORD *)(v42 + 24) = v35;
            *(_QWORD *)(v42 + 32) = v10;
            WdLogEvent5_WdDmmEvent(v42);
            goto LABEL_39;
          }
          if ( MonitorInstance >= 0 )
          {
            v39 = v63;
            if ( !v63 || *((_DWORD *)v63 + 108) != 1 )
            {
              v52 = WdLogNewEntry5_WdAssertion(v34, v20);
              WdLogEvent5_WdAssertion(v52);
            }
            if ( !v39 )
            {
              v53 = WdLogNewEntry5_WdAssertion(v34, v20);
              WdLogEvent5_WdAssertion(v53);
            }
            KeEnterCriticalRegion();
            ExAcquireResourceSharedLite((PERESOURCE)((char *)v39 + 296), 1u);
            LOBYTE(v64) = DXGMONITOR::_IsVirtualModeSuportDisabled(v39);
            ExReleaseResourceLite((PERESOURCE)((char *)v39 + 296));
            KeLeaveCriticalRegion();
            LODWORD(v30) = 0;
LABEL_32:
            if ( (_BYTE)v64 )
            {
              v33 = 1;
            }
            else
            {
              v33 = *(_BYTE *)(v36 + 250) == 0;
              v21 = *(_BYTE *)(v36 + 249) == 0;
            }
LABEL_34:
            if ( (int)v30 >= 0 )
            {
              *a7 = !v21;
              *a8 = !v33;
              goto LABEL_36;
            }
LABEL_52:
            v48 = (_QWORD *)WdLogNewEntry5_WdError(v34, v20);
            v49 = v65;
            v48[3] = v10;
            v48[4] = *v49;
            v48[5] = (int)v30;
            WdLogEvent5_WdError(v48);
            goto LABEL_36;
          }
          if ( MonitorInstance == -1073741632 )
LABEL_39:
            LODWORD(v30) = 0;
          if ( (int)v30 >= 0 )
            goto LABEL_32;
        }
        else
        {
          v50 = WdLogNewEntry5_WdError(0LL, v20);
          *(_QWORD *)(v50 + 24) = v10;
          WdLogEvent5_WdError(v50);
          LODWORD(v30) = -1073741811;
        }
        v51 = WdLogNewEntry5_WdAssertion(v34, v20);
        *(_QWORD *)(v51 + 24) = (int)v30;
        WdLogEvent5_WdAssertion(v51);
        goto LABEL_34;
      }
      --v64;
    }
LABEL_49:
    NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v22, NextTarget);
    if ( !NextTarget )
      goto LABEL_42;
  }
  v54 = WdLogNewEntry5_WdWarning(v28, v27, v29);
  *(_QWORD *)(v54 + 24) = v25;
  *(_QWORD *)(v54 + 32) = v30;
  WdLogEvent5_WdWarning(v54);
LABEL_36:
  ReferenceCounted::Release((ReferenceCounted *)(v22 + 8), (__int64)v20);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v56 + 40), v40);
LABEL_37:
  DMM::AutoBuffer<unsigned short>::~AutoBuffer<unsigned short>(&v57);
  return (unsigned int)v30;
}
