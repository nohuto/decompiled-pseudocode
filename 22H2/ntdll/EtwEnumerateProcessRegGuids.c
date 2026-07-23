/*
 * XREFs of EtwEnumerateProcessRegGuids @ 0x1801104C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180021920 (RtlReleaseSRWLockShared.c)
 *     EtwpGetNextRegistration @ 0x18004563C (EtwpGetNextRegistration.c)
 */

ULONG __cdecl EtwEnumerateProcessRegGuids(PVOID OutBuffer, ULONG OutBufferSize, PULONG ReturnLength)
{
  ULONG v5; // edi
  ULONG v6; // ebx
  ULONG result; // eax
  _RTL_SRWLOCK *NextRegistration; // rcx
  ULONG v9; // r9d
  ULONG i; // eax
  __int64 v11; // r8
  unsigned __int64 v12; // rdx

  v5 = OutBufferSize >> 4;
  v6 = 0;
  if ( !OutBuffer && OutBufferSize )
    return 87;
  NextRegistration = 0LL;
LABEL_5:
  while ( 1 )
  {
    NextRegistration = (_RTL_SRWLOCK *)EtwpGetNextRegistration(NextRegistration);
    if ( !NextRegistration )
      break;
    v9 = v6;
    if ( v6 >= v5 )
      v9 = v5;
    for ( i = 0; i < v9; ++i )
    {
      v11 = 16LL * i;
      v12 = NextRegistration[4].Value - *(_QWORD *)((char *)OutBuffer + v11);
      if ( !v12 )
        v12 = NextRegistration[5].Value - *(_QWORD *)((char *)OutBuffer + v11 + 8);
      if ( !v12 )
        goto LABEL_5;
    }
    if ( v6 < v5 )
      *((_OWORD *)OutBuffer + v6) = *(_OWORD *)&NextRegistration[4].0;
    ++v6;
  }
  result = v5 < v6 ? 0x7A : 0;
  *ReturnLength = 16 * v6;
  return result;
}
