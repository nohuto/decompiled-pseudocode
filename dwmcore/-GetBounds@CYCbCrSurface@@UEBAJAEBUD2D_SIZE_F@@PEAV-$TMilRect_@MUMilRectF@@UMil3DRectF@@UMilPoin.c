__int64 __fastcall CYCbCrSurface::GetBounds(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 - 56);
  result = 0LL;
  if ( v3 )
    return CCompositionSurfaceBitmap::GetBounds(v3 + 224, a2, (_DWORD *)a3);
  *(_QWORD *)(a3 + 8) = 0LL;
  *(_QWORD *)a3 = 0LL;
  return result;
}
