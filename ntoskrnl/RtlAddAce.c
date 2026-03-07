NTSTATUS __stdcall RtlAddAce(PACL Acl, ULONG AceRevision, ULONG StartingAceIndex, PVOID AceList, ULONG AceListLength)
{
  ULONG AceCount; // r15d
  PACL v10; // rax
  ULONG v11; // esi
  PACL v12; // r9
  ULONG v13; // r10d
  ACL *v14; // r11
  char *v15; // rdx
  __int16 v16; // r13
  __int64 v17; // r8
  char *v18; // r10
  unsigned __int8 v19; // cl
  int v20; // r9d
  __int64 v21; // r10
  char *v22; // rbx
  __int64 v24; // r11
  UCHAR v25; // cl
  UCHAR AclRevision; // [rsp+20h] [rbp-38h]

  if ( !(unsigned __int8)RtlValidAcl() )
    return -1073741811;
  AceCount = Acl->AceCount;
  v10 = Acl + 1;
  v11 = 0;
  v12 = Acl + 1;
  v13 = 0;
  if ( Acl->AceCount )
  {
    while ( v12 < (PACL)((char *)Acl + Acl->AclSize) )
    {
      ++v13;
      v12 = (PACL)((char *)v12 + v12->AclSize);
      if ( v13 >= AceCount )
        goto LABEL_3;
    }
    return -1073741811;
  }
LABEL_3:
  v14 = (PACL)((char *)Acl + Acl->AclSize);
  AclRevision = Acl->AclRevision;
  if ( v12 > v14 )
    v12 = 0LL;
  if ( (unsigned __int8)AceRevision > Acl->AclRevision )
    AclRevision = AceRevision;
  v15 = (char *)AceList;
  v16 = 0;
  v17 = AceListLength;
  v18 = (char *)AceList + AceListLength;
  if ( AceList < v18 )
  {
    do
    {
      v19 = *v15;
      if ( (unsigned __int8)*v15 > 3u )
      {
        if ( v19 <= 4u )
        {
          if ( AceRevision < 3 )
            return -1073741811;
        }
        else if ( v19 <= 8u && AceRevision < 4 )
        {
          return -1073741811;
        }
      }
      ++v16;
      v15 += *((unsigned __int16 *)v15 + 1);
    }
    while ( v15 < v18 );
  }
  if ( v15 > v18 )
    return -1073741811;
  if ( !v12 || (PACL)((char *)v12 + AceListLength) > v14 )
    return -1073741789;
  if ( StartingAceIndex )
  {
    do
    {
      if ( v11 >= AceCount )
        break;
      ++v11;
      v10 = (PACL)((char *)v10 + v10->AclSize);
    }
    while ( v11 < StartingAceIndex );
  }
  v20 = (_DWORD)v12 - (_DWORD)v10 - 1;
  v21 = v20;
  if ( v20 >= 0 )
  {
    v24 = v20 + AceListLength;
    do
    {
      v25 = *(&v10->AclRevision + v21--);
      *(&v10->AclRevision + v24) = v25;
      v24 = (unsigned int)(v24 - 1);
    }
    while ( v21 >= 0 );
  }
  if ( AceListLength )
  {
    v22 = (char *)((_BYTE *)AceList - (_BYTE *)v10);
    do
    {
      v10->AclRevision = *(&v10->AclRevision + (_QWORD)v22);
      v10 = (PACL)((char *)v10 + 1);
      --v17;
    }
    while ( v17 );
  }
  Acl->AceCount += v16;
  Acl->AclRevision = AclRevision;
  return 0;
}
