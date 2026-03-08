/*
 * XREFs of RtlDeleteAce @ 0x1407444E0
 * Callers:
 *     SepRemoveAceFromTokenDefaultDacl @ 0x1402BECA4 (SepRemoveAceFromTokenDefaultDacl.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     RtlFirstFreeAce @ 0x140740C70 (RtlFirstFreeAce.c)
 *     RtlValidAcl @ 0x1407BB670 (RtlValidAcl.c)
 */

NTSTATUS __stdcall RtlDeleteAce(PACL Acl, ULONG AceIndex)
{
  PACL v4; // rdx
  __int64 v5; // rcx
  size_t AclSize; // r8
  unsigned int v7; // r10d
  unsigned int v8; // r9d
  UCHAR *v10; // r11
  UCHAR v11; // al
  __int64 v12; // rcx
  __int64 v13; // [rsp+40h] [rbp+18h] BYREF

  v13 = 0LL;
  if ( !(unsigned __int8)RtlValidAcl(Acl) || AceIndex >= Acl->AceCount || !RtlFirstFreeAce((__int64)Acl, &v13) )
    return -1073741811;
  v4 = Acl + 1;
  if ( AceIndex )
  {
    v5 = AceIndex;
    do
    {
      v4 = (PACL)((char *)v4 + v4->AclSize);
      --v5;
    }
    while ( v5 );
  }
  AclSize = v4->AclSize;
  v7 = v4->AclSize;
  v8 = v13 - (_DWORD)v4;
  if ( (unsigned int)AclSize < (int)v13 - (int)v4 )
  {
    v10 = (UCHAR *)v4 + AclSize;
    do
    {
      v11 = *v10;
      v12 = v7 - (unsigned int)AclSize;
      ++v7;
      ++v10;
      *(&v4->AclRevision + v12) = v11;
    }
    while ( v7 < v8 );
  }
  if ( v8 >= (unsigned int)AclSize )
    memset((char *)v4 + v8 - (unsigned int)AclSize, 0, AclSize);
  --Acl->AceCount;
  return 0;
}
