/*
 * XREFs of ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C03A6C1C
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C03A61F8 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007840 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00094C0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     ??1?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ @ 0x1C0067050 (--1-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ.c)
 *     ?Initialize@?$AutoBuffer@E@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z @ 0x1C0068974 (-Initialize@-$AutoBuffer@E@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Initialize@?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z @ 0x1C0068A3C (-Initialize@-$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_P.c)
 *     ?SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UCOMMITVIDPNREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x1C03AB6E0 (-SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV-$Queue@UCOMMITVIDPNREQUEST@V.c)
 *     ?SerializeModeChangeRequests@DISPMODECHANGEREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x1C03AB9B0 (-SerializeModeChangeRequests@DISPMODECHANGEREQUEST@VIDPN_MGR@@SAJAEBV-$Queue@UDISPMODECHANGEREQU.c)
 *     ?Serialize@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDEOPRESENTTARGETSET_SERIALIZATION@@@DMM@@@Z @ 0x1C03AEC7C (-Serialize@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDEOPRESENTTARGETSET_SERIALIZA.c)
 *     ?SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_MONITORSET_SERIALIZATION@@@DMM@@@Z @ 0x1C03AEDC4 (-SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV-$AutoBuffer@U_DMM_MONITORSET_SER.c)
 *     ?Serialize@DMMVIDPN@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z @ 0x1C03B4680 (-Serialize@DMMVIDPN@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z.c)
 *     ?SerializeVidPns@DMMVIDPN@@SAJAEBV?$Queue@VDMMVIDPN@@@@PEAV?$AutoBuffer@U_DMM_VIDPNSET_SERIALIZATION@@@DMM@@@Z @ 0x1C03B4AFC (-SerializeVidPns@DMMVIDPN@@SAJAEBV-$Queue@VDMMVIDPN@@@@PEAV-$AutoBuffer@U_DMM_VIDPNSET_SERIALIZA.c)
 *     ?Serialize@DMMVIDEOPRESENTSOURCESET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@@Z @ 0x1C03B6140 (-Serialize@DMMVIDEOPRESENTSOURCESET@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZA.c)
 *     MonitorSerializeMonitorPresentEvents @ 0x1C03C014C (MonitorSerializeMonitorPresentEvents.c)
 */

__int64 __fastcall VIDPN_MGR::AcquireDiagSummary(_QWORD *a1, _QWORD *a2)
{
  __int64 v5; // rcx
  int v6; // eax
  unsigned __int64 v7; // rdi
  DMMVIDEOPRESENTTARGETSET *v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  int v12; // eax
  _DWORD *v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  void *v20; // r14
  __int64 v21; // rax
  int v22; // eax
  size_t v23; // r12
  size_t v24; // r15
  int v25; // eax
  char *v26; // rbx
  char *v27; // rcx
  char *v28; // rbx
  char *v29; // rbx
  char *v30; // rbx
  char *v31; // rbx
  char *v32; // rbx
  char *v33; // rbx
  char *v34; // rbx
  _QWORD v35[4]; // [rsp+28h] [rbp-E0h] BYREF
  char *v36; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v37; // [rsp+50h] [rbp-B8h]
  __int64 v38; // [rsp+58h] [rbp-B0h]
  _QWORD v39[4]; // [rsp+60h] [rbp-A8h] BYREF
  void *v40; // [rsp+80h] [rbp-88h]
  size_t v41; // [rsp+88h] [rbp-80h]
  __int64 v42; // [rsp+90h] [rbp-78h]
  void **v43; // [rsp+98h] [rbp-70h] BYREF
  __int128 v44; // [rsp+A0h] [rbp-68h]
  void **v45; // [rsp+B0h] [rbp-58h]
  void *v46; // [rsp+B8h] [rbp-50h]
  size_t v47; // [rsp+C0h] [rbp-48h]
  __int64 v48; // [rsp+C8h] [rbp-40h]
  void **v49; // [rsp+D0h] [rbp-38h] BYREF
  __int128 v50; // [rsp+D8h] [rbp-30h]
  void **v51; // [rsp+E8h] [rbp-20h]
  void *v52; // [rsp+F0h] [rbp-18h]
  size_t v53; // [rsp+F8h] [rbp-10h]
  __int64 v54; // [rsp+100h] [rbp-8h]
  void **v55; // [rsp+108h] [rbp+0h] BYREF
  __int128 v56; // [rsp+110h] [rbp+8h]
  void **v57; // [rsp+120h] [rbp+18h]
  void *v58; // [rsp+128h] [rbp+20h]
  size_t v59; // [rsp+130h] [rbp+28h]
  __int64 v60; // [rsp+138h] [rbp+30h]
  void **v61; // [rsp+140h] [rbp+38h] BYREF
  __int128 v62; // [rsp+148h] [rbp+40h]
  void **v63; // [rsp+158h] [rbp+50h]
  void *v64; // [rsp+160h] [rbp+58h]
  size_t v65; // [rsp+168h] [rbp+60h]
  __int64 v66; // [rsp+170h] [rbp+68h]
  void **v67; // [rsp+178h] [rbp+70h] BYREF
  __int128 v68; // [rsp+180h] [rbp+78h]
  void **v69; // [rsp+190h] [rbp+88h]
  void *v70; // [rsp+198h] [rbp+90h]
  size_t v71; // [rsp+1A0h] [rbp+98h]
  __int64 v72; // [rsp+1A8h] [rbp+A0h]
  void **v73; // [rsp+1B0h] [rbp+A8h] BYREF
  __int128 v74; // [rsp+1B8h] [rbp+B0h]
  void **v75; // [rsp+1C8h] [rbp+C0h]
  void *Src; // [rsp+1D0h] [rbp+C8h]
  size_t Size; // [rsp+1D8h] [rbp+D0h]
  __int64 v78; // [rsp+1E0h] [rbp+D8h]
  void **v79; // [rsp+1E8h] [rbp+E0h] BYREF
  __int128 v80; // [rsp+1F0h] [rbp+E8h]
  void **v81; // [rsp+200h] [rbp+F8h]
  void *v82; // [rsp+208h] [rbp+100h]
  size_t v83; // [rsp+210h] [rbp+108h]
  __int64 v84; // [rsp+218h] [rbp+110h]
  unsigned __int64 v85; // [rsp+260h] [rbp+158h] BYREF

  if ( !a2 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3221225485LL;
  }
  if ( a2[4] )
    WdLogSingleEntry0(1LL);
  v5 = a1[14];
  v73 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
  Src = 0LL;
  v75 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
  Size = 0LL;
  v74 = 0LL;
  v78 = 256LL;
  v6 = DMMVIDEOPRESENTSOURCESET::Serialize(v5, &v73);
  v7 = v6;
  if ( v6 < 0 )
  {
    if ( !a1[1] )
      WdLogSingleEntry0(1LL);
    WdLogSingleEntry3(2LL, a1[14], *(_QWORD *)(a1[1] + 16LL), v7);
    goto LABEL_68;
  }
  v8 = (DMMVIDEOPRESENTTARGETSET *)a1[15];
  v67 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
  v70 = 0LL;
  v69 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
  v68 = 0LL;
  v71 = 0LL;
  v72 = 256LL;
  v9 = DMMVIDEOPRESENTTARGETSET::Serialize(v8);
  v7 = v9;
  if ( v9 < 0 )
  {
    if ( !a1[1] )
      WdLogSingleEntry0(1LL);
    WdLogSingleEntry3(2LL, a1[15], *(_QWORD *)(a1[1] + 16LL), v7);
    goto LABEL_67;
  }
  v10 = a1[16];
  v39[0] = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
  v39[3] = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
  v40 = 0LL;
  v41 = 0LL;
  v42 = 256LL;
  *(_OWORD *)&v39[1] = 0LL;
  if ( v10 )
  {
    v11 = DMMVIDPN::Serialize(v10, v39);
    v7 = v11;
    if ( v11 < 0 )
    {
      if ( !a1[1] )
        WdLogSingleEntry0(1LL);
      WdLogSingleEntry3(2LL, a1[16], *(_QWORD *)(a1[1] + 16LL), v7);
      goto LABEL_66;
    }
LABEL_21:
    v64 = 0LL;
    v61 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
    v65 = 0LL;
    v63 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
    v66 = 256LL;
    v62 = 0LL;
    v14 = VIDPN_MGR::COMMITVIDPNREQUEST::SerializeCommitVidPnRequests(a1 + 24, &v61);
    v7 = v14;
    if ( v14 < 0 )
    {
      if ( !a1[1] )
        WdLogSingleEntry0(1LL);
      WdLogSingleEntry3(2LL, a1 + 24, *(_QWORD *)(a1[1] + 16LL), v7);
      goto LABEL_65;
    }
    v15 = a1[15];
    v55 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
    v58 = 0LL;
    v57 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
    v56 = 0LL;
    v59 = 0LL;
    v60 = 256LL;
    v16 = DMMVIDEOPRESENTTARGETSET::SerializeConnectedMonitors(v15, &v55);
    v7 = v16;
    if ( v16 < 0 )
    {
      if ( !a1[1] )
        WdLogSingleEntry0(1LL);
      WdLogSingleEntry3(2LL, a1[15], *(_QWORD *)(a1[1] + 16LL), v7);
      goto LABEL_64;
    }
    v52 = 0LL;
    v49 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
    v53 = 0LL;
    v51 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
    v54 = 256LL;
    v50 = 0LL;
    v17 = VIDPN_MGR::DISPMODECHANGEREQUEST::SerializeModeChangeRequests(a1 + 41, &v49);
    v7 = v17;
    if ( v17 < 0 )
    {
      if ( !a1[1] )
        WdLogSingleEntry0(1LL);
      WdLogSingleEntry3(2LL, a1 + 41, *(_QWORD *)(a1[1] + 16LL), v7);
      goto LABEL_63;
    }
    v46 = 0LL;
    v43 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
    v47 = 0LL;
    v45 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
    v48 = 256LL;
    v44 = 0LL;
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v85, (__int64)a1);
    v18 = DMMVIDPN::SerializeVidPns(a1 + 32, &v43);
    v7 = v18;
    if ( v18 < 0 )
    {
      if ( !a1[1] )
        WdLogSingleEntry0(1LL);
      WdLogSingleEntry3(2LL, a1 + 32, *(_QWORD *)(a1[1] + 16LL), v7);
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v85 + 40));
      goto LABEL_62;
    }
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v85 + 40));
    v79 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
    v81 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
    v80 = 0LL;
    v82 = 0LL;
    v83 = 0LL;
    v84 = 256LL;
    v85 = 0LL;
    if ( !a1[1] )
      WdLogSingleEntry0(1LL);
    v19 = MonitorSerializeMonitorPresentEvents(*(_QWORD *)(a1[1] + 16LL), &v85, 0LL);
    v7 = v19;
    if ( (int)(v19 + 0x80000000) < 0 || v19 == -1073741789 )
    {
      v7 = v85;
      if ( !v85 )
        WdLogSingleEntry0(1LL);
      DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::Initialize(&v79, v7);
      v20 = v82;
      v21 = a1[1];
      if ( !v82 )
      {
        if ( !v21 )
          WdLogSingleEntry0(1LL);
        WdLogSingleEntry2(2LL, v7, *(_QWORD *)(a1[1] + 16LL));
        LODWORD(v7) = -1073741801;
        goto LABEL_61;
      }
      if ( !v21 )
        WdLogSingleEntry0(1LL);
      v22 = MonitorSerializeMonitorPresentEvents(*(_QWORD *)(a1[1] + 16LL), &v85, v20);
      v7 = v22;
      if ( v22 >= 0 )
      {
        v38 = 256LL;
        v23 = v83;
        v35[0] = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
        v24 = Size + v71 + v41 + v65 + v59 + v53 + v83 + v47;
        *(_OWORD *)&v35[1] = 0LL;
        v35[3] = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
        v36 = 0LL;
        v37 = 0LL;
        v25 = DMM::AutoBuffer<unsigned char>::Initialize(v35, v24 + 40, 0LL, 256LL);
        LODWORD(v7) = v25;
        if ( v25 >= 0 )
        {
          v7 = (unsigned __int64)v36;
          *((_DWORD *)v36 + 1) = v37;
          *(_WORD *)v7 = 24577;
          v26 = v36 + 40;
          v27 = v36 + 40;
          *(_DWORD *)(v7 + 8) = 40;
          memmove(v27, Src, Size);
          v28 = &v26[Size];
          *(_DWORD *)(v7 + 12) = (_DWORD)v28 - (_DWORD)v36;
          memmove(v28, v70, v71);
          v29 = &v28[v71];
          *(_DWORD *)(v7 + 16) = (_DWORD)v29 - (_DWORD)v36;
          memmove(v29, v40, v41);
          v30 = &v29[v41];
          *(_DWORD *)(v7 + 20) = (_DWORD)v30 - (_DWORD)v36;
          memmove(v30, v64, v65);
          v31 = &v30[v65];
          *(_DWORD *)(v7 + 24) = (_DWORD)v31 - (_DWORD)v36;
          memmove(v31, v58, v59);
          v32 = &v31[v59];
          *(_DWORD *)(v7 + 28) = (_DWORD)v32 - (_DWORD)v36;
          memmove(v32, v52, v53);
          v33 = &v32[v53];
          *(_DWORD *)(v7 + 32) = (_DWORD)v33 - (_DWORD)v36;
          memmove(v33, v46, v47);
          v34 = &v33[v47];
          *(_DWORD *)(v7 + 36) = (_DWORD)v34 - (_DWORD)v36;
          memmove(v34, v20, v23);
          LODWORD(v7) = DMM::AutoBuffer<unsigned char>::Initialize(a2, v37, v36, v38);
          if ( (v7 & 0x80000000) == 0LL )
            LODWORD(v7) = 0;
          else
            WdLogSingleEntry2(2LL, a2, v35);
        }
        else
        {
          WdLogSingleEntry3(2LL, v24 + 40, a1, v25);
        }
        DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(v35);
        goto LABEL_61;
      }
      if ( !a1[1] )
        goto LABEL_53;
    }
    else if ( !a1[1] )
    {
LABEL_53:
      WdLogSingleEntry0(1LL);
    }
    WdLogSingleEntry2(2LL, *(_QWORD *)(a1[1] + 16LL), v7);
LABEL_61:
    DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v79);
LABEL_62:
    DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v43);
LABEL_63:
    DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v49);
LABEL_64:
    DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v55);
LABEL_65:
    DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v61);
    goto LABEL_66;
  }
  v12 = DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::Initialize(v39, 0xCuLL);
  LODWORD(v7) = v12;
  if ( v12 >= 0 )
  {
    v13 = v40;
    *(_QWORD *)v40 = qword_1C013B2F0;
    v13[2] = dword_1C013B2F8;
    goto LABEL_21;
  }
  WdLogSingleEntry2(2LL, 12LL, v12);
LABEL_66:
  DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(v39);
LABEL_67:
  DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v67);
LABEL_68:
  DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v73);
  return (unsigned int)v7;
}
