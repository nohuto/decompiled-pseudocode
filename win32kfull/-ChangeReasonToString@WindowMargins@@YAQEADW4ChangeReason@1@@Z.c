const char *__fastcall WindowMargins::ChangeReasonToString(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx

  if ( !a1 )
    return "DWM restart";
  v1 = a1 - 1;
  if ( !v1 )
    return "Style change";
  v2 = v1 - 1;
  if ( !v2 )
    return "Theme change";
  v3 = v2 - 1;
  if ( !v3 )
    return "Becoming TLW";
  v4 = v3 - 1;
  if ( !v4 )
    return "Becoming child";
  if ( v4 == 1 )
    return "Client rect changing";
  return "Unknown";
}
