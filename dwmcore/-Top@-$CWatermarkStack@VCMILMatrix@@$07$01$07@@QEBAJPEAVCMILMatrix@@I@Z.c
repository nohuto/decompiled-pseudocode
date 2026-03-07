__int64 __fastcall CWatermarkStack<CMILMatrix,8,2,8>::Top(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  __int64 v4; // rdx
  __int64 v5; // rcx

  v2 = 0;
  if ( *(_DWORD *)a1 )
  {
    v4 = 68LL * (unsigned int)(*(_DWORD *)a1 - 1);
    v5 = *(_QWORD *)(a1 + 16);
    *(_OWORD *)a2 = *(_OWORD *)(v4 + v5);
    *(_OWORD *)(a2 + 16) = *(_OWORD *)(v4 + v5 + 16);
    *(_OWORD *)(a2 + 32) = *(_OWORD *)(v4 + v5 + 32);
    *(_OWORD *)(a2 + 48) = *(_OWORD *)(v4 + v5 + 48);
    *(_DWORD *)(a2 + 64) = *(_DWORD *)(v4 + v5 + 64);
  }
  else
  {
    return (unsigned int)-2147467259;
  }
  return v2;
}
