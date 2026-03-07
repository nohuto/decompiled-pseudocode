__int64 __fastcall PiCMDispatch(__int64 a1, __int64 a2)
{
  int v2; // ebx
  char v3; // cl

  v2 = *(_DWORD *)(a2 + 48);
  if ( v2 >= 0 )
  {
    v3 = **(_BYTE **)(a2 + 184);
    if ( v3 && v3 != 2 )
    {
      if ( v3 == 14 )
      {
        v2 = -1073741637;
        goto LABEL_4;
      }
      if ( v3 != 18 )
        goto LABEL_4;
    }
    v2 = 0;
  }
LABEL_4:
  *(_DWORD *)(a2 + 48) = v2;
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v2;
}
