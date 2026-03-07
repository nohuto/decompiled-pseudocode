__int64 __fastcall AlpcpQuerySidToken(__int64 a1, void *a2, unsigned int a3, _DWORD *a4)
{
  int v8; // ebx
  size_t v9; // rax
  size_t Size[2]; // [rsp+20h] [rbp-88h] BYREF
  _BYTE Src[80]; // [rsp+30h] [rbp-78h] BYREF

  LODWORD(Size[0]) = 0;
  memset(Src, 0, 0x44uLL);
  SeQueryUserSidToken(a1, Src, 68LL, Size);
  v8 = 0;
  v9 = LODWORD(Size[0]);
  if ( LODWORD(Size[0]) > a3 )
    v8 = -1073741789;
  if ( a4 )
    *a4 = Size[0];
  if ( v8 >= 0 )
    memmove(a2, Src, v9);
  return (unsigned int)v8;
}
