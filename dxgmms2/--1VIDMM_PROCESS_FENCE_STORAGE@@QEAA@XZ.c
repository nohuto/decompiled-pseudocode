/*
 * XREFs of ??1VIDMM_PROCESS_FENCE_STORAGE@@QEAA@XZ @ 0x1C00B3050
 * Callers:
 *     ??_GVIDMM_PROCESS_FENCE_STORAGE@@QEAAPEAXI@Z @ 0x1C002F878 (--_GVIDMM_PROCESS_FENCE_STORAGE@@QEAAPEAXI@Z.c)
 *     ??1VIDMM_PROCESS@@QEAA@XZ @ 0x1C00944F0 (--1VIDMM_PROCESS@@QEAA@XZ.c)
 * Callees:
 *     ??_GVIDMM_FENCE_STORAGE_PAGE@@QEAAPEAXI@Z @ 0x1C00173A0 (--_GVIDMM_FENCE_STORAGE_PAGE@@QEAAPEAXI@Z.c)
 */

void __fastcall VIDMM_PROCESS_FENCE_STORAGE::~VIDMM_PROCESS_FENCE_STORAGE(VIDMM_PROCESS_FENCE_STORAGE *this)
{
  VIDMM_FENCE_STORAGE_PAGE **v2; // rbx
  VIDMM_FENCE_STORAGE_PAGE *v3; // rcx
  VIDMM_FENCE_STORAGE_PAGE **v4; // rbx
  VIDMM_FENCE_STORAGE_PAGE *v5; // rcx
  VIDMM_FENCE_STORAGE_PAGE **v6; // rbx
  VIDMM_FENCE_STORAGE_PAGE *v7; // rcx
  VIDMM_FENCE_STORAGE_PAGE *v8; // rax
  VIDMM_FENCE_STORAGE_PAGE *v9; // rax
  VIDMM_FENCE_STORAGE_PAGE *v10; // rax

  v2 = (VIDMM_FENCE_STORAGE_PAGE **)((char *)this + 8);
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == (VIDMM_FENCE_STORAGE_PAGE *)v2 )
      break;
    if ( *((VIDMM_FENCE_STORAGE_PAGE ***)v3 + 1) != v2
      || (v9 = *(VIDMM_FENCE_STORAGE_PAGE **)v3, *(VIDMM_FENCE_STORAGE_PAGE **)(*(_QWORD *)v3 + 8LL) != v3) )
    {
LABEL_11:
      __fastfail(3u);
    }
    *v2 = v9;
    *((_QWORD *)v9 + 1) = v2;
    VIDMM_FENCE_STORAGE_PAGE::`scalar deleting destructor'(v3);
  }
  v4 = (VIDMM_FENCE_STORAGE_PAGE **)((char *)this + 24);
  while ( 1 )
  {
    v5 = *v4;
    if ( *v4 == (VIDMM_FENCE_STORAGE_PAGE *)v4 )
      break;
    if ( *((VIDMM_FENCE_STORAGE_PAGE ***)v5 + 1) != v4 )
      goto LABEL_11;
    v8 = *(VIDMM_FENCE_STORAGE_PAGE **)v5;
    if ( *(VIDMM_FENCE_STORAGE_PAGE **)(*(_QWORD *)v5 + 8LL) != v5 )
      goto LABEL_11;
    *v4 = v8;
    *((_QWORD *)v8 + 1) = v4;
    VIDMM_FENCE_STORAGE_PAGE::`scalar deleting destructor'(v5);
  }
  v6 = (VIDMM_FENCE_STORAGE_PAGE **)((char *)this + 40);
  while ( 1 )
  {
    v7 = *v6;
    if ( *v6 == (VIDMM_FENCE_STORAGE_PAGE *)v6 )
      break;
    if ( *((VIDMM_FENCE_STORAGE_PAGE ***)v7 + 1) != v6 )
      goto LABEL_11;
    v10 = *(VIDMM_FENCE_STORAGE_PAGE **)v7;
    if ( *(VIDMM_FENCE_STORAGE_PAGE **)(*(_QWORD *)v7 + 8LL) != v7 )
      goto LABEL_11;
    *v6 = v10;
    *((_QWORD *)v10 + 1) = v6;
    VIDMM_FENCE_STORAGE_PAGE::`scalar deleting destructor'(v7);
  }
}
