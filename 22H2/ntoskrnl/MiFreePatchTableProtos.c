/*
 * XREFs of MiFreePatchTableProtos @ 0x140A36FAC
 * Callers:
 *     MiUnloadSystemImage @ 0x1406962FC (MiUnloadSystemImage.c)
 *     MmLoadSystemImageEx @ 0x140703E70 (MmLoadSystemImageEx.c)
 * Callees:
 *     MiUnlockPagedAddress @ 0x14035AC54 (MiUnlockPagedAddress.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreePatchTableProtos(PVOID P)
{
  unsigned __int64 v1; // rbx
  unsigned __int64 v3; // rdi

  v1 = 0LL;
  v3 = 8LL * (((unsigned int)dword_140C6997C >> 12) + ((dword_140C6997C & 0xFFF) != 0));
  if ( v3 )
  {
    do
    {
      MiUnlockPagedAddress((unsigned __int64)P + v1);
      v1 += 4096LL;
    }
    while ( v1 < v3 );
  }
  ExFreePoolWithTag(P, 0);
}
