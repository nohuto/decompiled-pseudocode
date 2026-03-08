/*
 * XREFs of MiVaToPfnEx @ 0x140384AD0
 * Callers:
 *     MmBuildMdlForNonPagedPool @ 0x1402B5DB0 (MmBuildMdlForNonPagedPool.c)
 *     MiGetPhysicalAddress @ 0x14030C890 (MiGetPhysicalAddress.c)
 *     MiCheckKernelShadow @ 0x1403CA298 (MiCheckKernelShadow.c)
 *     MiDuplicateCloneLeaf @ 0x140661AA8 (MiDuplicateCloneLeaf.c)
 *     MiFreeInitializationCode @ 0x14072A51C (MiFreeInitializationCode.c)
 *     MiInitializeShadowPageTable @ 0x14080B974 (MiInitializeShadowPageTable.c)
 *     MiInitializeNonPagedPool @ 0x140B5EDA4 (MiInitializeNonPagedPool.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFillPteHierarchy @ 0x140333AE0 (MiFillPteHierarchy.c)
 */

unsigned __int64 __fastcall MiVaToPfnEx(unsigned __int64 a1)
{
  int v2; // edi
  __int64 v3; // rbx
  unsigned __int64 v4; // rcx
  __int64 v5; // rax
  unsigned __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned __int64 v8; // rsi
  __int16 v9; // ax
  __int64 v10; // rax
  __int64 v12; // [rsp+18h] [rbp-30h]
  _OWORD v13[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+60h] [rbp+18h] BYREF

  memset(v13, 0, sizeof(v13));
  MiFillPteHierarchy(a1, (unsigned __int64 *)v13);
  v2 = 4;
  v3 = 4LL;
  do
  {
    v4 = *(&v12 + v3--);
    --v2;
    v5 = MI_READ_PTE_LOCK_FREE(v4);
    v14 = v5;
  }
  while ( v3 && (v5 & 0x80u) == 0LL );
  v6 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v14) >> 12) & 0xFFFFFFFFFFLL;
  if ( v2 )
  {
    v7 = 1LL;
    v8 = a1 >> 12;
    do
    {
      v9 = v8;
      v8 >>= 9;
      v10 = v7 * (v9 & 0x1FF);
      v7 <<= 9;
      v6 += v10;
      --v2;
    }
    while ( v2 );
  }
  return v6;
}
