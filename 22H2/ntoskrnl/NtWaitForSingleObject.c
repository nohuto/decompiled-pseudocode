/*
 * XREFs of NtWaitForSingleObject @ 0x14063DF50
 * Callers:
 *     SepRmCallLsa @ 0x14034D310 (SepRmCallLsa.c)
 *     PfSnPrefetchFileMetadata @ 0x1406928A8 (PfSnPrefetchFileMetadata.c)
 * Callees:
 *     ObWaitForSingleObject @ 0x14063DFD0 (ObWaitForSingleObject.c)
 */

NTSTATUS __cdecl NtWaitForSingleObject(HANDLE Handle, BOOLEAN Alertable, PLARGE_INTEGER Timeout)
{
  int v3; // r9d
  int v4; // edx
  PLARGE_INTEGER v5; // rax
  LARGE_INTEGER v7; // [rsp+58h] [rbp+20h] BYREF

  v3 = Alertable;
  v7.QuadPart = 0LL;
  v4 = (unsigned __int8)KeGetCurrentThread()->$6BEBF485330D18E60173AA6D991B35AC::gap0[10];
  v5 = Timeout;
  if ( Timeout && (_BYTE)v4 )
  {
    if ( (unsigned __int64)Timeout >= 0x7FFFFFFF0000LL )
      v5 = (PLARGE_INTEGER)0x7FFFFFFF0000LL;
    v7 = *v5;
    v5 = &v7;
  }
  return ObWaitForSingleObject((int)Handle, v4, (unsigned __int8)v4, v3, v5);
}
