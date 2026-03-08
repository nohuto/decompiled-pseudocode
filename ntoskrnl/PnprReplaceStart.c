/*
 * XREFs of PnprReplaceStart @ 0x140963EEC
 * Callers:
 *     PnprInitiateReplaceOperation @ 0x140A99894 (PnprInitiateReplaceOperation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 PnprReplaceStart()
{
  _DWORD *v0; // rdi
  int v1; // ecx
  int v2; // r8d
  __int64 v3; // rdx
  int v4; // ecx
  int v5; // eax
  __int64 v6; // rbx
  __int64 v7; // rcx
  int v8; // eax
  int v9; // eax
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  v11[0] = 0LL;
  v0 = (_DWORD *)(PnprContext + 72);
  v11[1] = *(_QWORD *)(PnprContext + 16);
  v11[2] = *(_QWORD *)(PnprContext + 48);
  v1 = 0;
  if ( (*(_DWORD *)(PnprContext + 33184) & 2) != 0 )
  {
    v1 = 1;
    LODWORD(v11[0]) = 1;
  }
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 )
    LODWORD(v11[0]) = v1 | 2;
  v2 = ((__int64 (__fastcall *)(_QWORD *, __int64))off_140C01A88[0])(v11, PnprContext + 33160);
  if ( v2 >= 0 )
  {
    v6 = PnprContext;
    if ( *(_DWORD *)(*(_QWORD *)(PnprContext + 24) + 4LL) )
    {
      memset(v0, 0, 0x40uLL);
      *v0 = 64;
      v0[1] = 2;
      *((_QWORD *)v0 + 1) = *(_QWORD *)(v6 + 8);
      *((_QWORD *)v0 + 2) = *(_QWORD *)(v6 + 40);
      *((_QWORD *)v0 + 3) = *(_QWORD *)(v6 + 16);
      *((_QWORD *)v0 + 4) = *(_QWORD *)(v6 + 48);
      *((_QWORD *)v0 + 5) = *(_QWORD *)(v6 + 24);
      *((_QWORD *)v0 + 6) = *(_QWORD *)(v6 + 56);
      *((_QWORD *)v0 + 7) = PnprMapTargetSparePhysicalPages;
      v2 = (*(__int64 (__fastcall **)(_DWORD *, __int64))(v6 + 33200))(v0, v6 + 33168);
      if ( v2 < 0 )
      {
        v7 = PnprContext;
        v8 = *(_DWORD *)(PnprContext + 33272);
        if ( !v8 )
          v8 = 2762;
        *(_DWORD *)(PnprContext + 33272) = v8;
        v9 = *(_DWORD *)(v7 + 33276);
        if ( !v9 )
          v9 = 8;
        *(_DWORD *)(v7 + 33276) = v9;
      }
    }
  }
  else
  {
    v3 = PnprContext;
    v4 = *(_DWORD *)(PnprContext + 33272);
    if ( !v4 )
      v4 = 2736;
    v5 = *(_DWORD *)(PnprContext + 33276);
    *(_DWORD *)(PnprContext + 33272) = v4;
    if ( !v5 )
      v5 = 6;
    *(_DWORD *)(v3 + 33276) = v5;
  }
  return (unsigned int)v2;
}
