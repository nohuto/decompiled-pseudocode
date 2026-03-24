/*
 * XREFs of NtUserGetExtendedPointerDeviceProperty @ 0x1C012ECF0
 * Callers:
 *     <none>
 * Callees:
 *     EnterSharedCrit @ 0x1C00372A0 (EnterSharedCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0037600 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C0039D2C (UserSetLastError.c)
 *     HMValidateHandle @ 0x1C0043940 (HMValidateHandle.c)
 *     RIMGetExtendedPointerDeviceProperty @ 0x1C016BC60 (RIMGetExtendedPointerDeviceProperty.c)
 */

__int64 __fastcall NtUserGetExtendedPointerDeviceProperty(__int64 a1, ULONG64 a2)
{
  __int64 v4; // rdx
  int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rax
  ULONG64 v8; // rdx
  NTSTATUS v9; // eax
  __int128 v11; // [rsp+30h] [rbp-58h] BYREF
  int v12; // [rsp+40h] [rbp-48h]
  __int128 v13; // [rsp+60h] [rbp-28h]
  int v14; // [rsp+70h] [rbp-18h]

  EnterSharedCrit(0, 1);
  v11 = 0LL;
  v12 = 0;
  v5 = 0;
  if ( !a2 )
    goto LABEL_2;
  v7 = HMValidateHandle(a1, 0x13u);
  if ( !v7 )
  {
    v6 = 6LL;
    goto LABEL_3;
  }
  if ( (*(_DWORD *)(v7 + 200) & 0x80u) == 0 )
  {
LABEL_2:
    v6 = 87LL;
LABEL_3:
    UserSetLastError(v6, v4);
    goto LABEL_15;
  }
  v8 = a2;
  if ( a2 + 20 < a2 || a2 + 20 > MmUserProbeAddress )
    v8 = MmUserProbeAddress;
  v13 = *(_OWORD *)v8;
  v14 = *(_DWORD *)(v8 + 16);
  v11 = v13;
  v12 = v14;
  v9 = RIMGetExtendedPointerDeviceProperty(*(_QWORD *)(v7 + 480), &v11);
  if ( v9 < 0 )
  {
    v6 = RtlNtStatusToDosError(v9);
    goto LABEL_3;
  }
  if ( a2 >= MmUserProbeAddress )
    a2 = MmUserProbeAddress;
  *(_OWORD *)a2 = v11;
  *(_DWORD *)(a2 + 16) = v12;
  v5 = 1;
LABEL_15:
  UserSessionSwitchLeaveCrit();
  return v5;
}
