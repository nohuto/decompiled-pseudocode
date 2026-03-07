__int64 __fastcall CGeometry2DGroup::GetIndexCount(CGeometry2DGroup *this)
{
  unsigned int v1; // esi
  unsigned int v3; // edx
  _QWORD *v4; // rbp
  int v5; // r14d
  _QWORD *v6; // rdi
  __int64 result; // rax

  v1 = 0;
  v3 = *((_DWORD *)this + 8) ^ ((unsigned __int8)*((_DWORD *)this + 8) ^ (unsigned __int8)(*((_DWORD *)this + 8) + 2)) & 6;
  *((_DWORD *)this + 8) = v3;
  if ( (v3 & 6) == 2 )
  {
    if ( (*((_BYTE *)this + 168) & 4) != 0 )
    {
      v4 = (_QWORD *)*((_QWORD *)this + 11);
      v5 = 0;
      v6 = (_QWORD *)*((_QWORD *)this + 10);
      if ( v6 != v4 )
      {
        do
        {
          if ( *v6 )
            v5 += (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 192LL))(*v6);
          ++v6;
        }
        while ( v6 != v4 );
        v3 = *((_DWORD *)this + 8);
      }
      *((_DWORD *)this + 42) &= ~4u;
      *((_DWORD *)this + 32) = v5;
    }
    v1 = *((_DWORD *)this + 32);
  }
  result = v1;
  *((_DWORD *)this + 8) = v3 ^ ((unsigned __int8)v3 ^ (unsigned __int8)(2 * (v3 >> 1) - 2)) & 6;
  return result;
}
