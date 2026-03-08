/*
 * XREFs of ?CheckForApertureGuardPageCorruption@VIDMM_APERTURE_SEGMENT@@QEAAJPEAPEAKE@Z @ 0x1C0032524
 * Callers:
 *     ?ApertureCorruptionCheck@VIDMM_GLOBAL@@QEAAJE@Z @ 0x1C002DBD8 (-ApertureCorruptionCheck@VIDMM_GLOBAL@@QEAAJE@Z.c)
 *     ?CheckForApertureGuardPageCorruption@VIDMM_SEGMENT@@QEAAJPEAPEAKE@Z @ 0x1C0032984 (-CheckForApertureGuardPageCorruption@VIDMM_SEGMENT@@QEAAJPEAPEAKE@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VIDMM_APERTURE_SEGMENT::CheckForApertureGuardPageCorruption(
        VIDMM_APERTURE_SEGMENT *this,
        unsigned int **a2,
        char a3)
{
  unsigned int *v3; // rax
  unsigned int *v5; // rdi
  __int64 v7; // rdx
  char *v8; // r14
  __int64 v9; // rcx
  _DWORD *v10; // rdi
  __int64 i; // rcx
  int v12; // eax
  __int64 result; // rax

  v3 = (unsigned int *)*((_QWORD *)this + 64);
  v5 = v3;
  if ( !a3 || !dword_1C0076274 )
  {
    v12 = 0;
    while ( *v5 == 1685217607 )
    {
      ++v5;
      if ( (unsigned int)++v12 >= 0x400 )
        return 0LL;
    }
    goto LABEL_19;
  }
  if ( *v3 != 1685217607 || (v5 = v3 + 1023, v3[1023] != 1685217607) || (v5 = v3 + 512, v3[512] != 1685217607) )
  {
LABEL_19:
    WdLogSingleEntry2(1LL, v5, this);
    ((void (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[86])(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Aperture guard page corruption found at 0x%p for segment 0x%p",
      v5,
      this,
      0LL,
      0LL,
      0LL);
    result = 2147483653LL;
    *a2 = v5;
    return result;
  }
  v7 = *((_QWORD *)this + 66);
  v8 = (char *)v3 + v7;
  v9 = *(_QWORD *)((char *)v3 + v7) - (_QWORD)ApertureCheckPattern;
  if ( !v9 )
    v9 = *((_QWORD *)v8 + 1) - qword_1C0076130;
  if ( v9 )
  {
    WdLogSingleEntry3(1LL, (char *)v3 + v7, v8 + 16, this);
    ((void (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[86])(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Aperture guard page corruption found between 0x%p and 0x%p for segment 0x%p",
      v8,
      v8 + 16,
      this,
      0LL,
      0LL);
    dword_1C0076274 = 0;
    v10 = (_DWORD *)*((_QWORD *)this + 64);
    for ( i = 1024LL; i; --i )
      *v10++ = 1685217607;
  }
  else
  {
    *((_QWORD *)this + 66) = v7 + 16;
    if ( (unsigned __int64)(v7 + 16) >= 0x1000 )
      *((_QWORD *)this + 66) = 0LL;
  }
  return 0LL;
}
