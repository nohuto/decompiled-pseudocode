/*
 * XREFs of ?ReclaimBlock@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C0102D14
 * Callers:
 *     ?ReclaimResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0085DF0 (-ReclaimResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 */

void __fastcall VIDMM_LINEAR_POOL::ReclaimBlock(VIDMM_LINEAR_POOL *this, _QWORD *a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  char *v8; // rbx
  __int64 v9; // rcx

  if ( !*((_DWORD *)this + 4) )
  {
    WdLogSingleEntry1(1LL, 2320LL);
    DxgkLogInternalTriageEvent(v4, 0x40000LL);
  }
  --*((_DWORD *)this + 4);
  v5 = a2 + 3;
  v6 = a2[3];
  if ( *(_QWORD **)(v6 + 8) != a2 + 3
    || (v7 = (_QWORD *)a2[4], (_QWORD *)*v7 != v5)
    || (*v7 = v6,
        v8 = (char *)this + 56,
        *(_QWORD *)(v6 + 8) = v7,
        v9 = *(_QWORD *)v8,
        *(char **)(*(_QWORD *)v8 + 8LL) != v8) )
  {
    __fastfail(3u);
  }
  a2[4] = v8;
  *v5 = v9;
  *(_QWORD *)(v9 + 8) = v5;
  *(_QWORD *)v8 = v5;
  *((_BYTE *)a2 + 56) = 3;
}
