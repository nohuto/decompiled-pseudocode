/*
 * XREFs of ?MapAllPagingBuffers@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00B55E4
 * Callers:
 *     ?RestoreFromPurge@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00B5528 (-RestoreFromPurge@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VIDMM_GLOBAL::MapAllPagingBuffers(VIDMM_GLOBAL *this)
{
  __int64 i; // rsi
  __int64 v3; // rbp
  _QWORD *v4; // rdi
  __int64 v5; // rdx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 1754); i = (unsigned int)(i + 1) )
  {
    v3 = *((_QWORD *)this + i + 79);
    if ( (*(_DWORD *)(v3 + 32) & 4) == 0 )
    {
      v4 = *(_QWORD **)(v3 + 96);
      while ( v4 != (_QWORD *)(v3 + 96) )
      {
        v5 = v4[7];
        v4 = (_QWORD *)*v4;
        if ( v5 )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v5 + 120) + 160LL))(*(_QWORD *)(v5 + 120));
      }
      *(_DWORD *)(v3 + 32) |= 4u;
    }
  }
  *((_DWORD *)this + 10042) = 1;
}
