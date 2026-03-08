/*
 * XREFs of PciConfigSpaceHandlerWorker @ 0x1C0036080
 * Callers:
 *     PciConfigInternal @ 0x1C0035ECC (PciConfigInternal.c)
 *     PciConfigSpaceHandler @ 0x1C0035F80 (PciConfigSpaceHandler.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00019D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002180 (memset.c)
 *     WPP_RECORDER_SF_dqss @ 0x1C0009A6C (WPP_RECORDER_SF_dqss.c)
 *     RtlStringCchPrintfW @ 0x1C000B900 (RtlStringCchPrintfW.c)
 *     ACPIWriteEventLogEntry @ 0x1C0025F5C (ACPIWriteEventLogEntry.c)
 *     GetOpRegionScope @ 0x1C0034B60 (GetOpRegionScope.c)
 *     GetPciAddress @ 0x1C0034D48 (GetPciAddress.c)
 *     WPP_RECORDER_SF_ss @ 0x1C003660C (WPP_RECORDER_SF_ss.c)
 *     AMLIDereferenceHandleEx @ 0x1C0047B40 (AMLIDereferenceHandleEx.c)
 *     AMLIGetParent @ 0x1C0048724 (AMLIGetParent.c)
 */

__int64 __fastcall PciConfigSpaceHandlerWorker(__int64 a1, __int64 a2, const char *a3, __int64 a4)
{
  unsigned int *v4; // rdi
  ULONG BusDataByOffset; // eax
  __int64 *v6; // rbx
  int v7; // esi
  int v8; // eax
  __int64 v9; // rcx
  int OpRegionScope; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r13
  bool v14; // cl
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rcx
  const char *v18; // rax
  const char *v19; // rdx
  unsigned int v20; // eax
  __int64 v21; // rcx
  int PciAddress; // eax
  KIRQL CurrentIrql; // al
  KIRQL v25; // r14
  ULONG v26; // r15d
  __int64 v27; // rax
  ULONG v28; // esi
  int v29; // r10d
  ULONG v30; // ecx
  ULONG v31; // r12d
  ULONG Length; // r12d
  void (__fastcall *v33)(_QWORD); // rax
  __int64 v34; // rax
  __int64 v35; // rcx
  ULONG Offset; // [rsp+20h] [rbp-79h]
  ULONG v37; // [rsp+50h] [rbp-49h]
  ULONG v38; // [rsp+50h] [rbp-49h]
  int v39; // [rsp+54h] [rbp-45h]
  int v40; // [rsp+58h] [rbp-41h]
  const char *v41; // [rsp+60h] [rbp-39h]
  __int16 *v42[2]; // [rsp+68h] [rbp-31h] BYREF
  int v43; // [rsp+78h] [rbp-21h] BYREF
  char v44; // [rsp+7Ch] [rbp-1Dh]
  int v45; // [rsp+80h] [rbp-19h] BYREF
  char v46; // [rsp+84h] [rbp-15h]
  __int64 v47; // [rsp+88h] [rbp-11h] BYREF
  wchar_t v48; // [rsp+90h] [rbp-9h]
  wchar_t pszDest[16]; // [rsp+98h] [rbp-1h] BYREF

  v4 = (unsigned int *)a4;
  v48 = aAcpi_1[4];
  BusDataByOffset = 0;
  v47 = *(_QWORD *)L"ACPI";
  _InterlockedIncrement((volatile signed __int32 *)(a4 + 80));
  v6 = (__int64 *)(a4 + 56);
  if ( (int)a2 < 0 )
  {
    v7 = 0;
    goto LABEL_55;
  }
  if ( !*v6 )
  {
    v8 = *(_DWORD *)(a4 + 76);
    if ( (v8 & 0x1000) != 0 )
      goto LABEL_25;
    v9 = *(_QWORD *)(a4 + 8);
    *(_DWORD *)(a4 + 76) = v8 | 0x1000;
    OpRegionScope = GetOpRegionScope(v9, a2, a4, a4 + 56);
    if ( OpRegionScope == 259 )
      return 259LL;
    if ( OpRegionScope < 0 )
    {
LABEL_7:
      v7 = 0;
      BusDataByOffset = 0;
      goto LABEL_55;
    }
    v11 = *((_QWORD *)v4 + 1);
    if ( v11 )
    {
      *(_QWORD *)(*(_QWORD *)v11 + 104LL) = *v6;
      v12 = *v6;
      dword_1C006F938 = 0;
      ::pszDest = 0;
      if ( (gdwfAMLI & 4) != 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
    }
  }
  a2 = *(_QWORD *)(*(_QWORD *)*v6 + 104LL);
  if ( !a2 )
    goto LABEL_7;
  v13 = *(_QWORD *)(a2 + 80);
  if ( v13 )
  {
LABEL_28:
    v7 = 0;
    CurrentIrql = KeGetCurrentIrql();
    v25 = CurrentIrql;
    if ( !*v4 )
    {
      if ( v13 )
      {
        if ( CurrentIrql < 2u )
          v25 = KfRaiseIrql(2u);
        Offset = v4[5];
        BusDataByOffset = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v13 + 56))(
                            *(_QWORD *)(v13 + 8),
                            0LL,
                            *((_QWORD *)v4 + 3),
                            v4[4]);
        v38 = BusDataByOffset;
        if ( v25 < 2u )
        {
          KeLowerIrql(v25);
          BusDataByOffset = v38;
        }
      }
      else
      {
        BusDataByOffset = HalGetBusDataByOffset(PCIConfiguration, v4[22], v4[21], *((PVOID *)v4 + 3), v4[4], v4[5]);
      }
      goto LABEL_55;
    }
    if ( *v4 == 1 )
    {
      v26 = v4[4];
      a3 = "+";
      LODWORD(a2) = v4[5];
      v41 = "+";
      v27 = 0LL;
      v40 = 0;
      v28 = 0;
      v39 = 0;
      v29 = 0;
      v30 = 0;
      LODWORD(a4) = v26;
      do
      {
        v31 = *(unsigned __int16 *)((char *)&PciConfigDisallowedRanges + v27);
        if ( v26 < v31 )
        {
          Length = v31 - v26;
          if ( (unsigned int)a2 + (_DWORD)a4 - v26 <= Length )
            Length = a2 + a4 - v26;
          if ( v13 )
          {
            if ( v25 < 2u )
              v25 = KfRaiseIrql(2u);
            Offset = Length;
            v28 += (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, _QWORD))(v13 + 48))(
                     *(_QWORD *)(v13 + 8),
                     0LL,
                     *((_QWORD *)v4 + 3) + 4 * (v26 - (unsigned __int64)v4[4]),
                     v26);
            if ( v25 < 2u )
              KeLowerIrql(v25);
          }
          else
          {
            v28 += HalSetBusDataByOffset(
                     PCIConfiguration,
                     v4[22],
                     v4[21],
                     (PVOID)(*((_QWORD *)v4 + 3) + 4 * (v26 - (unsigned __int64)(unsigned int)a4)),
                     v26,
                     Length);
          }
          a3 = v41;
          v30 = Length + v39;
          v29 = v40;
          v39 += Length;
        }
        LODWORD(a4) = v4[4];
        v26 = a4;
        LODWORD(a2) = v4[5];
        if ( (unsigned int)a4 <= (unsigned int)*(unsigned __int16 *)a3 + 1 )
          v26 = *(unsigned __int16 *)a3 + 1;
        if ( v26 >= (int)a2 + (int)a4 )
          break;
        v27 = 4LL * (unsigned int)++v29;
        a3 = (char *)&PciConfigDisallowedRanges + v27 + 2;
        v40 = v29;
        v41 = a3;
      }
      while ( *(_WORD *)a3 );
      v37 = v28;
      v6 = (__int64 *)(v4 + 14);
      v7 = 0;
      if ( !v30 )
      {
        RtlStringCchPrintfW(pszDest, 0xDuLL, L"0x%x");
        v42[0] = (__int16 *)&v47;
        v42[1] = (__int16 *)pszDest;
        ACPIWriteEventLogEntry(-1073414134, v42, 2u);
      }
      BusDataByOffset = v37;
      goto LABEL_55;
    }
    v7 = -1073741822;
    goto LABEL_26;
  }
  v14 = (_InterlockedCompareExchange((volatile signed __int32 *)(a2 + 184), 0, 0) & 1) == 0;
  if ( (v14 & ((_InterlockedCompareExchange((volatile signed __int32 *)(a2 + 88), 0, 0) & 2) == 0)) == 0 )
  {
LABEL_22:
    v20 = v4[19];
    if ( (v20 & 0x100) == 0 )
    {
      v21 = *v6;
      v4[19] = v20 | 0x100;
      PciAddress = GetPciAddress(
                     v21,
                     (__int64)PciConfigSpaceHandlerWorker,
                     (__int64)v4,
                     (__int64)(v4 + 22),
                     (__int64)(v4 + 21));
      if ( PciAddress == 259 )
        return 259LL;
      if ( PciAddress < 0 )
        goto LABEL_7;
    }
    goto LABEL_28;
  }
  v15 = AMLIGetParent(*v6);
  if ( v15 )
  {
    v16 = *(_QWORD *)(*(_QWORD *)v15 + 104LL);
    AMLIDereferenceHandleEx(v15);
    if ( v16 )
    {
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v16 + 184), 0, 0) & 1) == 0 )
      {
        v17 = *(_QWORD *)(v16 + 8);
        v18 = (const char *)&unk_1C00622D0;
        v19 = (const char *)&unk_1C00622D0;
        if ( (v17 & 0x200000000000LL) != 0 )
        {
          v18 = *(const char **)(v16 + 608);
          if ( (v17 & 0x400000000000LL) != 0 )
            v19 = *(const char **)(v16 + 616);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_dqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            0x15u,
            0xAu,
            (__int64)&WPP_94f6cc7e4eb03ed98099c561227e81da_Traceguids,
            1,
            v16,
            v18,
            v19);
      }
      goto LABEL_22;
    }
  }
LABEL_25:
  v7 = -1073741772;
LABEL_26:
  BusDataByOffset = 0;
LABEL_55:
  if ( !*v4 && !BusDataByOffset )
    memset(*((void **)v4 + 3), 255, v4[5]);
  if ( v4[20] )
  {
    v33 = (void (__fastcall *)(_QWORD))*((_QWORD *)v4 + 5);
    if ( v4[18] )
      ((void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))v33)(*v6, (unsigned int)v7, 0LL, *((_QWORD *)v4 + 6));
    else
      v33(*((_QWORD *)v4 + 6));
  }
  if ( v7 < 0 )
  {
    v45 = 0;
    v46 = 0;
    v43 = 0;
    v44 = 0;
    v34 = *((_QWORD *)v4 + 1);
    if ( v34 )
    {
      dword_1C006FA40 = *(_DWORD *)(*(_QWORD *)v34 + 40LL);
      byte_1C006FA44 = 0;
      v45 = dword_1C006FA40;
    }
    if ( *v6 )
    {
      dword_1C006FA40 = *(_DWORD *)(*(_QWORD *)*v6 + 40LL);
      byte_1C006FA44 = 0;
      v43 = dword_1C006FA40;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ss(WPP_GLOBAL_Control->DeviceExtension, a2, (_DWORD)a3, a4, Offset, (__int64)&v45, (__int64)&v43);
  }
  v35 = *((_QWORD *)v4 + 1);
  if ( v35 )
  {
    AMLIDereferenceHandleEx(v35);
    *((_QWORD *)v4 + 1) = 0LL;
  }
  if ( *v6 )
  {
    AMLIDereferenceHandleEx(*v6);
    *v6 = 0LL;
  }
  ExFreePoolWithTag(v4, 0x46706341u);
  return (unsigned int)v7;
}
