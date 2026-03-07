char __fastcall GetScsiReservationType(int a1)
{
  char v1; // dl
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx

  v1 = 0;
  v2 = a1 - 1;
  if ( !v2 )
    return 1;
  v3 = v2 - 1;
  if ( !v3 )
    return 3;
  v4 = v3 - 1;
  if ( !v4 )
    return 5;
  v5 = v4 - 1;
  if ( !v5 )
    return 6;
  v6 = v5 - 1;
  if ( !v6 )
    return 7;
  if ( v6 == 1 )
    return 8;
  return v1;
}
