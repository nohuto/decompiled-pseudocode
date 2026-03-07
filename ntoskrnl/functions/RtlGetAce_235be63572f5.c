NTSTATUS __stdcall RtlGetAce(PACL Acl, ULONG AceIndex, PVOID *Ace)
{
  ULONG v4; // r9d
  PACL v5; // r8

  if ( (unsigned __int8)(Acl->AclRevision - 2) <= 2u && AceIndex < Acl->AceCount )
  {
    v4 = 0;
    v5 = Acl + 1;
    *Ace = &Acl[1];
    if ( AceIndex )
    {
      while ( v5 < (PACL)((char *)Acl + Acl->AclSize) )
      {
        ++v4;
        v5 = (PACL)((char *)v5 + v5->AclSize);
        *Ace = v5;
        if ( v4 >= AceIndex )
          goto LABEL_4;
      }
    }
    else
    {
LABEL_4:
      if ( v5 < (PACL)((char *)Acl + Acl->AclSize) )
        return 0;
    }
  }
  return -1073741811;
}
