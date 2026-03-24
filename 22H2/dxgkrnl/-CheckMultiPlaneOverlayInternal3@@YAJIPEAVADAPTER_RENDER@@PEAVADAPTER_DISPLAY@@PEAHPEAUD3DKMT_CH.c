/*
 * XREFs of ?CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C0253194
 * Callers:
 *     ?CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C0253958 (-CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@.c)
 *     ?CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAUtagRECT@@@Z @ 0x1C02A3C48 (-CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOK.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     ?ConfigChangesOnMultipleOutputs@ADAPTER_DISPLAY@@QEAAEXZ @ 0x1C021156C (-ConfigChangesOnMultipleOutputs@ADAPTER_DISPLAY@@QEAAEXZ.c)
 *     ?GetCheckMultiPlaneOverlayArgsUnsafe@ADAPTER_DISPLAY@@QEAAXIIPEAPEAVDXGALLOCATION@@PEAIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@1PEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@@Z @ 0x1C0213384 (-GetCheckMultiPlaneOverlayArgsUnsafe@ADAPTER_DISPLAY@@QEAAXIIPEAPEAVDXGALLOCATION@@PEAIPEAU_D3DK.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@I@Z @ 0x1C0252468 (-AllocateElements@-$PagedPoolZeroedArray@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAP.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@I@Z @ 0x1C0252578 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAPEAU.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAAPEAU_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@I@Z @ 0x1C0252600 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAAPEAU_.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@$02@@QEAAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@I@Z @ 0x1C0252688 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURC.c)
 *     ?CallCheckMultiPlaneOverlaySupport1DDI@@YAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXPEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C025281C (-CallCheckMultiPlaneOverlaySupport1DDI@@YAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAP.c)
 *     ?CallCheckMultiPlaneOverlaySupport2DDI@@YAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXPEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C0252A98 (-CallCheckMultiPlaneOverlaySupport2DDI@@YAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAP.c)
 *     ?CallCheckMultiPlaneOverlaySupport3DDI@@YAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXIPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C0252D04 (-CallCheckMultiPlaneOverlaySupport3DDI@@YAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAP.c)
 *     ?LogCheckMutiplaneOverlaySupport@@YAXJHIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXIPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@PEAVADAPTER_RENDER@@@Z @ 0x1C02560D0 (-LogCheckMutiplaneOverlaySupport@@YAXJHIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXI.c)
 */

__int64 __fastcall CheckMultiPlaneOverlayInternal3(
        unsigned int a1,
        struct ADAPTER_RENDER *a2,
        struct ADAPTER_DISPLAY *a3,
        int *a4,
        struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *a5)
{
  __int64 v6; // rax
  __int64 v7; // rsi
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  _QWORD *v12; // rax
  __int64 v13; // rcx
  unsigned int v14; // edi
  _QWORD *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *v21; // rbx
  __int64 v22; // r8
  _QWORD *v23; // rax
  __int64 v24; // rcx
  _QWORD *v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  void **v32; // r14
  _QWORD *v33; // rax
  __int64 v34; // rcx
  _QWORD *v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  struct DXGALLOCATION **v42; // r12
  _QWORD *v43; // rax
  __int64 v44; // rcx
  _QWORD *v45; // rbx
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  _QWORD *v52; // rbx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v57; // rax
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v58; // r10
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v59; // rcx
  D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 **p_pPlaneAttributes; // rdx
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v61; // r8
  __int64 v62; // r9
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *v63; // r8
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rax
  unsigned int v67; // eax
  void **v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rbx
  __int64 v71; // rax
  unsigned int v72; // edi
  __int64 v73; // rax
  signed __int64 v74; // r12
  __int64 v75; // r8
  __int64 v76; // rax
  struct _KTHREAD **v77; // rsi
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v78; // r12
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *v80; // [rsp+40h] [rbp-C0h] BYREF
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v81; // [rsp+48h] [rbp-B8h] BYREF
  ADAPTER_DISPLAY *v82; // [rsp+50h] [rbp-B0h]
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v83; // [rsp+58h] [rbp-A8h]
  struct ADAPTER_RENDER *v84; // [rsp+60h] [rbp-A0h]
  unsigned int v85; // [rsp+68h] [rbp-98h]
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v86; // [rsp+70h] [rbp-90h]
  PVOID P; // [rsp+78h] [rbp-88h] BYREF
  char v88; // [rsp+80h] [rbp-80h] BYREF
  int v89; // [rsp+98h] [rbp-68h]
  PVOID v90; // [rsp+A0h] [rbp-60h] BYREF
  char v91; // [rsp+A8h] [rbp-58h] BYREF
  int v92; // [rsp+C0h] [rbp-40h]
  PVOID v93; // [rsp+C8h] [rbp-38h] BYREF
  char v94; // [rsp+D0h] [rbp-30h] BYREF
  int v95; // [rsp+E8h] [rbp-18h]
  PVOID v96; // [rsp+F0h] [rbp-10h] BYREF
  char v97; // [rsp+F8h] [rbp-8h] BYREF
  int v98; // [rsp+110h] [rbp+10h]
  PVOID v99; // [rsp+120h] [rbp+20h] BYREF
  char v100; // [rsp+128h] [rbp+28h] BYREF
  int v101; // [rsp+1ACh] [rbp+ACh]
  PVOID v102; // [rsp+1B0h] [rbp+B0h] BYREF
  char v103; // [rsp+1B8h] [rbp+B8h] BYREF
  int v104; // [rsp+218h] [rbp+118h]
  PVOID v105; // [rsp+220h] [rbp+120h] BYREF
  char v106; // [rsp+228h] [rbp+128h] BYREF
  int v107; // [rsp+330h] [rbp+230h]

  *a4 = 0;
  v6 = *((_QWORD *)a2 + 2);
  v7 = *((unsigned int *)a3 + 20);
  v84 = a2;
  v85 = a1;
  v8 = v7 * *(_DWORD *)(v6 + 2536);
  v82 = a3;
  v102 = 0LL;
  v104 = 0;
  v81 = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3,3>::AllocateElements(
                                                            &v102,
                                                            v8);
  if ( v81 )
  {
    v96 = 0LL;
    v98 = 0;
    v83 = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements(
                                                               &v96,
                                                               v8);
    v105 = 0LL;
    v107 = 0;
    v21 = (D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *)PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::AllocateElements(
                                                     &v105,
                                                     v8);
    if ( v21 )
    {
      v93 = 0LL;
      v95 = 0;
      v32 = (void **)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements(&v93, v8);
      if ( v32 )
      {
        v90 = 0LL;
        v92 = 0;
        v42 = (struct DXGALLOCATION **)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements(
                                         &v90,
                                         v8);
        if ( v42 )
        {
          v99 = 0LL;
          v101 = 0;
          v80 = (struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *)PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE,3>::AllocateElements(
                                                                                    &v99,
                                                                                    v7);
          if ( v80 )
          {
            P = 0LL;
            v89 = 0;
            v57 = (struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements(
                                                                                       &P,
                                                                                       v7);
            v58 = v81;
            v86 = v57;
            if ( v8 )
            {
              v59 = v83;
              p_pPlaneAttributes = &v81->pPlaneAttributes;
              v61 = v81;
              v62 = v8;
              do
              {
                *v59 = v61++;
                *p_pPlaneAttributes = v21;
                ++v59;
                ++v21;
                p_pPlaneAttributes += 4;
                --v62;
              }
              while ( v62 );
            }
            v63 = v80;
            if ( (_DWORD)v7 )
            {
              v64 = v80;
              v65 = v7;
              do
              {
                *v57++ = v64++;
                --v65;
              }
              while ( v65 );
            }
            LODWORD(v80) = 0;
            LODWORD(v81) = 0;
            v66 = *((_QWORD *)v84 + 2);
            if ( *(_QWORD *)(v66 + 928) && *(_BYTE *)(v66 + 2642) )
              v67 = -1;
            else
              v67 = v85;
            ADAPTER_DISPLAY::GetCheckMultiPlaneOverlayArgsUnsafe(
              (struct _KTHREAD **)v82,
              v67,
              v8,
              v42,
              (unsigned int *)&v80,
              v58,
              (unsigned int *)&v81,
              v63);
            v70 = (unsigned int)v80;
            if ( (unsigned int)v80 > v8 )
            {
              v71 = WdLogNewEntry5_WdAssertion(v69, v68);
              *(_QWORD *)(v71 + 24) = 9870LL;
              WdLogEvent5_WdAssertion(v71);
            }
            v72 = (unsigned int)v81;
            if ( (unsigned int)v81 > (unsigned int)v7 )
            {
              v73 = WdLogNewEntry5_WdAssertion(v69, v68);
              *(_QWORD *)(v73 + 24) = 9871LL;
              WdLogEvent5_WdAssertion(v73);
            }
            if ( (_DWORD)v70 )
            {
              v68 = v32;
              v74 = (char *)v42 - (char *)v32;
              v75 = v70;
              do
              {
                *v68 = *(void **)((*(_QWORD **)((char *)v68 + v74))[6] + 16LL);
                ++v68;
                --v75;
              }
              while ( v75 );
            }
            v76 = *((_QWORD *)v84 + 2);
            if ( *(_QWORD *)(v76 + 928) && *(_BYTE *)(v76 + 2642) )
            {
              v77 = (struct _KTHREAD **)v82;
              v78 = v83;
              CallCheckMultiPlaneOverlaySupport3DDI(v70, (unsigned __int64)v83, v32, v72, v86, v82, a4, a5);
            }
            else
            {
              v77 = (struct _KTHREAD **)v82;
              v78 = v83;
              if ( (unsigned int)v70 <= *(_DWORD *)(v76 + 2536) )
              {
                if ( *(_QWORD *)(v76 + 896) )
                  CallCheckMultiPlaneOverlaySupport2DDI((unsigned int)v70, (unsigned __int64)v83, v32, v82, a4, a5);
                else
                  CallCheckMultiPlaneOverlaySupport1DDI((unsigned int)v70, (unsigned __int64)v83, v32, v82, a4, a5);
              }
            }
            if ( *a4 == 1
              && ADAPTER_DISPLAY::ConfigChangesOnMultipleOutputs(v77, (__int64)v68)
              && !*(_BYTE *)(*((_QWORD *)v84 + 2) + 2644LL) )
            {
              *a4 = 0;
              a5->Value = a5->Value & 0xFFFFFFE0 | 0x10;
            }
            LogCheckMutiplaneOverlaySupport(0, *a4, v70, v78, v32, v72, v86, v84);
            v14 = 0;
            if ( P != &v88 && P )
              ExFreePoolWithTag(P, 0);
            P = 0LL;
            v89 = 0;
          }
          else
          {
            v14 = -1073741801;
            v52 = (_QWORD *)WdLogNewEntry5_WdWarning(v50, v49, v51);
            v52[3] = v7;
            v52[4] = -1073741801LL;
            v52[5] = PsGetCurrentProcess(v54, v53, v55, v56);
            WdLogEvent5_WdWarning(v52);
          }
          if ( v99 != &v100 && v99 )
            ExFreePoolWithTag(v99, 0);
          v99 = 0LL;
          v101 = 0;
        }
        else
        {
          v43 = (_QWORD *)WdLogNewEntry5_WdWarning(v40, v39, v41);
          v44 = v8;
          v14 = -1073741801;
          v45 = v43;
          v43[3] = v44;
          v43[4] = -1073741801LL;
          v43[5] = PsGetCurrentProcess(v44, v46, v47, v48);
          WdLogEvent5_WdWarning(v45);
        }
        if ( v90 != &v91 && v90 )
          ExFreePoolWithTag(v90, 0);
        v90 = 0LL;
        v92 = 0;
      }
      else
      {
        v33 = (_QWORD *)WdLogNewEntry5_WdWarning(v30, v29, v31);
        v34 = v8;
        v14 = -1073741801;
        v35 = v33;
        v33[3] = v34;
        v33[4] = -1073741801LL;
        v33[5] = PsGetCurrentProcess(v34, v36, v37, v38);
        WdLogEvent5_WdWarning(v35);
      }
      if ( v93 != &v94 && v93 )
        ExFreePoolWithTag(v93, 0);
      v93 = 0LL;
      v95 = 0;
    }
    else
    {
      v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v19, v22);
      v24 = v8;
      v14 = -1073741801;
      v25 = v23;
      v23[3] = v24;
      v23[4] = -1073741801LL;
      v23[5] = PsGetCurrentProcess(v24, v26, v27, v28);
      WdLogEvent5_WdWarning(v25);
    }
    if ( v105 != &v106 && v105 )
      ExFreePoolWithTag(v105, 0);
    v105 = 0LL;
    v107 = 0;
    if ( v96 != &v97 && v96 )
      ExFreePoolWithTag(v96, 0);
    v96 = 0LL;
    v98 = 0;
  }
  else
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdWarning(v10, v9, v11);
    v13 = v8;
    v14 = -1073741801;
    v15 = v12;
    v12[3] = v13;
    v12[4] = -1073741801LL;
    v12[5] = PsGetCurrentProcess(v13, v16, v17, v18);
    WdLogEvent5_WdWarning(v15);
  }
  if ( v102 != &v103 && v102 )
    ExFreePoolWithTag(v102, 0);
  return v14;
}
