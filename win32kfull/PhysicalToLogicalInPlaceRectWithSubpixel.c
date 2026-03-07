__int64 __fastcall PhysicalToLogicalInPlaceRectWithSubpixel(const struct tagWND *a1, int *a2, unsigned __int64 a3)
{
  unsigned int v5; // ebx
  const struct tagWND *TopLevelOrDpiBoundaryWindow; // rax
  const struct tagWND *v7; // r11
  __int64 v9; // rax
  int v10; // ecx
  int v11; // eax
  float v12; // xmm3_4
  float v13; // xmm4_4
  float *v14; // rdx
  float v15; // xmm4_4
  int v16; // edx

  v5 = 0;
  TopLevelOrDpiBoundaryWindow = GetTopLevelOrDpiBoundaryWindow(a1);
  v7 = TopLevelOrDpiBoundaryWindow;
  if ( TopLevelOrDpiBoundaryWindow )
  {
    v9 = *((_QWORD *)TopLevelOrDpiBoundaryWindow + 27);
    if ( v9 )
    {
      v10 = (int)*(float *)(v9 + 52);
      v11 = (int)*(float *)(v9 + 48);
      a2[3] -= v10;
      a2[1] -= v10;
      *a2 -= v11;
      a2[2] -= v11;
      v12 = 1.0 / **((float **)v7 + 27);
      ScaleValueWithSubpixel(a2, (float *)(a3 & ((unsigned __int128)-(__int128)a3 >> 64)), v12);
      ScaleValueWithSubpixel(a2 + 1, (float *)((a3 + 4) & -(__int64)(a3 != 0)), v13);
      ScaleValueWithSubpixel(a2 + 2, 0LL, v12);
      ScaleValueWithSubpixel(a2 + 3, v14, v15);
      return (unsigned int)(v16 + 1);
    }
  }
  return v5;
}
