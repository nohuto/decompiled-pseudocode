/*
 * XREFs of HvpAllocateBin @ 0x140723D8C
 * Callers:
 *     HvpRemapAndEnlistHiveBins @ 0x14065702C (HvpRemapAndEnlistHiveBins.c)
 *     HvpAddBin @ 0x140721E28 (HvpAddBin.c)
 *     HvpDropPagedBins @ 0x14079FB58 (HvpDropPagedBins.c)
 *     HvpAddDummyBinToHive @ 0x140873C98 (HvpAddDummyBinToHive.c)
 *     HvpMapHiveImage @ 0x140873EE4 (HvpMapHiveImage.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HvpAllocateBin(__int64 a1, __int64 a2, int a3, unsigned int a4, __int64 *a5)
{
  __int64 (__fastcall *v5)(__int64, __int64, _QWORD); // rax
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rax

  v5 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(a1 + 24);
  v6 = 0;
  v7 = (unsigned int)a2;
  LOBYTE(a2) = a3 == 0;
  v8 = v5(v7, a2, a4);
  if ( v8 )
    *a5 = v8;
  else
    return (unsigned int)-1073741670;
  return v6;
}
