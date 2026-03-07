__int64 __fastcall IopLiveDumpExcludeProtectedProcesses(__int64 a1)
{
  __int64 *i; // rcx
  char v3; // dl
  __int64 result; // rax
  __int64 *NextProcess; // rax
  __int64 *v6; // rbx
  int j; // ebx

  for ( i = 0LL; ; i = v6 )
  {
    NextProcess = PsGetNextProcess(i);
    v6 = NextProcess;
    if ( !NextProcess )
      break;
    v3 = *((_BYTE *)NextProcess + 2170);
    if ( (v3 & 7) == 2 && (v3 & 0xF0) != 0x70 || (v3 & 7) == 1 )
    {
      result = IopLiveDumpAddProcessFilter(a1, (void *)*((unsigned int *)NextProcess + 272), 2);
      if ( (int)result < 0 )
        return result;
    }
  }
  for ( j = 0; j < 3; ++j )
  {
    result = IopLiveDumpAddProcessFilter(a1, 0LL, 0);
    if ( (int)result < 0 )
      break;
  }
  return result;
}
