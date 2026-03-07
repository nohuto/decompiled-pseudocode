PCONFIGURATION_INFORMATION DifIoGetConfigurationInformationWrapper()
{
  __int64 *APIThunkContextById; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 *v5; // rbx
  int v6; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // rdi
  PCONFIGURATION_INFORMATION result; // rax
  _QWORD *v10; // rdi
  _QWORD *v11; // rbx
  __int128 v12; // [rsp+20h] [rbp-18h] BYREF
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v12 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(173);
  v5 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  if ( ViVerifierEnabled && (VfRuleClasses & 0xFF217644) != 0
    || (v2 = HIDWORD(VfRuleClasses), (VfRuleClasses & 0x800000000LL) == 0) )
  {
    if ( (*((_DWORD *)APIThunkContextById + 3) & 0x20) == 0 )
      goto LABEL_8;
  }
  else
  {
    v6 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v6 & 0x18) != 0 )
    {
      ReturnAddressForWrappers = retaddr;
LABEL_9:
      *(_QWORD *)&v12 = ReturnAddressForWrappers;
      goto LABEL_10;
    }
    if ( (v6 & 4) != 0 )
    {
LABEL_8:
      ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v2, v1, v3, v4);
      goto LABEL_9;
    }
  }
  *(_QWORD *)&v12 = 0LL;
LABEL_10:
  for ( i = (__int64 *)v5[4]; i != v5 + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(__int128 *))*(i - 1))(&v12);
  }
LABEL_17:
  result = IoGetConfigurationInformation();
  *((_QWORD *)&v12 + 1) = result;
  if ( v5 )
  {
    v10 = v5 + 6;
    v11 = (_QWORD *)v5[6];
    if ( v11 != v10 )
    {
      do
      {
        if ( v11 != (_QWORD *)16 )
          ((void (__fastcall *)(__int128 *))*(v11 - 1))(&v12);
        v11 = (_QWORD *)*v11;
      }
      while ( v11 != v10 );
      return (PCONFIGURATION_INFORMATION)*((_QWORD *)&v12 + 1);
    }
  }
  return result;
}
