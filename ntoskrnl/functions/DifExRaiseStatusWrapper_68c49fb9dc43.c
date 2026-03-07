void __fastcall __noreturn DifExRaiseStatusWrapper(int a1)
{
  __int64 *APIThunkContextById; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 *v7; // rbx
  int v8; // eax
  __int64 ReturnAddressForWrappers; // rax
  _QWORD *v10; // rdi
  _QWORD *i; // rbx
  __int128 v12; // [rsp+20h] [rbp-18h] BYREF
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v12 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(58);
  v7 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  if ( ViVerifierEnabled && (VfRuleClasses & 0xFF217644) != 0
    || (v4 = HIDWORD(VfRuleClasses), (VfRuleClasses & 0x800000000LL) == 0) )
  {
    if ( (*((_DWORD *)APIThunkContextById + 3) & 0x20) == 0 )
      goto LABEL_8;
  }
  else
  {
    v8 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v8 & 0x18) != 0 )
    {
      ReturnAddressForWrappers = retaddr;
LABEL_9:
      *(_QWORD *)&v12 = ReturnAddressForWrappers;
      goto LABEL_10;
    }
    if ( (v8 & 4) != 0 )
    {
LABEL_8:
      ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v4, v3, v5, v6);
      goto LABEL_9;
    }
  }
  *(_QWORD *)&v12 = 0LL;
LABEL_10:
  v10 = v7 + 4;
  DWORD2(v12) = a1;
  for ( i = (_QWORD *)v7[4]; i != v10; i = (_QWORD *)*i )
  {
    if ( i != (_QWORD *)16 )
      ((void (__fastcall *)(__int128 *))*(i - 1))(&v12);
  }
LABEL_17:
  RtlRaiseStatus(a1);
}
