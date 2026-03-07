void ***__fastcall MiPartitionObjectToPartition(void **BugCheckParameter2, char a2, _BYTE *a3)
{
  ULONG_PTR BugCheckParameter4; // r9
  int v6; // r11d
  void **v7; // r10
  void ***v8; // r10
  ULONG_PTR v10; // r8

  LOBYTE(BugCheckParameter4) = 0;
  v6 = 0;
  if ( BugCheckParameter2 )
  {
    if ( BugCheckParameter2 == (void **)-1LL )
    {
      v7 = (void **)(qword_140C67048 + 8LL * KeGetCurrentThread()->ApcState.Process[1].IdealProcessor[25]);
    }
    else
    {
      if ( BugCheckParameter2 == (void **)-2LL )
      {
        v8 = 0LL;
        goto LABEL_11;
      }
      v6 = 1;
      v7 = BugCheckParameter2;
    }
    v8 = (void ***)*v7;
    if ( !v8 )
      goto LABEL_11;
  }
  else
  {
    v8 = (void ***)&MiSystemPartition;
  }
  if ( *((_DWORD *)v8 + 2) != 305535296 )
    goto LABEL_11;
  if ( !v6 )
    goto LABEL_7;
  if ( v8[25] != BugCheckParameter2 )
LABEL_11:
    KeBugCheckEx(0x1Au, 0x41001uLL, (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)v8, 0LL);
  if ( (unsigned __int8)PsReferencePartitionSafe(BugCheckParameter2) )
  {
    LOBYTE(BugCheckParameter4) = 1;
  }
  else
  {
    if ( a2 )
      KeBugCheckEx(0x1Au, 0x41002uLL, v10, (ULONG_PTR)v8, BugCheckParameter4);
    v8 = (void ***)BugCheckParameter4;
  }
LABEL_7:
  *a3 = BugCheckParameter4;
  return v8;
}
