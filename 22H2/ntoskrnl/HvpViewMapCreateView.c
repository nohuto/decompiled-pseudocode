/*
 * XREFs of HvpViewMapCreateView @ 0x140722C04
 * Callers:
 *     HvpViewMapCreateViewsForRegion @ 0x140722968 (HvpViewMapCreateViewsForRegion.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x140723F20 (HvpViewMapPromoteRangeToMapping.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140201A30 (CmSiFreeMemory.c)
 *     CmSiProtectViewOfSection @ 0x140361F3C (CmSiProtectViewOfSection.c)
 *     CmSiMapViewOfSection @ 0x140361FF8 (CmSiMapViewOfSection.c)
 *     CmSiAllocateMemory @ 0x140362058 (CmSiAllocateMemory.c)
 *     CmSiUnmapViewOfSection @ 0x1403634A4 (CmSiUnmapViewOfSection.c)
 *     memset @ 0x140413800 (memset.c)
 */

__int64 __fastcall HvpViewMapCreateView(__int64 a1, LARGE_INTEGER a2, __int64 a3, _QWORD *a4)
{
  unsigned __int64 v6; // rdi
  PVOID Memory; // rax
  PVOID v10; // rbx
  ULONG_PTR v11; // rbp
  ULONG_PTR v12; // rcx
  NTSTATUS v13; // edi
  void *v15; // r8
  int v16; // [rsp+28h] [rbp-40h]
  __int64 v17; // [rsp+78h] [rbp+10h] BYREF

  LODWORD(v17) = 0;
  v6 = (unsigned __int64)(unsigned int)(a3 - a2.LowPart) >> 12;
  Memory = CmSiAllocateMemory(v6 + 72, 0x35384D43u);
  v10 = Memory;
  if ( Memory )
  {
    memset(Memory, 0, v6 + 72);
    *((_QWORD *)v10 + 4) = a3;
    *((LARGE_INTEGER *)v10 + 3) = a2;
    v11 = a3 - a2.QuadPart;
    v13 = CmSiMapViewOfSection(
            *(void **)a1,
            *(HANDLE **)(a1 + 24),
            a2,
            v11,
            ((*(_DWORD *)(a1 + 32) & 1) == 0) << 13,
            v16,
            (PVOID *)v10 + 7);
    if ( v13 >= 0 )
    {
      v13 = CmSiProtectViewOfSection(v12, *(void ***)(a1 + 24), *((void **)v10 + 7), v11, 1u, (ULONG *)&v17);
      if ( v13 >= 0 )
      {
        *a4 = v10;
        v10 = 0LL;
        v13 = 0;
      }
    }
    if ( v10 )
    {
      v15 = (void *)*((_QWORD *)v10 + 7);
      if ( v15 )
        CmSiUnmapViewOfSection(v12, *(HANDLE **)(a1 + 24), v15);
      CmSiFreeMemory((PPRIVILEGE_SET)v10);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v13;
}
