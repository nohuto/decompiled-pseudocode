/*
 * XREFs of ?VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0373960
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x1C00037CC (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0003AE4 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00095E8 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C00096AC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C005ABE4 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGC.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005C334 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z @ 0x1C01A0C10 (-DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z.c)
 *     ?DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDEVICE@@@Z @ 0x1C01A1740 (-DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDE.c)
 *     ?DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z @ 0x1C02215D8 (-DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z @ 0x1C02D9570 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z.c)
 *     ?ValidateGdiCommand@@YAEIIPEBE00_K1PEBUtagRECT@@2IIEEIPEAPEAE@Z @ 0x1C0372E38 (-ValidateGdiCommand@@YAEIIPEBE00_K1PEBUtagRECT@@2IIEEIPEAPEAE@Z.c)
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
  __int64 v17; // rcx
  struct DXGDEVICE *v18; // r15
  unsigned int v19; // r13d
  __int64 v20; // r9
  struct DXGALLOCATION *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  struct DXGCONTEXT *v24; // r11
  __int64 v25; // r14
  const wchar_t *v26; // r9
  __int64 v27; // r13
  const unsigned __int8 *v28; // r15
  const unsigned __int8 *v29; // r8
  const unsigned __int8 *v30; // rcx
  int v31; // r12d
  unsigned int v32; // r12d
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
  struct DXGCONTEXT *v46; // r13
  int v47; // edx
  unsigned int v48; // eax
  LONG v49; // ecx
  int v50; // edx
  unsigned __int8 v51; // al
  unsigned __int8 *v52; // r9
  __int64 v53; // rdx
  unsigned int v54; // eax
  __int64 v55; // r8
  unsigned __int8 *v56; // r9
  __int64 v57; // rdx
  unsigned int v58; // eax
  __int64 v59; // r8
  int v60; // ecx
  unsigned __int8 v61; // al
  unsigned int v62; // eax
  __int64 v63; // r8
  __int16 v64; // cx
  __int64 v65; // r14
  const wchar_t *v66; // r9
  unsigned __int8 *v67; // r9
  __int64 v68; // r11
  unsigned int v69; // eax
  __int64 v70; // r8
  __int16 v71; // cx
  __int64 v72; // r8
  unsigned __int8 v74; // [rsp+60h] [rbp-A8h]
  unsigned int v75; // [rsp+70h] [rbp-98h]
  struct DXGALLOCATION **Elements; // [rsp+88h] [rbp-80h]
  _BYTE v78[16]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v79[16]; // [rsp+A8h] [rbp-60h] BYREF
  int v80; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v81; // [rsp+C0h] [rbp-48h]
  struct DXGCONTEXT *v82; // [rsp+C8h] [rbp-40h] BYREF
  unsigned int v83; // [rsp+D0h] [rbp-38h] BYREF
  int v84; // [rsp+D4h] [rbp-34h]
  struct tagRECT v85; // [rsp+D8h] [rbp-30h] BYREF
  const unsigned __int8 *v86; // [rsp+E8h] [rbp-20h]
  const unsigned __int8 *v87; // [rsp+F0h] [rbp-18h]
  char v88[8]; // [rsp+F8h] [rbp-10h] BYREF
  DXGPUSHLOCK *v89; // [rsp+100h] [rbp-8h]
  int v90; // [rsp+108h] [rbp+0h]
  PVOID v91; // [rsp+118h] [rbp+10h] BYREF
  char v92; // [rsp+120h] [rbp+18h] BYREF
  int v93; // [rsp+220h] [rbp+118h]
  PVOID P; // [rsp+228h] [rbp+120h] BYREF
  char v95; // [rsp+230h] [rbp+128h] BYREF
  int v96; // [rsp+330h] [rbp+228h]
  _QWORD v97[48]; // [rsp+338h] [rbp+230h] BYREF

  v1 = a1;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v88, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v89);
  v2 = *((_QWORD *)v1 + 10);
  v3 = 1;
  v90 = 1;
  if ( !*(_BYTE *)(v2 + 173) )
  {
    WdLogSingleEntry1(2LL, 2439LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      2439LL,
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
  v91 = 0LL;
  v6 = 0LL;
  v93 = 0;
  P = 0LL;
  v96 = 0;
  v80 = -1073741811;
  v7 = *(unsigned int *)(v4 + 32);
  Elements = 0LL;
  v83 = 0;
  v84 = 0;
  if ( (unsigned int)v7 > 0x100 )
  {
    v8 = 2456LL;
    WdLogSingleEntry1(2LL, 2456LL);
    v9 = L"Invalid allocation count";
LABEL_7:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v9, v8, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_149;
  }
  v10 = *(_DWORD *)(v5 + 28);
  if ( v10 > 0x10000 )
  {
    v8 = 2461LL;
    WdLogSingleEntry1(2LL, 2461LL);
    v9 = L"Invalid command buffer size";
    goto LABEL_7;
  }
  v11 = 8 * v7;
  if ( (unsigned __int64)(8 * v7) > 0xFFFFFFFF )
  {
    v14 = 2466LL;
    WdLogSingleEntry1(2LL, 2466LL);
    goto LABEL_147;
  }
  v12 = v11 + 56;
  if ( v11 >= 0xFFFFFFC8 )
  {
    v14 = 2471LL;
    WdLogSingleEntry1(2LL, 2471LL);
    goto LABEL_147;
  }
  v13 = v12 + v10;
  if ( v13 < v12 )
  {
    v14 = 2476LL;
    WdLogSingleEntry1(2LL, 2476LL);
    goto LABEL_147;
  }
  if ( v13 > *((_DWORD *)v1 + 36) )
  {
    v14 = 2481LL;
    WdLogSingleEntry1(2LL, 2481LL);
LABEL_147:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Malformed packet", v14, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_148;
  }
  if ( (*(_DWORD *)(v5 + 48) & 0x20) == 0 )
  {
    v14 = 2486LL;
    WdLogSingleEntry1(2LL, 2486LL);
    goto LABEL_147;
  }
  v15 = (struct DXGPROCESS *)*((_QWORD *)v1 + 11);
  v16 = *(_DWORD *)(v5 + 24);
  v82 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v78, v16, v15, &v82, 0, 1);
  v17 = 0LL;
  if ( !v82 )
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
LABEL_19:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v78);
    v1 = a1;
    goto LABEL_148;
  }
  if ( (*((_DWORD *)v82 + 101) & 0x10) != 0 )
  {
    if ( *((struct DXGCONTEXT **)v82 + 51) != (struct DXGCONTEXT *)((char *)v82 + 408) )
      v17 = *((_QWORD *)v82 + 51);
    v84 = *(_DWORD *)(v17 + 24);
  }
  v18 = (struct DXGDEVICE *)*((_QWORD *)v82 + 2);
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v79, v18);
  Elements = (struct DXGALLOCATION **)PagedPoolZeroedArray<DXGALLOCATION *,32>::AllocateElements(
                                        (__int64 *)&v91,
                                        *(_DWORD *)(v5 + 32));
  if ( !Elements )
  {
    WdLogSingleEntry1(3LL, 2513LL);
LABEL_26:
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v79);
    goto LABEL_19;
  }
  v82 = (struct DXGCONTEXT *)PagedPoolZeroedArray<DXGALLOCATION *,32>::AllocateElements(
                               (__int64 *)&P,
                               *(_DWORD *)(v5 + 32));
  if ( !v82 )
  {
    WdLogSingleEntry1(3LL, 2519LL);
    goto LABEL_29;
  }
  v83 = *(_DWORD *)(v5 + 32);
  v80 = DxgkReferenceAllocationList(&v83, (struct _D3DDDI_ALLOCATIONLIST *)(v5 + 56), Elements, v18);
  if ( v80 < 0 )
  {
    WdLogSingleEntry1(3LL, 2526LL);
    goto LABEL_29;
  }
  v19 = 0;
  v20 = *(_QWORD *)(*((_QWORD *)v18 + 2) + 768LL);
  v81 = v20;
  if ( *(_DWORD *)(v5 + 32) )
  {
    do
    {
      v21 = Elements[v19];
      if ( !v21 )
      {
        WdLogSingleEntry1(3LL, 2535LL);
        goto LABEL_29;
      }
      if ( *((struct DXGDEVICE **)v21 + 1) != v18 )
      {
        v25 = 2540LL;
        WdLogSingleEntry1(2LL, 2540LL);
        v26 = L"Invalid allocation device";
        goto LABEL_41;
      }
      v22 = *((_QWORD *)v21 + 3);
      if ( !v22 )
      {
        v25 = 2545LL;
        WdLogSingleEntry1(2LL, 2545LL);
        v26 = L"Invalid allocation";
        goto LABEL_41;
      }
      v23 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v18 + 2) + 760LL)
                                                                            + 8LL)
                                                                + 624LL))(
              v20,
              v22,
              0LL);
      v24 = v82;
      *((_QWORD *)v82 + v19) = v23;
      if ( !v23 )
      {
        v25 = 2554LL;
        WdLogSingleEntry1(2LL, 2554LL);
        v26 = L"Invalid allocation size";
        goto LABEL_41;
      }
      v20 = v81;
      ++v19;
    }
    while ( v19 < *(_DWORD *)(v5 + 32) );
  }
  else
  {
    v24 = v82;
  }
  v27 = *(_QWORD *)(*((_QWORD *)v18 + 2) + 16LL);
  v81 = v27;
  if ( (*(_DWORD *)(v27 + 2268) & 4) == 0 )
  {
    v25 = 2562LL;
    WdLogSingleEntry1(2LL, 2562LL);
    v26 = L"Driver does not support GDI interrop";
    goto LABEL_41;
  }
  v28 = (const unsigned __int8 *)(v11 + v5 + 56);
  v29 = &v28[*(unsigned int *)(v5 + 28)];
  v30 = v28;
  v31 = (_DWORD)v28 + *(_DWORD *)(v5 + 28);
  v87 = v29;
  v32 = v31 - (_DWORD)v28;
  if ( !v32 )
  {
LABEL_143:
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v79);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v78);
    memset(v97, 0, 0x178uLL);
    LODWORD(v97[0]) = v84;
    LODWORD(v97[1]) = *(_DWORD *)(v5 + 24);
    LODWORD(v97[2]) = *(_DWORD *)(v5 + 28);
    v97[6] = v5 + 56;
    HIDWORD(v97[2]) = *(_DWORD *)(v5 + 32);
    HIDWORD(v97[9]) = *(_DWORD *)(v5 + 48);
    v97[4] = v28;
    v80 = DxgkCddGdiCommand((struct _DXGKCDD_SUBMITRENDERTOHWQUEUE *)v97, 0LL, v72);
    goto LABEL_30;
  }
  while ( 1 )
  {
    if ( v32 < 8 )
    {
      v25 = 2578LL;
      WdLogSingleEntry1(2LL, 2578LL);
      goto LABEL_119;
    }
    v33 = *((unsigned int *)v30 + 1);
    v34 = v30;
    if ( v32 < (unsigned int)v33 )
    {
      v25 = 2584LL;
      WdLogSingleEntry1(2LL, 2584LL);
      goto LABEL_119;
    }
    v32 -= v33;
    v86 = &v30[v33];
    if ( &v30[v33] > v29 || (unsigned int)v33 > *(_DWORD *)(v5 + 28) )
    {
      v25 = 2591LL;
      WdLogSingleEntry1(2LL, 2591LL);
      goto LABEL_119;
    }
    v35 = *(_DWORD *)v30 - 1;
    if ( *(_DWORD *)v34 == 1 )
    {
      if ( (unsigned int)v33 < 0x48 )
      {
        v25 = 2601LL;
        WdLogSingleEntry1(2LL, 2601LL);
        goto LABEL_119;
      }
      v68 = *((unsigned int *)v34 + 10);
      v69 = *(_DWORD *)(v5 + 32);
      if ( (unsigned int)v68 < v69 )
      {
        v70 = *((unsigned int *)v34 + 11);
        if ( (unsigned int)v70 < v69 )
        {
          v71 = *((_WORD *)v34 + 32);
          v3 = 1;
          if ( (unsigned __int16)(v71 - 1) <= 4u )
          {
            if ( v71 == 5 )
            {
              if ( *(_BYTE *)(*((_QWORD *)a1 + 10) + 153LL) || (*(_DWORD *)(v81 + 2268) & 0x100000) == 0 )
              {
                v65 = 2619LL;
                WdLogSingleEntry1(2LL, 2619LL);
                goto LABEL_129;
              }
              if ( ((gajRop3[(unsigned __int8)*((_WORD *)v34 + 33)] | gajRop3[(unsigned __int64)*((unsigned __int16 *)v34
                                                                                                + 33) >> 8]) & 0xE8) != 0 )
              {
                v65 = 2624LL;
                WdLogSingleEntry1(2LL, 2624LL);
                goto LABEL_96;
              }
            }
            else if ( *((_WORD *)v34 + 33) )
            {
              v65 = 2632LL;
              WdLogSingleEntry1(2LL, 2632LL);
              goto LABEL_96;
            }
            v67 = (unsigned __int8 *)(v34 + 8);
            v51 = ValidateGdiCommand(
                    0x48u,
                    v33,
                    v28,
                    v67,
                    *(const unsigned __int8 **)(v5 + 40),
                    *((_QWORD *)v82 + v70),
                    *((_QWORD *)v82 + v68),
                    (const struct tagRECT *)v67 + 1,
                    (const struct tagRECT *)v67,
                    *((_DWORD *)v67 + 16),
                    *((_DWORD *)v67 + 15),
                    v74,
                    0,
                    *((_DWORD *)v67 + 10),
                    (unsigned __int8 **)v67 + 6);
            goto LABEL_111;
          }
          v65 = 2612LL;
          WdLogSingleEntry1(2LL, 2612LL);
LABEL_132:
          v66 = L"Invalid ROP";
          goto LABEL_97;
        }
      }
      v25 = 2607LL;
      WdLogSingleEntry1(2LL, 2607LL);
LABEL_117:
      v26 = L"Invalid allocation index";
      goto LABEL_41;
    }
    v36 = v35 - 1;
    if ( !v36 )
    {
      if ( (unsigned int)v33 < 0x28 )
      {
        v25 = 2658LL;
        WdLogSingleEntry1(2LL, 2658LL);
        goto LABEL_119;
      }
      v63 = *((unsigned int *)v34 + 6);
      if ( (unsigned int)v63 < *(_DWORD *)(v5 + 32) )
      {
        v64 = *((_WORD *)v34 + 22);
        v3 = 1;
        if ( (unsigned __int16)(v64 - 1) <= 6u )
        {
          if ( v64 != 7 )
          {
            if ( *((_WORD *)v34 + 23) )
            {
              v65 = 2689LL;
              WdLogSingleEntry1(2LL, 2689LL);
              goto LABEL_96;
            }
            goto LABEL_99;
          }
          if ( !*(_BYTE *)(*((_QWORD *)a1 + 10) + 153LL) && (*(_DWORD *)(v81 + 2268) & 0x100000) != 0 )
          {
            if ( ((gajRop3[(unsigned __int8)*((_WORD *)v34 + 23)] | gajRop3[(unsigned __int64)*((unsigned __int16 *)v34
                                                                                              + 23) >> 8]) & 0xFC) != 0 )
            {
              v65 = 2681LL;
              WdLogSingleEntry1(2LL, 2681LL);
LABEL_96:
              v66 = L"Invalid ROP3";
LABEL_97:
              DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v66, v65, 0LL, 0LL, 0LL, 0LL);
              goto LABEL_26;
            }
LABEL_99:
            v61 = ValidateGdiCommand(
                    0x28u,
                    v33,
                    v28,
                    (unsigned __int8 *)v34 + 8,
                    *(const unsigned __int8 **)(v5 + 40),
                    *((_QWORD *)v24 + v63),
                    0LL,
                    (const struct tagRECT *)(v34 + 8),
                    0LL,
                    0,
                    0,
                    v74,
                    0,
                    *((_DWORD *)v34 + 7),
                    (unsigned __int8 **)v34 + 4);
            goto LABEL_82;
          }
          v65 = 2675LL;
          WdLogSingleEntry1(2LL, 2675LL);
LABEL_129:
          v66 = L"Driver does not support all ROPs";
          goto LABEL_97;
        }
        v65 = 2668LL;
        WdLogSingleEntry1(2LL, 2668LL);
        goto LABEL_132;
      }
      v25 = 2663LL;
      WdLogSingleEntry1(2LL, 2663LL);
      goto LABEL_117;
    }
    v37 = v36 - 1;
    if ( !v37 )
    {
      v56 = (unsigned __int8 *)(v34 + 8);
      if ( (unsigned int)v33 >= 0x40 )
      {
        v57 = *((unsigned int *)v34 + 10);
        v62 = *(_DWORD *)(v5 + 32);
        if ( (unsigned int)v57 >= v62 || (v59 = *((unsigned int *)v56 + 9), (unsigned int)v59 >= v62) )
        {
          v25 = 2720LL;
          WdLogSingleEntry1(2LL, 2720LL);
          goto LABEL_117;
        }
        goto LABEL_81;
      }
      v25 = 2714LL;
      WdLogSingleEntry1(2LL, 2714LL);
LABEL_119:
      v26 = L"Malformed packet";
      goto LABEL_41;
    }
    v38 = v37 - 1;
    if ( !v38 )
      break;
    v39 = v38 - 2;
    if ( v39 )
    {
      if ( v39 != 1 )
      {
        v25 = 2863LL;
        WdLogSingleEntry1(2LL, 2863LL);
        goto LABEL_119;
      }
      v40 = (unsigned __int8 *)(v34 + 8);
      if ( (unsigned int)v33 < 0x48 )
      {
        v25 = 2815LL;
        WdLogSingleEntry1(2LL, 2815LL);
        goto LABEL_119;
      }
      v41 = *((unsigned int *)v34 + 8);
      v42 = *(_DWORD *)(v5 + 32);
      if ( (unsigned int)v41 >= v42
        || *((_DWORD *)v34 + 7) >= v42
        || (v43 = *((unsigned int *)v34 + 6), (unsigned int)v43 >= v42)
        || (v44 = *((unsigned int *)v34 + 9), (unsigned int)v44 >= v42) )
      {
        v25 = 2823LL;
        WdLogSingleEntry1(2LL, 2823LL);
        goto LABEL_117;
      }
      v45 = *((_DWORD *)v34 + 13);
      if ( v45 == -1 )
      {
        v46 = v82;
      }
      else
      {
        if ( v45 > 0xF )
        {
          v25 = 2830LL;
          WdLogSingleEntry1(2LL, 2830LL);
          v26 = L"Invalid gamma";
          goto LABEL_41;
        }
        v46 = v82;
        if ( *((_QWORD *)v82 + v43) < 0x2000uLL )
        {
          v25 = 2835LL;
          WdLogSingleEntry1(2LL, 2835LL);
          v26 = L"Invalid temporary allocation size";
          goto LABEL_41;
        }
      }
      v47 = *((_DWORD *)v34 + 10);
      v75 = *((_DWORD *)v40 + 12);
      v48 = *((_DWORD *)v40 + 16);
      v85.left = v47 + *(_DWORD *)v40;
      v49 = v47 + *((_DWORD *)v40 + 2);
      v50 = *((_DWORD *)v40 + 9);
      v85.right = v49;
      v85.top = v50 + *((_DWORD *)v40 + 1);
      v85.bottom = v50 + *((_DWORD *)v40 + 3);
      v51 = ValidateGdiCommand(
              0x48u,
              v33,
              v28,
              v40,
              *(const unsigned __int8 **)(v5 + 40),
              *((_QWORD *)v46 + v44),
              *((_QWORD *)v46 + v41),
              (const struct tagRECT *)v40,
              &v85,
              0,
              v48,
              v74,
              0,
              v75,
              (unsigned __int8 **)v40 + 7);
LABEL_111:
      if ( !v51 )
        goto LABEL_29;
LABEL_112:
      v27 = v81;
      goto LABEL_113;
    }
    v52 = (unsigned __int8 *)(v34 + 8);
    if ( (unsigned int)v33 < 0x40 )
    {
      v25 = 2785LL;
      WdLogSingleEntry1(2LL, 2785LL);
      goto LABEL_119;
    }
    v53 = *((unsigned int *)v34 + 10);
    v54 = *(_DWORD *)(v5 + 32);
    if ( (unsigned int)v53 >= v54 || (v55 = *((unsigned int *)v52 + 9), (unsigned int)v55 >= v54) )
    {
      v25 = 2791LL;
      WdLogSingleEntry1(2LL, 2791LL);
      goto LABEL_117;
    }
    if ( !ValidateGdiCommand(
            0x40u,
            v33,
            v28,
            v52,
            *(const unsigned __int8 **)(v5 + 40),
            *((_QWORD *)v24 + v55),
            *((_QWORD *)v24 + v53),
            (const struct tagRECT *)v52 + 1,
            (const struct tagRECT *)v52,
            0,
            *((_DWORD *)v52 + 15),
            v74,
            0,
            *((_DWORD *)v52 + 11),
            (unsigned __int8 **)v52 + 6) )
      goto LABEL_29;
LABEL_113:
    if ( !v32 )
      goto LABEL_143;
    v24 = v82;
    v30 = v86;
    v29 = v87;
  }
  v56 = (unsigned __int8 *)(v34 + 8);
  if ( (unsigned int)v33 < 0x40 )
  {
    v25 = 2744LL;
    WdLogSingleEntry1(2LL, 2744LL);
    goto LABEL_119;
  }
  v57 = *((unsigned int *)v34 + 11);
  v58 = *(_DWORD *)(v5 + 32);
  if ( (unsigned int)v57 >= v58 || (v59 = *((unsigned int *)v56 + 8), (unsigned int)v59 >= v58) )
  {
    v25 = 2750LL;
    WdLogSingleEntry1(2LL, 2750LL);
    goto LABEL_117;
  }
  v60 = *((_DWORD *)v56 + 14);
  if ( (_WORD)v60 == 3 )
  {
    if ( (v60 & 0x30000) != 0 && (*(_DWORD *)(v27 + 2268) & 0x200000) == 0 )
    {
      v25 = 2761LL;
      WdLogSingleEntry1(2LL, 2761LL);
      v26 = L"Invalid stretch BLT flags";
      goto LABEL_41;
    }
LABEL_81:
    v3 = 1;
    v61 = ValidateGdiCommand(
            0x40u,
            v33,
            v28,
            v56,
            *(const unsigned __int8 **)(v5 + 40),
            *((_QWORD *)v24 + v59),
            *((_QWORD *)v24 + v57),
            (const struct tagRECT *)v56 + 1,
            (const struct tagRECT *)v56,
            0,
            *((_DWORD *)v56 + 15),
            v74,
            1,
            *((_DWORD *)v56 + 10),
            (unsigned __int8 **)v56 + 6);
LABEL_82:
    if ( !v61 )
      goto LABEL_26;
    goto LABEL_112;
  }
  v25 = 2755LL;
  WdLogSingleEntry1(2LL, 2755LL);
  v26 = L"Invalid stretch BLT mode";
LABEL_41:
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v26, v25, 0LL, 0LL, 0LL, 0LL);
LABEL_29:
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v79);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v78);
LABEL_30:
  v1 = a1;
  v3 = 1;
LABEL_148:
  v6 = (struct _EX_RUNDOWN_REF **)Elements;
LABEL_149:
  if ( v80 < 0 )
  {
    WdLogSingleEntry1(2LL, v80);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"VmBusCddGdiCommand failed: 0x%I64x",
      v80,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DxgkUnreferenceAllocationList(v83, v6);
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)v1 + 16), &v80, 4u);
  if ( P != &v95 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v96 = 0;
  if ( v91 != &v92 && v91 )
    ExFreePoolWithTag(v91, 0);
  v91 = 0LL;
  v93 = 0;
LABEL_158:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v88);
  return v3;
}
