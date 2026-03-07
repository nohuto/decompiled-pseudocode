const char *__fastcall messageString(unsigned int a1)
{
  unsigned int v1; // ecx
  unsigned int v2; // ecx
  unsigned int v3; // ecx
  unsigned int v4; // ecx
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // ecx

  if ( a1 <= 0x24B )
  {
    if ( a1 == 587 )
      return "WM_POINTERACTIVATE";
    v1 = a1 - 581;
    if ( !v1 )
      return "WM_POINTERUPDATE";
    v2 = v1 - 1;
    if ( !v2 )
      return "WM_POINTER_DOWN";
    v3 = v2 - 1;
    if ( !v3 )
      return "WM_POINTERUP";
    v4 = v3 - 2;
    if ( !v4 )
      return "WM_POINTERENTER";
    if ( v4 == 1 )
      return "WM_POINTERLEAVE";
    return (const char *)&unk_1C02A2108;
  }
  v6 = a1 - 588;
  if ( !v6 )
    return "WM_POINTERCAPTURECHANGED";
  v7 = v6 - 5;
  if ( !v7 )
    return "WM_POINTERROUTEDTO";
  v8 = v7 - 1;
  if ( !v8 )
    return "WM_POINTERROUTEDAWAY";
  if ( v8 != 1 )
    return (const char *)&unk_1C02A2108;
  return "WM_POINTERROUTEDRELEASED";
}
