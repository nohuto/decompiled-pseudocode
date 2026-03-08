/*
 * XREFs of IrqArbAddAllocation @ 0x1C009C4B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00019D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 *     AcpiIrqTranslateSecondaryInterruptToNtResources @ 0x1C000AB60 (AcpiIrqTranslateSecondaryInterruptToNtResources.c)
 *     WPP_RECORDER_SF_ @ 0x1C000ABD8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C000ACAC (WPP_RECORDER_SF_d.c)
 *     ACPIInternalInterruptPolarityCacheGetPolarity @ 0x1C002E8C4 (ACPIInternalInterruptPolarityCacheGetPolarity.c)
 *     LinkNodeCrackPrt @ 0x1C005CE9C (LinkNodeCrackPrt.c)
 *     ProcessorDeleteDeviceIdtAssignment @ 0x1C005DFF0 (ProcessorDeleteDeviceIdtAssignment.c)
 *     WPP_RECORDER_SF_DDDssDssqq @ 0x1C005E5E4 (WPP_RECORDER_SF_DDDssDssqq.c)
 *     WPP_RECORDER_SF_Dq @ 0x1C005EA58 (WPP_RECORDER_SF_Dq.c)
 *     LinkNodeGetPossibleGsiv @ 0x1C0099494 (LinkNodeGetPossibleGsiv.c)
 *     LinkNodeGetPossibleResources @ 0x1C00994B8 (LinkNodeGetPossibleResources.c)
 *     PcisuppIsPciDevice @ 0x1C0099F68 (PcisuppIsPciDevice.c)
 *     ProcessorGetDestinationMode @ 0x1C009ABB8 (ProcessorGetDestinationMode.c)
 *     IrqArbGetDeviceIrql @ 0x1C009D304 (IrqArbGetDeviceIrql.c)
 *     IrqArbGsivFromIrq @ 0x1C009D69C (IrqArbGsivFromIrq.c)
 *     IrqArbpLookupIsaOverrideByGsiv @ 0x1C009E4A4 (IrqArbpLookupIsaOverrideByGsiv.c)
 *     IcAddPossibleReference @ 0x1C009EB74 (IcAddPossibleReference.c)
 *     IcGetPossibleInput @ 0x1C009F314 (IcGetPossibleInput.c)
 *     IcIsInterruptTypeSecondary @ 0x1C009F45C (IcIsInterruptTypeSecondary.c)
 *     IcRemovePossibleReference @ 0x1C009F660 (IcRemovePossibleReference.c)
 *     IcSetPossibleInput @ 0x1C009F6B4 (IcSetPossibleInput.c)
 *     MsiGetTargetInfo @ 0x1C00A0698 (MsiGetTargetInfo.c)
 */

void __fastcall IrqArbAddAllocation(__int64 a1, ULONGLONG *a2, int a3)
{
  int v3; // edi
  char v4; // bl
  ULONGLONG *v6; // r13
  unsigned int v7; // eax
  unsigned int v8; // eax
  int v9; // r11d
  ULONGLONG v10; // rcx
  __int64 v11; // rsi
  unsigned int v12; // r12d
  __int64 v13; // rdx
  int IsPciDevice; // r14d
  int PossibleInput; // eax
  unsigned __int8 v16; // di
  __int64 v17; // rcx
  __int16 v18; // di
  bool v19; // zf
  ULONGLONG v20; // rax
  BOOL v21; // ecx
  __int64 v22; // rdx
  unsigned int v23; // r13d
  void *v24; // r8
  int v25; // r9d
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // edx
  __int64 Pool2; // rax
  int v30; // edx
  int v31; // ecx
  unsigned int v32; // edi
  __int64 v33; // rbx
  int v34; // eax
  __int128 v35; // xmm0
  unsigned int v36; // ecx
  BOOL v37; // eax
  char v38; // di
  int v39; // eax
  int v40; // r9d
  int v41; // ebx
  UCHAR v42; // di
  const char *v43; // r9
  const char *v44; // rdx
  const char *v45; // r8
  NTSTATUS v46; // eax
  int Flags; // [rsp+20h] [rbp-E0h]
  PVOID UserData; // [rsp+28h] [rbp-D8h]
  PVOID Owner; // [rsp+30h] [rbp-D0h]
  char v50; // [rsp+80h] [rbp-80h] BYREF
  char v51; // [rsp+81h] [rbp-7Fh] BYREF
  unsigned __int8 v52; // [rsp+82h] [rbp-7Eh] BYREF
  char v53; // [rsp+83h] [rbp-7Dh]
  char v54; // [rsp+84h] [rbp-7Ch]
  char v55; // [rsp+85h] [rbp-7Bh]
  int v56; // [rsp+88h] [rbp-78h]
  int v57; // [rsp+8Ch] [rbp-74h]
  int v58; // [rsp+90h] [rbp-70h] BYREF
  ULONGLONG *v59; // [rsp+98h] [rbp-68h]
  __int64 v60; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v61; // [rsp+A8h] [rbp-58h] BYREF
  int v62; // [rsp+ACh] [rbp-54h]
  int v63; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v64; // [rsp+B8h] [rbp-48h] BYREF
  PVOID P; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v66; // [rsp+C8h] [rbp-38h]
  __int128 v67; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v68; // [rsp+E0h] [rbp-20h]
  __int128 v69; // [rsp+F0h] [rbp-10h]
  __int128 v70; // [rsp+100h] [rbp+0h]

  P = 0LL;
  v63 = 0;
  v4 = 0;
  v61 = 0;
  v58 = 0;
  v67 = 0LL;
  v50 = 0;
  v68 = 0LL;
  v66 = a1;
  v69 = 0LL;
  v51 = 0;
  v70 = 0LL;
  v6 = a2 + 4;
  v59 = a2 + 4;
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v59 = a2 + 4;
  }
  else
  {
    Owner = *(PVOID *)(*v6 + 32);
    WPP_RECORDER_SF_Dq(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)a2, a3, 13);
  }
  v7 = *(_DWORD *)a2;
  v60 = 0LL;
  v54 = 0;
  v55 = 0;
  v62 = v7;
  v8 = IrqArbGsivFromIrq(v7);
  v10 = a2[5];
  v11 = 0LL;
  LODWORD(v64) = 0;
  LOBYTE(v3) = 0;
  v12 = v8;
  v56 = v3;
  v53 = 0;
  v13 = *(_QWORD *)(v10 + 40);
  if ( (*(_BYTE *)(v13 + 4) & 0x20) == 0 )
  {
    IsPciDevice = PcisuppIsPciDevice(*(_QWORD *)(*v6 + 32), (bool *)&v50);
    if ( IsPciDevice < 0 )
    {
LABEL_108:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(UserData) = IsPciDevice;
        LOBYTE(v13) = 4;
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          v13,
          20,
          17,
          (__int64)&WPP_939ab7ce094a3f0c5044c61116540ed5_Traceguids,
          UserData);
      }
      if ( DWORD1(v68) )
        ProcessorDeleteDeviceIdtAssignment(*(void **)(*v6 + 32), v12, DWORD1(v68), 1);
      if ( v54 )
        --*(_DWORD *)(v60 + 28);
      if ( v55 )
      {
        LOBYTE(v13) = (a2[8] & 2) != 0;
        IcRemovePossibleReference(v12, v13);
      }
      if ( v11 && !(_BYTE)v3 )
        ExFreePoolWithTag((PVOID)v11, 0);
      return;
    }
    v4 = v50;
  }
  if ( (a2[8] & 2) != 0 && v4 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 4;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v13,
        20,
        14,
        (__int64)&WPP_939ab7ce094a3f0c5044c61116540ed5_Traceguids);
    }
    return;
  }
  LOBYTE(v9) = 0;
  v52 = 0;
  v57 = v9;
  if ( v12 < 0xFFF00000 )
  {
    PossibleInput = IcGetPossibleInput(v12, v13, &v52);
    if ( PossibleInput >= 0 )
    {
      v9 = (unsigned __int8)v9;
      if ( PossibleInput != 263 )
        v9 = 1;
      v57 = v9;
    }
  }
  if ( !v4 || (*(_BYTE *)(*(_QWORD *)(a2[5] + 40) + 4LL) & 2) != 0 )
  {
    if ( !(unsigned __int8)IrqArbpLookupIsaOverrideByGsiv(v12, &v64)
      || (v16 = byte_1C006E524[8 * (unsigned int)v64], v16 == 0xFF) )
    {
      v18 = *(_WORD *)(*(_QWORD *)(a2[5] + 40) + 4LL);
      if ( (unsigned __int8)IcIsInterruptTypeSecondary(v12) )
      {
        v53 = 1;
        IsPciDevice = AcpiIrqTranslateSecondaryInterruptToNtResources();
        if ( IsPciDevice >= 0 )
        {
          v16 = v70 | ((v18 & 1) == 0);
          goto LABEL_22;
        }
        goto LABEL_107;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(a2[5] + 40) + 4LL) & 2) != 0
        || !ACPIInternalInterruptPolarityCacheGetPolarity(*(_QWORD *)(*v6 + 32), v62, &v58) )
      {
        v16 = (v18 & 1) == 0 ? 3 : 0;
      }
      else
      {
        v16 = v58 | ((v18 & 1) == 0);
      }
      LOBYTE(v9) = v57;
      if ( (*(_BYTE *)(*(_QWORD *)(a2[5] + 40) + 4LL) & 2) != 0 )
        v16 |= 4u;
    }
  }
  else
  {
    v16 = 3;
    if ( (a2[8] & 2) == 0 )
    {
      IsPciDevice = LinkNodeCrackPrt(*(_QWORD *)(*v6 + 32), &v60, &v61, 1);
      if ( IsPciDevice >= 0 )
      {
        if ( !v60 )
        {
          v12 = v61;
LABEL_22:
          LOBYTE(v9) = v57;
          goto LABEL_40;
        }
        IsPciDevice = LinkNodeGetPossibleResources(v60, &P, &v51);
        if ( IsPciDevice >= 0 )
        {
          ExFreePoolWithTag(P, 0);
          v16 = v51 & 2 | 1;
          if ( (int)LinkNodeGetPossibleGsiv(v60, &v61) < 0 )
          {
            if ( *(_DWORD *)(v17 + 28) )
            {
              IsPciDevice = -1073741823;
              goto LABEL_107;
            }
            *(_DWORD *)(v60 + 36) = v12;
          }
          v54 = 1;
          ++*(_DWORD *)(v60 + 28);
          goto LABEL_22;
        }
      }
LABEL_107:
      LOBYTE(v3) = v56;
      goto LABEL_108;
    }
  }
LABEL_40:
  v19 = (a2[8] & 2) == 0;
  v50 = 0;
  if ( !v19 )
  {
    v50 = 1;
    if ( (_BYTE)v9 )
    {
      if ( ((v16 ^ v52) & 0xFFFFFFFB) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v13) = 4;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v13,
            20,
            15,
            (__int64)&WPP_939ab7ce094a3f0c5044c61116540ed5_Traceguids);
        }
        LOBYTE(v3) = v56;
        IsPciDevice = -1073741823;
        goto LABEL_108;
      }
    }
  }
  v20 = a2[5];
  v21 = 0;
  v22 = *(_QWORD *)(v20 + 40);
  v64 = v22;
  if ( (*(_WORD *)(v22 + 4) & 2) != 0 )
  {
    v23 = *(_DWORD *)(v22 + 12) - *(_DWORD *)(v22 + 8) + 1;
  }
  else
  {
    v23 = 1;
    v21 = (*(_BYTE *)(v20 + 36) & 1) != 0;
  }
  v24 = (void *)a2[9];
  v25 = v21 | 2;
  P = v24;
  if ( (*(_BYTE *)(v22 + 4) & 8) == 0 )
    v25 = v21;
  v62 = v25;
  v52 = v16 & 8;
  v51 = v16 & 1;
  LODWORD(Owner) = v25;
  v58 = !(v16 & 1) | ((v16 & 8) != 0 ? 2 : 0);
  IsPciDevice = ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD, void *, unsigned int, int, PVOID, int, __int128 *))ProcessorReserveIdtEntries)(
                  *(_QWORD *)(*v59 + 32),
                  v22,
                  v12,
                  v24,
                  v23,
                  v58,
                  Owner,
                  1,
                  &v67);
  if ( IsPciDevice >= 0
    || v23 > 1
    && (IsPciDevice = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, PVOID, int, int, int, int, __int128 *))ProcessorReserveIdtEntries)(
                        *(_QWORD *)(*v59 + 32),
                        *(_QWORD *)(a2[5] + 40),
                        v12,
                        P,
                        1,
                        !(v16 & 1) | (unsigned __int8)((v16 & 8) != 0 ? 2 : 0),
                        v62,
                        1,
                        &v67),
        v23 = 1,
        IsPciDevice >= 0) )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(a2[5] + 40) + 4LL) & 2) == 0 )
    {
      if ( !(_BYTE)v57 )
      {
        LOBYTE(v26) = v16;
        LOBYTE(v27) = (*(_BYTE *)(v64 + 4) & 8) != 0;
        IsPciDevice = IcSetPossibleInput(v12, &v67, v26, v27);
        if ( IsPciDevice < 0 )
          goto LABEL_106;
      }
      LOBYTE(v13) = (a2[8] & 2) != 0;
      IcAddPossibleReference(v12, v13);
      v55 = 1;
    }
    v57 = 0;
    if ( (v16 & 4) == 0 )
    {
      v28 = 1;
      if ( (*(_BYTE *)(a2[5] + 36) & 1) != 0 )
        v28 = 3;
      v57 = v28;
    }
    Pool2 = ExAllocatePool2(256LL, 88LL * (v23 - 1) + 120, 1232102209LL);
    v11 = Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)(Pool2 + 4) = 4;
      *(_DWORD *)Pool2 = 1;
      v30 = 4;
      v31 = *(_DWORD *)(*v59 + 40);
      if ( v31 && v31 != 2 )
      {
        v30 = 5;
        *(_DWORD *)(Pool2 + 4) = 5;
      }
      if ( (*(_DWORD *)(a2[5] + 36) & 4) != 0 )
      {
        v30 |= 2u;
        *(_DWORD *)(Pool2 + 4) = v30;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(a2[5] + 40) + 4LL) & 0x20) != 0 )
        *(_DWORD *)(Pool2 + 4) = v30 | 0x10;
      if ( (*(_BYTE *)(*(_QWORD *)(a2[5] + 40) + 4LL) & 2) != 0 )
      {
        *(_DWORD *)(Pool2 + 8) = 3;
        IsPciDevice = MsiGetTargetInfo(&v67, DWORD1(v68), Pool2 + 16);
        if ( IsPciDevice >= 0 )
        {
          *(_BYTE *)(v11 + 26) = BYTE8(v68);
          ProcessorGetDestinationMode((__int64)&v67, &v63);
          v32 = 0;
          if ( v23 )
          {
            v33 = v11 + 56;
            while ( 1 )
            {
              v34 = v63;
              *(_DWORD *)(v33 - 24) = 3;
              v35 = v67;
              *(_DWORD *)(v33 - 12) = 0;
              *(_DWORD *)(v33 - 8) = 1;
              *(_OWORD *)v33 = v35;
              v36 = v32 + DWORD1(v68);
              *(_DWORD *)(v33 + 48) = v34;
              *(_DWORD *)(v33 - 20) = v36;
              *(_DWORD *)(v33 + 32) = v32 + v12;
              IsPciDevice = IrqArbGetDeviceIrql(v11 + 88LL * v32 + 32, 88LL * v32 + v11 + 40);
              if ( IsPciDevice < 0 )
                goto LABEL_106;
              v33 += 88LL;
              if ( ++v32 >= v23 )
                goto LABEL_93;
            }
          }
          goto LABEL_93;
        }
      }
      else
      {
        if ( v60 )
        {
          *(_DWORD *)(Pool2 + 8) = 2;
          *(_QWORD *)(Pool2 + 16) = v60;
        }
        else
        {
          *(_DWORD *)(Pool2 + 8) = 1;
        }
        *(_DWORD *)(Pool2 + 32) = 0;
        v19 = v53 == 0;
        *(_DWORD *)(Pool2 + 36) = DWORD1(v68);
        *(_OWORD *)(Pool2 + 56) = v67;
        v37 = (!v19 || v52) && !v51;
        v38 = v16 & 0xA;
        *(_DWORD *)(v11 + 48) = v37;
        switch ( v38 )
        {
          case 10:
            v39 = 3;
            break;
          case 8:
            v39 = 4;
            break;
          case 2:
            v39 = 2;
            break;
          default:
            v39 = v38 == 0;
            break;
        }
        *(_DWORD *)(v11 + 44) = v39;
        *(_DWORD *)(v11 + 88) = IrqArbGsivFromIrq(*a2);
        *(_DWORD *)(v11 + 92) ^= v40 & (*(_DWORD *)(v11 + 92) ^ (*(_DWORD *)(v11 + 4) >> 4));
        IsPciDevice = IrqArbGetDeviceIrql(v11 + 32, v11 + 40);
        if ( IsPciDevice >= 0 )
        {
LABEL_93:
          v6 = v59;
          v41 = v57;
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v42 = v50;
          }
          else
          {
            v42 = v50;
            v43 = "RTL_RANGE_LIST_ADD_SHARED";
            v44 = "RTL_RANGE_LIST_ADD_IF_CONFLICT";
            v45 = "ARBITER_RANGE_BOOT_ALLOCATED";
            if ( (v57 & 2) == 0 )
              v43 = " ";
            if ( (v57 & 1) == 0 )
              v44 = " ";
            if ( !v50 )
              v45 = " ";
            WPP_RECORDER_SF_DDDssDssqq(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              (__int64)v44,
              (__int64)v45,
              (__int64)v43,
              Flags);
          }
          v46 = RtlAddRange(
                  *(PRTL_RANGE_LIST *)(v66 + 48),
                  *a2,
                  a2[1],
                  v42,
                  v41 | 0x10,
                  (PVOID)v11,
                  *(PVOID *)(*v6 + 32));
          IsPciDevice = v46;
          if ( v46 < 0 )
          {
            LOBYTE(v3) = v56;
            if ( v46 != -1073741823 )
              LOBYTE(v3) = 1;
            goto LABEL_108;
          }
          return;
        }
      }
    }
LABEL_106:
    v6 = v59;
    goto LABEL_107;
  }
}
