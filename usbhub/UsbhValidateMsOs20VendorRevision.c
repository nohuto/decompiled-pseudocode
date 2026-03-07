char __fastcall UsbhValidateMsOs20VendorRevision(__int64 a1, int *a2, _WORD *a3)
{
  int v3; // r9d
  int v4; // r8d

  v3 = *a2;
  if ( (*a2 & 0x400) != 0 )
  {
    v4 = 1447449136;
LABEL_3:
    Log(a1, 256, v4, 0LL, 0LL);
    return 0;
  }
  if ( *a3 != 6 )
  {
    v4 = 1447449137;
    goto LABEL_3;
  }
  if ( !a3[2] )
  {
    v4 = 1447449138;
    goto LABEL_3;
  }
  *((_QWORD *)a2 + 7) = a3;
  *a2 = v3 | 0x400;
  return 1;
}
