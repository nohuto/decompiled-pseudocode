__int64 __fastcall CCursorVisualGeneratedT<CCursorVisual,CVisual>::SetCursorId(CCursorVisual *a1, __int64 a2)
{
  *((_QWORD *)a1 + 88) = a2;
  CCursorVisual::OnCursorIdChanged(a1);
  return 0LL;
}
