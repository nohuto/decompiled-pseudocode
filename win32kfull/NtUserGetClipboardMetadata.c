__int64 __fastcall NtUserGetClipboardMetadata(__int64 a1, ULONG64 a2, __int64 a3)
{
  ULONG64 v3; // rbx
  unsigned int v4; // edi
  ULONG64 v5; // rdx
  ULONG64 v6; // rcx
  int ClipboardMetadata; // edi
  __int64 v9; // [rsp+40h] [rbp-28h]
  int v10; // [rsp+48h] [rbp-20h]

  v3 = a2;
  v4 = a1;
  EnterSharedCrit(a1, a2, a3);
  v5 = v3;
  if ( v3 + 12 < v3 || v3 + 12 > MmUserProbeAddress )
    v5 = MmUserProbeAddress;
  v9 = *(_QWORD *)v5;
  v10 = *(_DWORD *)(v5 + 8);
  ClipboardMetadata = InternalGetClipboardMetadata(v4);
  if ( ClipboardMetadata == 1 )
  {
    v6 = MmUserProbeAddress;
    if ( v3 >= MmUserProbeAddress )
      v3 = MmUserProbeAddress;
    *(_QWORD *)v3 = v9;
    *(_DWORD *)(v3 + 8) = v10;
  }
  UserSessionSwitchLeaveCrit(v6);
  return ClipboardMetadata;
}
