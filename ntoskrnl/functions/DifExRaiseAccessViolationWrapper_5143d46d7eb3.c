void __noreturn DifExRaiseAccessViolationWrapper()
{
  __int64 *APIThunkContextById; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 *v5; // rbx
  int v6; // eax
  __int64 ReturnAddressForWrappers; // rax
  _QWORD *v8; // rdi
  _QWORD *i; // rbx
  __int64 retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(56);
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
      v11 = ReturnAddressForWrappers;
      goto LABEL_10;
    }
    if ( (v6 & 4) != 0 )
    {
LABEL_8:
      ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v2, v1, v3, v4);
      goto LABEL_9;
    }
  }
  v11 = 0LL;
LABEL_10:
  v8 = v5 + 4;
  for ( i = (_QWORD *)v5[4]; i != v8; i = (_QWORD *)*i )
  {
    if ( i != (_QWORD *)16 )
      ((void (__fastcall *)(__int64 *))*(i - 1))(&v11);
  }
LABEL_17:
  ExRaiseAccessViolation();
}
