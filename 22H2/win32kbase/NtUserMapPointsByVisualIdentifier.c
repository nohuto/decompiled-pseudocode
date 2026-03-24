/*
 * XREFs of NtUserMapPointsByVisualIdentifier @ 0x1C01329F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C0008140 (WPP_RECORDER_SF_qq.c)
 *     Win32AllocPoolWithQuota @ 0x1C002AA40 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     UserSetLastError @ 0x1C0039D2C (UserSetLastError.c)
 *     WPP_RECORDER_SF_d @ 0x1C0047F78 (WPP_RECORDER_SF_d.c)
 *     memmove @ 0x1C00CF9C0 (memmove.c)
 *     ?MapPointsByVisualIdentifierInternal@@YAJPEAU_LUID@@0KPEAUVisualPoint@@1@Z @ 0x1C0116FA4 (-MapPointsByVisualIdentifierInternal@@YAJPEAU_LUID@@0KPEAUVisualPoint@@1@Z.c)
 *     UserGetLastError @ 0x1C01D1CEC (UserGetLastError.c)
 */

__int64 __fastcall NtUserMapPointsByVisualIdentifier(
        struct _LUID *a1,
        __int64 a2,
        unsigned int a3,
        const void *a4,
        volatile void *Address)
{
  __int64 v6; // r15
  struct _LUID *v7; // r14
  struct _LUID *v9; // rcx
  struct VisualPoint *v10; // rsi
  struct VisualPoint *v11; // rdi
  unsigned __int64 v12; // r15
  ULONG64 v13; // rcx
  struct VisualPoint *v14; // rax
  struct VisualPoint *v15; // rax
  NTSTATUS v16; // eax
  __int64 v17; // rcx
  int v18; // ebx
  __int64 v19; // rcx
  __int64 CurrentProcessWow64Process; // rax
  char LastError; // al
  int v22; // edx
  char v24; // [rsp+30h] [rbp-A8h]
  struct _LUID v25; // [rsp+60h] [rbp-78h] BYREF
  struct _LUID v26; // [rsp+68h] [rbp-70h] BYREF
  struct _LUID *v27; // [rsp+70h] [rbp-68h]
  int v28; // [rsp+78h] [rbp-60h]
  __int64 *v29; // [rsp+88h] [rbp-50h]
  struct _LUID *v30; // [rsp+90h] [rbp-48h]

  v6 = a3;
  v7 = (struct _LUID *)a2;
  v9 = (struct _LUID *)&WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v24 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      a2,
      21,
      61,
      (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids,
      (char)a1,
      v24);
  }
  v27 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 8 * v6;
  if ( v12 > 0xFFFFFFFF )
    goto LABEL_27;
  v28 = v12;
  if ( !(_DWORD)v12 )
  {
LABEL_26:
    v18 = 1;
    goto LABEL_29;
  }
  if ( a1 )
  {
    v9 = a1 + 1;
    if ( &a1[1] < a1 || (unsigned __int64)v9 > MmUserProbeAddress )
      a1 = (struct _LUID *)MmUserProbeAddress;
    v25 = *a1;
    v27 = &v25;
    v29 = (__int64 *)&v25;
  }
  if ( v7 )
  {
    v9 = v7 + 1;
    if ( &v7[1] < v7 || (unsigned __int64)v9 > MmUserProbeAddress )
      v7 = (struct _LUID *)MmUserProbeAddress;
    v26 = *v7;
    v7 = &v26;
    v30 = &v26;
  }
  if ( ((PsGetCurrentProcessWow64Process(v9) == 0 ? 3 : 0) & (unsigned __int8)a4) != 0 )
    ExRaiseDatatypeMisalignment();
  v13 = (ULONG64)a4 + (unsigned int)v12;
  if ( v13 > MmUserProbeAddress || v13 < (unsigned __int64)a4 )
    *(_BYTE *)MmUserProbeAddress = 0;
  v14 = (struct VisualPoint *)Win32AllocPoolWithQuota((unsigned int)v12, 0x766E6355u);
  v10 = v14;
  if ( !v14 )
    ExRaiseStatus(-1073741801);
  memmove(v14, a4, (unsigned int)v12);
  v15 = (struct VisualPoint *)Win32AllocPoolWithQuota((unsigned int)v12, 0x766E6355u);
  v11 = v15;
  if ( !v15 )
  {
LABEL_27:
    v18 = 0;
    v19 = 8LL;
    goto LABEL_28;
  }
  v16 = MapPointsByVisualIdentifierInternal(v27, v7, a3, v10, v15);
  if ( v16 >= 0 )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v17);
    ProbeForWrite(Address, (unsigned int)v12, CurrentProcessWow64Process != 0 ? 1 : 4);
    memmove((void *)Address, v11, (unsigned int)v12);
    goto LABEL_26;
  }
  v18 = 0;
  v19 = RtlNtStatusToDosError(v16);
LABEL_28:
  UserSetLastError(v19, a2);
LABEL_29:
  if ( v10 )
    Win32FreePool((__int64)v10);
  if ( v11 )
    Win32FreePool((__int64)v11);
  if ( !v18 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LastError = UserGetLastError();
    LOBYTE(v22) = 2;
    WPP_RECORDER_SF_d(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v22,
      21,
      62,
      (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids,
      LastError);
  }
  return v18;
}
