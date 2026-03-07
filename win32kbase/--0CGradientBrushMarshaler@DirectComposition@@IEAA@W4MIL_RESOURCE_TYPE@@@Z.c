__int64 __fastcall DirectComposition::CGradientBrushMarshaler::CGradientBrushMarshaler(__int64 a1, int a2)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 36) = a2;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)a1 = &DirectComposition::CBrushMarshaler::`vftable';
  result = a1;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 72) = 2LL;
  *(_QWORD *)(a1 + 24) = 1LL;
  *(_DWORD *)(a1 + 80) = 1;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  return result;
}
