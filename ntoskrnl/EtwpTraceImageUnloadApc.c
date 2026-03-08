/*
 * XREFs of EtwpTraceImageUnloadApc @ 0x14035DB50
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     KeAreAllApcsDisabled @ 0x14034C170 (KeAreAllApcsDisabled.c)
 *     EtwpTraceImageUnload @ 0x14035E3D0 (EtwpTraceImageUnload.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpTraceImageUnloadApc(PVOID P)
{
  int v2; // eax
  __int128 *v3; // rcx
  __int128 v4; // [rsp+50h] [rbp-18h] BYREF
  __int64 v5; // [rsp+70h] [rbp+8h] BYREF

  v5 = 0LL;
  v4 = 0LL;
  if ( KeAreAllApcsDisabled() )
    __int2c();
  if ( FltMgrCallbacks )
    v2 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int128 *, __int64 *))(FltMgrCallbacks + 24))(
           *((_QWORD *)P + 11),
           1024LL,
           &v4,
           &v5);
  else
    v2 = -1073741637;
  if ( v2 < 0 )
    LODWORD(v3) = *((_QWORD *)P + 11) + 88;
  else
    v3 = &v4;
  EtwpTraceImageUnload(
    (_DWORD)v3,
    *((_QWORD *)P + 12),
    *((_QWORD *)P + 13),
    *((_QWORD *)P + 14),
    *((_DWORD *)P + 30),
    *((_DWORD *)P + 31),
    *((_DWORD *)P + 32),
    *((_DWORD *)P + 33),
    *((_QWORD *)P + 17),
    0);
  if ( v5 )
    (*(void (**)(void))(FltMgrCallbacks + 32))();
  ObfDereferenceObjectWithTag(*((PVOID *)P + 11), 0x746C6644u);
  ExFreePoolWithTag(P, 0);
}
