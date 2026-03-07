__int64 __fastcall NtUserCalculatePopupWindowPosition(__int64 a1, __int64 a2, int a3, __int128 *a4, _DWORD *a5)
{
  __int64 *v7; // r14
  unsigned __int64 *v8; // rdi
  int v9; // ebx
  int v10; // ecx
  __int64 v11; // rcx
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // r14
  struct tagMONITOR *v14; // r13
  int BestPos; // ebx
  _BYTE *v16; // rcx
  __int64 v18; // [rsp+50h] [rbp-A8h]
  __int64 v19; // [rsp+60h] [rbp-98h]
  __int64 v20[7]; // [rsp+70h] [rbp-88h] BYREF
  __int128 v21; // [rsp+A8h] [rbp-50h] BYREF

  v7 = (__int64 *)a2;
  v8 = (unsigned __int64 *)a1;
  v20[2] = a1;
  v20[3] = a2;
  v21 = 0LL;
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
    v21 = *a4;
    a4 = &v21;
  }
  if ( (unsigned __int64)v7 >= MmUserProbeAddress )
    v7 = (__int64 *)MmUserProbeAddress;
  v18 = *v7;
  if ( (int)*v7 < 0 || (HIDWORD(*v7) & 0x80000000) != 0 )
  {
    UserSetLastError(87);
  }
  else
  {
    if ( (unsigned __int64)v8 >= MmUserProbeAddress )
      v8 = (unsigned __int64 *)MmUserProbeAddress;
    v12 = *v8;
    v20[4] = v12;
    v19 = v12;
    v13 = HIDWORD(v12);
    v14 = (struct tagMONITOR *)MonitorFromPoint(v12, 2u, 0);
    if ( (a3 & 4) != 0 )
    {
      LODWORD(v12) = v12 - (int)v18 / 2;
    }
    else if ( (a3 & 8) != 0 )
    {
      LODWORD(v12) = v12 - v18;
    }
    if ( (a3 & 0x10) != 0 )
    {
      LODWORD(v13) = SHIDWORD(v18) / -2 + v13;
    }
    else if ( (a3 & 0x20) != 0 )
    {
      LODWORD(v13) = v13 - HIDWORD(v18);
    }
    SmartObjStackRef<tagPOPUPMENU>::SmartObjStackRef<tagPOPUPMENU>(v20, 0LL);
    BestPos = FindBestPos(v12, v13, (__int64)a4, a3 | 0x20000u, (__int64)v20, v14, v19);
    SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v20);
    v16 = a5;
    if ( (unsigned __int64)a5 >= MmUserProbeAddress )
      v16 = (_BYTE *)MmUserProbeAddress;
    *v16 = *v16;
    v16[15] = v16[15];
    *a5 = (__int16)BestPos;
    a5[1] = SHIWORD(BestPos);
    a5[2] = v18 + (__int16)BestPos;
    v11 = (unsigned int)(SHIWORD(BestPos) + HIDWORD(v18));
    a5[3] = v11;
    v9 = 1;
  }
LABEL_28:
  UserSessionSwitchLeaveCrit(v11);
  return v9;
}
