__int64 __fastcall CGeometry2DGroup::GetIndicesCore(
        CGeometry2DGroup *this,
        unsigned int a2,
        unsigned int *a3,
        unsigned int a4)
{
  int v4; // eax
  unsigned int v5; // ebp
  _QWORD *v10; // rbx
  _QWORD *v11; // r14
  __int64 v12; // rsi
  int v13; // eax
  __int64 v14; // rcx
  unsigned int v16; // [rsp+60h] [rbp+8h]

  v4 = *((_DWORD *)this + 8);
  v5 = 0;
  *((_DWORD *)this + 8) = v4 ^ ((unsigned __int8)v4 ^ (unsigned __int8)(v4 + 2)) & 6;
  if ( (((unsigned __int8)v4 ^ ((unsigned __int8)v4 ^ (unsigned __int8)(v4 + 2)) & 6) & 6) == 2 )
  {
    v10 = (_QWORD *)*((_QWORD *)this + 10);
    v11 = (_QWORD *)*((_QWORD *)this + 11);
    while ( v10 != v11 )
    {
      v12 = *v10;
      if ( *v10 )
      {
        v16 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v12 + 192LL))(*v10);
        v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned int *, _QWORD))(*(_QWORD *)v12 + 216LL))(
                v12,
                a2,
                a3,
                a4);
        v5 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x174u, 0LL);
          break;
        }
        a4 -= v16;
        a3 += v16;
        a2 += (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 184LL))(v12);
      }
      ++v10;
    }
  }
  *((_DWORD *)this + 8) ^= (*((_DWORD *)this + 8) ^ (2 * (*((_DWORD *)this + 8) >> 1) - 2)) & 6;
  return v5;
}
