/*
 * XREFs of NtUserMagGetContextInformation @ 0x1C01FE3F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     memmove @ 0x1C016DB40 (memmove.c)
 *     memset @ 0x1C016DE00 (memset.c)
 *     MagGetLensContextInformation @ 0x1C01CC540 (MagGetLensContextInformation.c)
 */

__int64 __fastcall NtUserMagGetContextInformation(__int64 a1, int a2, char *a3, ULONG64 a4)
{
  _BYTE *v7; // rsi
  void *v8; // r13
  _OWORD *v9; // r14
  int v10; // r12d
  NTSTATUS LensContextInformation; // ebx
  __int64 v12; // rdi
  ULONG v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  void *v16; // rcx
  _DWORD *v18; // r15
  unsigned int *v19; // rax
  unsigned int v20; // ecx
  unsigned int v21; // r15d
  void *v22; // rax
  __int128 *v23; // rcx
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int64 ThreadWin32Thread; // rax
  size_t Size; // [rsp+40h] [rbp-148h] BYREF
  void *v28; // [rsp+48h] [rbp-140h]
  _OWORD *v29; // [rsp+50h] [rbp-138h]
  ULONG64 v30; // [rsp+68h] [rbp-120h]
  __int64 v31; // [rsp+70h] [rbp-118h]
  void *v32; // [rsp+78h] [rbp-110h]
  __int128 v33; // [rsp+A0h] [rbp-E8h]
  __int128 v34; // [rsp+B0h] [rbp-D8h]
  __int128 v35; // [rsp+C0h] [rbp-C8h]
  _BYTE v36[112]; // [rsp+D0h] [rbp-B8h] BYREF

  v30 = a4;
  v7 = 0LL;
  LODWORD(Size) = 0;
  memset(v36, 0, 0x68uLL);
  v8 = 0LL;
  v28 = 0LL;
  v32 = 0LL;
  v9 = 0LL;
  v29 = 0LL;
  v10 = 1;
  EnterCrit(0LL, 1LL);
  if ( a1 == -3 )
  {
    v31 = -1LL;
  }
  else if ( a1 )
  {
    v31 = ValidateHwnd(a1);
    if ( !v31 )
      goto LABEL_5;
  }
  else
  {
    v31 = 0LL;
  }
  if ( a2 >= 11 )
  {
    LensContextInformation = -1073741821;
    goto LABEL_6;
  }
  v18 = (_DWORD *)v30;
  v19 = (unsigned int *)v30;
  if ( v30 >= MmUserProbeAddress )
    v19 = (unsigned int *)MmUserProbeAddress;
  v20 = *v19;
  LODWORD(Size) = *v19;
  if ( a2 > 6 )
  {
    if ( a2 != 7 )
    {
      if ( a2 != 8 )
      {
        if ( (unsigned int)(a2 - 9) > 1 )
          goto LABEL_67;
        if ( a3 )
        {
          if ( v20 < 4 )
            goto LABEL_30;
          v7 = v36;
          LODWORD(Size) = 4;
          goto LABEL_67;
        }
        goto LABEL_5;
      }
      if ( !a3 )
        goto LABEL_5;
      if ( v20 < 0x30 )
        goto LABEL_30;
      v9 = (_OWORD *)Win32AllocPoolZInit(48LL, 1735226197LL);
      v29 = v9;
      if ( v9 )
      {
        v23 = (__int128 *)a3;
        if ( a3 + 48 < a3 || (unsigned __int64)(a3 + 48) > MmUserProbeAddress )
          v23 = (__int128 *)MmUserProbeAddress;
        v33 = *v23;
        v34 = v23[1];
        v24 = v34;
        v35 = v23[2];
        v25 = v35;
        *v9 = v33;
        v9[1] = v24;
        v9[2] = v25;
        v7 = v9;
        LODWORD(Size) = 48;
        goto LABEL_67;
      }
LABEL_55:
      LensContextInformation = -1073741801;
      goto LABEL_6;
    }
    if ( !a3 )
      goto LABEL_5;
    if ( v20 < 0x10 )
      goto LABEL_30;
    v21 = 160;
    if ( v20 <= 0xA0 )
      v21 = v20;
    v22 = (void *)Win32AllocPoolZInit(v21, 1735226197LL);
    v32 = v22;
LABEL_65:
    if ( v22 )
    {
      LODWORD(Size) = v21;
      v18 = (_DWORD *)v30;
      v7 = v22;
      goto LABEL_67;
    }
    goto LABEL_55;
  }
  if ( a2 == 6 )
  {
    if ( !a3 )
      goto LABEL_5;
    if ( v20 < 8 )
      goto LABEL_30;
    v21 = 208;
    if ( v20 <= 0xD0 )
      v21 = v20;
    v22 = (void *)Win32AllocPoolZInit(v21, 1735226197LL);
    v8 = v22;
    v28 = v22;
    goto LABEL_65;
  }
  if ( a2 < 0 )
    goto LABEL_67;
  if ( a2 <= 1 )
    goto LABEL_5;
  switch ( a2 )
  {
    case 2:
      if ( a3 )
      {
        if ( v20 < 0x10 )
          goto LABEL_30;
        v7 = v36;
        LODWORD(Size) = 16;
        goto LABEL_67;
      }
      goto LABEL_5;
    case 3:
      if ( a3 )
      {
        if ( v20 < 0x20 )
          goto LABEL_30;
        v7 = v36;
        LODWORD(Size) = 32;
        goto LABEL_67;
      }
      goto LABEL_5;
    case 4:
      if ( a3 )
      {
        if ( v20 < 0x24 )
          goto LABEL_30;
        v7 = v36;
        LODWORD(Size) = 36;
        goto LABEL_67;
      }
LABEL_5:
      LensContextInformation = -1073741811;
LABEL_6:
      v10 = 0;
      v12 = 0LL;
      goto LABEL_7;
  }
  if ( !a3 )
    goto LABEL_5;
  if ( v20 < 0x64 )
  {
LABEL_30:
    LensContextInformation = -1073741306;
    goto LABEL_6;
  }
  v7 = v36;
  LODWORD(Size) = 100;
LABEL_67:
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  LensContextInformation = MagGetLensContextInformation(
                             *(_QWORD **)&gMagnContext,
                             ThreadWin32Thread,
                             v31,
                             0LL,
                             a2,
                             (__int64)v7,
                             (int *)&Size);
  if ( LensContextInformation >= 0 )
  {
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      a3 = (char *)MmUserProbeAddress;
    memmove(a3, v7, (unsigned int)Size);
    if ( (unsigned __int64)v18 >= MmUserProbeAddress )
      v18 = (_DWORD *)MmUserProbeAddress;
    *v18 = Size;
  }
  if ( LensContextInformation < 0 )
    goto LABEL_6;
  v12 = 1LL;
LABEL_7:
  if ( !v10 )
  {
    v13 = RtlNtStatusToDosError(LensContextInformation);
    UserSetLastError(v13, v14, v15);
  }
  if ( v9 )
    Win32FreePool(v9);
  v16 = v32;
  if ( v32 )
    Win32FreePool(v32);
  if ( v8 )
    Win32FreePool(v8);
  UserSessionSwitchLeaveCrit(v16);
  return v12;
}
