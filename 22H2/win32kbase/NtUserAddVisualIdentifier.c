/*
 * XREFs of NtUserAddVisualIdentifier @ 0x1C012D380
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0039D2C (UserSetLastError.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C0083A80 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?IsDesktopVisualInputSink@CDesktopInputTransform@@SA_NPEBUCompositionInputObject@@@Z @ 0x1C01BABE0 (-IsDesktopVisualInputSink@CDesktopInputTransform@@SA_NPEBUCompositionInputObject@@@Z.c)
 *     ?AddMapping@InputObjectMap@@SAJAEBU_LUID@@PEBUCompositionInputObject@@@Z @ 0x1C01FB194 (-AddMapping@InputObjectMap@@SAJAEBU_LUID@@PEBUCompositionInputObject@@@Z.c)
 */

__int64 __fastcall NtUserAddVisualIdentifier(void *a1, struct _LUID *a2)
{
  ULONG64 v2; // r8
  int v3; // ebx
  NTSTATUS v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 CurrentProcess; // rax
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF
  struct _LUID v11; // [rsp+68h] [rbp+20h] BYREF

  Object = 0LL;
  v11 = 0LL;
  v2 = (ULONG64)&a2[1];
  if ( &a2[1] < a2 || v2 > MmUserProbeAddress )
    a2 = (struct _LUID *)MmUserProbeAddress;
  v11 = *a2;
  v3 = 1;
  LOBYTE(v2) = 1;
  v4 = CompositionInputObject::ResolveHandle(a1, 1LL, v2, (struct CompositionInputObject **)&Object);
  if ( v4 < 0 )
    goto LABEL_10;
  if ( CDesktopInputTransform::IsDesktopVisualInputSink((const struct CompositionInputObject *)Object)
    || (CurrentProcess = PsGetCurrentProcess(v6, v5), *((_QWORD *)Object + 8) != CurrentProcess) )
  {
    v3 = 0;
    v7 = 5LL;
LABEL_7:
    UserSetLastError(v7, v5);
    goto LABEL_11;
  }
  v4 = InputObjectMap::AddMapping(&v11, (const struct CompositionInputObject *)Object);
  if ( v4 < 0 )
  {
LABEL_10:
    v3 = 0;
    v7 = RtlNtStatusToDosError(v4);
    goto LABEL_7;
  }
LABEL_11:
  if ( Object )
    ObfDereferenceObject(Object);
  return v3;
}
