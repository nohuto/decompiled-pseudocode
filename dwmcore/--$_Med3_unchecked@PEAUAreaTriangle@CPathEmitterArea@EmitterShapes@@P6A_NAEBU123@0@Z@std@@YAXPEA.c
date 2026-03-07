__int64 __fastcall std::_Med3_unchecked<EmitterShapes::CPathEmitterArea::AreaTriangle *,bool (*)(EmitterShapes::CPathEmitterArea::AreaTriangle const &,EmitterShapes::CPathEmitterArea::AreaTriangle const &)>(
        __int128 *a1,
        __int128 *a2,
        __int128 *a3,
        unsigned __int8 (__fastcall *a4)(__int128 *, __int128 *))
{
  int v8; // ecx
  __int128 v9; // xmm3
  __int64 v10; // xmm2_8
  __int64 result; // rax
  int v12; // ecx
  __int128 v13; // xmm3
  __int64 v14; // xmm2_8
  int v15; // ecx
  __int128 v16; // xmm3
  __int64 v17; // xmm2_8

  if ( a4(a2, a1) )
  {
    v8 = *((_DWORD *)a2 + 6);
    v9 = *a2;
    v10 = *((_QWORD *)a2 + 2);
    *a2 = *a1;
    *((_QWORD *)a2 + 2) = *((_QWORD *)a1 + 2);
    *((_DWORD *)a2 + 6) = *((_DWORD *)a1 + 6);
    *a1 = v9;
    *((_QWORD *)a1 + 2) = v10;
    *((_DWORD *)a1 + 6) = v8;
  }
  result = ((__int64 (__fastcall *)(__int128 *, __int128 *))a4)(a3, a2);
  if ( (_BYTE)result )
  {
    v12 = *((_DWORD *)a3 + 6);
    v13 = *a3;
    v14 = *((_QWORD *)a3 + 2);
    *a3 = *a2;
    *((_QWORD *)a3 + 2) = *((_QWORD *)a2 + 2);
    *((_DWORD *)a3 + 6) = *((_DWORD *)a2 + 6);
    *a2 = v13;
    *((_QWORD *)a2 + 2) = v14;
    *((_DWORD *)a2 + 6) = v12;
    result = ((__int64 (__fastcall *)(__int128 *, __int128 *))a4)(a2, a1);
    if ( (_BYTE)result )
    {
      v15 = *((_DWORD *)a2 + 6);
      v16 = *a2;
      v17 = *((_QWORD *)a2 + 2);
      *a2 = *a1;
      *((_QWORD *)a2 + 2) = *((_QWORD *)a1 + 2);
      result = *((unsigned int *)a1 + 6);
      *((_DWORD *)a2 + 6) = result;
      *a1 = v16;
      *((_QWORD *)a1 + 2) = v17;
      *((_DWORD *)a1 + 6) = v15;
    }
  }
  return result;
}
