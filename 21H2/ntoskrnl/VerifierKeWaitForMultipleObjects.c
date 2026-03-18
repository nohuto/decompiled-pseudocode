/*
 * XREFs of VerifierKeWaitForMultipleObjects @ 0x140A96450
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     ViKeInjectStatusAlerted @ 0x140A7F778 (ViKeInjectStatusAlerted.c)
 *     ViKeObjectAcquired @ 0x140A96904 (ViKeObjectAcquired.c)
 */

__int64 __fastcall VerifierKeWaitForMultipleObjects(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        char a5,
        char a6,
        __int64 a7,
        __int64 a8)
{
  int v12; // ebx
  signed int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  void *retaddr; // [rsp+68h] [rbp+0h]

  if ( ViKeInjectStatusAlerted(a6) )
    v12 = 257;
  else
    v12 = ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD, char, char, __int64, __int64))pXdvKeWaitForMultipleObjects)(
            a1,
            a2,
            a3,
            a4,
            a5,
            a6,
            a7,
            a8);
  if ( ViDeadlockDetectionEnabled )
  {
    v13 = v12 & 0xFFFFFF7F;
    if ( a5 )
    {
      if ( v12 >= 0 && v13 < (int)a1 )
      {
        v16 = v13;
        v15 = 1LL;
        v14 = a2 + 8 * v16;
        goto LABEL_11;
      }
    }
    else if ( !v13 )
    {
      v14 = a2;
      v15 = a1;
LABEL_11:
      ViKeObjectAcquired(v15, v14, a7, retaddr);
    }
  }
  return (unsigned int)v12;
}
