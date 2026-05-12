/*
 * XREFs of RaidUnitGetHardwareIds @ 0x1C001B638
 * Callers:
 *     RaUnitQueryIdIrp @ 0x1C0074B64 (RaUnitQueryIdIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000BD40 (RaidAllocatePool.c)
 *     RaUnitIsSMRDisabled @ 0x1C0019D80 (RaUnitIsSMRDisabled.c)
 *     RtlStringCchPrintfExW @ 0x1C001BA58 (RtlStringCchPrintfExW.c)
 *     PortGetDeviceType @ 0x1C00740D4 (PortGetDeviceType.c)
 *     RaFixupIds @ 0x1C0074D84 (RaFixupIds.c)
 */

__int64 __fastcall RaidUnitGetHardwareIds(__int64 a1, wchar_t **a2)
{
  wchar_t **v2; // r15
  wchar_t *Pool; // rax
  wchar_t *v5; // r14
  int v6; // ecx
  _BYTE *v7; // rdi
  NTSTATUS v8; // ebx
  wchar_t *v9; // r10
  size_t v10; // rdx
  _QWORD *DeviceType; // rax
  size_t v12; // r11
  _QWORD *v13; // r12
  __int64 v14; // r8
  _BYTE *v15; // r15
  _BYTE *v16; // r13
  _BYTE *v17; // rdi
  NTSTATUS v18; // eax
  __int64 v19; // r11
  _BYTE *v21; // [rsp+40h] [rbp-18h]
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+A0h] [rbp+48h] BYREF
  wchar_t **v23; // [rsp+A8h] [rbp+50h]
  size_t pcchRemaining; // [rsp+B0h] [rbp+58h] BYREF

  v23 = a2;
  v2 = a2;
  Pool = (wchar_t *)RaidAllocatePool(PagedPool, 0x2CEuLL, 0x49446152u, *(_QWORD *)(a1 + 8));
  v5 = Pool;
  pcchRemaining = 359LL;
  if ( Pool )
  {
    v6 = *(_DWORD *)(a1 + 1824);
    v7 = *(_BYTE **)(a1 + 104);
    ppszDestEnd = Pool;
    if ( (v6 & 1) != 0 )
    {
      v8 = RtlStringCchPrintfExW(
             Pool,
             0x167uLL,
             &ppszDestEnd,
             &pcchRemaining,
             0,
             L"SCSI\\VMLUN%8.8hs%16.16hs%4.4hs",
             v7 + 8,
             v7 + 16,
             v7 + 32);
      v9 = ppszDestEnd + 1;
      v10 = pcchRemaining - 1;
      ++ppszDestEnd;
      if ( v8 >= 0 )
      {
        v8 = RtlStringCchPrintfExW(v9, v10, &ppszDestEnd, &pcchRemaining, 0, L"SCSI\\VMLUN");
        v9 = ppszDestEnd + 1;
      }
    }
    else
    {
      DeviceType = (_QWORD *)PortGetDeviceType(*v7 & 0x1F);
      v13 = DeviceType;
      if ( *(_DWORD *)(a1 + 3280) != 17 )
        goto LABEL_10;
      v14 = *(_QWORD *)(a1 + 152);
      if ( !v14 )
        goto LABEL_10;
      v15 = v7 + 8;
      v8 = RtlStringCchPrintfExW(
             v5,
             v12,
             &ppszDestEnd,
             &pcchRemaining,
             0,
             L"SCSI\\%hs%8.8hs%40.40hs%8.8hs",
             *DeviceType,
             v7 + 8,
             v14 + 25,
             v14 + 90);
      v9 = ppszDestEnd + 1;
      v10 = pcchRemaining - 1;
      ++ppszDestEnd;
      --pcchRemaining;
      if ( v8 < 0
        || (v8 = RtlStringCchPrintfExW(
                   v9,
                   v10,
                   &ppszDestEnd,
                   &pcchRemaining,
                   0,
                   L"SCSI\\%hs%8.8hs%40.40hs",
                   *v13,
                   v7 + 8,
                   *(_QWORD *)(a1 + 152) + 25LL),
            v9 = ppszDestEnd + 1,
            v10 = pcchRemaining - 1,
            ++ppszDestEnd,
            --pcchRemaining,
            v8 < 0) )
      {
        v16 = v7 + 16;
        v17 = v7 + 32;
      }
      else
      {
LABEL_10:
        v16 = v7 + 16;
        v21 = v7 + 16;
        v15 = v7 + 8;
        v17 = v7 + 32;
        v8 = RtlStringCchPrintfExW(
               v9,
               v10,
               &ppszDestEnd,
               &pcchRemaining,
               0,
               L"SCSI\\%hs%8.8hs%16.16hs%4.4hs",
               *v13,
               v15,
               v21,
               v17);
        v9 = ppszDestEnd + 1;
        v10 = pcchRemaining - 1;
        ++ppszDestEnd;
        --pcchRemaining;
      }
      if ( v8 >= 0 )
      {
        v8 = RtlStringCchPrintfExW(v9, v10, &ppszDestEnd, &pcchRemaining, 0, L"SCSI\\%hs%8.8hs%16.16hs", *v13, v15, v16);
        v9 = ppszDestEnd + 1;
        v10 = pcchRemaining - 1;
        ++ppszDestEnd;
        --pcchRemaining;
        if ( v8 >= 0 )
        {
          v18 = RtlStringCchPrintfExW(v9, v10, &ppszDestEnd, &pcchRemaining, 0, L"SCSI\\%hs%8.8hs", *v13, v15);
          v10 = pcchRemaining;
          v8 = v18;
          if ( v18 < 0 )
          {
            v9 = ppszDestEnd;
          }
          else
          {
            ++ppszDestEnd;
            --pcchRemaining;
            v8 = RtlStringCchPrintfExW(
                   ppszDestEnd,
                   pcchRemaining,
                   &ppszDestEnd,
                   &pcchRemaining,
                   0,
                   L"SCSI\\%8.8hs%16.16hs%1.1hs",
                   v15,
                   v16,
                   v17);
            v9 = ppszDestEnd + 1;
            v10 = pcchRemaining - 1;
            ++ppszDestEnd;
            --pcchRemaining;
          }
          if ( v8 >= 0 )
          {
            v8 = RtlStringCchPrintfExW(v9, v10, &ppszDestEnd, &pcchRemaining, 0, L"%8.8hs%16.16hs%1.1hs", v15, v16, v17);
            v9 = ++ppszDestEnd;
            if ( v8 >= 0 && !(unsigned int)RaUnitIsSMRDisabled(a1) )
            {
              v8 = RtlStringCchPrintfExW(v9, v19 - 1, &ppszDestEnd, &pcchRemaining, 0, L"%hs", v13[1]);
              v9 = ppszDestEnd + 1;
            }
          }
        }
      }
      v2 = v23;
    }
    *v9 = 0;
    LOBYTE(v10) = 1;
    RaFixupIds(v5, v10, 359LL);
  }
  else
  {
    v8 = -1073741801;
  }
  *v2 = v5;
  return (unsigned int)v8;
}
