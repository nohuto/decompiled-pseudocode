void __fastcall WIDENER::vVecDrawCompute(WIDENER *this, struct LINEDATA *a2)
{
  int *v3; // rdx
  int v4; // ecx
  int v5; // eax

  WIDEPENOBJ::vDetermineDrawVertex((WIDENER *)((char *)this + 824), (struct LINEDATA *)((char *)a2 + 48), a2);
  v3 = (int *)*((_QWORD *)a2 + 2);
  v4 = *v3;
  if ( (*(_DWORD *)a2 & 1) != 0 )
  {
    v4 = -v4;
    *((_DWORD *)a2 + 18) = v4;
    v5 = -v3[1];
  }
  else
  {
    *((_DWORD *)a2 + 18) = v4;
    v5 = v3[1];
  }
  *((_DWORD *)a2 + 19) = v5;
  *(_DWORD *)a2 |= 8u;
  *((_DWORD *)a2 + 18) = ((v4 >> 31) + 4 + v4) & 0xFFFFFFF8;
  *((_DWORD *)a2 + 19) = ((*((int *)a2 + 19) >> 31) + *((_DWORD *)a2 + 19) + 4) & 0xFFFFFFF8;
}
