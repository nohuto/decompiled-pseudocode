/*
 * XREFs of IopDumpCallRemovePagesCallbacks @ 0x1405502F0
 * Callers:
 *     IoWriteCrashDump @ 0x14054EF00 (IoWriteCrashDump.c)
 *     IoAddPagesForPartialKernelDump @ 0x140559F94 (IoAddPagesForPartialKernelDump.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     IoUpdateBugCheckProgressEnvVariable @ 0x14054EC04 (IoUpdateBugCheckProgressEnvVariable.c)
 *     IopRemovePageDumpRange @ 0x1405511AC (IopRemovePageDumpRange.c)
 *     KeValidateBugCheckCallbackRecord @ 0x1405670E8 (KeValidateBugCheckCallbackRecord.c)
 */

char __fastcall IopDumpCallRemovePagesCallbacks(int a1)
{
  _UNKNOWN **v1; // rax
  __int64 v3; // rdi
  int v4; // esi
  __int128 v6; // [rsp+40h] [rbp-58h] BYREF
  __int128 v7; // [rsp+50h] [rbp-48h]
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+0h] BYREF
  char v9; // [rsp+A8h] [rbp+10h] BYREF
  __int64 *v10; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v11; // [rsp+B8h] [rbp+20h]

  v1 = &retaddr;
  v6 = 0LL;
  v7 = 0LL;
  v3 = KeBugCheckAddRemovePagesCallbackListHead;
  v10 = &KeBugCheckAddRemovePagesCallbackListHead;
  while ( 1 )
  {
    v11 = v3;
    if ( (__int64 *)v3 == &KeBugCheckAddRemovePagesCallbackListHead )
      break;
    LOBYTE(v1) = KeValidateBugCheckCallbackRecord(v3, 6LL, &v10);
    if ( (_BYTE)v1 )
    {
      *(_QWORD *)&v6 = 0LL;
      HIDWORD(v6) = a1;
      v4 = 0;
      do
      {
        v7 = 0uLL;
        DWORD2(v6) = 0;
        v9 = 0;
        (*(void (__fastcall **)(__int64, __int64, __int128 *))(v3 + 16))(6LL, v3, &v6);
        if ( v4 >= 0 && *((_QWORD *)&v7 + 1) )
          v4 = IopRemovePageDumpRange(&v6, &v9);
      }
      while ( v9 );
      if ( v4 < 0 )
      {
        *(_BYTE *)(v3 + 45) = 4;
        LOBYTE(v1) = 4;
      }
      else
      {
        LOBYTE(v1) = 3;
      }
      *(_BYTE *)(v3 + 44) = (_BYTE)v1;
    }
    else if ( !v10 )
    {
      return (char)v1;
    }
    v3 = *(_QWORD *)v3;
  }
  return (char)v1;
}
