__int64 __fastcall ENUMAREAS::bEnumLayers(ENUMAREAS *this, struct SPRITE **a2)
{
  unsigned int v2; // ebx
  _DWORD *v4; // r11
  _DWORD *v5; // r9
  _DWORD *v6; // rcx
  __int64 result; // rax

  v2 = 0;
  if ( (*(_DWORD *)this & 1) != 0 )
  {
    v6 = (_DWORD *)*((_QWORD *)this + 9);
    v5 = v6;
    if ( (unsigned __int64)v6 > *((_QWORD *)this + 8) + 24LL && *(v6 - 4) == *v6 )
    {
      *((_QWORD *)this + 9) = v6 - 4;
      v5 = v6 - 4;
      goto LABEL_8;
    }
  }
  else
  {
    v4 = (_DWORD *)*((_QWORD *)this + 9);
    v5 = v4;
    if ( (unsigned __int64)v4 < *(_QWORD *)(*((_QWORD *)this + 8) + 8LL) + *((_QWORD *)this + 8) - 16LL && v4[4] == *v4 )
    {
      *((_QWORD *)this + 9) = v4 + 4;
      v5 = v4 + 4;
LABEL_8:
      v2 = 1;
    }
  }
  result = v2;
  *a2 = (struct SPRITE *)*((_QWORD *)v5 + 1);
  return result;
}
