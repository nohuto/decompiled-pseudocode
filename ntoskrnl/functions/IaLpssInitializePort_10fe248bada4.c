__int64 __fastcall IaLpssInitializePort(int a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v4; // rdx

  *((_WORD *)a2 + 6) = 0;
  result = Uart16550InitializePortCommon(a1, (_DWORD)a2, 1, 1, 8);
  if ( (_BYTE)result )
  {
    v4 = *a2;
    IaLpssPmcsr = *a2 + 4228;
    IaLpssCmdStatus = v4 + 4100;
  }
  return result;
}
