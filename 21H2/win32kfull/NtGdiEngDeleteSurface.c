/*
 * XREFs of NtGdiEngDeleteSurface @ 0x1C014E980
 * Callers:
 *     <none>
 * Callees:
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0027A2C (--1SURFREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0028338 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiEngDeleteSurface(HSURF a1)
{
  unsigned int v2; // ebx
  void *v3; // rcx
  _BYTE v5[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+40h] [rbp-18h]

  SURFREF::SURFREF((SURFREF *)v5, a1);
  v2 = 0;
  if ( !v6 )
    goto LABEL_8;
  if ( (*(_DWORD *)(v6 + 112) & 0x40000) == 0 )
  {
    DEC_SHARE_REF_CNT(v6);
LABEL_8:
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v5);
    return v2;
  }
  v3 = *(void **)(v6 + 144);
  if ( v3 )
  {
    MmUnsecureVirtualMemory(v3);
    *(_QWORD *)(v6 + 144) = 0LL;
  }
  SURFREF::~SURFREF((SURFREF *)v5);
  if ( EngDeleteSurface(a1) )
    return 1;
  return v2;
}
