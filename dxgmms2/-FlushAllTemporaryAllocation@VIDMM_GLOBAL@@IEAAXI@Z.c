/*
 * XREFs of ?FlushAllTemporaryAllocation@VIDMM_GLOBAL@@IEAAXI@Z @ 0x1C00E3264
 * Callers:
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C008D8B0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::FlushAllTemporaryAllocation(VIDMM_GLOBAL *this, int a2)
{
  char *v2; // rsi
  char *v4; // rbx
  VIDMM_GLOBAL *v5; // rbp
  char *v6; // r14
  char *v7; // rdi
  int v8; // eax
  char **v9; // rax

  v2 = (char *)this + 3768;
  v4 = (char *)*((_QWORD *)this + 471);
  v5 = this;
  while ( v4 != v2 )
  {
    v6 = v4 - 208;
    v7 = v4;
    v8 = *((_DWORD *)v4 - 35);
    v4 = *(char **)v4;
    if ( (v8 & 0x3F) == a2 )
    {
      if ( *((char **)v4 + 1) != v7 )
        goto LABEL_11;
      v9 = (char **)*((_QWORD *)v7 + 1);
      if ( *v9 != v7 )
        goto LABEL_11;
      *v9 = v4;
      *((_QWORD *)v4 + 1) = v9;
      if ( g_IsInternalReleaseOrDbg )
        *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = v6;
      this = (VIDMM_GLOBAL *)*((_QWORD *)v5 + 474);
      if ( *(VIDMM_GLOBAL **)this != (VIDMM_GLOBAL *)((char *)v5 + 3784) )
LABEL_11:
        __fastfail(3u);
      *(_QWORD *)v7 = (char *)v5 + 3784;
      *((_QWORD *)v7 + 1) = this;
      *(_QWORD *)this = v7;
      *((_QWORD *)v5 + 474) = v7;
    }
  }
}
