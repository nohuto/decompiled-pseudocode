/*
 * XREFs of PopLogSleepDisabled @ 0x14087118C
 * Callers:
 *     NtPowerInformation @ 0x14068AB90 (NtPowerInformation.c)
 *     PopFilterCapabilities @ 0x140760774 (PopFilterCapabilities.c)
 *     PopLogDisabledSleepReason @ 0x140760A60 (PopLogDisabledSleepReason.c)
 *     PopEnableHiberFile @ 0x14082ADA4 (PopEnableHiberFile.c)
 *     PopUpdateUpgradeInProgress @ 0x14085E230 (PopUpdateUpgradeInProgress.c)
 *     PoInitSystem @ 0x140B45CAC (PoInitSystem.c)
 *     PopInitPlatformSettings @ 0x140B4743C (PopInitPlatformSettings.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     PopGetReasonListByReasonCode @ 0x140760968 (PopGetReasonListByReasonCode.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall PopLogSleepDisabled(int a1, char a2, const void *a3, size_t a4)
{
  unsigned int v8; // edi
  __int64 Pool2; // rax
  _QWORD *v10; // rbx
  _QWORD *v11; // rax

  v8 = 0;
  if ( PopGetReasonListByReasonCode(a1) )
  {
    return (unsigned int)-1073741771;
  }
  else
  {
    Pool2 = ExAllocatePool2(256LL, a4 + 32, 1718968931LL);
    v10 = (_QWORD *)Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)(Pool2 + 24) = a1;
      if ( (a2 & 1) != 0 )
        *(_BYTE *)(Pool2 + 16) = 1;
      if ( (a2 & 2) != 0 )
        *(_BYTE *)(Pool2 + 17) = 1;
      if ( (a2 & 4) != 0 )
        *(_BYTE *)(Pool2 + 18) = 1;
      if ( (a2 & 8) != 0 )
        *(_BYTE *)(Pool2 + 19) = 1;
      if ( (a2 & 0x10) != 0 )
        *(_BYTE *)(Pool2 + 22) = 1;
      if ( (a2 & 0x20) != 0 )
        *(_BYTE *)(Pool2 + 20) = 1;
      if ( a4 )
      {
        *(_DWORD *)(Pool2 + 28) = a4;
        memmove((void *)(Pool2 + 32), a3, a4);
      }
      v11 = (_QWORD *)qword_140C3D348;
      if ( *(__int64 **)qword_140C3D348 != &PowerStateDisableReasonListHead )
        __fastfail(3u);
      *v10 = &PowerStateDisableReasonListHead;
      v10[1] = v11;
      *v11 = v10;
      qword_140C3D348 = (__int64)v10;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v8;
}
