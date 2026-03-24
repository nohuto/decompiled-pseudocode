/*
 * XREFs of MiSystemVaToDynamicBitmap @ 0x14030B7CC
 * Callers:
 *     MiMakeSystemRangeAvailable @ 0x14027DB94 (MiMakeSystemRangeAvailable.c)
 *     MiObtainSystemVa @ 0x14030AF30 (MiObtainSystemVa.c)
 *     MiIsSystemVaAllocated @ 0x14053D854 (MiIsSystemVaAllocated.c)
 *     MiMarkSystemVaAllocated @ 0x14053DBB0 (MiMarkSystemVaAllocated.c)
 *     MiInitializeKernelStacks @ 0x140A4D410 (MiInitializeKernelStacks.c)
 *     MiInitializeSystemPtes @ 0x140A4E1C4 (MiInitializeSystemPtes.c)
 *     MiInitializeNonPagedPool @ 0x140A4E39C (MiInitializeNonPagedPool.c)
 *     MiBuildPagedPool @ 0x140A4E614 (MiBuildPagedPool.c)
 *     MiInitializeDynamicRegion @ 0x140A4E6D4 (MiInitializeDynamicRegion.c)
 *     MiInitializeDriverImages @ 0x140A4E6F4 (MiInitializeDriverImages.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall MiSystemVaToDynamicBitmap(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx

  v1 = a1 - 6;
  if ( !v1 )
    return &qword_140C4E170;
  v2 = v1 - 2;
  if ( !v2 )
    return &qword_140C4E1B8;
  v3 = v2 - 1;
  if ( !v3 )
    return &qword_140C4E098;
  v5 = v3 - 2;
  if ( !v5 )
    return (__int64 *)&unk_140C4E128;
  v6 = v5 - 1;
  if ( !v6 )
    return &qword_140C4E0E0;
  v7 = v6 - 1;
  if ( !v7 )
    return &qword_140C4E098;
  v8 = v7 - 1;
  if ( !v8 )
    return &qword_140C4E050;
  if ( v8 == 1 )
    return (__int64 *)&unk_140C4E200;
  return 0LL;
}
