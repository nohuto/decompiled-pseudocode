/*
 * XREFs of ControllerAllocateUncachedExtension @ 0x1C000B2D0
 * Callers:
 *     NVMeHwFindAdapter @ 0x1C000ACD0 (NVMeHwFindAdapter.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C0005100 (NVMeZeroMemory.c)
 */

char __fastcall ControllerAllocateUncachedExtension(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  void *UncachedExtension; // rax
  unsigned __int64 v5; // r8
  __int64 v6; // rax
  bool v7; // zf
  __int64 v8; // r8
  _QWORD *v9; // rcx
  __int64 v10; // rdx
  __int64 PhysicalAddress; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v17; // rcx
  int v18; // [rsp+30h] [rbp+8h] BYREF

  v18 = 0;
  v3 = *(_BYTE *)(a1 + 20) != 0 ? 0xFFFF5000 : 0;
  UncachedExtension = (void *)StorPortGetUncachedExtension(a1, a2, v3 + 86016);
  *(_QWORD *)(a1 + 1656) = UncachedExtension;
  if ( UncachedExtension )
  {
    NVMeZeroMemory(UncachedExtension, v3 + 86016);
    v5 = *(_QWORD *)(a1 + 1656);
    if ( *(_BYTE *)(a1 + 20) )
    {
      v5 = (v5 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      *(_QWORD *)(a1 + 1656) = v5;
    }
    *(_QWORD *)(a1 + 1640) = v5;
    *(_QWORD *)(a1 + 1648) = StorPortGetPhysicalAddress(a1, 0LL, v5, &v18);
    v6 = *(_QWORD *)(a1 + 1656) + 4096LL;
    v7 = *(_BYTE *)(a1 + 20) == 0;
    *(_QWORD *)(a1 + 952) = v6;
    v8 = v6 + 0x2000;
    *(_QWORD *)(a1 + 1656) = v6 + 0x2000;
    if ( v7 )
    {
      v9 = (_QWORD *)(a1 + 1064);
      v10 = 6LL;
      do
      {
        *v9 = *(_QWORD *)(a1 + 1656);
        v9 += 14;
        v8 = *(_QWORD *)(a1 + 1656) + 0x2000LL;
        *(_QWORD *)(a1 + 1656) = v8;
        --v10;
      }
      while ( v10 );
    }
    *(_QWORD *)(a1 + 1736) = v8;
    PhysicalAddress = StorPortGetPhysicalAddress(a1, 0LL, v8, &v18);
    v12 = *(_QWORD *)(a1 + 1656);
    *(_QWORD *)(a1 + 1744) = PhysicalAddress;
    v12 += 4096LL;
    v13 = (unsigned __int64)*(unsigned __int16 *)(a1 + 300) << 6;
    *(_QWORD *)(a1 + 312) = v12;
    v14 = v13 + v12;
    v7 = *(_BYTE *)(a1 + 20) == 0;
    *(_QWORD *)(a1 + 448) = v14;
    v15 = v14 + 4096;
    *(_QWORD *)(a1 + 1656) = v14 + 4096;
    if ( !v7 )
    {
      v17 = v14 + 12288;
      *(_QWORD *)(a1 + 1656) = v17;
      *(_QWORD *)(a1 + 800) = v17 - 344;
      *(_QWORD *)(a1 + 792) = v17 - 480;
      *(_QWORD *)(v17 - 480) = v15;
      **(_QWORD **)(a1 + 800) = v15 + 4096;
    }
    return 1;
  }
  else
  {
    *(_DWORD *)(a1 + 36) = 1;
    return 0;
  }
}
