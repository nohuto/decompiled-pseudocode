/*
 * XREFs of ?TrimAllMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00FFF60
 * Callers:
 *     ?Defragment@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1C00E16DC (-Defragment@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 *     ?MoveResourcesSysCommandHelper@VIDMM_GLOBAL@@QEAAJIW4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@11W4VIDMM_DEFRAGMENT_DIRECTION@@@Z @ 0x1C00E6064 (-MoveResourcesSysCommandHelper@VIDMM_GLOBAL@@QEAAJIW4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VIDMM_SEGMENT::TrimAllMarkedForEvictionAllocations(VIDMM_SEGMENT *this, __int64 a2, __int64 a3)
{
  _QWORD *i; // rbx
  int v5; // [rsp+20h] [rbp-28h]

  for ( i = (_QWORD *)((char *)this + 176);
        (_QWORD *)*i != i;
        (*(void (__fastcall **)(VIDMM_SEGMENT *, __int64, __int64, _QWORD, int, _QWORD))(*(_QWORD *)this + 48LL))(
          this,
          *i - 408LL,
          a3,
          0LL,
          v5,
          0LL) )
  {
    LOBYTE(a3) = 1;
    LOBYTE(v5) = 0;
  }
}
