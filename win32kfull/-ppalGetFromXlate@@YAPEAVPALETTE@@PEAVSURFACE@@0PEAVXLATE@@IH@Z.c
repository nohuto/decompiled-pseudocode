struct PALETTE *__fastcall ppalGetFromXlate(struct SURFACE *a1, struct SURFACE *a2, struct XLATE *a3, int a4, int a5)
{
  __int64 v5; // r10
  __int64 v6; // rax
  bool v7; // zf

  if ( a4 == 1 )
    v5 = *((_QWORD *)a1 + 16);
  else
    v5 = *((_QWORD *)a2 + 16);
  if ( v5 )
    return (struct PALETTE *)v5;
  if ( a3 )
  {
    v5 = a4 == 1 ? *((_QWORD *)a3 + 5) : *((_QWORD *)a3 + 6);
    if ( v5 )
      return (struct PALETTE *)v5;
  }
  if ( a4 == 1 )
  {
    v6 = *((_QWORD *)a1 + 6);
    if ( v6 && (*(_DWORD *)(v6 + 2140) & 0x100) != 0 )
    {
      v7 = *((_DWORD *)a1 + 24) == *(_DWORD *)(v6 + 2076);
LABEL_17:
      if ( v7 )
      {
        v5 = *(_QWORD *)(v6 + 1776);
        if ( v5 )
          return (struct PALETTE *)v5;
      }
    }
  }
  else
  {
    v6 = *((_QWORD *)a2 + 6);
    if ( v6 && (*(_DWORD *)(v6 + 2140) & 0x100) == 0 )
    {
      v7 = *((_DWORD *)a2 + 24) == *(_DWORD *)(v6 + 2076);
      goto LABEL_17;
    }
  }
  if ( !a3 || (*((_DWORD *)a3 + 1) & 1) != 0 )
  {
    if ( a5 )
      return ppalGetFromXlate(a1, a2, a3, (unsigned int)(a4 == 1) + 1, 0);
  }
  return (struct PALETTE *)v5;
}
