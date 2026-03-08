/*
 * XREFs of ??4SinkRenderParameters@CCpuClipAntialiasSinkContext@@QEAAAEAU01@$$QEAU01@@Z @ 0x1801FBE28
 * Callers:
 *     ??$_Swap_ranges_unchecked@V?$basic_iterator@USinkRenderParameters@CCpuClipAntialiasSinkContext@@@detail@@V12@@std@@YA?AV?$basic_iterator@USinkRenderParameters@CCpuClipAntialiasSinkContext@@@detail@@V12@V12@0@Z @ 0x1801FB06C (--$_Swap_ranges_unchecked@V-$basic_iterator@USinkRenderParameters@CCpuClipAntialiasSinkContext@@.c)
 *     ??$move@V?$move_iterator@PEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@@std@@V?$checked_array_iterator@PEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@@stdext@@V?$move_iterator@PEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@@0@0V12@@Z @ 0x1801FB524 (--$move@V-$move_iterator@PEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@@std@@V-$checked.c)
 *     ??$move_backward@V?$move_iterator@PEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@@std@@V?$checked_array_iterator@PEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@@stdext@@V?$move_iterator@PEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@@0@0V12@@Z @ 0x1801FB804 (--$move_backward@V-$move_iterator@PEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@@std@@V.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800DB0E4 (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCpuClipAntialiasSinkContext::SinkRenderParameters::operator=(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  volatile signed __int32 *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx

  v2 = *a2;
  *a2 = 0LL;
  v5 = *(volatile signed __int32 **)a1;
  *(_QWORD *)a1 = v2;
  if ( v5 )
    CMILRefCountBaseT<IMILRefCount>::InternalRelease(v5);
  *(_DWORD *)(a1 + 8) = *((_DWORD *)a2 + 2);
  *(_DWORD *)(a1 + 12) = *((_DWORD *)a2 + 3);
  v6 = a2[2];
  a2[2] = 0LL;
  v7 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = v6;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  v8 = a2[3];
  a2[3] = 0LL;
  v9 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 24) = v8;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  *(_BYTE *)(a1 + 32) = *((_BYTE *)a2 + 32);
  *(_BYTE *)(a1 + 33) = *((_BYTE *)a2 + 33);
  return a1;
}
