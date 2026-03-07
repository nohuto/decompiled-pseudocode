__int64 __fastcall CSecondarySysmemBitmap::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 - 44);
  *(_QWORD *)a2 = *(_QWORD *)(a1 - 52);
  *(_DWORD *)(a2 + 8) = v2;
  return a2;
}
