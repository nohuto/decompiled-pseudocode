__int64 __fastcall NtUserfnIMECONTROL(__int64 a1, int a2, unsigned __int64 a3, ULONG64 a4, __int64 a5, char a6)
{
  struct tagSOFTKBDDATA *v10; // rsi
  __int64 v11; // rcx
  struct tagSOFTKBDDATA *v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  __int128 *v15; // rax
  ULONG64 v17; // [rsp+30h] [rbp-128h]
  __int128 v18; // [rsp+48h] [rbp-110h] BYREF
  __int64 v19; // [rsp+58h] [rbp-100h]
  __int128 v20; // [rsp+68h] [rbp-F0h] BYREF
  __int64 v21; // [rsp+78h] [rbp-E0h]
  int v22; // [rsp+80h] [rbp-D8h]
  __int128 v23; // [rsp+88h] [rbp-D0h] BYREF
  __int128 v24; // [rsp+98h] [rbp-C0h]
  _OWORD v25[5]; // [rsp+B0h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+100h] [rbp-58h]
  int v27; // [rsp+108h] [rbp-50h]

  v23 = 0LL;
  v24 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0;
  memset_0(v25, 0, 0x5CuLL);
  v17 = a4;
  v18 = 0LL;
  v19 = 0LL;
  v10 = 0LL;
  PtiCurrentShared(v11);
  if ( a2 != 643 || a3 > 0x22 )
    return 0LL;
  if ( a3 > 0x18 )
    goto LABEL_35;
  switch ( (_DWORD)a3 )
  {
    case 7:
      if ( a4 >= MmUserProbeAddress )
        a4 = MmUserProbeAddress;
      *(_BYTE *)a4 = *(_BYTE *)a4;
      *(_BYTE *)(a4 + 31) = *(_BYTE *)(a4 + 31);
      goto LABEL_34;
    case 8:
      if ( a4 >= MmUserProbeAddress )
        a4 = MmUserProbeAddress;
      v23 = *(_OWORD *)a4;
      v24 = *(_OWORD *)(a4 + 16);
      v15 = &v23;
      goto LABEL_30;
    case 9:
LABEL_24:
      if ( a4 >= MmUserProbeAddress )
        a4 = MmUserProbeAddress;
      *(_BYTE *)a4 = *(_BYTE *)a4;
      *(_BYTE *)(a4 + 91) = *(_BYTE *)(a4 + 91);
LABEL_34:
      v10 = 0LL;
      goto LABEL_35;
    case 0xA:
      if ( a4 >= MmUserProbeAddress )
        a4 = MmUserProbeAddress;
      v25[0] = *(_OWORD *)a4;
      v25[1] = *(_OWORD *)(a4 + 16);
      v25[2] = *(_OWORD *)(a4 + 32);
      v25[3] = *(_OWORD *)(a4 + 48);
      v25[4] = *(_OWORD *)(a4 + 64);
      v26 = *(_QWORD *)(a4 + 80);
      v27 = *(_DWORD *)(a4 + 88);
      v15 = v25;
      goto LABEL_30;
    case 0xB:
      if ( a4 >= MmUserProbeAddress )
        a4 = MmUserProbeAddress;
      *(_BYTE *)a4 = *(_BYTE *)a4;
      *(_BYTE *)(a4 + 27) = *(_BYTE *)(a4 + 27);
      goto LABEL_34;
    case 0xC:
      if ( a4 >= MmUserProbeAddress )
        a4 = MmUserProbeAddress;
      v20 = *(_OWORD *)a4;
      v21 = *(_QWORD *)(a4 + 16);
      v22 = *(_DWORD *)(a4 + 24);
      v15 = &v20;
LABEL_30:
      v14 = (*((__int64 (__fastcall **)(__int64, __int64, unsigned __int64, __int128 *, __int64))&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink
             + ((a6 + 6) & 0x1F)))(
              a1,
              643LL,
              a3,
              v15,
              a5);
      goto LABEL_36;
    case 0x11:
      goto LABEL_24;
  }
  if ( (_DWORD)a3 != 24 )
  {
LABEL_35:
    v14 = (*((__int64 (__fastcall **)(__int64, __int64, unsigned __int64, ULONG64, __int64))&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink
           + ((a6 + 6) & 0x1F)))(
            a1,
            643LL,
            a3,
            v17,
            a5);
    goto LABEL_36;
  }
  v12 = ProbeAndCaptureSoftKbdData((struct tagSOFTKBDDATA *)a4);
  v10 = v12;
  if ( !v12 )
    return 0LL;
  PushW32ThreadLock((__int64)v12, &v18, (__int64)Win32FreePool);
  v14 = (*((__int64 (__fastcall **)(__int64, __int64, unsigned __int64, struct tagSOFTKBDDATA *, __int64))&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink
         + ((a6 + 6) & 0x1F)))(
          a1,
          643LL,
          a3,
          v10,
          a5);
LABEL_36:
  v13 = v14;
  if ( v10 )
    PopAndFreeAlwaysW32ThreadLock((__int64)&v18);
  return v13;
}
