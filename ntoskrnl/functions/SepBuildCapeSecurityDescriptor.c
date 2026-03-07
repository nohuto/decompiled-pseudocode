NTSTATUS __fastcall SepBuildCapeSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        unsigned __int8 *a2,
        __int64 a3)
{
  NTSTATUS result; // eax
  __int16 v7; // ax
  ACL *v8; // r8
  __int64 v9; // rax
  __int64 v10; // rdx

  result = RtlCreateSecurityDescriptor(SecurityDescriptor, *a2);
  if ( result >= 0 )
  {
    *((_WORD *)SecurityDescriptor + 1) |= 3u;
    v7 = *((_WORD *)a2 + 1);
    if ( (v7 & 4) == 0 )
    {
LABEL_3:
      v8 = 0LL;
      goto LABEL_8;
    }
    if ( v7 >= 0 )
    {
      v8 = (ACL *)*((_QWORD *)a2 + 4);
    }
    else
    {
      v9 = *((unsigned int *)a2 + 4);
      if ( !(_DWORD)v9 )
        goto LABEL_3;
      v8 = (ACL *)&a2[v9];
    }
LABEL_8:
    result = RtlSetDaclSecurityDescriptor(
               SecurityDescriptor,
               (*((_WORD *)a2 + 1) & 4) != 0,
               v8,
               (*((_WORD *)a2 + 1) & 8) != 0);
    if ( result >= 0 )
    {
      LOBYTE(v10) = 1;
      return RtlSetSaclSecurityDescriptor(SecurityDescriptor, v10, a3, 0LL);
    }
  }
  return result;
}
