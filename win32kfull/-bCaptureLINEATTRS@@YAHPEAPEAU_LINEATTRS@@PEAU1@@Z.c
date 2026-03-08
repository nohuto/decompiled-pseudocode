/*
 * XREFs of ?bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z @ 0x1C02C9ED8
 * Callers:
 *     NtGdiEngStrokeAndFillPath @ 0x1C02CDA40 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x1C02CDD70 (NtGdiEngStrokePath.c)
 *     NtGdiPATHOBJ_vEnumStartClipLines @ 0x1C02CF650 (NtGdiPATHOBJ_vEnumStartClipLines.c)
 * Callees:
 *     memmove @ 0x1C0130B80 (memmove.c)
 */

__int64 __fastcall bCaptureLINEATTRS(struct _LINEATTRS **a1, struct _LINEATTRS *a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // edi
  ULONG64 v7; // rdx
  PFLOAT_LONG pstyle; // r8
  __int64 cstyle; // rax
  __int64 v11; // rax
  ULONG v12; // eax
  union _FLOAT_LONG *v13; // rsi

  v6 = 1;
  v7 = (ULONG64)*a1;
  if ( *a1 )
  {
    if ( v7 >= MmUserProbeAddress )
      v7 = MmUserProbeAddress;
    *(_OWORD *)&a2->fl = *(_OWORD *)v7;
    *(_OWORD *)&a2->eMiterLimit = *(_OWORD *)(v7 + 16);
    *(_QWORD *)&a2->elStyleState.e = *(_QWORD *)(v7 + 32);
    pstyle = a2->pstyle;
    if ( pstyle )
    {
      cstyle = a2->cstyle;
      if ( (unsigned int)cstyle > 0x9C4000 )
        return 0LL;
      v11 = cstyle;
      if ( v11 * 4 && ((unsigned __int64)&pstyle[v11] > MmUserProbeAddress || &pstyle[v11] < pstyle) )
        *(_BYTE *)MmUserProbeAddress = 0;
      v12 = 4 * a2->cstyle;
      if ( v12 )
        v13 = (union _FLOAT_LONG *)Win32AllocPool(v12, 1886221639LL, pstyle, a4);
      else
        v13 = 0LL;
      if ( v13 )
      {
        memmove(v13, a2->pstyle, 4LL * a2->cstyle);
        a2->pstyle = v13;
      }
      else
      {
        a2->pstyle = 0LL;
        v6 = 0;
      }
    }
    *a1 = a2;
  }
  return v6;
}
