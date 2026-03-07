void __fastcall EtwpCancelTraceImageUnloadApc(PVOID P)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned __int16 *v4; // rcx
  __int128 v5; // [rsp+50h] [rbp-18h] BYREF
  __int64 v6; // [rsp+70h] [rbp+8h] BYREF

  v6 = 0LL;
  v2 = *((_QWORD *)P + 11);
  v5 = 0LL;
  if ( FltMgrCallbacks )
    v3 = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *, __int64 *))(FltMgrCallbacks + 24))(
           v2,
           512LL,
           &v5,
           &v6);
  else
    v3 = -1073741637;
  if ( v3 < 0 )
    v4 = (unsigned __int16 *)(*((_QWORD *)P + 11) + 88LL);
  else
    v4 = (unsigned __int16 *)&v5;
  EtwpTraceImageUnload(
    v4,
    *((_QWORD *)P + 12),
    *((_QWORD *)P + 13),
    *((_QWORD *)P + 14),
    *((_DWORD *)P + 30),
    *((_DWORD *)P + 31),
    *((_DWORD *)P + 32),
    *((_DWORD *)P + 33),
    *((_QWORD *)P + 17),
    0);
  if ( v6 )
    (*(void (**)(void))(FltMgrCallbacks + 32))();
  ObfDereferenceObjectWithTag(*((PVOID *)P + 11), 0x746C6644u);
  ExFreePoolWithTag(P, 0);
}
