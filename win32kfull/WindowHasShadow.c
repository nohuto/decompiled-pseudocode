__int64 __fastcall WindowHasShadow(struct tagWND *a1)
{
  unsigned int v1; // r9d

  v1 = 0;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0 )
    return FindShadow(a1) != 0LL;
  return v1;
}
