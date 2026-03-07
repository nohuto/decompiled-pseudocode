__int64 __fastcall VertexShaderDesc::ResolveKey(VertexShaderDesc *this)
{
  int v2; // ecx
  int v3; // edx
  int v4; // eax
  unsigned int v5; // ecx
  __int64 result; // rax

  if ( *((_DWORD *)this + 1) == -1 )
    return 0x80000000LL;
  v2 = *(_BYTE *)this != 0 ? 4 : 0;
  v3 = v2 | 8;
  if ( !*((_BYTE *)this + 1) )
    v3 = v2;
  v4 = v3 | 2;
  if ( !*((_BYTE *)this + 2) )
    v4 = v3;
  v5 = v4 | 1;
  if ( *((_DWORD *)this + 1) != 4 )
    v5 = v4;
  result = v5 | 0x10;
  if ( !*((_BYTE *)this + 3) )
    return v5;
  return result;
}
