/*
 * XREFs of ACPICMExperienceButtonWorker @ 0x1C00821A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ACPICMExperienceButtonWorker(__int64 a1, unsigned int a2)
{
  __int64 Pool2; // rax
  __int64 v5; // rbx
  int v6; // eax
  char v7; // si
  int v8; // edx
  unsigned int v9; // eax

  Pool2 = ExAllocatePool2(256LL, 44LL, 1383097153LL);
  v5 = Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)Pool2 = 1;
    *(_DWORD *)(Pool2 + 24) = 16;
    *(GUID *)(Pool2 + 4) = GUID_APPLAUNCH_BUTTON;
    v6 = _strtoui64(*(const char **)(a1 + 616), 0LL, 10);
    v7 = 0;
    for ( *(_DWORD *)(v5 + 40) = v6; a2; a2 >>= 1 )
    {
      v8 = (a2 & 1) << v7;
      if ( v8 )
      {
        *(_DWORD *)(v5 + 36) = 0;
        v9 = *(_DWORD *)(v5 + 36);
        if ( v8 == 2 )
          v9 = 0x80000000;
        *(_DWORD *)(v5 + 36) = v9;
        *(_QWORD *)(v5 + 28) = MEMORY[0xFFFFF78000000014];
        *(_DWORD *)(v5 + 20) = 0;
        ZwPowerInformation(SetPowerSettingValue, (PVOID)v5, 0x2Cu, 0LL, 0);
        *(_DWORD *)(v5 + 20) = 1;
        ZwPowerInformation(SetPowerSettingValue, (PVOID)v5, 0x2Cu, 0LL, 0);
      }
      ++v7;
    }
    ExFreePoolWithTag((PVOID)v5, 0);
  }
}
