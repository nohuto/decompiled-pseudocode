/*
 * XREFs of ?Copy@CCD_TOPOLOGY@@QEAAJPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C03B6434
 * Callers:
 *     DxgkCopyPathsModality @ 0x1C02FD660 (DxgkCopyPathsModality.c)
 * Callees:
 *     memmove @ 0x1C0027340 (memmove.c)
 */

__int64 __fastcall CCD_TOPOLOGY::Copy(CCD_TOPOLOGY *this, struct D3DKMT_GETPATHSMODALITY *a2)
{
  __int64 v4; // rax
  unsigned __int16 v5; // cx
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int i; // edx
  __int64 v9; // rax

  if ( !a2 )
    return 3221225485LL;
  v4 = *((_QWORD *)this + 8);
  if ( !v4 )
    return 3221225507LL;
  v5 = *((_WORD *)a2 + 10);
  if ( *(_WORD *)(v4 + 22) < v5 )
    return 3221225507LL;
  *(_WORD *)(v4 + 20) = v5;
  *(_DWORD *)(*((_QWORD *)this + 8) + 32LL) = *((_DWORD *)a2 + 8);
  *(_DWORD *)(*((_QWORD *)this + 8) + 24LL) = *((_DWORD *)a2 + 6);
  *(_DWORD *)(*((_QWORD *)this + 8) + 36LL) = *((_DWORD *)a2 + 9);
  v6 = *((_QWORD *)this + 8);
  *(_OWORD *)v6 = *(_OWORD *)a2;
  *(_DWORD *)(v6 + 16) = *((_DWORD *)a2 + 4);
  memmove(
    (void *)(*((_QWORD *)this + 8) + 56LL),
    (char *)a2 + 56,
    296LL * *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL));
  v7 = *((_QWORD *)this + 8);
  for ( i = 0; i < *(unsigned __int16 *)(v7 + 20); v7 = *((_QWORD *)this + 8) )
  {
    v9 = i++;
    *(_QWORD *)(296 * v9 + v7 + 304) = 0LL;
  }
  return 0LL;
}
