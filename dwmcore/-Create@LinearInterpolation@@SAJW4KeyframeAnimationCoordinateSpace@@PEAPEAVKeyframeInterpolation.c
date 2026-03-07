__int64 __fastcall LinearInterpolation::Create(int a1, _QWORD *a2)
{
  char *v4; // rbx
  __int64 result; // rax

  v4 = (char *)KeyframeInterpolation::operator new(0x18uLL);
  if ( v4 )
  {
    *(_QWORD *)(v4 + 12) = 0LL;
    *((_DWORD *)v4 + 5) = 0;
    *((_DWORD *)v4 + 2) = 0;
    *(_QWORD *)v4 = &LinearInterpolation::`vftable';
    ((void (__fastcall *)(char *))LinearInterpolation::`vftable')(v4);
  }
  else
  {
    v4 = 0LL;
  }
  *((_DWORD *)v4 + 4) = a1;
  result = 0LL;
  *a2 = v4;
  return result;
}
