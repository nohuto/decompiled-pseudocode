/*
 * XREFs of NtUserGetExtendedPointerDeviceProperty @ 0x1C016F820
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003E180 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004E000 (UserSessionSwitchLeaveCrit.c)
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C005040C (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     HMValidateHandle @ 0x1C0079718 (HMValidateHandle.c)
 *     RIMGetExtendedPointerDeviceProperty @ 0x1C01C7328 (RIMGetExtendedPointerDeviceProperty.c)
 */

__int64 __fastcall NtUserGetExtendedPointerDeviceProperty(unsigned __int64 a1, ULONG64 a2, __int64 a3, __int64 a4)
{
  ULONG64 v4; // rdi
  int v6; // ebx
  ULONG v7; // ecx
  __int64 v8; // rdx
  ULONG64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  ULONG64 v13; // r8
  NTSTATUS v14; // eax
  __int128 v16; // [rsp+30h] [rbp-58h] BYREF
  int v17; // [rsp+40h] [rbp-48h]
  __int128 v18; // [rsp+60h] [rbp-28h]
  int v19; // [rsp+70h] [rbp-18h]

  v4 = a2;
  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal(a1, a2, a3, a4);
  v16 = 0LL;
  v17 = 0;
  v6 = 0;
  if ( !v4 )
    goto LABEL_2;
  v12 = HMValidateHandle(a1, 0x13u);
  if ( !v12 )
  {
    v7 = 6;
    goto LABEL_3;
  }
  if ( (*(_DWORD *)(v12 + 200) & 0x80u) == 0 )
  {
LABEL_2:
    v7 = 87;
LABEL_3:
    UserSetLastError(v7);
    goto LABEL_15;
  }
  v13 = v4;
  if ( v4 + 20 < v4 || v4 + 20 > MmUserProbeAddress )
    v13 = MmUserProbeAddress;
  v18 = *(_OWORD *)v13;
  v19 = *(_DWORD *)(v13 + 16);
  v16 = v18;
  v17 = v19;
  v14 = RIMGetExtendedPointerDeviceProperty(*(_QWORD *)(v12 + 472), &v16);
  if ( v14 < 0 )
  {
    v7 = RtlNtStatusToDosError(v14);
    goto LABEL_3;
  }
  v9 = MmUserProbeAddress;
  if ( v4 >= MmUserProbeAddress )
    v4 = MmUserProbeAddress;
  *(_OWORD *)v4 = v16;
  *(_DWORD *)(v4 + 16) = v17;
  v6 = 1;
LABEL_15:
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return v6;
}
