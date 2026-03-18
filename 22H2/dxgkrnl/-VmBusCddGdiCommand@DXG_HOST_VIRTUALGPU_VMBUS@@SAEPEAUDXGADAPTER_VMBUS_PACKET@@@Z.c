/*
 * XREFs of ?VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0378030
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x1C0004480 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C00045AC (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGCONTEXT@@VDXGHWQUEUE@@@@QEBAPEAVDXGHWQUEUE@@XZ @ 0x1C0004778 (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGCONTEXT@@VDXGHWQUEUE@@@@QEBAPEAVDXGHWQUEUE@@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000774C (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000778C (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007BB0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?IsHardwareContext@DXGCONTEXT@@QEBA_NXZ @ 0x1C000AF6C (-IsHardwareContext@DXGCONTEXT@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     ??1DXGPROCESSDDILOCK@@QEAA@XZ @ 0x1C0023F50 (--1DXGPROCESSDDILOCK@@QEAA@XZ.c)
 *     ?GetHeadIterator@?$DXGNODELIST@VDXGCONTEXT@@VDXGHWQUEUE@@@@QEAA?AVITERATOR@1@XZ @ 0x1C00254B8 (-GetHeadIterator@-$DXGNODELIST@VDXGCONTEXT@@VDXGHWQUEUE@@@@QEAA-AVITERATOR@1@XZ.c)
 *     Feature_2177406266__private_IsEnabledDeviceUsage @ 0x1C0026BD8 (Feature_2177406266__private_IsEnabledDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028640 (memset.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@XZ @ 0x1C00419F4 (--1DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@XZ.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C005B804 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGC.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005CF54 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z @ 0x1C0196380 (-DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z.c)
 *     ?DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDEVICE@@@Z @ 0x1C0196EB0 (-DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDE.c)
 *     ?DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z @ 0x1C022FB78 (-DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z @ 0x1C02DE300 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z.c)
 *     ?ValidateGdiCommand@@YAEIIPEBE00_K1PEBUtagRECT@@2IIEEIPEAPEAE@Z @ 0x1C03774F8 (-ValidateGdiCommand@@YAEIIPEBE00_K1PEBUtagRECT@@2IIEEIPEAPEAE@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusCddGdiCommand(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  struct DXGADAPTER_VMBUS_PACKET *v1; // r15
  __int64 v2; // rax
  char v3; // r13
  __int64 v4; // rax
  __int64 v5; // r14
  struct _EX_RUNDOWN_REF **v6; // r12
  __int64 v7; // rax
  __int64 v8; // rbx
  const wchar_t *v9; // r9
  unsigned int v10; // ecx
  unsigned int v11; // r12d
  unsigned int v12; // eax
  unsigned int v13; // ecx
  __int64 v14; // r14
  struct DXGPROCESS *v15; // r8
  unsigned int v16; // edx
  DXGCONTEXT *v17; // r15
  struct DXGDEVICE *v18; // r13
  __int64 Current; // rax
  unsigned int v20; // r15d
  DXGCONTEXT *v21; // r9
  struct DXGALLOCATION *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // r11
  __int64 v26; // r14
  const wchar_t *v27; // r9
  const unsigned __int8 *v28; // r15
  const unsigned __int8 *v29; // r8
  const unsigned __int8 *v30; // rcx
  int v31; // r13d
  unsigned int v32; // r13d
  __int64 v33; // r10
  const unsigned __int8 *v34; // rdx
  int v35; // ecx
  int v36; // ecx
  int v37; // ecx
  int v38; // ecx
  int v39; // ecx
  unsigned __int8 *v40; // r9
  __int64 v41; // r11
  unsigned int v42; // eax
  __int64 v43; // rcx
  __int64 v44; // r8
  unsigned int v45; // eax
  __int64 v46; // r12
  int v47; // edx
  unsigned int v48; // eax
  LONG v49; // ecx
  int v50; // edx
  unsigned __int8 v51; // al
  unsigned __int8 *v52; // r9
  __int64 v53; // rdx
  unsigned int v54; // eax
  __int64 v55; // r8
  unsigned int v56; // eax
  int v57; // ecx
  unsigned int v58; // eax
  __int64 v59; // r14
  __int64 v60; // r8
  __int16 v61; // cx
  __int64 v62; // r14
  unsigned __int8 *v63; // r9
  __int64 v64; // r11
  unsigned int v65; // eax
  __int64 v66; // r8
  __int16 v67; // cx
  __int64 v68; // r14
  __int64 v69; // r14
  __int64 v70; // r14
  __int64 v71; // r8
  unsigned __int8 v73; // [rsp+60h] [rbp-A8h]
  char v74; // [rsp+68h] [rbp-A0h]
  unsigned int v75; // [rsp+70h] [rbp-98h]
  unsigned int v76; // [rsp+70h] [rbp-98h]
  unsigned __int8 **v77; // [rsp+78h] [rbp-90h]
  struct DXGALLOCATION **Elements; // [rsp+88h] [rbp-80h]
  _BYTE v80[16]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v81[16]; // [rsp+A8h] [rbp-60h] BYREF
  int v82; // [rsp+B8h] [rbp-50h] BYREF
  DXGCONTEXT *v83; // [rsp+C0h] [rbp-48h] BYREF
  int v84; // [rsp+C8h] [rbp-40h]
  unsigned int v85; // [rsp+CCh] [rbp-3Ch] BYREF
  __int64 v86; // [rsp+D0h] [rbp-38h]
  struct tagRECT v87; // [rsp+D8h] [rbp-30h] BYREF
  const unsigned __int8 *v88; // [rsp+E8h] [rbp-20h]
  const unsigned __int8 *v89; // [rsp+F0h] [rbp-18h]
  char v90[8]; // [rsp+F8h] [rbp-10h] BYREF
  DXGPUSHLOCK *v91; // [rsp+100h] [rbp-8h]
  int v92; // [rsp+108h] [rbp+0h]
  PVOID v93; // [rsp+118h] [rbp+10h] BYREF
  char v94; // [rsp+120h] [rbp+18h] BYREF
  int v95; // [rsp+220h] [rbp+118h]
  PVOID P; // [rsp+228h] [rbp+120h] BYREF
  char v97; // [rsp+230h] [rbp+128h] BYREF
  int v98; // [rsp+330h] [rbp+228h]
  _QWORD v99[48]; // [rsp+338h] [rbp+230h] BYREF

  v1 = a1;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v90, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v91);
  v2 = *((_QWORD *)v1 + 10);
  v3 = 1;
  v92 = 1;
  if ( !*(_BYTE *)(v2 + 173) )
  {
    WdLogSingleEntry1(2LL, 2458LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      2458LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_4:
    v3 = 0;
    goto LABEL_158;
  }
  v4 = CastToVmBusCommand<DXGKVMB_COMMAND_VSYNCREMOTINGCTRL>((__int64)v1);
  v5 = v4;
  if ( !v4 )
    goto LABEL_4;
  v93 = 0LL;
  v6 = 0LL;
  v95 = 0;
  P = 0LL;
  v98 = 0;
  v82 = -1073741811;
  v7 = *(unsigned int *)(v4 + 32);
  Elements = 0LL;
  v85 = 0;
  v84 = 0;
  if ( (unsigned int)v7 > 0x100 )
  {
    v8 = 2475LL;
    WdLogSingleEntry1(2LL, 2475LL);
    v9 = L"Invalid allocation count";
LABEL_7:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v9, v8, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_149;
  }
  v10 = *(_DWORD *)(v5 + 28);
  if ( v10 > 0x10000 )
  {
    v8 = 2480LL;
    WdLogSingleEntry1(2LL, 2480LL);
    v9 = L"Invalid command buffer size";
    goto LABEL_7;
  }
  v11 = 8 * v7;
  if ( (unsigned __int64)(8 * v7) > 0xFFFFFFFF )
  {
    v14 = 2485LL;
    WdLogSingleEntry1(2LL, 2485LL);
    goto LABEL_147;
  }
  v12 = v11 + 56;
  if ( v11 >= 0xFFFFFFC8 )
  {
    v14 = 2490LL;
    WdLogSingleEntry1(2LL, 2490LL);
    goto LABEL_147;
  }
  v13 = v12 + v10;
  if ( v13 < v12 )
  {
    v14 = 2495LL;
    WdLogSingleEntry1(2LL, 2495LL);
    goto LABEL_147;
  }
  if ( v13 > *((_DWORD *)v1 + 36) )
  {
    v14 = 2500LL;
    WdLogSingleEntry1(2LL, 2500LL);
LABEL_147:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Malformed packet", v14, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_148;
  }
  if ( (*(_DWORD *)(v5 + 48) & 0x20) == 0 )
  {
    v14 = 2505LL;
    WdLogSingleEntry1(2LL, 2505LL);
    goto LABEL_147;
  }
  v15 = (struct DXGPROCESS *)*((_QWORD *)v1 + 11);
  v16 = *(_DWORD *)(v5 + 24);
  v83 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v80, v16, v15, &v83, 0, 1);
  v17 = v83;
  if ( !v83 )
  {
    WdLogSingleEntry1(2LL, *(unsigned int *)(v5 + 24));
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid context handle 0x%I64x",
      *(unsigned int *)(v5 + 24),
      0LL,
      0LL,
      0LL,
      0LL);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v80);
    v1 = a1;
    goto LABEL_148;
  }
  if ( !(unsigned int)Feature_2177406266__private_IsEnabledDeviceUsage() && DXGCONTEXT::IsHardwareContext(v17) )
  {
    DXGNODELIST<DXGCONTEXT,DXGHWQUEUE>::GetHeadIterator((_QWORD *)v17 + 51, &v87);
    v84 = *(_DWORD *)(DXGNODELIST<DXGCONTEXT,DXGHWQUEUE>::ITERATOR::GetCurrent(&v87) + 24);
  }
  v18 = (struct DXGDEVICE *)*((_QWORD *)v17 + 2);
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v81, v18);
  if ( (unsigned int)Feature_2177406266__private_IsEnabledDeviceUsage() && DXGCONTEXT::IsHardwareContext(v17) )
  {
    DXGNODELIST<DXGCONTEXT,DXGHWQUEUE>::GetHeadIterator((_QWORD *)v17 + 51, &v87);
    Current = DXGNODELIST<DXGCONTEXT,DXGHWQUEUE>::ITERATOR::GetCurrent(&v87);
    if ( !Current )
    {
      WdLogSingleEntry1(2LL, v17);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"No HwQueue found for CDD HW Context, pContext 0x%I64x",
        (__int64)v17,
        0LL,
        0LL,
        0LL,
        0LL);
      v82 = -1073741811;
      goto LABEL_26;
    }
    v84 = *(_DWORD *)(Current + 24);
  }
  Elements = (struct DXGALLOCATION **)PagedPoolZeroedArray<DXGALLOCATION *,32>::AllocateElements(
                                        (__int64 *)&v93,
                                        *(_DWORD *)(v5 + 32));
  if ( !Elements )
  {
    WdLogSingleEntry1(3LL, 2552LL);
    goto LABEL_26;
  }
  v86 = PagedPoolZeroedArray<DXGALLOCATION *,32>::AllocateElements((__int64 *)&P, *(_DWORD *)(v5 + 32));
  if ( !v86 )
  {
    WdLogSingleEntry1(3LL, 2558LL);
    goto LABEL_26;
  }
  v85 = *(_DWORD *)(v5 + 32);
  v82 = DxgkReferenceAllocationList(&v85, (struct _D3DDDI_ALLOCATIONLIST *)(v5 + 56), Elements, v18);
  if ( v82 < 0 )
  {
    WdLogSingleEntry1(3LL, 2565LL);
    goto LABEL_26;
  }
  v20 = 0;
  v21 = *(DXGCONTEXT **)(*((_QWORD *)v18 + 2) + 768LL);
  v83 = v21;
  if ( *(_DWORD *)(v5 + 32) )
  {
    while ( 1 )
    {
      v22 = Elements[v20];
      if ( !v22 )
      {
        WdLogSingleEntry1(3LL, 2574LL);
        goto LABEL_26;
      }
      if ( *((struct DXGDEVICE **)v22 + 1) != v18 )
      {
        v26 = 2579LL;
        WdLogSingleEntry1(2LL, 2579LL);
        v27 = L"Invalid allocation device";
        goto LABEL_43;
      }
      v23 = *((_QWORD *)v22 + 3);
      if ( !v23 )
        break;
      v24 = (*(__int64 (__fastcall **)(DXGCONTEXT *, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v18 + 2)
                                                                                             + 760LL)
                                                                                 + 8LL)
                                                                     + 624LL))(
              v21,
              v23,
              0LL);
      v25 = v86;
      *(_QWORD *)(v86 + 8LL * v20) = v24;
      if ( !v24 )
      {
        v26 = 2593LL;
        WdLogSingleEntry1(2LL, 2593LL);
        v27 = L"Invalid allocation size";
LABEL_43:
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v27, v26, 0LL, 0LL, 0LL, 0LL);
        goto LABEL_26;
      }
      v21 = v83;
      if ( ++v20 >= *(_DWORD *)(v5 + 32) )
        goto LABEL_49;
    }
    v26 = 2584LL;
    WdLogSingleEntry1(2LL, 2584LL);
    v27 = L"Invalid allocation";
    goto LABEL_43;
  }
  v25 = v86;
LABEL_49:
  v83 = *(DXGCONTEXT **)(*((_QWORD *)v18 + 2) + 16LL);
  if ( (*((_DWORD *)v83 + 567) & 4) == 0 )
  {
    v26 = 2601LL;
    WdLogSingleEntry1(2LL, 2601LL);
    v27 = L"Driver does not support GDI interrop";
    goto LABEL_43;
  }
  v28 = (const unsigned __int8 *)(v11 + v5 + 56);
  v29 = &v28[*(unsigned int *)(v5 + 28)];
  v30 = v28;
  v31 = (_DWORD)v28 + *(_DWORD *)(v5 + 28);
  v89 = v29;
  v32 = v31 - (_DWORD)v28;
  if ( !v32 )
  {
LABEL_143:
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::~DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v81);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v80);
    memset(v99, 0, 0x178uLL);
    LODWORD(v99[0]) = v84;
    LODWORD(v99[1]) = *(_DWORD *)(v5 + 24);
    LODWORD(v99[2]) = *(_DWORD *)(v5 + 28);
    v99[6] = v5 + 56;
    HIDWORD(v99[2]) = *(_DWORD *)(v5 + 32);
    HIDWORD(v99[9]) = *(_DWORD *)(v5 + 48);
    v99[4] = v28;
    v82 = DxgkCddGdiCommand((struct _DXGKCDD_SUBMITRENDERTOHWQUEUE *)v99, 0LL, v71);
    goto LABEL_27;
  }
  while ( 1 )
  {
    if ( v32 < 8 )
    {
      v68 = 2617LL;
      WdLogSingleEntry1(2LL, 2617LL);
      goto LABEL_119;
    }
    v33 = *((unsigned int *)v30 + 1);
    v34 = v30;
    if ( v32 < (unsigned int)v33 )
    {
      v68 = 2623LL;
      WdLogSingleEntry1(2LL, 2623LL);
      goto LABEL_119;
    }
    v32 -= v33;
    v88 = &v30[v33];
    if ( &v30[v33] > v29 || (unsigned int)v33 > *(_DWORD *)(v5 + 28) )
    {
      v68 = 2630LL;
      WdLogSingleEntry1(2LL, 2630LL);
      goto LABEL_119;
    }
    v35 = *(_DWORD *)v30 - 1;
    if ( *(_DWORD *)v34 == 1 )
      break;
    v36 = v35 - 1;
    if ( !v36 )
    {
      if ( (unsigned int)v33 < 0x28 )
      {
        v68 = 2697LL;
        WdLogSingleEntry1(2LL, 2697LL);
        goto LABEL_119;
      }
      v60 = *((unsigned int *)v34 + 6);
      if ( (unsigned int)v60 >= *(_DWORD *)(v5 + 32) )
      {
        v59 = 2702LL;
        WdLogSingleEntry1(2LL, 2702LL);
LABEL_117:
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid allocation index", v59, 0LL, 0LL, 0LL, 0LL);
        goto LABEL_26;
      }
      v61 = *((_WORD *)v34 + 22);
      if ( (unsigned __int16)(v61 - 1) > 6u )
      {
        v70 = 2707LL;
        WdLogSingleEntry1(2LL, 2707LL);
        goto LABEL_132;
      }
      if ( v61 != 7 )
      {
        if ( *((_WORD *)v34 + 23) )
        {
          v62 = 2728LL;
          WdLogSingleEntry1(2LL, 2728LL);
          goto LABEL_98;
        }
        goto LABEL_100;
      }
      if ( !*(_BYTE *)(*((_QWORD *)a1 + 10) + 153LL) && (*((_DWORD *)v83 + 567) & 0x100000) != 0 )
      {
        if ( ((gajRop3[(unsigned __int8)*((_WORD *)v34 + 23)] | gajRop3[(unsigned __int64)*((unsigned __int16 *)v34 + 23) >> 8]) & 0xFC) != 0 )
        {
          v62 = 2720LL;
          WdLogSingleEntry1(2LL, 2720LL);
LABEL_98:
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid ROP3", v62, 0LL, 0LL, 0LL, 0LL);
          goto LABEL_26;
        }
LABEL_100:
        v51 = ValidateGdiCommand(
                0x28u,
                v33,
                v28,
                (unsigned __int8 *)v34 + 8,
                *(const unsigned __int8 **)(v5 + 40),
                *(_QWORD *)(v25 + 8 * v60),
                0LL,
                (const struct tagRECT *)(v34 + 8),
                0LL,
                0,
                0,
                v73,
                0,
                *((_DWORD *)v34 + 7),
                (unsigned __int8 **)v34 + 4);
        goto LABEL_112;
      }
      v69 = 2714LL;
      WdLogSingleEntry1(2LL, 2714LL);
LABEL_129:
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Driver does not support all ROPs",
        v69,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_26;
    }
    v37 = v36 - 1;
    if ( !v37 )
    {
      v52 = (unsigned __int8 *)(v34 + 8);
      if ( (unsigned int)v33 < 0x40 )
      {
        v68 = 2753LL;
        WdLogSingleEntry1(2LL, 2753LL);
LABEL_119:
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Malformed packet", v68, 0LL, 0LL, 0LL, 0LL);
        goto LABEL_26;
      }
      v53 = *((unsigned int *)v34 + 10);
      v58 = *(_DWORD *)(v5 + 32);
      if ( (unsigned int)v53 >= v58 || (v55 = *((unsigned int *)v52 + 9), (unsigned int)v55 >= v58) )
      {
        v59 = 2759LL;
        WdLogSingleEntry1(2LL, 2759LL);
        goto LABEL_117;
      }
LABEL_85:
      v77 = (unsigned __int8 **)(v52 + 48);
      v76 = *((_DWORD *)v52 + 10);
      v74 = 1;
LABEL_77:
      v51 = ValidateGdiCommand(
              0x40u,
              v33,
              v28,
              v52,
              *(const unsigned __int8 **)(v5 + 40),
              *(_QWORD *)(v25 + 8 * v55),
              *(_QWORD *)(v25 + 8 * v53),
              (const struct tagRECT *)v52 + 1,
              (const struct tagRECT *)v52,
              0,
              *((_DWORD *)v52 + 15),
              v73,
              v74,
              v76,
              v77);
      goto LABEL_112;
    }
    v38 = v37 - 1;
    if ( !v38 )
    {
      v52 = (unsigned __int8 *)(v34 + 8);
      if ( (unsigned int)v33 < 0x40 )
      {
        v68 = 2783LL;
        WdLogSingleEntry1(2LL, 2783LL);
        goto LABEL_119;
      }
      v53 = *((unsigned int *)v34 + 11);
      v56 = *(_DWORD *)(v5 + 32);
      if ( (unsigned int)v53 >= v56 || (v55 = *((unsigned int *)v52 + 8), (unsigned int)v55 >= v56) )
      {
        v59 = 2789LL;
        WdLogSingleEntry1(2LL, 2789LL);
        goto LABEL_117;
      }
      v57 = *((_DWORD *)v52 + 14);
      if ( (_WORD)v57 != 3 )
      {
        WdLogSingleEntry1(2LL, 2794LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid stretch BLT mode", 2794LL, 0LL, 0LL, 0LL, 0LL);
        goto LABEL_26;
      }
      if ( (v57 & 0x30000) != 0 && (*((_DWORD *)v83 + 567) & 0x200000) == 0 )
      {
        WdLogSingleEntry1(2LL, 2800LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid stretch BLT flags", 2800LL, 0LL, 0LL, 0LL, 0LL);
        goto LABEL_26;
      }
      goto LABEL_85;
    }
    v39 = v38 - 2;
    if ( !v39 )
    {
      v52 = (unsigned __int8 *)(v34 + 8);
      if ( (unsigned int)v33 < 0x40 )
      {
        v68 = 2824LL;
        WdLogSingleEntry1(2LL, 2824LL);
        goto LABEL_119;
      }
      v53 = *((unsigned int *)v34 + 10);
      v54 = *(_DWORD *)(v5 + 32);
      if ( (unsigned int)v53 >= v54 || (v55 = *((unsigned int *)v52 + 9), (unsigned int)v55 >= v54) )
      {
        v59 = 2830LL;
        WdLogSingleEntry1(2LL, 2830LL);
        goto LABEL_117;
      }
      v77 = (unsigned __int8 **)(v52 + 48);
      v76 = *((_DWORD *)v52 + 11);
      v74 = 0;
      goto LABEL_77;
    }
    if ( v39 != 1 )
    {
      v68 = 2902LL;
      WdLogSingleEntry1(2LL, 2902LL);
      goto LABEL_119;
    }
    v40 = (unsigned __int8 *)(v34 + 8);
    if ( (unsigned int)v33 < 0x48 )
    {
      v68 = 2854LL;
      WdLogSingleEntry1(2LL, 2854LL);
      goto LABEL_119;
    }
    v41 = *((unsigned int *)v34 + 8);
    v42 = *(_DWORD *)(v5 + 32);
    if ( (unsigned int)v41 >= v42
      || *((_DWORD *)v34 + 7) >= v42
      || (v43 = *((unsigned int *)v34 + 6), (unsigned int)v43 >= v42)
      || (v44 = *((unsigned int *)v34 + 9), (unsigned int)v44 >= v42) )
    {
      v59 = 2862LL;
      WdLogSingleEntry1(2LL, 2862LL);
      goto LABEL_117;
    }
    v45 = *((_DWORD *)v34 + 13);
    if ( v45 == -1 )
    {
      v46 = v86;
    }
    else
    {
      if ( v45 > 0xF )
      {
        WdLogSingleEntry1(2LL, 2869LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid gamma", 2869LL, 0LL, 0LL, 0LL, 0LL);
        goto LABEL_26;
      }
      v46 = v86;
      if ( *(_QWORD *)(v86 + 8 * v43) < 0x2000uLL )
      {
        v26 = 2874LL;
        WdLogSingleEntry1(2LL, 2874LL);
        v27 = L"Invalid temporary allocation size";
        goto LABEL_43;
      }
    }
    v47 = *((_DWORD *)v34 + 10);
    v75 = *((_DWORD *)v40 + 12);
    v48 = *((_DWORD *)v40 + 16);
    v87.left = v47 + *(_DWORD *)v40;
    v49 = v47 + *((_DWORD *)v40 + 2);
    v50 = *((_DWORD *)v40 + 9);
    v87.right = v49;
    v87.top = v50 + *((_DWORD *)v40 + 1);
    v87.bottom = v50 + *((_DWORD *)v40 + 3);
    v51 = ValidateGdiCommand(
            0x48u,
            v33,
            v28,
            v40,
            *(const unsigned __int8 **)(v5 + 40),
            *(_QWORD *)(v46 + 8 * v44),
            *(_QWORD *)(v46 + 8 * v41),
            (const struct tagRECT *)v40,
            &v87,
            0,
            v48,
            v73,
            0,
            v75,
            (unsigned __int8 **)v40 + 7);
LABEL_112:
    if ( !v51 )
      goto LABEL_26;
    if ( !v32 )
      goto LABEL_143;
    v25 = v86;
    v30 = v88;
    v29 = v89;
  }
  if ( (unsigned int)v33 < 0x48 )
  {
    v68 = 2640LL;
    WdLogSingleEntry1(2LL, 2640LL);
    goto LABEL_119;
  }
  v64 = *((unsigned int *)v34 + 10);
  v65 = *(_DWORD *)(v5 + 32);
  if ( (unsigned int)v64 >= v65 || (v66 = *((unsigned int *)v34 + 11), (unsigned int)v66 >= v65) )
  {
    v59 = 2646LL;
    WdLogSingleEntry1(2LL, 2646LL);
    goto LABEL_117;
  }
  v67 = *((_WORD *)v34 + 32);
  if ( (unsigned __int16)(v67 - 1) <= 4u )
  {
    if ( v67 == 5 )
    {
      if ( *(_BYTE *)(*((_QWORD *)a1 + 10) + 153LL) || (*((_DWORD *)v83 + 567) & 0x100000) == 0 )
      {
        v69 = 2658LL;
        WdLogSingleEntry1(2LL, 2658LL);
        goto LABEL_129;
      }
      if ( ((gajRop3[(unsigned __int8)*((_WORD *)v34 + 33)] | gajRop3[(unsigned __int64)*((unsigned __int16 *)v34 + 33) >> 8]) & 0xE8) != 0 )
      {
        v62 = 2663LL;
        WdLogSingleEntry1(2LL, 2663LL);
        goto LABEL_98;
      }
    }
    else if ( *((_WORD *)v34 + 33) )
    {
      v62 = 2671LL;
      WdLogSingleEntry1(2LL, 2671LL);
      goto LABEL_98;
    }
    v63 = (unsigned __int8 *)(v34 + 8);
    v51 = ValidateGdiCommand(
            0x48u,
            v33,
            v28,
            v63,
            *(const unsigned __int8 **)(v5 + 40),
            *(_QWORD *)(v86 + 8 * v66),
            *(_QWORD *)(v86 + 8 * v64),
            (const struct tagRECT *)v63 + 1,
            (const struct tagRECT *)v63,
            *((_DWORD *)v63 + 16),
            *((_DWORD *)v63 + 15),
            v73,
            0,
            *((_DWORD *)v63 + 10),
            (unsigned __int8 **)v63 + 6);
    goto LABEL_112;
  }
  v70 = 2651LL;
  WdLogSingleEntry1(2LL, 2651LL);
LABEL_132:
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid ROP", v70, 0LL, 0LL, 0LL, 0LL);
LABEL_26:
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::~DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v81);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v80);
LABEL_27:
  v1 = a1;
  v3 = 1;
LABEL_148:
  v6 = (struct _EX_RUNDOWN_REF **)Elements;
LABEL_149:
  if ( v82 < 0 )
  {
    WdLogSingleEntry1(2LL, v82);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"VmBusCddGdiCommand failed: 0x%I64x",
      v82,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DxgkUnreferenceAllocationList(v85, v6);
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)v1 + 16), &v82, 4u);
  if ( P != &v97 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v98 = 0;
  if ( v93 != &v94 && v93 )
    ExFreePoolWithTag(v93, 0);
  v93 = 0LL;
  v95 = 0;
LABEL_158:
  DXGPROCESSDDILOCK::~DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v90);
  return v3;
}
