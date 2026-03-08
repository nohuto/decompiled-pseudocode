/*
 * XREFs of RootHub_WdfEvtTimer20PortResumeComplete @ 0x1C0040618
 * Callers:
 *     RootHub_WdfEvtTimer20PortResumeCompleteDpc @ 0x1C0040900 (RootHub_WdfEvtTimer20PortResumeCompleteDpc.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0005BBC (WPP_RECORDER_SF_.c)
 *     Controller_IsControllerAccessible @ 0x1C000A8E4 (Controller_IsControllerAccessible.c)
 *     XilRegister_ReadUlong @ 0x1C00180A0 (XilRegister_ReadUlong.c)
 *     WPP_RECORDER_SF_D @ 0x1C00180C4 (WPP_RECORDER_SF_D.c)
 *     RootHub_ReleaseReadModifyWriteLock @ 0x1C00182B0 (RootHub_ReleaseReadModifyWriteLock.c)
 *     RootHub_AcquireReadModifyWriteLock @ 0x1C00182F4 (RootHub_AcquireReadModifyWriteLock.c)
 *     XilRegister_WriteUlong @ 0x1C0018428 (XilRegister_WriteUlong.c)
 *     WPP_RECORDER_SF_d @ 0x1C0018458 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_sds @ 0x1C0037A20 (WPP_RECORDER_SF_sds.c)
 */

char __fastcall RootHub_WdfEvtTimer20PortResumeComplete(_QWORD *a1, int a2)
{
  int v4; // edx
  int v5; // r8d
  int v6; // r9d
  __int64 v7; // rcx
  __int64 v8; // r14
  __int64 v9; // rax
  int v10; // edx
  unsigned int v11; // r15d
  int v12; // edx
  __int64 v13; // r12
  unsigned int *v14; // r13
  int v15; // edx
  int Ulong; // ebx
  int v17; // ebx
  char v18; // al
  int v19; // edx
  __int64 v20; // r12
  int v21; // eax
  int v22; // edx
  int v23; // ebx
  int v24; // ebx

  if ( *(_BYTE *)(a1[1] + 601LL) && KeGetCurrentIrql() )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v4, v5, v6);
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
  }
  v7 = a1[1];
  v8 = *(_QWORD *)(v7 + 88);
  LOBYTE(v9) = Controller_IsControllerAccessible(v7);
  if ( (_BYTE)v9 )
  {
    v11 = a2 - 1;
    RootHub_AcquireReadModifyWriteLock((__int64)a1, a2 - 1);
    v13 = 16LL * (unsigned int)(a2 - 1);
    v14 = (unsigned int *)(v13 + a1[5]);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 72LL),
        v12,
        11,
        217,
        (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
        a2);
    }
    Ulong = XilRegister_ReadUlong(v8, v14);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v15) = 4;
      WPP_RECORDER_SF_D(
        *(_QWORD *)(a1[1] + 72LL),
        v15,
        11,
        218,
        (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
        Ulong);
    }
    v17 = Ulong & 0xE00C200 | 0x410000;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v15) = 4;
      WPP_RECORDER_SF_D(
        *(_QWORD *)(a1[1] + 72LL),
        v15,
        11,
        219,
        (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
        v17);
    }
    XilRegister_WriteUlong(v8, v14, v17);
    RootHub_ReleaseReadModifyWriteLock((__int64)a1, v11);
    v18 = XilRegister_ReadUlong(v8, v14);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v19) = 4;
      WPP_RECORDER_SF_D(
        *(_QWORD *)(a1[1] + 72LL),
        v19,
        11,
        220,
        (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
        v18);
    }
    v9 = a1[1];
    if ( (*(_QWORD *)(v9 + 336) & 0x8000000LL) != 0 )
    {
      v9 = a1[6];
      if ( *(_BYTE *)(120LL * v11 + v9 + 23) )
      {
        v20 = a1[5] + v13;
        RootHub_AcquireReadModifyWriteLock((__int64)a1, v11);
        v21 = XilRegister_ReadUlong(v8, (unsigned int *)(v20 + 4));
        v23 = v21;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v22) = 4;
          WPP_RECORDER_SF_D(
            *(_QWORD *)(a1[1] + 72LL),
            v22,
            11,
            221,
            (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
            v21);
        }
        v24 = v23 | 0x10000;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v22) = 4;
          WPP_RECORDER_SF_D(
            *(_QWORD *)(a1[1] + 72LL),
            v22,
            11,
            222,
            (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
            v24);
        }
        XilRegister_WriteUlong(v8, (_DWORD *)(v20 + 4), v24);
        LOBYTE(v9) = RootHub_ReleaseReadModifyWriteLock((__int64)a1, v11);
      }
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 4;
    LOBYTE(v9) = WPP_RECORDER_SF_(
                   *(_QWORD *)(a1[1] + 72LL),
                   v10,
                   11,
                   216,
                   (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids);
  }
  return v9;
}
