/*
 * XREFs of NtDebugContinue @ 0x140935970
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     EtwTraceDebuggerEvent @ 0x1405FA5D0 (EtwTraceDebuggerEvent.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     DbgkpWakeTarget @ 0x1409354D4 (DbgkpWakeTarget.c)
 */

NTSTATUS __fastcall NtDebugContinue(void *a1, __int128 *a2, int a3)
{
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS result; // eax
  NTSTATUS v6; // edi
  char v7; // r15
  __int64 *v8; // rsi
  char *v9; // r14
  __int64 *v10; // rcx
  __int64 *v11; // rdx
  __int64 **v12; // rax
  __int128 v13; // [rsp+40h] [rbp-28h]
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v13 = *a2;
  if ( a3 != -2147418111 && a3 != 65537 && a3 != 65538 && a3 != 1073807361 && a3 != 1073807363 && a3 != 1073807364 )
    return -1073741811;
  Object = 0LL;
  result = ObReferenceObjectByHandle(a1, 1u, DbgkDebugObjectType, PreviousMode, &Object, 0LL);
  v6 = result;
  if ( result >= 0 )
  {
    v7 = 0;
    v8 = 0LL;
    v9 = (char *)Object;
    ExAcquireFastMutex((PFAST_MUTEX)((char *)Object + 24));
    v10 = (__int64 *)*((_QWORD *)v9 + 10);
    if ( v10 == (__int64 *)(v9 + 80) )
      goto LABEL_21;
    while ( 1 )
    {
      if ( v10[5] == (_QWORD)v13 )
      {
        if ( v7 )
        {
          *((_DWORD *)v10 + 19) &= ~4u;
          KeSetEvent((PRKEVENT)v9, 0, 0);
LABEL_21:
          ExReleaseFastMutex((PFAST_MUTEX)(v9 + 24));
          ObfDereferenceObject(v9);
          if ( !v7 )
            return -1073741811;
          if ( (PerfGlobalGroupMask[0] & 0x400000) != 0 )
            EtwTraceDebuggerEvent(v8[7], v8[8], 2);
          *((_DWORD *)v8 + 33) = a3;
          *((_DWORD *)v8 + 18) = 0;
          DbgkpWakeTarget((char *)v8);
          return v6;
        }
        if ( v10[6] == *((_QWORD *)&v13 + 1) && (*((_DWORD *)v10 + 19) & 1) != 0 )
        {
          v11 = (__int64 *)*v10;
          v12 = (__int64 **)v10[1];
          if ( *(__int64 **)(*v10 + 8) != v10 || *v12 != v10 )
            __fastfail(3u);
          *v12 = v11;
          v11[1] = (__int64)v12;
          v8 = v10;
          v7 = 1;
        }
      }
      v10 = (__int64 *)*v10;
      if ( v10 == (__int64 *)(v9 + 80) )
        goto LABEL_21;
    }
  }
  return result;
}
