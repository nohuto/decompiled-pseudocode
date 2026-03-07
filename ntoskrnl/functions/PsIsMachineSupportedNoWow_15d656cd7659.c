bool __fastcall PsIsMachineSupportedNoWow(__int16 a1)
{
  bool result; // al
  unsigned __int16 v2; // dx
  __int64 SystemDllInfo; // r8

  if ( a1 == -31132 )
    return 1;
  SystemDllInfo = PsQuerySystemDllInfo(4LL);
  result = 0;
  if ( SystemDllInfo )
    return *(_WORD *)(SystemDllInfo + 2) == v2;
  return result;
}
