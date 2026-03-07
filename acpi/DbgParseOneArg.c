__int64 __fastcall DbgParseOneArg(__int64 a1, char *a2, unsigned int a3, _DWORD *a4)
{
  unsigned int v5; // ebx
  __int64 matched; // rax
  __int64 v9; // rdi
  int v10; // edx
  unsigned int v12; // ecx
  volatile signed __int32 *v13; // rax
  unsigned int (__fastcall *v14)(__int64, char *, _QWORD, _QWORD); // rax
  char *v15; // rsi
  char *v16; // rsi
  unsigned int (__fastcall *v17)(__int64, char *, _QWORD, _QWORD); // rax
  char *EndPtr; // [rsp+30h] [rbp-28h] BYREF
  char *String; // [rsp+68h] [rbp+10h] BYREF

  String = a2;
  v5 = 0;
  EndPtr = 0LL;
  matched = DbgMatchArg(a1, (const char **)&String, a4);
  v9 = matched;
  if ( !matched )
  {
    ConPrintf("AMLI_ARGERR: ");
    ConPrintf("invalid command argument - %s", String);
    ConPrintf("\n");
    return (unsigned int)-3;
  }
  v10 = *(_DWORD *)(matched + 8);
  switch ( v10 )
  {
    case 1:
    case 2:
      v16 = String;
      if ( (*(_DWORD *)(matched + 12) & 2) != 0 )
      {
        if ( !*String || !strchr("=:", *String) )
        {
          ConPrintf("AMLI_ARGERR: ");
          ConPrintf("argument missing option separator - %s", v16);
          ConPrintf("\n");
          return (unsigned int)-1;
        }
        ++v16;
      }
      if ( *(_DWORD *)(v9 + 8) == 1 )
      {
        **(_QWORD **)(v9 + 16) = v16;
      }
      else
      {
        **(_DWORD **)(v9 + 16) = strtoui64_0(v16, &EndPtr, *(_DWORD *)(v9 + 24));
        if ( v16 == EndPtr )
        {
          ConPrintf("AMLI_ARGERR: ");
          ConPrintf("invalid numeric argument - %s", v16);
          ConPrintf("\n");
          return (unsigned int)-2;
        }
      }
      v17 = *(unsigned int (__fastcall **)(__int64, char *, _QWORD, _QWORD))(v9 + 32);
      if ( v17 )
        return v17(v9, v16, a3, (unsigned int)*a4);
      break;
    case 3:
    case 4:
      v12 = *(_DWORD *)(matched + 24);
      v13 = *(volatile signed __int32 **)(matched + 16);
      if ( v10 == 3 )
        _InterlockedOr(v13, v12);
      else
        _InterlockedAnd(v13, ~v12);
      v14 = *(unsigned int (__fastcall **)(__int64, char *, _QWORD, _QWORD))(v9 + 32);
      v15 = String;
      if ( (!v14 || !v14(v9, String, a3, (unsigned int)*a4)) && *v15 )
        return (unsigned int)DbgParseOneArg(a1, v15, a3, a4);
      break;
    case 5:
      return (unsigned int)(*(__int64 (__fastcall **)(__int64, char *, _QWORD, _QWORD))(matched + 32))(
                             matched,
                             String,
                             a3,
                             (unsigned int)*a4);
    default:
      ConPrintf("AMLI_ARGERR: ");
      ConPrintf("invalid argument table");
      ConPrintf("\n");
      return (unsigned int)-4;
  }
  return v5;
}
