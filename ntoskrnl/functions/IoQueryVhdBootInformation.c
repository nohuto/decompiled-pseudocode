__int64 __fastcall IoQueryVhdBootInformation(__int64 a1, void *a2, unsigned int a3, _DWORD *a4)
{
  unsigned int v5; // ebx
  int v6; // edi

  v5 = 0;
  *a4 = 0;
  v6 = dword_140C0CED4;
  if ( a3 < (unsigned int)dword_140C0CED4 )
    v5 = -1073741789;
  else
    memmove(a2, off_140C073E0, (unsigned int)dword_140C0CED4);
  *a4 = v6;
  return v5;
}
