struct _NT_TIB *__fastcall UserSetLastError(int a1)
{
  struct _NT_TIB *result; // rax

  result = (struct _NT_TIB *)KeIsAttachedProcess();
  if ( !(_BYTE)result )
  {
    LODWORD(KeGetPcr()->NtTib.Self[1].Self) = a1;
    result = (struct _NT_TIB *)PsGetCurrentProcessWow64Process();
    if ( result )
    {
      result = KeGetPcr()->NtTib.Self;
      HIDWORD(result[147].StackBase) = a1;
    }
  }
  return result;
}
