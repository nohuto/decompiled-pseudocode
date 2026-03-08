/*
 * XREFs of ?AcquireGPUResourcesFromPreferredSegmentSet@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@KK@Z @ 0x1C008DEF0
 * Callers:
 *     ?FindResourcesForOneAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NI_K@Z @ 0x1C008DE1C (-FindResourcesForOneAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTIO.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     ?ValidateSegmentForAcquisitionOfResource@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@IW4_VIDMM_PLACEMENT_RESTRICTION@@E@Z @ 0x1C008E0D8 (-ValidateSegmentForAcquisitionOfResource@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@IW4_VIDMM_P.c)
 */

__int64 __fastcall VIDMM_GLOBAL::AcquireGPUResourcesFromPreferredSegmentSet(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5)
{
  int v8; // ebp
  bool v9; // r12
  unsigned int v10; // r13d
  __int64 v11; // rsi
  unsigned int v12; // eax
  int v13; // eax
  int v14; // ecx
  bool v15; // al
  __int64 v16; // r14
  __int64 v17; // r9
  bool v18; // dl
  __int64 v19; // rcx
  __int64 result; // rax
  __int64 v21; // rcx
  int v22; // ecx
  int v23; // [rsp+20h] [rbp-58h]
  unsigned int v24; // [rsp+90h] [rbp+18h]
  bool v25; // [rsp+98h] [rbp+20h]

  v8 = -1071775488;
  v9 = ((a3 - 3) & 0xFFFFFFFA) == 0
    && a3 != 8
    && ((v22 = **(_DWORD **)(a2 + 536), (v22 & 0x20000000) == 0) || v22 >= 0)
    && (v22 & 0x80000) == 0;
  if ( !*(_BYTE *)(a1 + 7152) || v9 )
    v10 = 2;
  else
    v10 = 0;
  v11 = *(_QWORD *)(a1 + 40224) + 1616LL * (*(_DWORD *)(a2 + 68) & 0x3F);
  do
  {
    LOBYTE(v12) = 0;
    v24 = 0;
    do
    {
      v13 = *(_DWORD *)(a2 + 64) >> (6 * v12);
      v14 = v13 & 0x1F;
      v15 = (v13 & 0x20) == 0;
      v25 = v15;
      if ( *(_DWORD *)(a2 + 400) >= 0xA0000000 && *(_QWORD *)(a2 + 16) >= 0x1000000uLL )
        v25 = !v15;
      if ( v14 )
      {
        LOBYTE(v23) = 0;
        v16 = (unsigned int)(v14 + *(_DWORD *)(v11 + 28) - 1);
        v8 = VIDMM_GLOBAL::ValidateSegmentForAcquisitionOfResource(a1, a2, (unsigned int)v16, a3, v23);
        if ( v8 >= 0 )
        {
          if ( (*(_BYTE *)(v11 + 444) & 0xA) != 0
            && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 3712) + 8 * v16) + 80LL) & 1) != 0
            && (**(_DWORD **)(a2 + 536) & 0x8000) == 0 )
          {
            v16 = *(unsigned __int16 *)(v11 + 36);
          }
          v18 = v10 == 1 || v9;
          v19 = *(_QWORD *)(*(_QWORD *)(a1 + 3712) + 8 * v16);
          LOBYTE(v23) = v18;
          LOBYTE(v17) = v10 == 0;
          result = (*(__int64 (__fastcall **)(__int64, __int64, bool, __int64, int, unsigned int, __int64))(*(_QWORD *)v19 + 16LL))(
                     v19,
                     a2,
                     v25,
                     v17,
                     v23,
                     a3,
                     -1LL);
          v8 = result;
          if ( (int)result >= 0 )
            return result;
          if ( g_IsInternalReleaseOrDbg )
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v21) + 24) = v16;
        }
      }
      v12 = v24 + 1;
      v24 = v12;
    }
    while ( v12 <= a5 );
    if ( v8 >= 0 )
      break;
    ++v10;
  }
  while ( v10 <= 2 );
  return (unsigned int)v8;
}
