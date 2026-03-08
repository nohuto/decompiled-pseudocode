/*
 * XREFs of ExpPrepareNewAtsDevice @ 0x14060A384
 * Callers:
 *     ExInitializeDeviceAts @ 0x140609E90 (ExInitializeDeviceAts.c)
 * Callees:
 *     ExpAtsConfigureSecureDevice @ 0x14040D320 (ExpAtsConfigureSecureDevice.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpPrepareNewAtsDevice(__int64 a1, char a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *v5; // r12
  __int64 (__fastcall *v7)(_QWORD, _QWORD, _QWORD, __int64 *); // rax
  int v11; // eax
  int v12; // ebx
  __int64 Pool2; // rax
  char *v14; // rdi
  __int64 v15; // r8
  char v16; // r14
  __int64 v17; // rcx
  __int128 v18; // xmm0
  __int64 (__fastcall *v19)(__int64, __int64, __int64, _QWORD); // rax
  bool v21; // cl
  int v22; // eax
  char *v23; // r9
  __int64 (__fastcall *v24)(__int64, int, ULONG_PTR); // r8
  __int64 v25; // rax
  __int64 v26; // [rsp+70h] [rbp+40h] BYREF

  v5 = (_QWORD *)a5;
  v7 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *))(a3 + 64);
  LODWORD(a5) = 0;
  v26 = 0LL;
  *v5 = 0LL;
  v11 = v7(*(_QWORD *)(a3 + 8), 0LL, 0LL, &v26);
  v12 = v11;
  if ( v11 == -1073741789 )
  {
    if ( !v26 )
      return (unsigned int)-1073741823;
    Pool2 = ExAllocatePool2(64LL, v26 + 192, 1698986053LL);
    v14 = (char *)Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    *(_QWORD *)(Pool2 + 24) = a1;
    v15 = Pool2 + 192;
    *(_DWORD *)(Pool2 + 32) = 1;
    v16 = a2 & 1;
    *(_OWORD *)(Pool2 + 40) = *(_OWORD *)a3;
    *(_OWORD *)(Pool2 + 56) = *(_OWORD *)(a3 + 16);
    *(_OWORD *)(Pool2 + 72) = *(_OWORD *)(a3 + 32);
    *(_OWORD *)(Pool2 + 88) = *(_OWORD *)(a3 + 48);
    *(_OWORD *)(Pool2 + 104) = *(_OWORD *)(a3 + 64);
    v17 = *(_QWORD *)(Pool2 + 48);
    *(_OWORD *)(Pool2 + 120) = *(_OWORD *)a4;
    *(_OWORD *)(Pool2 + 136) = *(_OWORD *)(a4 + 16);
    v18 = *(_OWORD *)(a4 + 32);
    *(_BYTE *)(Pool2 + 16) = 1;
    v19 = *(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(Pool2 + 104);
    *(_OWORD *)(v14 + 152) = v18;
    v14[17] = v16;
    *((_QWORD *)v14 + 21) = v14 + 192;
    v12 = v19(v17, v26, v15, 0LL);
    if ( v12 < 0 )
      goto LABEL_11;
    v12 = (*((__int64 (__fastcall **)(_QWORD, __int64 *))v14 + 9))(*((_QWORD *)v14 + 6), &a5);
    if ( v12 < 0 )
      goto LABEL_11;
    if ( (a5 & 1) == 0 )
      goto LABEL_10;
    v21 = 0;
    *((_DWORD *)v14 + 46) = ((unsigned int)a5 >> 12) & 0x1F;
    v22 = a5;
    if ( !v16 && (a5 & 2) != 0 )
      v21 = (a5 & 4) != 0;
    if ( *((_QWORD *)v14 + 19) )
    {
      if ( !v21 )
      {
        v22 = a5 & 0xFFFFFFF9;
        LODWORD(a5) = a5 & 0xFFFFFFF9;
      }
      if ( (v22 & 0x800000) != 0 )
      {
        v12 = ExpAtsConfigureSecureDevice((__int64)v14, 1);
        if ( v12 < 0 )
          goto LABEL_11;
        v23 = v14;
        v24 = ExAtsSvmSecureDevicePowerCallback;
      }
      else
      {
        v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *, char *))(HalIommuDispatch + 160))(
                *((_QWORD *)v14 + 21),
                a1,
                &a5,
                v14 + 176);
        if ( v12 < 0 )
          goto LABEL_11;
        v23 = (char *)*((_QWORD *)v14 + 22);
        v24 = (__int64 (__fastcall *)(__int64, int, ULONG_PTR))ExAtsSvmDevicePowerCallback;
      }
      v12 = (*((__int64 (__fastcall **)(_QWORD, __int64 *, __int64 (__fastcall *)(__int64, int, ULONG_PTR), char *))v14
             + 10))(
              *((_QWORD *)v14 + 6),
              &a5,
              v24,
              v23);
      if ( v12 >= 0 )
      {
        (*(void (__fastcall **)(_QWORD))(a4 + 16))(*(_QWORD *)(a4 + 8));
        (*(void (__fastcall **)(_QWORD))(a3 + 16))(*(_QWORD *)(a3 + 8));
        v25 = ExpAtsSvmDevices;
        if ( *(__int64 **)(ExpAtsSvmDevices + 8) != &ExpAtsSvmDevices )
          __fastfail(3u);
        *(_QWORD *)v14 = ExpAtsSvmDevices;
        *((_QWORD *)v14 + 1) = &ExpAtsSvmDevices;
        *(_QWORD *)(v25 + 8) = v14;
        ExpAtsSvmDevices = (__int64)v14;
        *v5 = v14;
        return (unsigned int)v12;
      }
    }
    else
    {
LABEL_10:
      v12 = -1073741637;
    }
LABEL_11:
    if ( *((_QWORD *)v14 + 22) )
      (*(void (**)(void))(HalIommuDispatch + 168))();
    ExFreePoolWithTag(v14, 0);
    return (unsigned int)v12;
  }
  if ( v11 >= 0 )
    return (unsigned int)-1073741823;
  return (unsigned int)v12;
}
