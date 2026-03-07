__int64 __fastcall CPolygon::Create(int a1, __int64 a2, __int64 a3)
{
  return CPolygon::Create(
           a1,
           *(_QWORD *)(a2 + 216),
           *(_QWORD *)(a2 + 248),
           (int)a2 + 144,
           *(_DWORD *)(a2 + 224),
           *(_DWORD *)(a2 + 264),
           *(_DWORD *)(a2 + 236),
           *(_DWORD *)(a2 + 228),
           *(_DWORD *)(a2 + 232),
           *(_BYTE *)(a2 + 240),
           *(_BYTE *)(a2 + 241),
           a2 + 128,
           a3);
}
