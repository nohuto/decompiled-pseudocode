/*
 * XREFs of MiUnlockDriverPages @ 0x14087313C
 * Callers:
 *     MiUnlockAndFreeDvPatchImage @ 0x14063EDD4 (MiUnlockAndFreeDvPatchImage.c)
 *     MmWriteSystemImageTracepoint @ 0x140640F7C (MmWriteSystemImageTracepoint.c)
 *     MiCompleteSecureDriverLoad @ 0x140880F78 (MiCompleteSecureDriverLoad.c)
 *     MiUnlockEntireDriver @ 0x140A31880 (MiUnlockEntireDriver.c)
 *     MiApplyDriverHotPatch @ 0x140A31BB8 (MiApplyDriverHotPatch.c)
 *     MiApplySingleSessionPatch @ 0x140A333E0 (MiApplySingleSessionPatch.c)
 *     MiUnapplyDriverHotPatch @ 0x140A390F8 (MiUnapplyDriverHotPatch.c)
 *     MmReapplyBootPatchImports @ 0x140B70FB0 (MmReapplyBootPatchImports.c)
 * Callees:
 *     MiGetPteAddress @ 0x140288864 (MiGetPteAddress.c)
 *     MiUnlockCodePage @ 0x1402A441C (MiUnlockCodePage.c)
 *     RtlFindSetBitsEx @ 0x1402D8E10 (RtlFindSetBitsEx.c)
 *     KeReservePrivilegedPages @ 0x1403D1570 (KeReservePrivilegedPages.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall MiUnlockDriverPages(__int64 *a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  unsigned __int64 v5; // rdi
  __int64 PteAddress; // r14
  unsigned __int64 SetBits; // rax
  signed __int64 **v8; // rdi
  unsigned __int64 v9; // rbp

  v2 = (void *)a1[7];
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    a1[7] = 0LL;
  }
  v3 = (void *)a1[9];
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0);
    a1[9] = 0LL;
  }
  v4 = (void *)a1[11];
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0);
    a1[11] = 0LL;
  }
  if ( a1[5] )
  {
    v5 = *a1;
    if ( (a1[12] & 1) != 0 )
      KeReservePrivilegedPages();
    PteAddress = MiGetPteAddress(*(_QWORD *)(v5 + 48));
    SetBits = RtlFindSetBitsEx((unsigned __int64 *)a1 + 4, 1uLL, 0LL);
    v8 = (signed __int64 **)(a1 + 5);
    while ( 1 )
    {
      v9 = SetBits;
      if ( SetBits == -1LL )
        break;
      MiUnlockCodePage(PteAddress + 8 * SetBits, PteAddress + 8 * SetBits, (*((_DWORD *)a1 + 24) >> 1) & 1);
      _bittestandreset64(*v8, v9);
      SetBits = RtlFindSetBitsEx((unsigned __int64 *)a1 + 4, 1uLL, v9);
    }
    ExFreePoolWithTag(*v8, 0);
    *v8 = 0LL;
  }
}
