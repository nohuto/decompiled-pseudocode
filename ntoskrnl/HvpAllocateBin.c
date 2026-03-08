/*
 * XREFs of HvpAllocateBin @ 0x140730410
 * Callers:
 *     HvpAddBin @ 0x14072F9F0 (HvpAddBin.c)
 *     HvpRemapAndEnlistHiveBins @ 0x1407A488C (HvpRemapAndEnlistHiveBins.c)
 *     HvpDropPagedBins @ 0x140820B14 (HvpDropPagedBins.c)
 *     HvpAddDummyBinToHive @ 0x140A1AF8C (HvpAddDummyBinToHive.c)
 *     HvpMapHiveImage @ 0x140A1B050 (HvpMapHiveImage.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     HvpAllocateNonPagedBin @ 0x140A274CC (HvpAllocateNonPagedBin.c)
 */

__int64 __fastcall HvpAllocateBin(__int64 a1, __int64 a2, int a3, unsigned int a4, __int64 *a5)
{
  __int64 (__fastcall *v5)(__int64, __int64, _QWORD); // rax
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rcx

  if ( (*(_DWORD *)(a1 + 160) & 0x2000000) != 0 )
  {
    return (unsigned int)HvpAllocateNonPagedBin(a1, a2, a5);
  }
  else
  {
    v5 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(a1 + 24);
    v6 = 0;
    v7 = (unsigned int)a2;
    LOBYTE(a2) = a3 == 0;
    v8 = v5(v7, a2, a4);
    if ( v8 )
      *a5 = v8;
    else
      return (unsigned int)-1073741670;
  }
  return v6;
}
