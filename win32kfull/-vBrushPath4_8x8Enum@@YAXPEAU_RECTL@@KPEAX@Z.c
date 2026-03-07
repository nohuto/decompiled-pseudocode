void __fastcall vBrushPath4_8x8Enum(struct _RECTL *a1, int a2, char *a3)
{
  *((_QWORD *)a3 + 4) = a1;
  vPatCpyRect4_8x8((struct _PATBLTFRAME *)(a3 + 8), a2);
}
