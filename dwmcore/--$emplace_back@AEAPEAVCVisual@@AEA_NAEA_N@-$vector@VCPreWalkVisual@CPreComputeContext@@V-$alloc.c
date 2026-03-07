__int64 __fastcall std::vector<CPreComputeContext::CPreWalkVisual>::emplace_back<CVisual * &,bool &,bool &>(
        __int64 a1,
        _QWORD *a2,
        char *a3,
        char *a4)
{
  __int64 v5; // rdx
  __int64 result; // rax
  char v7; // r9
  char v8; // r8

  v5 = *(_QWORD *)(a1 + 8);
  if ( v5 == *(_QWORD *)(a1 + 16) )
    return std::vector<CPreComputeContext::CPreWalkVisual>::_Emplace_reallocate<CVisual * &,bool &,bool &>(
             a1,
             v5,
             (_DWORD)a2,
             (_DWORD)a3,
             (__int64)a4);
  v7 = *a4;
  v8 = *a3;
  *(_QWORD *)v5 = *a2;
  *(_BYTE *)(v5 + 8) = v8;
  *(_BYTE *)(v5 + 9) = v7;
  result = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = result + 16;
  return result;
}
