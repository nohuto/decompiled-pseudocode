void __fastcall UT_FreeCBFormat(struct tagCLIP *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax

  v2 = *((_QWORD *)a1 + 1);
  if ( !v2 )
    return;
  switch ( *(_DWORD *)a1 )
  {
    case 2:
      goto LABEL_17;
    case 3:
      goto LABEL_15;
    case 9:
      goto LABEL_17;
    case 0xE:
LABEL_15:
      if ( (unsigned __int64)(v2 - 3) > 1 )
        GreDeleteServerMetaFile(v2);
      return;
    case 0x80:
      if ( !*((_DWORD *)a1 + 4) )
        return;
      goto LABEL_11;
  }
  if ( *(_DWORD *)a1 != 130 )
  {
    if ( *(_DWORD *)a1 != 131 && *(_DWORD *)a1 != 142 )
    {
      if ( (unsigned __int64)(v2 - 1) <= 1 )
        return;
LABEL_11:
      v3 = HMValidateHandleNoSecure(v2, 6);
      if ( v3 )
        HMUnlockDestroyObject(v3);
      return;
    }
    goto LABEL_15;
  }
LABEL_17:
  if ( v2 != 2 )
    GreDeleteObject(v2);
}
