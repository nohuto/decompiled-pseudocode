/*
 * XREFs of ?PopProcessLaunchForegroundPolicy@ForegroundLaunch@@YA?AW4_PROCESS_LAUNCH_FOREGROUND_POLICY_INTERNAL@@PEAX@Z @ 0x1C0079E00
 * Callers:
 *     EditionPopProcessLaunchForegroundPolicy @ 0x1C0079FD0 (EditionPopProcessLaunchForegroundPolicy.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0076DBC (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dD @ 0x1C0079F24 (WPP_RECORDER_AND_TRACE_SF_dD.c)
 *     LockProcessByClientId @ 0x1C007AC20 (LockProcessByClientId.c)
 */

__int64 __fastcall ForegroundLaunch::PopProcessLaunchForegroundPolicy(__int64 a1)
{
  char v1; // bl
  unsigned int v2; // edi
  __int64 v4; // rax
  _QWORD *v5; // rdx
  int v6; // r8d
  int v7; // r9d
  int v8; // edx
  __int64 v10; // rax
  __int64 v11; // [rsp+68h] [rbp+10h] BYREF
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF

  v1 = 1;
  v2 = 1;
  LockProcessByClientId(a1, &Object);
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v11, (struct _EX_PUSH_LOCK *)&unk_1C03377D0);
  v4 = 5LL;
  v5 = &unk_1C03360D0;
  while ( *v5 != a1 )
  {
    v4 = (unsigned int)(v4 + 1);
    v5 += 2;
    if ( (unsigned int)v4 >= 0xF )
      goto LABEL_4;
  }
  v10 = 2 * v4;
  v2 = dword_1C0336088[2 * v10];
  dword_1C0336088[2 * v10] = 0;
LABEL_4:
  ExReleasePushLockExclusiveEx(v11, 0LL);
  KeLeaveCriticalRegion();
  if ( Object )
    ObfDereferenceObject(Object);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v1 = 0;
  }
  if ( v1 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = 19;
    LOBYTE(v8) = v1;
    LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_dD(WPP_GLOBAL_Control->AttachedDevice, v8, v6, v7);
  }
  return v2;
}
