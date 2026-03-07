NTSTATUS __fastcall DifCmRegisterCallbackExWrapper(
        PEX_CALLBACK_FUNCTION Function,
        PCUNICODE_STRING Altitude,
        PVOID Driver,
        PVOID Context,
        PLARGE_INTEGER Cookie,
        PVOID Reserved)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 *APIThunkContextById; // rdi
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // rbx
  NTSTATUS result; // eax
  _QWORD **v19; // rdi
  _QWORD *v20; // rbx
  _QWORD v21[8]; // [rsp+30h] [rbp-40h] BYREF
  __int64 retaddr; // [rsp+98h] [rbp+28h]

  memset(v21, 0, sizeof(v21));
  APIThunkContextById = DifGetAPIThunkContextById(6);
  if ( !APIThunkContextById )
    goto LABEL_17;
  if ( ViVerifierEnabled && (VfRuleClasses & 0xFF217644) != 0 || (VfRuleClasses & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)APIThunkContextById + 3) & 0x20) == 0 )
      goto LABEL_8;
  }
  else
  {
    v15 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v15 & 0x18) != 0 )
    {
      ReturnAddressForWrappers = retaddr;
LABEL_9:
      v21[0] = ReturnAddressForWrappers;
      goto LABEL_10;
    }
    if ( (v15 & 4) != 0 )
    {
LABEL_8:
      ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v11, v10, v13, v14);
      goto LABEL_9;
    }
  }
  v21[0] = 0LL;
LABEL_10:
  v21[2] = Cookie;
  v21[1] = Reserved;
  v21[6] = Function;
  v21[5] = Altitude;
  v21[4] = Driver;
  v21[3] = Context;
  for ( i = (__int64 *)APIThunkContextById[4]; i != APIThunkContextById + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(_QWORD *))*(i - 1))(v21);
  }
LABEL_17:
  result = CmRegisterCallbackEx(Function, Altitude, Driver, Context, Cookie, Reserved);
  LODWORD(v21[7]) = result;
  if ( APIThunkContextById )
  {
    v19 = (_QWORD **)(APIThunkContextById + 6);
    v20 = *v19;
    if ( *v19 != v19 )
    {
      do
      {
        if ( v20 != (_QWORD *)16 )
          ((void (__fastcall *)(_QWORD *))*(v20 - 1))(v21);
        v20 = (_QWORD *)*v20;
      }
      while ( v20 != v19 );
      return v21[7];
    }
  }
  return result;
}
