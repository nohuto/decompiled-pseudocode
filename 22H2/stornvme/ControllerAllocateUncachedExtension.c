/*
 * XREFs of ControllerAllocateUncachedExtension @ 0x1C000A324
 * Callers:
 *     NVMeHwFindAdapter @ 0x1C000A790 (NVMeHwFindAdapter.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C0005A70 (NVMeZeroMemory.c)
 */

char __fastcall ControllerAllocateUncachedExtension(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  void *UncachedExtension; // rax
  unsigned __int64 v6; // r8
  __int64 v7; // rax
  bool v8; // zf
  __int64 v9; // r8
  _QWORD *v10; // rcx
  __int64 v11; // rdx
  __int64 PhysicalAddress; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // [rsp+70h] [rbp+8h] BYREF
  int v19; // [rsp+80h] [rbp+18h]

  v18 = 0;
  v3 = *(_BYTE *)(a1 + 16) != 0 ? 0xFFFF5000 : 0;
  UncachedExtension = (void *)StorPortGetUncachedExtension(a1, a2, v3 + 86016);
  *(_QWORD *)(a1 + 1640) = UncachedExtension;
  if ( UncachedExtension )
  {
    NVMeZeroMemory(UncachedExtension, v3 + 86016);
    v6 = *(_QWORD *)(a1 + 1640);
    if ( *(_BYTE *)(a1 + 16) )
    {
      v6 = (v6 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      *(_QWORD *)(a1 + 1640) = v6;
    }
    *(_QWORD *)(a1 + 1624) = v6;
    *(_QWORD *)(a1 + 1632) = StorPortGetPhysicalAddress(a1, 0LL, v6, &v18);
    v7 = *(_QWORD *)(a1 + 1640) + 4096LL;
    v8 = *(_BYTE *)(a1 + 16) == 0;
    *(_QWORD *)(a1 + 936) = v7;
    v9 = v7 + 0x2000;
    *(_QWORD *)(a1 + 1640) = v7 + 0x2000;
    if ( v8 )
    {
      v10 = (_QWORD *)(a1 + 1048);
      v11 = 6LL;
      do
      {
        *v10 = *(_QWORD *)(a1 + 1640);
        v10 += 14;
        v9 = *(_QWORD *)(a1 + 1640) + 0x2000LL;
        *(_QWORD *)(a1 + 1640) = v9;
        --v11;
      }
      while ( v11 );
    }
    *(_QWORD *)(a1 + 1720) = v9;
    PhysicalAddress = StorPortGetPhysicalAddress(a1, 0LL, v9, &v18);
    v13 = *(_QWORD *)(a1 + 1640);
    *(_QWORD *)(a1 + 1728) = PhysicalAddress;
    v13 += 4096LL;
    v14 = (unsigned __int64)*(unsigned __int16 *)(a1 + 284) << 6;
    *(_QWORD *)(a1 + 296) = v13;
    v15 = v14 + v13;
    v8 = *(_BYTE *)(a1 + 16) == 0;
    *(_QWORD *)(a1 + 432) = v15;
    v16 = v15 + 4096;
    *(_QWORD *)(a1 + 1640) = v15 + 4096;
    if ( !v8 )
    {
      v17 = v15 + 12288;
      *(_QWORD *)(a1 + 1640) = v17;
      *(_QWORD *)(a1 + 784) = v17 - 344;
      *(_QWORD *)(a1 + 776) = v17 - 480;
      *(_QWORD *)(v17 - 480) = v16;
      **(_QWORD **)(a1 + 784) = v16 + 4096;
    }
    return 1;
  }
  else
  {
    *(_DWORD *)(a1 + 28) = 1;
    v19 = -1056964606;
    StorPortNotification(4109LL, a1, 0LL);
    return 0;
  }
}
