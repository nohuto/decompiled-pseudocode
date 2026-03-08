/*
 * XREFs of ?CopyFromBuffer@DXGDIAGNOSTICS@@AEBAXIIQEAE@Z @ 0x1C004FC74
 * Callers:
 *     ?ReadDiagnosticsInternal@DXGDIAGNOSTICS@@AEBAJIIQEAEPEAI@Z @ 0x1C004FFF8 (-ReadDiagnosticsInternal@DXGDIAGNOSTICS@@AEBAJIIQEAEPEAI@Z.c)
 * Callees:
 *     memmove @ 0x1C0027340 (memmove.c)
 */

void __fastcall DXGDIAGNOSTICS::CopyFromBuffer(
        DXGDIAGNOSTICS *this,
        unsigned int a2,
        size_t a3,
        unsigned __int8 *const a4)
{
  __int64 v4; // rdi
  unsigned int v6; // edx
  __int64 v8; // rcx
  int v9; // ebp
  int v10; // eax
  const void *v11; // rdx
  unsigned __int8 *v12; // rcx

  v4 = a2;
  v6 = *((_DWORD *)this + 4);
  v8 = *((_QWORD *)this + 7);
  v9 = v4 + a3;
  if ( (int)v4 + (int)a3 <= v6 )
  {
    v11 = (const void *)(v4 + v8);
    a3 = (unsigned int)a3;
    v12 = a4;
  }
  else
  {
    memmove(a4, (const void *)(v4 + v8), v6 - (unsigned int)v4);
    v10 = *((_DWORD *)this + 4);
    v11 = (const void *)*((_QWORD *)this + 7);
    v12 = &a4[(unsigned int)(v10 - v4)];
    a3 = (unsigned int)(v9 - v10);
  }
  memmove(v12, v11, a3);
}
