/*
 * XREFs of PopFxUpdateProcessorIdleState @ 0x14058A070
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     IoAcquireRemoveLockEx @ 0x140305F80 (IoAcquireRemoveLockEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PopFxUpdateProcessorIdleState(__int64 a1, int a2, _DWORD *a3)
{
  NTSTATUS v6; // ebx
  int v7; // eax
  __int64 v8; // rcx
  __int64 (__fastcall *v9)(__int64, GUID *, _DWORD *, __int64, _QWORD, _QWORD, __int64 *); // rax
  __int64 v11; // [rsp+48h] [rbp-40h] BYREF
  _DWORD v12[4]; // [rsp+50h] [rbp-38h] BYREF

  if ( *a3 )
  {
    v6 = -1073741822;
    if ( *(_QWORD *)(a1 + 152) )
    {
      v6 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(a1 + 240), 0LL, &Src, 1u, 0x20u);
      if ( v6 >= 0 )
      {
        v7 = a3[1];
        v11 = 0LL;
        v8 = *(_QWORD *)(a1 + 192);
        v12[1] = v7;
        v12[2] = a3[2];
        v9 = *(__int64 (__fastcall **)(__int64, GUID *, _DWORD *, __int64, _QWORD, _QWORD, __int64 *))(a1 + 152);
        v12[0] = a2;
        v6 = v9(v8, &GUID_PROCESSOR_IDLE_UPDATE, v12, 12LL, 0LL, 0LL, &v11);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 244), 0xFFFFFFFF) == 1 )
          KeSetEvent((PRKEVENT)(a1 + 248), 0, 0);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v6;
}
