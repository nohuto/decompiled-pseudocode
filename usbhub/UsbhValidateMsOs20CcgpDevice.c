char __fastcall UsbhValidateMsOs20CcgpDevice(__int64 a1, int *a2, _WORD *a3)
{
  int v3; // eax
  int v4; // r8d

  v3 = *a2;
  if ( (*a2 & 0x200) != 0 )
  {
    v4 = 1447248944;
LABEL_3:
    Log(a1, 256, v4, 0LL, 0LL);
    return 0;
  }
  if ( *a3 != 8 )
  {
    v4 = 1447248945;
    goto LABEL_3;
  }
  *((_QWORD *)a2 + 6) = a3;
  *a2 = v3 | 0x200;
  return 1;
}
