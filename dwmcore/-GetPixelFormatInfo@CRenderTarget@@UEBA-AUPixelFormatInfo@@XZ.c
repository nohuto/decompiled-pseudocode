__int64 __fastcall CRenderTarget::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 - 48);
  *(_QWORD *)a2 = *(_QWORD *)(a1 - 56);
  *(_DWORD *)(a2 + 8) = v2;
  return a2;
}
