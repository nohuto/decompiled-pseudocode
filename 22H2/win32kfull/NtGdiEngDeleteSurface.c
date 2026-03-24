/*
 * XREFs of NtGdiEngDeleteSurface @ 0x1C015DBE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0082F38 (--1SURFREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C00838AC (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C01698C8 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiEngDeleteSurface(HSURF a1)
{
  __int64 v2; // rdx
  unsigned int v3; // ebx
  void *v4; // rcx
  _BYTE v6[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v7; // [rsp+40h] [rbp-18h]

  SURFREF::SURFREF((SURFREF *)v6, a1);
  v3 = 0;
  if ( !v7 )
    goto LABEL_8;
  if ( (*(_DWORD *)(v7 + 112) & 0x40000) == 0 )
  {
    DEC_SHARE_REF_CNT(v7, v2);
LABEL_8:
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v6);
    return v3;
  }
  v4 = *(void **)(v7 + 144);
  if ( v4 )
  {
    MmUnsecureVirtualMemory(v4);
    *(_QWORD *)(v7 + 144) = 0LL;
  }
  SURFREF::~SURFREF((SURFREF *)v6, v2);
  if ( EngDeleteSurface(a1) )
    return 1;
  return v3;
}
