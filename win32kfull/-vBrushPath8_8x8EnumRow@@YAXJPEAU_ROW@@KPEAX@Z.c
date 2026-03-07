void __fastcall vBrushPath8_8x8EnumRow(int a1, struct _ROW *a2, int a3, char *a4)
{
  *((_QWORD *)a4 + 4) = a2;
  vPatCpyRow8_8x8((struct _PATBLTFRAME *)(a4 + 8), a1, a3);
}
