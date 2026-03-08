/*
 * XREFs of MiFreePatchTableProtos @ 0x140A3427C
 * Callers:
 *     MmLoadSystemImageEx @ 0x14072E4EC (MmLoadSystemImageEx.c)
 *     MiUnloadSystemImage @ 0x1407F627C (MiUnloadSystemImage.c)
 * Callees:
 *     MiUnlockPagedAddress @ 0x1402EE5C4 (MiUnlockPagedAddress.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreePatchTableProtos(PVOID P)
{
  unsigned __int64 v1; // rbx
  unsigned __int64 v3; // rdi

  v1 = 0LL;
  v3 = 8LL * (((unsigned int)dword_140C694FC >> 12) + ((dword_140C694FC & 0xFFF) != 0));
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
