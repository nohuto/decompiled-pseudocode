__int64 __fastcall DifIoSetDeviceToVerifyWrapper(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdi
  _QWORD *i; // rbx
  _QWORD **v11; // rdi
  _QWORD *j; // rbx
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+30h] [rbp-18h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v13 = 0LL;
  v14 = 0LL;
  result = (__int64)DifGetAPIThunkContextById(220);
  v9 = result;
  if ( !result )
    goto LABEL_17;
  if ( ViVerifierEnabled && (VfRuleClasses & 0xFF217644) != 0
    || (v6 = HIDWORD(VfRuleClasses), (VfRuleClasses & 0x800000000LL) == 0) )
  {
    result = *(unsigned int *)(result + 12);
    if ( (result & 0x20) == 0 )
      goto LABEL_8;
  }
  else
  {
    result = *(unsigned int *)(result + 12);
    if ( (result & 0x18) != 0 )
    {
      result = retaddr;
LABEL_9:
      *(_QWORD *)&v13 = result;
      goto LABEL_10;
    }
    if ( (result & 4) != 0 )
    {
LABEL_8:
      result = DifGetReturnAddressForWrappers(v6, v5, v7, v8);
      goto LABEL_9;
    }
  }
  *(_QWORD *)&v13 = 0LL;
LABEL_10:
  v14 = a1;
  *((_QWORD *)&v13 + 1) = a2;
  for ( i = *(_QWORD **)(v9 + 32); i != (_QWORD *)(v9 + 32); i = (_QWORD *)*i )
  {
    result = (__int64)(i - 2);
    if ( i != (_QWORD *)16 )
      result = (*(__int64 (__fastcall **)(__int128 *))(result + 8))(&v13);
  }
LABEL_17:
  *(_QWORD *)(a1 + 1304) = a2;
  if ( v9 )
  {
    v11 = (_QWORD **)(v9 + 48);
    for ( j = *v11; j != v11; j = (_QWORD *)*j )
    {
      result = (__int64)(j - 2);
      if ( j != (_QWORD *)16 )
        result = (*(__int64 (__fastcall **)(__int128 *))(result + 8))(&v13);
    }
  }
  return result;
}
