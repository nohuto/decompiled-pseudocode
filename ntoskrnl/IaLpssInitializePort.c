/*
 * XREFs of IaLpssInitializePort @ 0x14067A1E0
 * Callers:
 *     <none>
 * Callees:
 *     Uart16550InitializePortCommon @ 0x14067A794 (Uart16550InitializePortCommon.c)
 */

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
