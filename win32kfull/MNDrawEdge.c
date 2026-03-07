void __fastcall MNDrawEdge(__int64 a1, HDC a2, _DWORD *a3, int a4)
{
  int v7; // esi
  int v9; // ebp
  HBRUSH v10; // rcx

  v7 = a3[2] - *a3;
  v9 = a3[3] - a3[1];
  DrawOutline(a2, 0, 0, v7, v9, 1, *(HBRUSH *)(gpsi + 4824LL));
  v10 = *(HBRUSH *)(*(_QWORD *)(a1 + 40) + 24LL);
  if ( !v10 )
    v10 = *(HBRUSH *)(gpsi + 4728LL);
  DrawOutline(a2, 1, 1, v7 - 2, v9 - 2, 2, v10);
  if ( a4 == 0x2000 )
  {
    *a3 += 3;
    a3[2] -= 3;
    a3[1] += 3;
    a3[3] -= 3;
  }
}
