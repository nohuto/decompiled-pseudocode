void __fastcall CitpParametersCompute(struct _CIT_PARAMETERS *a1)
{
  int v2; // edx
  unsigned int v3; // r9d
  unsigned __int64 v4; // rcx
  unsigned int v5; // eax

  v2 = *((_DWORD *)a1 + 2) & 3;
  *((_BYTE *)a1 + 20) = 1;
  *((_BYTE *)a1 + 21) = v2 == 3;
  if ( v2 != 3 )
    *(_DWORD *)a1 = 0;
  v3 = *((_DWORD *)a1 + 3);
  v4 = (v3 + *((_DWORD *)a1 + 4) - 1) / *((_DWORD *)a1 + 4);
  if ( v4 >= 0xFF )
  {
    LODWORD(v4) = 255;
    *((_DWORD *)a1 + 4) = v3 / 0xFF;
  }
  v5 = ((unsigned int)(v4 + 7) >> 3) + 176;
  if ( v5 < 0xB8 )
    v5 = 184;
  *((_DWORD *)a1 + 6) = v5;
}
