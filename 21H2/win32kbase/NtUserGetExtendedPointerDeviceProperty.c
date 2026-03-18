/*
 * XREFs of NtUserGetExtendedPointerDeviceProperty @ 0x1C01592E0
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C0029AC4 (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     HMValidateHandle @ 0x1C0030A98 (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     RIMGetExtendedPointerDeviceProperty @ 0x1C01A0464 (RIMGetExtendedPointerDeviceProperty.c)
 */

__int64 __fastcall NtUserGetExtendedPointerDeviceProperty(__int64 a1, ULONG64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // rdx
  ULONG64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  ULONG64 v14; // r8
  NTSTATUS v15; // eax
  __int128 v17; // [rsp+30h] [rbp-58h] BYREF
  int v18; // [rsp+40h] [rbp-48h]
  __int128 v19; // [rsp+60h] [rbp-28h]
  int v20; // [rsp+70h] [rbp-18h]

  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal();
  v17 = 0LL;
  v18 = 0;
  v7 = 0;
  if ( !a2 )
    goto LABEL_2;
  v13 = HMValidateHandle(a1, 0x13u);
  if ( !v13 )
  {
    v8 = 6LL;
    goto LABEL_3;
  }
  if ( (*(_DWORD *)(v13 + 200) & 0x80u) == 0 )
  {
LABEL_2:
    v8 = 87LL;
LABEL_3:
    UserSetLastError(v8, v4, v5, v6);
    goto LABEL_15;
  }
  v14 = a2;
  if ( a2 + 20 < a2 || a2 + 20 > MmUserProbeAddress )
    v14 = MmUserProbeAddress;
  v19 = *(_OWORD *)v14;
  v20 = *(_DWORD *)(v14 + 16);
  v17 = v19;
  v18 = v20;
  v15 = RIMGetExtendedPointerDeviceProperty(*(_QWORD *)(v13 + 472), &v17);
  if ( v15 < 0 )
  {
    v8 = RtlNtStatusToDosError(v15);
    goto LABEL_3;
  }
  v10 = MmUserProbeAddress;
  if ( a2 >= MmUserProbeAddress )
    a2 = MmUserProbeAddress;
  *(_OWORD *)a2 = v17;
  *(_DWORD *)(a2 + 16) = v18;
  v7 = 1;
LABEL_15:
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return v7;
}
