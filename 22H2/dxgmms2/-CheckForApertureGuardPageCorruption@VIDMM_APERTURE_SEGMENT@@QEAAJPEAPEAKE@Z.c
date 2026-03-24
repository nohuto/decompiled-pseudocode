/*
 * XREFs of ?CheckForApertureGuardPageCorruption@VIDMM_APERTURE_SEGMENT@@QEAAJPEAPEAKE@Z @ 0x1C0028144
 * Callers:
 *     ?ApertureCorruptionCheck@VIDMM_GLOBAL@@QEAAJE@Z @ 0x1C002361C (-ApertureCorruptionCheck@VIDMM_GLOBAL@@QEAAJE@Z.c)
 *     ?CheckForApertureGuardPageCorruption@VIDMM_SEGMENT@@QEAAJPEAPEAKE@Z @ 0x1C0028584 (-CheckForApertureGuardPageCorruption@VIDMM_SEGMENT@@QEAAJPEAPEAKE@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_APERTURE_SEGMENT::CheckForApertureGuardPageCorruption(
        VIDMM_APERTURE_SEGMENT *this,
        unsigned int **a2,
        __int64 a3)
{
  unsigned int *v3; // rax
  int v4; // ebx
  unsigned int *v7; // rdi
  __int64 v8; // rdx
  char *v9; // rdi
  __int64 v10; // rcx
  _QWORD *v11; // rax
  _DWORD *v12; // rdi
  __int64 i; // rcx
  __int64 result; // rax
  __int64 v15; // rax

  v3 = (unsigned int *)*((_QWORD *)this + 62);
  v4 = 0;
  v7 = v3;
  if ( !(_BYTE)a3 || !dword_1C00501C4 )
  {
    while ( *v7 == 1685217607 )
    {
      ++v7;
      if ( (unsigned int)++v4 >= 0x400 )
        return 0LL;
    }
    goto LABEL_18;
  }
  if ( *v3 != 1685217607 || (v7 = v3 + 1023, v3[1023] != 1685217607) || (v7 = v3 + 512, v3[512] != 1685217607) )
  {
LABEL_18:
    v15 = WdLogNewEntry5_WdAssertion(this, a2, a3);
    *(_QWORD *)(v15 + 24) = v7;
    *(_QWORD *)(v15 + 32) = this;
    WdLogEvent5_WdAssertion(v15);
    result = 2147483653LL;
    *a2 = v7;
    return result;
  }
  v8 = *((_QWORD *)this + 64);
  v9 = (char *)v3 + v8;
  v10 = *(_QWORD *)((char *)v3 + v8) - (_QWORD)ApertureCheckPattern;
  if ( !v10 )
    v10 = *((_QWORD *)v9 + 1) - qword_1C00500E8;
  if ( v10 )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdAssertion(v10, v8, a3);
    v11[4] = v9 + 16;
    v11[3] = v9;
    v11[5] = this;
    WdLogEvent5_WdAssertion(v11);
    dword_1C00501C4 = 0;
    v12 = (_DWORD *)*((_QWORD *)this + 62);
    for ( i = 1024LL; i; --i )
      *v12++ = 1685217607;
  }
  else
  {
    *((_QWORD *)this + 64) = v8 + 16;
    if ( (unsigned __int64)(v8 + 16) >= 0x1000 )
      *((_QWORD *)this + 64) = 0LL;
  }
  return 0LL;
}
