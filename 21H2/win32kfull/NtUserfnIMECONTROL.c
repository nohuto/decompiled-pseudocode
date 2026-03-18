/*
 * XREFs of NtUserfnIMECONTROL @ 0x1C02011B0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0061D10 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C007F6F0 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     ?ProbeAndCaptureSoftKbdData@@YAPEAUtagSOFTKBDDATA@@PEAU1@@Z @ 0x1C01DD910 (-ProbeAndCaptureSoftKbdData@@YAPEAUtagSOFTKBDDATA@@PEAU1@@Z.c)
 */

__int64 __fastcall NtUserfnIMECONTROL(__int64 a1, int a2, unsigned __int64 a3, ULONG64 a4, __int64 a5, char a6)
{
  __int64 v10; // rbx
  __int64 v11; // rax
  __int128 *v12; // rax
  ULONG64 v14; // [rsp+30h] [rbp-118h]
  struct tagSOFTKBDDATA *v15; // [rsp+38h] [rbp-110h]
  __int128 v16; // [rsp+48h] [rbp-100h] BYREF
  __int64 v17; // [rsp+58h] [rbp-F0h]
  __int128 v18; // [rsp+68h] [rbp-E0h] BYREF
  __int64 v19; // [rsp+78h] [rbp-D0h]
  int v20; // [rsp+80h] [rbp-C8h]
  __int128 v21; // [rsp+88h] [rbp-C0h] BYREF
  __int128 v22; // [rsp+98h] [rbp-B0h]
  _OWORD v23[6]; // [rsp+B0h] [rbp-98h] BYREF

  v21 = 0LL;
  v22 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0;
  memset(v23, 0, 0x5CuLL);
  v14 = a4;
  v16 = 0LL;
  v17 = 0LL;
  v15 = 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( a2 != 643 || a3 > 0x22 )
    return 0LL;
  if ( a3 > 0x18 )
    goto LABEL_34;
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
      v21 = *(_OWORD *)a4;
      v22 = *(_OWORD *)(a4 + 16);
      v12 = &v21;
      goto LABEL_30;
    case 9:
LABEL_24:
      if ( a4 >= MmUserProbeAddress )
        a4 = MmUserProbeAddress;
      *(_BYTE *)a4 = *(_BYTE *)a4;
      *(_BYTE *)(a4 + 91) = *(_BYTE *)(a4 + 91);
      goto LABEL_34;
    case 0xA:
      if ( a4 >= MmUserProbeAddress )
        a4 = MmUserProbeAddress;
      v23[0] = *(_OWORD *)a4;
      v23[1] = *(_OWORD *)(a4 + 16);
      v23[2] = *(_OWORD *)(a4 + 32);
      v23[3] = *(_OWORD *)(a4 + 48);
      v23[4] = *(_OWORD *)(a4 + 64);
      *(_QWORD *)&v23[5] = *(_QWORD *)(a4 + 80);
      DWORD2(v23[5]) = *(_DWORD *)(a4 + 88);
      v12 = v23;
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
      v18 = *(_OWORD *)a4;
      v19 = *(_QWORD *)(a4 + 16);
      v20 = *(_DWORD *)(a4 + 24);
      v12 = &v18;
LABEL_30:
      v11 = ((__int64 (__fastcall *)(__int64, __int64, unsigned __int64, __int128 *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
              a1,
              643LL,
              a3,
              v12,
              a5);
      goto LABEL_35;
    case 0x11:
      goto LABEL_24;
  }
  if ( (_DWORD)a3 != 24 )
  {
LABEL_34:
    v11 = ((__int64 (__fastcall *)(__int64, __int64, unsigned __int64, ULONG64, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
            a1,
            643LL,
            a3,
            v14,
            a5);
    goto LABEL_35;
  }
  v15 = ProbeAndCaptureSoftKbdData((struct tagSOFTKBDDATA *)a4);
  if ( !v15 )
    return 0LL;
  PushW32ThreadLock((__int64)v15, &v16, (__int64)Win32FreePool);
  v11 = ((__int64 (__fastcall *)(__int64, __int64, unsigned __int64, struct tagSOFTKBDDATA *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
          a1,
          643LL,
          a3,
          v15,
          a5);
LABEL_35:
  v10 = v11;
  if ( v15 )
    PopAndFreeAlwaysW32ThreadLock((__int64)&v16);
  return v10;
}
