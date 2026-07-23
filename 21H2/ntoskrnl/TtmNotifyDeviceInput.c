/*
 * XREFs of TtmNotifyDeviceInput @ 0x1408FC120
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     TtmpFindDeviceByToken @ 0x1408FCEA8 (TtmpFindDeviceByToken.c)
 *     TtmiGetTerminalById @ 0x1408FD93C (TtmiGetTerminalById.c)
 *     TtmiResetTerminalTimeouts @ 0x1408FDA48 (TtmiResetTerminalTimeouts.c)
 *     TtmiAcquireCurrentSession @ 0x1408FF124 (TtmiAcquireCurrentSession.c)
 *     TtmiLogDeviceInputNotified @ 0x1409023A0 (TtmiLogDeviceInputNotified.c)
 *     TtmiLogError @ 0x140902C24 (TtmiLogError.c)
 */

void __fastcall TtmNotifyDeviceInput(unsigned int a1, __int64 a2, int a3)
{
  char DeviceByToken; // si
  char v5; // r14
  char v6; // di
  int v9; // eax
  int v10; // r9d
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r10
  int TerminalById; // eax
  __int64 v16; // r10
  __int64 v17; // [rsp+30h] [rbp-10h] BYREF
  __int64 v18; // [rsp+38h] [rbp-8h] BYREF
  __int64 v19; // [rsp+88h] [rbp+48h] BYREF

  v17 = 0LL;
  v19 = 0LL;
  DeviceByToken = 0;
  v18 = 0LL;
  v5 = 0;
  v6 = 0;
  v9 = TtmiAcquireCurrentSession(&v19);
  if ( v9 < 0 )
  {
    TtmiLogError("TtmNotifyDeviceInput", 761LL, (unsigned int)v9, 0xFFFFFFFFLL);
LABEL_3:
    v11 = v19;
    goto LABEL_4;
  }
  v11 = v19;
  if ( (*(_DWORD *)(v19 + 4) & 4) != 0 )
  {
    v12 = 769LL;
    v13 = 3221226581LL;
LABEL_9:
    TtmiLogError("TtmNotifyDeviceInput", v12, v13, 0xFFFFFFFFLL);
    goto LABEL_4;
  }
  DeviceByToken = TtmpFindDeviceByToken(v19, a1, a2, &v17);
  if ( !DeviceByToken )
  {
    v12 = 786LL;
    v13 = 3221226021LL;
    goto LABEL_9;
  }
  v14 = v17;
  *(_QWORD *)(v17 + 608) = MEMORY[0xFFFFF78000000008];
  if ( *(_DWORD *)(v14 + 596) == -1 )
    goto LABEL_3;
  v11 = v19;
  TerminalById = TtmiGetTerminalById(&v18, v19);
  if ( TerminalById < 0 )
  {
    v13 = (unsigned int)TerminalById;
    v12 = 805LL;
    goto LABEL_9;
  }
  if ( (a3 & 1) != 0 )
    v6 = *(char *)(v16 + 600) < 0;
  v5 = TtmiResetTerminalTimeouts(v11, v18, 4, 1414809921, v6);
LABEL_4:
  LOBYTE(v10) = DeviceByToken;
  TtmiLogDeviceInputNotified(a1, a2, a3, v10, v5, v6);
  if ( v11 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
}
