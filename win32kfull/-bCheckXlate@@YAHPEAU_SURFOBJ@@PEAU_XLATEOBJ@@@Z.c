__int64 __fastcall bCheckXlate(struct _SURFOBJ *a1, struct _XLATEOBJ *a2)
{
  unsigned int v2; // r8d
  ULONG v3; // ecx
  ULONG v4; // ecx
  bool v5; // zf

  v2 = 1;
  if ( !a1 || !a2 || (a2->flXlate & 1) != 0 )
    return v2;
  v3 = a1->iBitmapFormat - 1;
  if ( !v3 )
  {
    v2 = 0;
    v5 = a2->cEntries == 2;
    goto LABEL_10;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    v2 = 0;
    v5 = ((a2->cEntries - 8) & 0xFFFFFFF7) == 0;
LABEL_10:
    LOBYTE(v2) = v5;
    return v2;
  }
  if ( v4 == 1 )
    return a2->cEntries <= 0x100;
  return v2;
}
