/*
 * XREFs of ?OldDefragment@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00FE4C8
 * Callers:
 *     ?Defragment@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1C00E16DC (-Defragment@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C002E4FC (McTemplateK0p_EtwWriteTransfer.c)
 */

void __fastcall VIDMM_SEGMENT::OldDefragment(VIDMM_SEGMENT *this, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbx
  _QWORD *v4; // rax
  _QWORD *v5; // rdi
  __int64 v6; // rcx
  int v7; // [rsp+20h] [rbp-28h]

  v3 = (_QWORD *)((char *)this + 176);
  while ( 1 )
  {
    v4 = (_QWORD *)*v3;
    if ( (_QWORD *)*v3 == v3 )
      break;
    v5 = v4 - 51;
    LOBYTE(a3) = 1;
    LOBYTE(v7) = 0;
    (*(void (__fastcall **)(_QWORD, _QWORD *, __int64, _QWORD, int, _QWORD))(*(_QWORD *)*(v4 - 36) + 48LL))(
      *(v4 - 36),
      v4 - 51,
      a3,
      0LL,
      v7,
      0LL);
    if ( bTracingEnabled )
    {
      if ( (byte_1C00769C1 & 1) != 0 )
        McTemplateK0p_EtwWriteTransfer(v6, &EventEvictAllocation, a3, v5);
    }
  }
}
