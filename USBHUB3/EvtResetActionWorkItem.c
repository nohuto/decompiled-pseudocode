/*
 * XREFs of EvtResetActionWorkItem @ 0x1C008FA70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EvtResetActionWorkItem(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // edi
  __int64 v3; // rsi
  unsigned int v4; // eax
  __int64 v5; // rdx
  struct _KEVENT v7[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v8; // [rsp+60h] [rbp-18h]

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C006A120);
  memset(v7, 0, sizeof(v7));
  v2 = *(_DWORD *)(v1 + 8);
  v3 = *(_QWORD *)v1;
  v8 = 0LL;
  if ( !v2 )
  {
    v7[0].Header.LockNV = 24;
    v7[0].Header.WaitListHead.Flink = (_LIST_ENTRY *)FunctionLevelResetCompletion;
    v7[0].Header.WaitListHead.Blink = (_LIST_ENTRY *)v7;
    KeInitializeEvent(&v7[1], SynchronizationEvent, 0);
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v3 + 32))(*(_QWORD *)(v3 + 8), v2, 0LL, 0LL);
  v5 = v4;
  if ( !v2 && v4 == 259 )
  {
    KeWaitForSingleObject(&v7[1], Executive, 0, 0, 0LL);
    v5 = (unsigned int)v8;
  }
  return (*(__int64 (__fastcall **)(_QWORD, __int64))(v1 + 24))(*(_QWORD *)(v1 + 16), v5);
}
