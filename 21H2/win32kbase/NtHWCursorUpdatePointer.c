/*
 * XREFs of NtHWCursorUpdatePointer @ 0x1C014A940
 * Callers:
 *     <none>
 * Callees:
 *     UserGetHDevFromMonitor @ 0x1C000F634 (UserGetHDevFromMonitor.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C0010CB4 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     ?pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ @ 0x1C0010CF0 (-pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ.c)
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C002AE08 (PALLOCMEM2.c)
 *     EnterSharedCrit @ 0x1C0035E30 (EnterSharedCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0036190 (UserSessionSwitchLeaveCrit.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00CF880 (memmove.c)
 */

__int64 __fastcall NtHWCursorUpdatePointer(ULONG64 a1, __int128 *a2)
{
  int v4; // eax
  __int64 HDevFromMonitor; // rax
  __int64 v7; // rsi
  int v8; // eax
  unsigned int v9; // edx
  struct _LUID *v10; // rax
  int v11; // ebx
  bool v12; // sf
  const void *v13; // rbx
  int v14; // edi
  size_t v15; // r15
  void *v16; // r14
  unsigned int v17; // edi
  struct _LUID *v18; // rax
  __int64 v19; // [rsp+30h] [rbp-88h] BYREF
  __int128 v20; // [rsp+38h] [rbp-80h]
  __int128 v21; // [rsp+48h] [rbp-70h]
  void *v22; // [rsp+58h] [rbp-60h]
  _DWORD v23[6]; // [rsp+60h] [rbp-58h] BYREF
  void *v24; // [rsp+78h] [rbp-40h]
  __int64 v25; // [rsp+80h] [rbp-38h]
  int v26; // [rsp+88h] [rbp-30h] BYREF
  __int64 v27; // [rsp+8Ch] [rbp-2Ch]
  int v28; // [rsp+94h] [rbp-24h]

  EnterSharedCrit(0, 1);
  v4 = (int)qword_1C0256240;
  if ( qword_1C0256240 )
    v4 = qword_1C0256240();
  if ( !v4 && !gbOSTestSigningEnabled )
  {
    UserSessionSwitchLeaveCrit();
    return 3221225474LL;
  }
  if ( a1 )
  {
    if ( a1 >= MmUserProbeAddress )
      a1 = MmUserProbeAddress;
    v20 = *(_OWORD *)a1;
    *(_QWORD *)&v21 = *(_QWORD *)(a1 + 16);
    HDevFromMonitor = UserGetHDevFromMonitor(v20);
    v7 = HDevFromMonitor;
    if ( HDevFromMonitor )
    {
      v19 = HDevFromMonitor;
      v8 = *(_DWORD *)(HDevFromMonitor + 40);
      if ( (v8 & 1) != 0
        && (v8 & 0x400) == 0
        && (v8 & 0x20000) == 0
        && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v19) )
      {
        v27 = *((_QWORD *)&v20 + 1);
        v26 = *(_DWORD *)(*(_QWORD *)(v7 + 2576) + 256LL);
        v28 = v21 & 1;
        if ( !a2 )
        {
          v10 = PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v19);
          v11 = ((__int64 (__fastcall *)(struct _LUID *, int *, _QWORD))qword_1C0251AF8)(v10, &v26, 0LL);
          v12 = v11 < 0;
LABEL_16:
          if ( v12 )
            v11 = -1073741823;
          goto LABEL_34;
        }
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          a2 = (__int128 *)MmUserProbeAddress;
        v20 = *a2;
        v21 = a2[1];
        if ( (_DWORD)v20 == 1
          && (v13 = (const void *)*((_QWORD *)&v21 + 1)) != 0LL
          && DWORD1(v20) <= 0x100
          && (v14 = DWORD2(v20), DWORD2(v20) <= 0x100)
          && HIDWORD(v20) <= v9 )
        {
          v15 = (unsigned int)(DWORD2(v20) * HIDWORD(v20));
          v16 = PALLOCMEM2(v15, 1886221383LL, 1);
          v22 = v16;
          if ( v16 )
          {
            if ( (unsigned __int64)v13 >= MmUserProbeAddress )
              v13 = (const void *)MmUserProbeAddress;
            memmove(v16, v13, v15);
            v23[5] = 0;
            v23[0] = 2;
            v23[1] = DWORD1(v20);
            v23[2] = v14;
            v23[3] = HIDWORD(v20);
            v23[4] = *(_DWORD *)(*(_QWORD *)(v7 + 2576) + 256LL);
            v24 = v16;
            v25 = v21;
            v18 = PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v19);
            v11 = ((__int64 (__fastcall *)(struct _LUID *, int *, _DWORD *, _QWORD))qword_1C0251B00)(
                    v18,
                    &v26,
                    v23,
                    0LL);
            Win32FreePool((__int64)v16);
            v12 = v11 < 0;
            goto LABEL_16;
          }
          v17 = -1073741823;
        }
        else
        {
          v17 = -1073741811;
        }
        UserSessionSwitchLeaveCrit();
        return v17;
      }
    }
  }
  v11 = -1073741811;
LABEL_34:
  UserSessionSwitchLeaveCrit();
  return (unsigned int)v11;
}
