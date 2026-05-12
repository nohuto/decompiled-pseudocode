/*
 * XREFs of RaidUnitGetCompatibleIds @ 0x1C001B410
 * Callers:
 *     RaUnitQueryIdIrp @ 0x1C0074B64 (RaUnitQueryIdIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000BDB0 (RaidAllocatePool.c)
 *     RaUnitIsSMRDisabled @ 0x1C0019DF0 (RaUnitIsSMRDisabled.c)
 *     RtlStringCchPrintfExW @ 0x1C001BAC8 (RtlStringCchPrintfExW.c)
 *     RaidUnitGet1667DeviceRegistryValue @ 0x1C001BDCC (RaidUnitGet1667DeviceRegistryValue.c)
 *     McTemplateK0zqjuuussssq_EtwWriteTransfer @ 0x1C001E900 (McTemplateK0zqjuuussssq_EtwWriteTransfer.c)
 *     PortGetDeviceType @ 0x1C00740D4 (PortGetDeviceType.c)
 *     RaFixupIds @ 0x1C0074D84 (RaFixupIds.c)
 */

__int64 __fastcall RaidUnitGetCompatibleIds(__int64 a1, wchar_t **a2)
{
  wchar_t *v3; // r14
  __int64 v5; // r9
  int v6; // esi
  __int64 v7; // rcx
  void *v8; // r8
  __int64 v9; // r10
  void *v10; // rdi
  NTSTATUS v11; // edi
  wchar_t *Pool; // rax
  int v13; // ecx
  NTSTATUS v14; // eax
  __int64 v15; // rdx
  _QWORD *DeviceType; // rax
  wchar_t *v17; // rcx
  size_t v18; // rdx
  size_t v19; // r15
  wchar_t *v20; // rsi
  __int64 result; // rax
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+B8h] [rbp+48h] BYREF
  size_t pcchRemaining; // [rsp+C0h] [rbp+50h] BYREF

  v3 = 0LL;
  if ( (unsigned int)RaUnitIsSMRDisabled(a1) && (*(_DWORD *)(a1 + 1824) & 1) == 0 )
  {
    v5 = *(_QWORD *)(a1 + 24);
    v6 = *(_DWORD *)(v5 + 4808);
    if ( v6 > 1 )
    {
      v7 = *(_QWORD *)(a1 + 152);
      v8 = 0LL;
      if ( v7 )
      {
        v8 = (void *)(v7 + 90);
      }
      else
      {
        v9 = *(_QWORD *)(a1 + 144);
        if ( v9 && (*(_DWORD *)(*(_QWORD *)(v5 + 552) + 184LL) & 0x40) != 0 )
          v8 = (void *)(v9 + 41);
      }
      if ( byte_1C0069843 < 0 )
      {
        v10 = &unk_1C005B660;
        if ( v8 )
          v10 = v8;
        McTemplateK0zqjuuussssq_EtwWriteTransfer(
          *(_DWORD *)(a1 + 96) >> 8,
          v5 + 5192,
          a1 + 186,
          *(_QWORD *)(v5 + 4864),
          *(_DWORD *)(v5 + 56),
          v5 + 5192,
          *(_DWORD *)(a1 + 96),
          BYTE1(*(_DWORD *)(a1 + 96)),
          BYTE2(*(_DWORD *)(a1 + 96)),
          a1 + 160,
          a1 + 169,
          a1 + 186,
          (__int64)v10,
          v6);
      }
    }
    v11 = -1073741637;
    goto LABEL_25;
  }
  Pool = (wchar_t *)RaidAllocatePool(PagedPool, 0x4CuLL, 0x49446152u, *(_QWORD *)(a1 + 8));
  v3 = Pool;
  if ( !Pool )
  {
    v11 = -1073741801;
    goto LABEL_25;
  }
  v13 = *(_DWORD *)(a1 + 1824);
  ppszDestEnd = Pool;
  pcchRemaining = 38LL;
  if ( (v13 & 1) != 0 )
  {
    v14 = RtlStringCchPrintfExW(Pool, 0x26uLL, &ppszDestEnd, &pcchRemaining, 0, L"SCSI\\VMLUN");
  }
  else
  {
    DeviceType = (_QWORD *)PortGetDeviceType(**(_BYTE **)(a1 + 104) & 0x1F);
    v11 = RtlStringCchPrintfExW(v3, 0x26uLL, &ppszDestEnd, &pcchRemaining, 0, L"SCSI\\%hs", *DeviceType);
    v17 = ppszDestEnd + 1;
    v18 = pcchRemaining - 1;
    ++ppszDestEnd;
    --pcchRemaining;
    if ( v11 < 0 )
      goto LABEL_25;
    v11 = RtlStringCchPrintfExW(v17, v18, &ppszDestEnd, &pcchRemaining, 0, L"SCSI\\RAW");
    v19 = pcchRemaining;
    v20 = ++ppszDestEnd;
    if ( v11 < 0 )
      goto LABEL_25;
    RaidUnitGet1667DeviceRegistryValue(a1);
    if ( !*(_BYTE *)(a1 + 128) )
      goto LABEL_22;
    v14 = RtlStringCchPrintfExW(v20, v19 - 1, &ppszDestEnd, &pcchRemaining, 0, L"%hs", "Disk1667");
  }
  v11 = v14;
  v20 = ppszDestEnd + 1;
LABEL_22:
  if ( v11 >= 0 )
  {
    *v20 = 0;
    LOBYTE(v15) = 1;
    RaFixupIds(v3, v15, 38LL);
  }
LABEL_25:
  result = (unsigned int)v11;
  *a2 = v3;
  return result;
}
