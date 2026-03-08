/*
 * XREFs of GetPciAddressWorker @ 0x1C0034E00
 * Callers:
 *     GetPciAddress @ 0x1C0034D48 (GetPciAddress.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00019D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 *     ACPIGet @ 0x1C0029384 (ACPIGet.c)
 *     CacheBBNResult @ 0x1C00349D8 (CacheBBNResult.c)
 *     GetCachedBBNResult @ 0x1C0034ACC (GetCachedBBNResult.c)
 *     GetPciAddress @ 0x1C0034D48 (GetPciAddress.c)
 *     AMLIDereferenceHandleEx @ 0x1C0047B40 (AMLIDereferenceHandleEx.c)
 *     AMLIGetParent @ 0x1C0048724 (AMLIGetParent.c)
 *     AMLIIsNamedChildPresent @ 0x1C00487BC (AMLIIsNamedChildPresent.c)
 */

__int64 __fastcall GetPciAddressWorker(__int64 a1, int a2, __int64 a3, _DWORD *a4)
{
  volatile signed __int32 *v5; // rsi
  unsigned int CachedBBNResult; // edi
  int v8; // eax
  _DWORD *v9; // r14
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rax
  int v13; // eax
  int PciAddress; // eax
  ULONG BusDataByOffset; // eax
  int v16; // ecx
  int v17; // eax
  int *v18; // r14
  int v19; // ecx
  int v20; // eax
  __int64 v21; // rcx
  int v22; // ecx
  int v23; // eax
  _BYTE Buffer[64]; // [rsp+50h] [rbp-88h] BYREF

  v5 = 0LL;
  CachedBBNResult = a2;
  _InterlockedIncrement(a4 + 12);
  if ( a2 < 0 )
    goto LABEL_43;
  v8 = a4[8];
  v9 = a4 + 9;
  if ( (v8 & 8) == 0 )
  {
    v10 = *(_QWORD *)a4;
    a4[8] = v8 | 8;
    v11 = ACPIGet(
            v10,
            0x5244415Fu,
            -1543240702,
            0LL,
            0,
            (__int64)GetPciAddressWorker,
            (__int64)a4,
            (__int64)(a4 + 9),
            0LL);
    CachedBBNResult = v11;
    if ( v11 == 259 )
      return CachedBBNResult;
    if ( v11 < 0 )
      goto LABEL_43;
  }
  if ( (a4[8] & 0x100) == 0 )
  {
    **((_DWORD **)a4 + 2) ^= (**((_DWORD **)a4 + 2) ^ (32 * *v9)) & 0xE0;
    **((_DWORD **)a4 + 2) ^= (**((_DWORD **)a4 + 2) ^ *((unsigned __int16 *)v9 + 1)) & 0x1F;
    a4[8] |= 0x100u;
  }
  **((_DWORD **)a4 + 1) = 0;
  v5 = *(volatile signed __int32 **)a4;
  dword_1C006F938 = 0;
  pszDest = 0;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement(v5 + 2);
  if ( !(unsigned __int8)AMLIIsNamedChildPresent(v5, 1145653343LL) )
  {
    AMLIDereferenceHandleEx(v5);
    v12 = AMLIGetParent(*(_QWORD *)a4);
    v5 = (volatile signed __int32 *)v12;
    if ( !v12 )
    {
      CachedBBNResult = -1073741661;
      goto LABEL_43;
    }
    if ( !(unsigned __int8)AMLIIsNamedChildPresent(v12, 1145653343LL) )
    {
      v13 = a4[8];
      if ( (v13 & 0x20) == 0 )
      {
        a4[8] = v13 | 0x20;
        PciAddress = GetPciAddress(
                       (__int64)v5,
                       (__int64)GetPciAddressWorker,
                       (__int64)a4,
                       (__int64)(a4 + 6),
                       (__int64)(a4 + 7));
        CachedBBNResult = PciAddress;
        if ( PciAddress == 259 )
        {
LABEL_49:
          AMLIDereferenceHandleEx(v5);
          return CachedBBNResult;
        }
        if ( PciAddress < 0 )
          goto LABEL_43;
      }
      BusDataByOffset = HalGetBusDataByOffset(PCIConfiguration, a4[6], a4[7], Buffer, 0, 0x1Au);
      v16 = a4[6] & 0xFFFF00;
      if ( BusDataByOffset && (Buffer[14] & 0x7Fu) - 1 <= 1 )
      {
        **((_DWORD **)a4 + 1) = Buffer[25] | v16;
        (*(void (__fastcall **)(_QWORD))(PmHalDispatchTable + 72))(**((unsigned int **)a4 + 1));
      }
      else
      {
        **((_DWORD **)a4 + 1) = v16;
      }
      goto LABEL_42;
    }
  }
  if ( !(unsigned __int8)AMLIIsNamedChildPresent(v5, 1312965215LL) )
  {
    if ( (AcpiOverrideAttributes & 0x1000) == 0 && (unsigned __int8)AMLIIsNamedChildPresent(v5, 1195725663LL) )
    {
      v22 = a4[8];
      if ( (v22 & 0x4000) == 0 )
      {
        a4[8] = v22 | 0x4000;
        v23 = ACPIGet(
                (__int64)v5,
                0x4745535Fu,
                604241922,
                0LL,
                0,
                (__int64)GetPciAddressWorker,
                (__int64)a4,
                (__int64)(a4 + 10),
                0LL);
        CachedBBNResult = v23;
        if ( v23 == 259 )
          goto LABEL_48;
        if ( v23 < 0 )
          goto LABEL_43;
      }
      **((_DWORD **)a4 + 1) = (unsigned __int16)a4[10] << 8;
    }
LABEL_42:
    CachedBBNResult = 0;
    goto LABEL_43;
  }
  v17 = a4[8];
  v18 = a4 + 11;
  if ( (v17 & 0x2000) != 0 )
  {
LABEL_26:
    if ( CachedBBNResult != 0x40000000 )
      CacheBBNResult((__int64)v5, *v18);
    if ( (AcpiOverrideAttributes & 0x1000) == 0 && (unsigned __int8)AMLIIsNamedChildPresent(v5, 1195725663LL) )
    {
      v19 = a4[8];
      if ( (v19 & 0x4000) == 0 )
      {
        a4[8] = v19 | 0x4000;
        v20 = ACPIGet(
                (__int64)v5,
                0x4745535Fu,
                604241922,
                0LL,
                0,
                (__int64)GetPciAddressWorker,
                (__int64)a4,
                (__int64)(a4 + 10),
                0LL);
        CachedBBNResult = v20;
        if ( v20 == 259 )
          goto LABEL_48;
        if ( v20 < 0 )
          goto LABEL_43;
      }
      *v18 |= (unsigned __int16)a4[10] << 8;
    }
    (*(void (__fastcall **)(_QWORD))(PmHalDispatchTable + 72))((unsigned int)*v18);
    CachedBBNResult = 0;
    **((_DWORD **)a4 + 1) = *v18;
    v21 = *(_QWORD *)(*(_QWORD *)v5 + 104LL);
    if ( v21 )
    {
      _InterlockedOr64((volatile signed __int64 *)(v21 + 8), 0x2000000uLL);
      _InterlockedOr((volatile signed __int32 *)(v21 + 184), 1u);
    }
LABEL_43:
    if ( a4[12] )
      (*((void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))a4 + 7))(a1, CachedBBNResult, 0LL, *((_QWORD *)a4 + 8));
    if ( *(_QWORD *)a4 )
    {
      AMLIDereferenceHandleEx(*(_QWORD *)a4);
      *(_QWORD *)a4 = 0LL;
    }
    ExFreePoolWithTag(a4, 0);
    goto LABEL_48;
  }
  a4[8] = v17 | 0x2000;
  CachedBBNResult = GetCachedBBNResult((__int64)v5, a4 + 11);
  if ( CachedBBNResult != 0x40000000 )
    CachedBBNResult = ACPIGet(
                        (__int64)v5,
                        0x4E42425Fu,
                        604241922,
                        0LL,
                        0,
                        (__int64)GetPciAddressWorker,
                        (__int64)a4,
                        (__int64)(a4 + 11),
                        0LL);
  if ( CachedBBNResult != 259 )
  {
    if ( (CachedBBNResult & 0x80000000) != 0 )
      goto LABEL_43;
    goto LABEL_26;
  }
LABEL_48:
  if ( v5 )
    goto LABEL_49;
  return CachedBBNResult;
}
