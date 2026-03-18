/*
 * XREFs of ExGetNextProcess @ 0x140742E88
 * Callers:
 *     PfpPrivSourceEnum @ 0x140741CC0 (PfpPrivSourceEnum.c)
 *     ExpGetProcessInformation @ 0x1407432D0 (ExpGetProcessInformation.c)
 *     ExProcessCounterSetCallback @ 0x1409F5E80 (ExProcessCounterSetCallback.c)
 * Callees:
 *     ObOpenObjectByPointer @ 0x1407379D0 (ObOpenObjectByPointer.c)
 *     PsGetNextProcess @ 0x1407446C0 (PsGetNextProcess.c)
 *     ObCloseHandle @ 0x14076BDA0 (ObCloseHandle.c)
 */

_DWORD *__fastcall ExGetNextProcess(PVOID Object, char a2)
{
  _DWORD *result; // rax
  HANDLE Handle; // [rsp+50h] [rbp+8h] BYREF

  Handle = 0LL;
  while ( 1 )
  {
    result = (_DWORD *)PsGetNextProcess(Object);
    Object = result;
    if ( !result )
      break;
    if ( (result[281] & 0x4000000) != 0 )
    {
      if ( !a2 )
        return Object;
      if ( ObOpenObjectByPointer(result, 0x200u, 0LL, 0x400u, (POBJECT_TYPE)PsProcessType, 1, &Handle) >= 0 )
      {
        ObCloseHandle(Handle, 0);
        return Object;
      }
    }
  }
  return result;
}
