__int64 __fastcall CWindowProp::CreateWindowProp<CVisRgnTrackerProp>(_QWORD *a1)
{
  unsigned int v2; // ebx
  _BYTE *v3; // rax
  _BYTE *v4; // rdi

  v2 = 0;
  v3 = (_BYTE *)Win32AllocPoolZInit(80LL, 1953723989LL);
  v4 = v3;
  if ( v3 )
  {
    memset_0(v3, 0, 0x50uLL);
    v4[72] = 1;
    *(_QWORD *)v4 = &CVisRgnTrackerProp::`vftable';
    *a1 = v4;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v2;
}
