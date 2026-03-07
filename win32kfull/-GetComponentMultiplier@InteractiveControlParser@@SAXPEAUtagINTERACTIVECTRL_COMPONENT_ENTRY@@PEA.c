void __fastcall InteractiveControlParser::GetComponentMultiplier(
        struct tagINTERACTIVECTRL_COMPONENT_ENTRY *a1,
        int *a2,
        int *a3)
{
  unsigned int v4; // eax
  int v5; // r8d
  int v6; // eax
  int v7; // eax
  __int64 v8; // rdx

  if ( !*((_QWORD *)a1 + 9) )
  {
    *((_DWORD *)a1 + 18) = *((_DWORD *)a1 + 16);
    *((_DWORD *)a1 + 19) = *((_DWORD *)a1 + 17);
  }
  *a2 = 1;
  *a3 = 1;
  v4 = *((_DWORD *)a1 + 14) & 0xF;
  v5 = v4 - 16;
  if ( v4 < 8 )
    v5 = *((_DWORD *)a1 + 14) & 0xF;
  v6 = *((_DWORD *)a1 + 15);
  switch ( v6 )
  {
    case 17:
      v7 = 1000 * *a2;
LABEL_16:
      *a2 = v7;
      goto LABEL_17;
    case 19:
      v7 = 2540 * *a2;
      goto LABEL_16;
    case 18:
      v7 = 5730 * *a2;
      goto LABEL_16;
    case 20:
      v7 = 100 * *a2;
      goto LABEL_16;
  }
  if ( !v6 && *((_DWORD *)a1 + 4) == 3 )
  {
    v7 = 36000 * *a2;
    goto LABEL_16;
  }
LABEL_17:
  if ( v5 >= 0 )
  {
    for ( ; v5 > 0; *a2 *= 10 )
      --v5;
  }
  else
  {
    v8 = (unsigned int)-v5;
    do
    {
      *a3 *= 10;
      --v8;
    }
    while ( v8 );
  }
}
