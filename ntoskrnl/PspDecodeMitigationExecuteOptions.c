char __fastcall PspDecodeMitigationExecuteOptions(_DWORD *a1)
{
  char v1; // dl
  int v2; // ecx

  v1 = 0;
  switch ( *a1 & 3 )
  {
    case 1:
      v1 = 13;
      break;
    case 2:
      v1 = 58;
      break;
    case 3:
      v1 = 9;
      break;
  }
  v2 = ((*(_QWORD *)a1 >> 4) & 3) - 1;
  if ( !v2 )
    return v1 | 8;
  if ( v2 == 1 )
    return v1 | 0x48;
  return v1;
}
