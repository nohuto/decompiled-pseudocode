/*
 * XREFs of PnprCopyReservedMapping @ 0x1405607AC
 * Callers:
 *     PnprRecopyMirrorPages @ 0x140560F5C (PnprRecopyMirrorPages.c)
 * Callees:
 *     MiGetContainingPageTable @ 0x140289FE0 (MiGetContainingPageTable.c)
 *     MmGetPhysicalAddress @ 0x14030C850 (MmGetPhysicalAddress.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x1403A1EB0 (MmMapLockedPagesWithReservedMapping.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PnprGetPageDestination @ 0x140560B68 (PnprGetPageDestination.c)
 *     MmUnmapReservedMapping @ 0x14061C4D0 (MmUnmapReservedMapping.c)
 */

__int64 PnprCopyReservedMapping()
{
  __int64 v0; // r12
  __int64 v1; // rax
  __int64 v2; // r15
  __int64 v3; // r8
  __int64 v4; // r14
  unsigned int v5; // edi
  PHYSICAL_ADDRESS PhysicalAddress; // rbx
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r13
  unsigned __int64 ContainingPageTable; // rbx
  unsigned __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r13
  __int64 v15; // rsi
  PHYSICAL_ADDRESS v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rcx
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // r13
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rsi
  size_t v27; // rbx
  char *v28; // rdi
  char *v29; // rax
  __int64 v30; // rcx
  int v31; // eax
  int v32; // eax
  _QWORD v34[2]; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD Src[16]; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v36[16]; // [rsp+B8h] [rbp-50h] BYREF

  v34[0] = 0LL;
  v0 = *(_QWORD *)(PnprContext + 144);
  v1 = *(unsigned int *)(PnprContext + 180);
  v2 = 3 * v1;
  v3 = *(_QWORD *)(v0 + 24 * v1);
  v4 = v0 + 24 * v1;
  if ( (*(_BYTE *)(v3 + 10) & 1) != 0 )
    MmUnmapReservedMapping(*(PVOID *)(v4 + 8), 0x51706E50u, (PMDL)v3);
  memset(Src, 0, sizeof(Src));
  memset(v36, 0, sizeof(v36));
  v5 = 0;
  PhysicalAddress = MmGetPhysicalAddress((PVOID)(*(_QWORD *)(v0 + 8 * v2) & 0xFFFFFFFFFFFFF000uLL));
  if ( (int)((__int64 (__fastcall *)(_QWORD, _QWORD))PnprGetPageDestination)(
              (PHYSICAL_ADDRESS)PhysicalAddress.QuadPart,
              v34) >= 0
    && v34[0] != 0x7FFFFFFFFFFFFFFFLL )
  {
    v5 = 1;
    v36[0] = v34[0] >> 12;
    Src[0] = (unsigned __int64)PhysicalAddress.QuadPart >> 12;
  }
  v7 = *(_QWORD *)(v4 + 8);
  v8 = v7 + 0x10000;
  while ( v7 < v8 )
  {
    ContainingPageTable = MiGetContainingPageTable(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( !v5 || ContainingPageTable != Src[v5 - 1] )
    {
      v10 = ContainingPageTable << 12;
      if ( (int)PnprGetPageDestination(v10, v34) >= 0 && v34[0] != 0x7FFFFFFFFFFFFFFFLL )
      {
        if ( v5 >= 0x10 )
          return 3221225485LL;
        v11 = v5;
        v12 = v34[0] >> 12;
        ++v5;
        Src[v11] = v10 >> 12;
        v36[v11] = v12;
      }
    }
    v7 += 4096LL;
  }
  v13 = *(unsigned int *)(PnprContext + 180);
  v14 = *(_QWORD *)(PnprContext + 136);
  v15 = 3 * v13;
  v16 = MmGetPhysicalAddress((PVOID)(*(_QWORD *)(v14 + 24 * v13) & 0xFFFFFFFFFFFFF000uLL));
  if ( (int)((__int64 (__fastcall *)(_QWORD, _QWORD))PnprGetPageDestination)((PHYSICAL_ADDRESS)v16.QuadPart, v34) >= 0
    && v34[0] != 0x7FFFFFFFFFFFFFFFLL )
  {
    if ( v5 >= 0x10 )
      return 3221225485LL;
    v17 = v5;
    v18 = v34[0] >> 12;
    ++v5;
    Src[v17] = (unsigned __int64)v16.QuadPart >> 12;
    v36[v17] = v18;
  }
  v19 = *(_QWORD *)(v14 + 8 * v15 + 8);
  v20 = v19 + 0x10000;
  while ( v19 < v20 )
  {
    v21 = MiGetContainingPageTable(((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( v5 > 0x10 )
      return 3221225485LL;
    if ( !v5 || v21 != Src[v5 - 1] )
    {
      v22 = v21 << 12;
      if ( (int)PnprGetPageDestination(v22, v34) >= 0 && v34[0] != 0x7FFFFFFFFFFFFFFFLL )
      {
        if ( v5 >= 0x10 )
          return 3221225485LL;
        v23 = v5;
        v24 = v34[0] >> 12;
        ++v5;
        Src[v23] = v22 >> 12;
        v36[v23] = v24;
      }
    }
    v19 += 4096LL;
  }
  if ( !v5 )
    return 0LL;
  v25 = *(_QWORD *)(v0 + 8 * v2);
  v26 = v5;
  *(_DWORD *)(v25 + 40) = v5 << 13;
  *(_QWORD *)v25 = 0LL;
  *(_WORD *)(v25 + 10) = 0;
  v27 = 8LL * v5;
  *(_QWORD *)(v25 + 32) = 0LL;
  *(_DWORD *)(v25 + 44) = 0;
  *(_WORD *)(v25 + 8) = 8 * (2 * v5 + 6);
  v28 = (char *)(*(_QWORD *)(v0 + 8 * v2) + 48LL);
  memmove(v28, Src, v27);
  memmove(&v28[v27], v36, v27);
  *(_WORD *)(*(_QWORD *)(v0 + 8 * v2) + 10LL) |= *(_WORD *)(v0 + 8 * v2 + 16);
  v29 = (char *)MmMapLockedPagesWithReservedMapping(*(PVOID *)(v4 + 8), 0x51706E50u, *(PMDL *)(v0 + 8 * v2), MmCached);
  if ( v29 )
  {
    memmove(&v29[4096 * v26], v29, v26 << 12);
    return 0LL;
  }
  v30 = PnprContext;
  v31 = *(_DWORD *)(PnprContext + 33272);
  if ( !v31 )
    v31 = 5980;
  *(_DWORD *)(PnprContext + 33272) = v31;
  v32 = *(_DWORD *)(v30 + 33276);
  if ( !v32 )
    v32 = 10;
  *(_DWORD *)(v30 + 33276) = v32;
  return 3221225626LL;
}
