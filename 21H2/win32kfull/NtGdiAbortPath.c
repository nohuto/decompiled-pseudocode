/*
 * XREFs of NtGdiAbortPath @ 0x1C02ABD40
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015DA34 (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiAbortPath(HDC a1)
{
  DC *v1; // rcx
  unsigned int v2; // ebx
  int v3; // eax
  _QWORD v5[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v6[40]; // [rsp+30h] [rbp-28h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v5, a1);
  v1 = (DC *)v5[0];
  v2 = 0;
  if ( v5[0] )
  {
    if ( *(_QWORD *)(v5[0] + 200LL) )
    {
      v3 = *(_DWORD *)(v5[0] + 248LL);
      if ( (v3 & 2) != 0 )
      {
        *(_DWORD *)(v5[0] + 248LL) = v3 & 0xFFFFFFFD;
        v1 = (DC *)v5[0];
      }
      *((_DWORD *)v1 + 62) &= ~1u;
      DC::hpath(v1, 0LL);
    }
    v2 = 1;
  }
  else
  {
    EngSetLastError(6u);
  }
  MDCOBJ::~MDCOBJ((MDCOBJ *)v5);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v6);
  return v2;
}
