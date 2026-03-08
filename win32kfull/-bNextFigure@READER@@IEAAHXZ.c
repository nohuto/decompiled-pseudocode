/*
 * XREFs of ?bNextFigure@READER@@IEAAHXZ @ 0x1C02F3690
 * Callers:
 *     ??0STYLER@@QEAA@AEAVEPATHOBJ@@PEBU_LINEATTRS@@@Z @ 0x1C02F2F10 (--0STYLER@@QEAA@AEAVEPATHOBJ@@PEBU_LINEATTRS@@@Z.c)
 *     ?vNextPoint@LINER@@AEAAXXZ @ 0x1C02F49C0 (-vNextPoint@LINER@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall READER::bNextFigure(READER *this)
{
  unsigned int v2; // edi
  int v3; // eax
  int v4; // ecx
  unsigned int v5; // ecx
  __int64 v6; // rdx
  __int64 v7; // rcx

  v2 = *((_DWORD *)this + 10) & 1;
  if ( v2 )
  {
    v3 = EPATHOBJ::bEnum(*(EPATHOBJ **)this, (struct _PATHDATA *)((char *)this + 8));
    v4 = *((_DWORD *)this + 10);
    if ( v3 )
      v5 = v4 | 1;
    else
      v5 = v4 & 0xFFFFFFFE;
    *((_DWORD *)this + 10) = v5;
    v6 = *((unsigned int *)this + 3);
    v7 = *((_QWORD *)this + 2);
    *((_QWORD *)this + 3) = v7;
    *((_QWORD *)this + 4) = v7 + 8 * v6;
    v2 &= -((_DWORD)v6 != 0);
  }
  return v2;
}
