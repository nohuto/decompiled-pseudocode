/*
 * XREFs of MiSystemVaToDynamicBitmap @ 0x14021055C
 * Callers:
 *     MiMakeSystemRangeAvailable @ 0x14020F62C (MiMakeSystemRangeAvailable.c)
 *     MiObtainSystemVa @ 0x140210534 (MiObtainSystemVa.c)
 *     MiIsSystemVaAllocated @ 0x140634AE4 (MiIsSystemVaAllocated.c)
 *     MiMarkSystemVaAllocated @ 0x140634E98 (MiMarkSystemVaAllocated.c)
 *     MiBuildPagedPool @ 0x140B38784 (MiBuildPagedPool.c)
 *     MiInitializeSystemPtes @ 0x140B391FC (MiInitializeSystemPtes.c)
 *     MiInitializeDriverImages @ 0x140B3B090 (MiInitializeDriverImages.c)
 *     MiInitializeKernelStacks @ 0x140B3B3A4 (MiInitializeKernelStacks.c)
 *     MiInitializeNonPagedPool @ 0x140B5EDA4 (MiInitializeNonPagedPool.c)
 *     MiInitializeDynamicRegion @ 0x140B6B4DC (MiInitializeDynamicRegion.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall MiSystemVaToDynamicBitmap(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v8; // ecx
  int v9; // ecx

  v1 = a1 - 1;
  if ( !v1 )
    return (__int64 *)&unk_140C66AB0;
  v2 = v1 - 5;
  if ( !v2 )
    return &qword_140C66AF8;
  v3 = v2 - 2;
  if ( !v3 )
    return &qword_140C66B40;
  v4 = v3 - 1;
  if ( !v4 )
    return &qword_140C66A20;
  v5 = v4 - 3;
  if ( !v5 )
    return &qword_140C66A68;
  v6 = v5 - 1;
  if ( !v6 )
    return &qword_140C66A20;
  v8 = v6 - 1;
  if ( !v8 )
    return &qword_140C66990;
  v9 = v8 - 1;
  if ( !v9 )
    return (__int64 *)&unk_140C66B88;
  if ( v9 == 1 )
    return (__int64 *)&unk_140C669D8;
  return 0LL;
}
