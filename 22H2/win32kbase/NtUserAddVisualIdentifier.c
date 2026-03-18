/*
 * XREFs of NtUserAddVisualIdentifier @ 0x1C0142EE0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C0099700 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?IsEqualByLuid@CDesktopInputSink@@SA_NPEBU_LUID@@@Z @ 0x1C01E4F14 (-IsEqualByLuid@CDesktopInputSink@@SA_NPEBU_LUID@@@Z.c)
 *     ?AddMapping@InputObjectMap@@SAJAEBU_LUID@@PEBUCompositionInputObject@@@Z @ 0x1C0231C24 (-AddMapping@InputObjectMap@@SAJAEBU_LUID@@PEBUCompositionInputObject@@@Z.c)
 */

__int64 __fastcall NtUserAddVisualIdentifier(void *a1, struct _LUID *a2)
{
  ULONG64 v2; // r8
  int v3; // ebx
  NTSTATUS v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  ULONG v8; // ecx
  __int64 CurrentProcess; // rax
  struct _LUID v11; // [rsp+30h] [rbp-18h] BYREF
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF
  struct _LUID v13; // [rsp+68h] [rbp+20h] BYREF

  Object = 0LL;
  v13 = 0LL;
  v2 = (ULONG64)&a2[1];
  if ( &a2[1] < a2 || v2 > MmUserProbeAddress )
    a2 = (struct _LUID *)MmUserProbeAddress;
  v13 = *a2;
  v3 = 1;
  LOBYTE(v2) = 1;
  v4 = CompositionInputObject::ResolveHandle(a1, 1LL, v2, (struct CompositionInputObject **)&Object);
  if ( v4 < 0 )
    goto LABEL_10;
  v11 = (struct _LUID)*((_QWORD *)Object + 2);
  if ( CDesktopInputSink::IsEqualByLuid(&v11)
    || (CurrentProcess = PsGetCurrentProcess(v6, v5, v7), *((_QWORD *)Object + 7) != CurrentProcess) )
  {
    v3 = 0;
    v8 = 5;
LABEL_7:
    UserSetLastError(v8);
    goto LABEL_11;
  }
  v4 = InputObjectMap::AddMapping(&v13, (const struct CompositionInputObject *)Object);
  if ( v4 < 0 )
  {
LABEL_10:
    v3 = 0;
    v8 = RtlNtStatusToDosError(v4);
    goto LABEL_7;
  }
LABEL_11:
  if ( Object )
    ObfDereferenceObject(Object);
  return v3;
}
