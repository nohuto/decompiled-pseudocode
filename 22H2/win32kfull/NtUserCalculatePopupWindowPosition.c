/*
 * XREFs of NtUserCalculatePopupWindowPosition @ 0x1C01F6800
 * Callers:
 *     <none>
 * Callees:
 *     _MonitorFromPoint @ 0x1C0042060 (_MonitorFromPoint.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     ??0?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@PEAUtagPOPUPMENU@@@Z @ 0x1C0167290 (--0-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@PEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C01672B0 (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     FindBestPos @ 0x1C024A0F0 (FindBestPos.c)
 */

__int64 __fastcall NtUserCalculatePopupWindowPosition(
        unsigned __int64 *a1,
        _QWORD *a2,
        int a3,
        __int128 *a4,
        _DWORD *a5)
{
  int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rcx
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rsi
  __int64 v16; // r13
  int BestPos; // ebx
  _OWORD *v18; // rcx
  int v20[2]; // [rsp+50h] [rbp-98h]
  __int64 v21; // [rsp+60h] [rbp-88h]
  __int64 v22[5]; // [rsp+68h] [rbp-80h] BYREF
  __int128 v23; // [rsp+90h] [rbp-58h] BYREF

  v23 = 0LL;
  v9 = 0;
  EnterCrit(0LL, 1LL);
  if ( (a3 & 0xFFFE0200) != 0 )
  {
    v12 = 1004LL;
LABEL_3:
    UserSetLastError(v12, v10, v11);
    goto LABEL_28;
  }
  if ( !a5 )
  {
    v12 = 87LL;
    goto LABEL_3;
  }
  if ( a4 )
  {
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      a4 = (__int128 *)MmUserProbeAddress;
    v23 = *a4;
    a4 = &v23;
    v22[2] = (__int64)&v23;
  }
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    a2 = (_QWORD *)MmUserProbeAddress;
  *(_QWORD *)v20 = *a2;
  if ( (int)*a2 < 0 || (HIDWORD(*a2) & 0x80000000) != 0 )
  {
    UserSetLastError(87LL, v10, v11);
  }
  else
  {
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (unsigned __int64 *)MmUserProbeAddress;
    v14 = *a1;
    v21 = v14;
    v15 = HIDWORD(v14);
    v16 = MonitorFromPoint(v14, 2u, 0);
    if ( (a3 & 4) != 0 )
    {
      LODWORD(v14) = v14 - v20[0] / 2;
    }
    else if ( (a3 & 8) != 0 )
    {
      LODWORD(v14) = v14 - v20[0];
    }
    if ( (a3 & 0x10) != 0 )
    {
      LODWORD(v15) = v20[1] / -2 + v15;
    }
    else if ( (a3 & 0x20) != 0 )
    {
      LODWORD(v15) = v15 - v20[1];
    }
    v9 = 1;
    SmartObjStackRef<tagPOPUPMENU>::SmartObjStackRef<tagPOPUPMENU>(v22, 0LL);
    BestPos = FindBestPos(v14, v15, v20[0], v20[1], (__int64)a4, a3 | 0x20000u, (__int64)v22, v16, v21);
    SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v22);
    v18 = a5;
    if ( (unsigned __int64)a5 >= MmUserProbeAddress )
      v18 = (_OWORD *)MmUserProbeAddress;
    *v18 = *v18;
    *a5 = (__int16)BestPos;
    a5[1] = SHIWORD(BestPos);
    a5[2] = v20[0] + (__int16)BestPos;
    v13 = (unsigned int)(SHIWORD(BestPos) + v20[1]);
    a5[3] = v13;
  }
LABEL_28:
  UserSessionSwitchLeaveCrit(v13);
  return v9;
}
