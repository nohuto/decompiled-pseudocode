__int64 __fastcall CImageLegacyMilBrushGeneratedT<CImageLegacyMilBrush,CLegacyMilBrush>::SetTileMode(
        __int64 *a1,
        int a2)
{
  __int64 v3; // rax

  if ( a2 != *((_DWORD *)a1 + 35) )
  {
    v3 = *a1;
    *((_DWORD *)a1 + 35) = a2;
    (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(v3 + 72))(a1, 0LL, 0LL);
  }
  return 0LL;
}
