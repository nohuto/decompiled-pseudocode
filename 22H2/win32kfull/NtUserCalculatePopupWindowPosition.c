/*
 * XREFs of NtUserCalculatePopupWindowPosition @ 0x1C01CD040
 * Callers:
 *     <none>
 * Callees:
 *     _MonitorFromPoint @ 0x1C00D03B0 (_MonitorFromPoint.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??0?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@PEAUtagPOPUPMENU@@@Z @ 0x1C013A314 (--0-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@PEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C013A334 (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     FindBestPos @ 0x1C02322C4 (FindBestPos.c)
 */

__int64 __fastcall NtUserCalculatePopupWindowPosition(__int64 a1, __int64 a2, int a3, __int128 *a4, _DWORD *a5)
{
  __int64 *v7; // r14
  unsigned __int64 *v8; // rdi
  int v9; // ebx
  int v10; // ecx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // r14
  struct tagMONITOR *v17; // r13
  int BestPos; // ebx
  _BYTE *v19; // rcx
  __int64 v21; // [rsp+50h] [rbp-A8h]
  __int64 v22; // [rsp+60h] [rbp-98h]
  __int64 v23[7]; // [rsp+70h] [rbp-88h] BYREF
  __int128 v24; // [rsp+A8h] [rbp-50h] BYREF

  v7 = (__int64 *)a2;
  v8 = (unsigned __int64 *)a1;
  v23[2] = a1;
  v23[3] = a2;
  v24 = 0LL;
  v9 = 0;
  EnterCrit(0LL, 0LL);
  if ( (a3 & 0xFFFE0200) != 0 )
  {
    v10 = 1004;
LABEL_3:
    UserSetLastError(v10);
    goto LABEL_28;
  }
  if ( !a5 )
  {
    v10 = 87;
    goto LABEL_3;
  }
  if ( a4 )
  {
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      a4 = (__int128 *)MmUserProbeAddress;
    v24 = *a4;
    a4 = &v24;
  }
  if ( (unsigned __int64)v7 >= MmUserProbeAddress )
    v7 = (__int64 *)MmUserProbeAddress;
  v21 = *v7;
  if ( (int)*v7 < 0 || (HIDWORD(*v7) & 0x80000000) != 0 )
  {
    UserSetLastError(87);
  }
  else
  {
    if ( (unsigned __int64)v8 >= MmUserProbeAddress )
      v8 = (unsigned __int64 *)MmUserProbeAddress;
    v15 = *v8;
    v23[4] = v15;
    v22 = v15;
    v16 = HIDWORD(v15);
    v17 = (struct tagMONITOR *)MonitorFromPoint(v15, 2u, 0);
    if ( (a3 & 4) != 0 )
    {
      LODWORD(v15) = v15 - (int)v21 / 2;
    }
    else if ( (a3 & 8) != 0 )
    {
      LODWORD(v15) = v15 - v21;
    }
    if ( (a3 & 0x10) != 0 )
    {
      LODWORD(v16) = SHIDWORD(v21) / -2 + v16;
    }
    else if ( (a3 & 0x20) != 0 )
    {
      LODWORD(v16) = v16 - HIDWORD(v21);
    }
    SmartObjStackRef<tagPOPUPMENU>::SmartObjStackRef<tagPOPUPMENU>(v23, 0LL);
    BestPos = FindBestPos(v15, v16, (__int64)a4, a3 | 0x20000u, (__int64)v23, v17, v22);
    SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v23);
    v19 = a5;
    if ( (unsigned __int64)a5 >= MmUserProbeAddress )
      v19 = (_BYTE *)MmUserProbeAddress;
    *v19 = *v19;
    v19[15] = v19[15];
    *a5 = (__int16)BestPos;
    v11 = (unsigned int)SHIWORD(BestPos);
    a5[1] = v11;
    a5[2] = v21 + (__int16)BestPos;
    v12 = (unsigned int)(v11 + HIDWORD(v21));
    a5[3] = v12;
    v9 = 1;
  }
LABEL_28:
  UserSessionSwitchLeaveCrit(v12, v11, v13, v14);
  return v9;
}
