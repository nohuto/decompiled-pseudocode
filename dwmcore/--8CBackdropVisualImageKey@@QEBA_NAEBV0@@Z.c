bool __fastcall CBackdropVisualImageKey::operator==(_QWORD *a1, _QWORD *a2)
{
  return *a1 == *a2 && a1[1] == a2[1];
}
