char __fastcall CcIsLazyWriteScanQueuedInternal(_BYTE *a1, int a2)
{
  char result; // al
  int v3; // edx
  int v4; // edx
  int v5; // edx
  bool v6; // zf
  int v7; // edx
  int v8; // edx

  result = 0;
  v3 = a2 - 1;
  if ( !v3 )
    goto LABEL_8;
  v4 = v3 - 1;
  if ( !v4 )
    goto LABEL_8;
  v5 = v4 - 2;
  if ( v5 )
  {
    v7 = v5 - 4;
    if ( !v7 )
      return a1[67];
    v8 = v7 - 8;
    if ( v8 )
    {
      if ( v8 != 16 )
        return result;
      goto LABEL_4;
    }
LABEL_8:
    if ( a1[69] || a1[70] )
      return 1;
    v6 = a1[71] == 0;
    goto LABEL_6;
  }
LABEL_4:
  if ( a1[68] )
    return 1;
  v6 = a1[67] == 0;
LABEL_6:
  if ( !v6 )
    return 1;
  return result;
}
