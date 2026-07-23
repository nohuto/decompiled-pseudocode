/*
 * XREFs of RtlGetAppContainerParent @ 0x180043E10
 * Callers:
 *     RtlpGetTokenNamedObjectPath @ 0x180044040 (RtlpGetTokenNamedObjectPath.c)
 *     RtlDefaultNpAcl @ 0x1800D6930 (RtlDefaultNpAcl.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlInitializeSid @ 0x180040070 (RtlInitializeSid.c)
 *     RtlGetAppContainerSidType @ 0x180044680 (RtlGetAppContainerSidType.c)
 */

NTSTATUS __cdecl RtlGetAppContainerParent(PSID AppContainerSid, PSID *AppContainerSidParent)
{
  _DWORD *Heap; // rax
  _DWORD *v5; // rbx
  __int64 v6; // rbp
  int v7; // edi
  _DWORD *v8; // rcx
  char *v9; // rsi
  _APPCONTAINER_SID_TYPE AppContainerSidType; // [rsp+48h] [rbp+10h] BYREF

  *AppContainerSidParent = 0LL;
  if ( RtlGetAppContainerSidType(AppContainerSid, &AppContainerSidType) < 0
    || AppContainerSidType != ChildAppContainerSidType )
  {
    return -1073741811;
  }
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, 0x28uLL);
  v5 = Heap;
  if ( !Heap )
    return -1073741670;
  v6 = 8LL;
  v7 = RtlInitializeSid(Heap, (PSID_IDENTIFIER_AUTHORITY)&RtlpAppPackageAuthority, 8u);
  if ( v7 < 0 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
  }
  else
  {
    v8 = v5 + 2;
    v9 = (char *)((_BYTE *)AppContainerSid - (_BYTE *)v5);
    do
    {
      *v8 = *(_DWORD *)((char *)v8 + (_QWORD)v9);
      ++v8;
      --v6;
    }
    while ( v6 );
    *AppContainerSidParent = v5;
    return 0;
  }
  return v7;
}
