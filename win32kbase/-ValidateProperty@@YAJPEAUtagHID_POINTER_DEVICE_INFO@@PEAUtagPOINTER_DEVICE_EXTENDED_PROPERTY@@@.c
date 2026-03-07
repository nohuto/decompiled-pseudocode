__int64 __fastcall ValidateProperty(
        struct tagHID_POINTER_DEVICE_INFO *a1,
        struct tagPOINTER_DEVICE_EXTENDED_PROPERTY *a2)
{
  int v2; // r8d
  unsigned int v3; // r9d
  int v4; // r8d
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d

  v2 = *(_DWORD *)a2;
  v3 = 0;
  if ( *(int *)a2 >= 7 )
    return (unsigned int)-1073741811;
  if ( (!v2
     || (v4 = v2 - 1) == 0
     || (v5 = v4 - 1) == 0
     || (v6 = v5 - 1) == 0
     || (v7 = v6 - 1) == 0
     || (unsigned int)(v7 - 1) <= 1)
    && *((_DWORD *)a1 + 6) != 7 )
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
