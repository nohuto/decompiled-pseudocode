/*
 * XREFs of MiProtectSharedUserPage @ 0x140B6C128
 * Callers:
 *     MiInitNucleus @ 0x140B36878 (MiInitNucleus.c)
 * Callees:
 *     MiMakeValidPte @ 0x140273920 (MiMakeValidPte.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140323BC0 (MiFlushTbList.c)
 *     MiReservePtes @ 0x1403274D0 (MiReservePtes.c)
 *     MiInsertTbFlushEntry @ 0x1403298B0 (MiInsertTbFlushEntry.c)
 *     MiWriteValidPteNewProtection @ 0x14032E660 (MiWriteValidPteNewProtection.c)
 *     MiMakeProtectionPfnCompatible @ 0x14034A974 (MiMakeProtectionPfnCompatible.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     Feature_KernelSharedUserDataAslr__private_ReportDeviceUsage @ 0x1404115D8 (Feature_KernelSharedUserDataAslr__private_ReportDeviceUsage.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

ULONG_PTR MiProtectSharedUserPage()
{
  __int64 v0; // rax
  unsigned __int64 v1; // r14
  ULONG_PTR result; // rax
  unsigned __int64 v3; // rdi
  int ProtectionPfnCompatible; // eax
  unsigned __int64 ValidPte; // rbx
  int v6; // ebp
  __int64 v7; // r8
  __int64 v8; // rdx
  int v9; // eax
  signed __int64 v10; // rbx
  unsigned __int64 v11; // rdi
  int v12; // ebp
  __int64 v13; // r8
  __int64 v14; // [rsp+20h] [rbp-F8h] BYREF
  _QWORD v15[24]; // [rsp+30h] [rbp-E8h] BYREF

  memset(v15, 0, 0xB8uLL);
  v0 = MI_READ_PTE_LOCK_FREE(0xFFFFF6FBC0000000uLL);
  v15[3] = 0LL;
  v14 = v0;
  LODWORD(v15[1]) = 20;
  Feature_KernelSharedUserDataAslr__private_ReportDeviceUsage();
  v1 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v14) >> 12) & 0xFFFFFFFFFFLL;
  result = MiReservePtes((__int64)&qword_140C695C0, 1u);
  v3 = result;
  if ( !result )
    return result;
  ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, 48 * v1 - 0x220000000000LL);
  ValidPte = MiMakeValidPte(v3, v1, ProtectionPfnCompatible | 0xA0000000);
  v6 = 0;
  if ( MiPteInShadowRange(v3) )
  {
    if ( MiPteHasShadow() )
    {
      v6 = 1;
      if ( HIBYTE(word_140C6697C) )
        goto LABEL_9;
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
    {
      goto LABEL_9;
    }
    if ( (ValidPte & 1) != 0 )
      ValidPte |= v8;
  }
LABEL_9:
  *(_QWORD *)v3 = ValidPte;
  if ( v6 )
    MiWritePteShadow(v3, ValidPte, v7);
  MmWriteableSharedUserData = (__int64)(v3 << 25) >> 16;
  v9 = MiMakeProtectionPfnCompatible(1, 48 * v1 - 0x220000000000LL);
  v10 = MiMakeValidPte(0xFFFFF6FBC0000000uLL, v1, v9 | 0x20000000u);
  v11 = v10;
  v12 = 0;
  if ( !MiPteInShadowRange(0xFFFFF6FBC0000000uLL) )
    goto LABEL_18;
  if ( MiPteHasShadow() )
  {
    v12 = 1;
    if ( !HIBYTE(word_140C6697C) )
    {
LABEL_16:
      if ( (v10 & 1) != 0 )
        v11 = v10 | 0x8000000000000000uLL;
    }
  }
  else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
  {
    goto LABEL_16;
  }
LABEL_18:
  MEMORY[0xFFFFF6FBC0000000] = v11;
  if ( v12 )
    MiWritePteShadow(0xFFFFF6FBC0000000uLL, v11, v13);
  MiInsertTbFlushEntry((__int64)v15, 0xFFFFF78000000000uLL, 1LL, 0);
  if ( v10 >= 0 || (BYTE1(v10) & 1) != (_BYTE)word_140C6697C )
  {
    MiWriteValidPteNewProtection(
      0xFFFFF6FBC0000000uLL,
      v10 & 0xFFFFFFFFFFFFFEFFuLL | ((word_140C6697C & 1 | 0xFF80000000000000uLL) << 8));
    MiInsertTbFlushEntry((__int64)v15, 0xFFFFF78000000000uLL, 1LL, 0);
  }
  MiFlushTbList((int *)v15);
  return 1LL;
}
