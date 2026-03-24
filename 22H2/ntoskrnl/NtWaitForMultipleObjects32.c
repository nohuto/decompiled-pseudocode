/*
 * XREFs of NtWaitForMultipleObjects32 @ 0x140678260
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 *     ObWaitForMultipleObjects @ 0x1405FCDC0 (ObWaitForMultipleObjects.c)
 */

__int64 __fastcall NtWaitForMultipleObjects32(
        unsigned int a1,
        unsigned __int64 a2,
        WAIT_TYPE a3,
        BOOLEAN a4,
        unsigned __int64 a5)
{
  __int64 v8; // rbx
  unsigned int v9; // r10d
  char PreviousMode; // r8
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  LARGE_INTEGER *v14; // [rsp+48h] [rbp-230h]
  __int64 v15; // [rsp+50h] [rbp-228h] BYREF
  unsigned __int64 v16[64]; // [rsp+60h] [rbp-218h] BYREF

  v8 = a1;
  v14 = (LARGE_INTEGER *)a5;
  memset(v16, 0, sizeof(v16));
  v9 = 0;
  v15 = 0LL;
  if ( (unsigned int)(v8 - 1) > 0x3F )
    return 3221225711LL;
  if ( (unsigned int)a3 > WaitAny )
    return 3221225713LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v11 = a5;
    if ( a5 )
    {
      if ( a5 >= 0x7FFFFFFF0000LL )
        v11 = 0x7FFFFFFF0000LL;
      v15 = *(_QWORD *)v11;
      v14 = (LARGE_INTEGER *)&v15;
    }
    if ( 4 * v8 )
    {
      v12 = a2 + 4 * v8;
      if ( v12 > 0x7FFFFFFF0000LL || v12 < a2 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  while ( v9 < (unsigned int)v8 )
  {
    v16[v9] = *(int *)(a2 + 4LL * v9);
    ++v9;
  }
  return ObWaitForMultipleObjects(v8, v16, PreviousMode, a3, PreviousMode, a4, v14);
}
