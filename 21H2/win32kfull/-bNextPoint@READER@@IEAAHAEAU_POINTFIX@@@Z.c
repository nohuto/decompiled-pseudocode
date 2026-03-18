/*
 * XREFs of ?bNextPoint@READER@@IEAAHAEAU_POINTFIX@@@Z @ 0x1C0130E4C
 * Callers:
 *     ??0STYLER@@QEAA@AEAVEPATHOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C013001C (--0STYLER@@QEAA@AEAVEPATHOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ?vNextPoint@LINER@@AEAAXXZ @ 0x1C0130CB0 (-vNextPoint@LINER@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall READER::bNextPoint(READER *this, struct _POINTFIX *a2)
{
  struct _POINTFIX *v2; // r8
  struct _POINTFIX v5; // rax
  unsigned int v6; // r8d
  int v8; // eax
  int v9; // ecx
  unsigned int v10; // ecx
  __int64 v11; // rdx

  v2 = (struct _POINTFIX *)*((_QWORD *)this + 3);
  if ( (unsigned __int64)v2 >= *((_QWORD *)this + 4) )
  {
    if ( (*((_DWORD *)this + 2) & 2) != 0 )
    {
      return 0;
    }
    else
    {
      v8 = EPATHOBJ::bEnum(*(EPATHOBJ **)this, (struct _PATHDATA *)((char *)this + 8));
      v9 = *((_DWORD *)this + 10);
      v6 = 1;
      if ( v8 )
        v10 = v9 | 1;
      else
        v10 = v9 & 0xFFFFFFFE;
      *((_DWORD *)this + 10) = v10;
      *a2 = **((struct _POINTFIX **)this + 2);
      v11 = *((_QWORD *)this + 2);
      *((_QWORD *)this + 3) = v11 + 8;
      *((_QWORD *)this + 4) = v11 + 8LL * *((unsigned int *)this + 3);
    }
  }
  else
  {
    v5 = *v2;
    *((_QWORD *)this + 3) = v2 + 1;
    v6 = 1;
    *a2 = v5;
  }
  return v6;
}
