__int64 __fastcall Unpremultiply(unsigned int a1)
{
  __int64 v1; // r10
  int v2; // edx
  unsigned int v3; // eax
  unsigned int v4; // r9d
  unsigned int v5; // ecx
  unsigned int v6; // r8d

  v1 = HIBYTE(a1);
  if ( !(_DWORD)v1 || (_DWORD)v1 == 255 )
    return a1;
  v2 = UnpremultiplyTable[v1];
  v3 = a1 >> 8;
  v4 = (v2 * (unsigned int)BYTE2(a1)) >> 16;
  v5 = (v2 * (unsigned int)(unsigned __int8)a1) >> 16;
  v6 = (v2 * (unsigned int)(unsigned __int8)v3) >> 16;
  if ( v4 > 0xFF )
    v4 = 255;
  if ( v6 > 0xFF )
    v6 = 255;
  if ( v5 > 0xFF )
    v5 = 255;
  return v5 | ((v6 | ((v4 | ((_DWORD)v1 << 8)) << 8)) << 8);
}
