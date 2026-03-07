__int64 __fastcall DifZwAccessCheckAndAuditAlarmWrapper(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        char a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 *APIThunkContextById; // rdi
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // rbx
  __int64 result; // rax
  _QWORD **v24; // rdi
  _QWORD *v25; // rbx
  _QWORD v26[14]; // [rsp+68h] [rbp-69h] BYREF
  __int64 retaddr; // [rsp+100h] [rbp+2Fh]

  memset(v26, 0, 0x68uLL);
  APIThunkContextById = DifGetAPIThunkContextById(490);
  if ( !APIThunkContextById )
    goto LABEL_17;
  if ( ViVerifierEnabled && (VfRuleClasses & 0xFF217644) != 0 || (VfRuleClasses & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)APIThunkContextById + 3) & 0x20) == 0 )
      goto LABEL_8;
  }
  else
  {
    v20 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v20 & 0x18) != 0 )
    {
      ReturnAddressForWrappers = retaddr;
LABEL_9:
      v26[0] = ReturnAddressForWrappers;
      goto LABEL_10;
    }
    if ( (v20 & 4) != 0 )
    {
LABEL_8:
      ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v16, v15, v18, v19);
      goto LABEL_9;
    }
  }
  v26[0] = 0LL;
LABEL_10:
  v26[7] = a5;
  LODWORD(v26[6]) = a6;
  v26[5] = a7;
  LOBYTE(v26[4]) = a8;
  v26[3] = a9;
  v26[2] = a10;
  v26[1] = a11;
  v26[11] = a1;
  v26[10] = a2;
  v26[9] = a3;
  v26[8] = a4;
  for ( i = (__int64 *)APIThunkContextById[4]; i != APIThunkContextById + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(_QWORD *))*(i - 1))(v26);
  }
LABEL_17:
  result = ZwAccessCheckAndAuditAlarm(a1, a2);
  LODWORD(v26[12]) = result;
  if ( APIThunkContextById )
  {
    v24 = (_QWORD **)(APIThunkContextById + 6);
    v25 = *v24;
    if ( *v24 != v24 )
    {
      do
      {
        if ( v25 != (_QWORD *)16 )
          ((void (__fastcall *)(_QWORD *))*(v25 - 1))(v26);
        v25 = (_QWORD *)*v25;
      }
      while ( v25 != v24 );
      return LODWORD(v26[12]);
    }
  }
  return result;
}
