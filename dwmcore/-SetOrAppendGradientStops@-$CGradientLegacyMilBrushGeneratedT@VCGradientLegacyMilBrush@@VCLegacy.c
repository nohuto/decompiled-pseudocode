__int64 __fastcall CGradientLegacyMilBrushGeneratedT<CGradientLegacyMilBrush,CLegacyMilBrush>::SetOrAppendGradientStops(
        _BYTE **a1,
        __int64 a2,
        char a3)
{
  _QWORD *v4; // rcx
  __int64 v6; // [rsp+58h] [rbp+20h] BYREF

  v4 = a1 + 14;
  if ( !a3 )
    v4[1] = *v4;
  std::vector<MilGradientStop>::insert<MilGradientStop const *,0>(
    v4,
    &v6,
    a1[15],
    *(const void **)(a2 + 8),
    *(_QWORD *)(a2 + 8) + 24LL * *(_QWORD *)a2);
  (*((void (__fastcall **)(_BYTE **, _QWORD, _QWORD))*a1 + 9))(a1, 0LL, 0LL);
  return 0LL;
}
