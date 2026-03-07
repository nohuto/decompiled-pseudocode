__int64 __fastcall XEPALOBJ::ulIndexToRGB(XEPALOBJ *this, unsigned int a2)
{
  __int64 v2; // rax
  unsigned int v3; // r8d
  int v4; // eax
  unsigned int v7; // [rsp+38h] [rbp+10h]

  v2 = *(_QWORD *)this;
  v3 = *(_DWORD *)(*(_QWORD *)this + 28LL);
  if ( v3 )
  {
    if ( v3 <= a2 )
      return 0;
    a2 = *(_DWORD *)(*(_QWORD *)(v2 + 112) + 4LL * a2);
    return a2 & 0xFFFFFF;
  }
  v4 = *(_DWORD *)(v2 + 24);
  if ( (v4 & 2) != 0 )
    return XEPALOBJ::ulBitfieldToRGB(this, a2);
  if ( (v4 & 8) == 0 )
    return a2 & 0xFFFFFF;
  HIWORD(v7) = (unsigned __int8)a2;
  LOBYTE(v7) = BYTE2(a2);
  BYTE1(v7) = BYTE1(a2);
  return v7;
}
