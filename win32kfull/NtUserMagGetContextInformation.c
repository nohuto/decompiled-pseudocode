__int64 __fastcall NtUserMagGetContextInformation(__int64 a1, int a2, char *a3, ULONG64 a4)
{
  _BYTE *v7; // r14
  void *v8; // r12
  void *v9; // r13
  _OWORD *v10; // r15
  ULONG64 v11; // rcx
  NTSTATUS LensContextInformation; // edi
  int v13; // eax
  __int64 v14; // rbx
  ULONG v15; // eax
  _DWORD *v17; // rax
  unsigned int v18; // ebx
  __int128 *v19; // rcx
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int64 v22; // rax
  int v23; // ebx
  _DWORD *v24; // rax
  size_t Size; // [rsp+30h] [rbp-148h] BYREF
  __int64 v26; // [rsp+38h] [rbp-140h]
  __int64 v27; // [rsp+40h] [rbp-138h]
  _OWORD *v28; // [rsp+48h] [rbp-130h]
  __int64 v29; // [rsp+60h] [rbp-118h]
  ULONG64 v30; // [rsp+68h] [rbp-110h]
  __int128 v31; // [rsp+90h] [rbp-E8h]
  __int128 v32; // [rsp+A0h] [rbp-D8h]
  __int128 v33; // [rsp+B0h] [rbp-C8h]
  _BYTE v34[112]; // [rsp+C0h] [rbp-B8h] BYREF

  v30 = a4;
  v7 = 0LL;
  LODWORD(Size) = 0;
  memset_0(v34, 0, 0x68uLL);
  v8 = 0LL;
  v26 = 0LL;
  v9 = 0LL;
  v27 = 0LL;
  v10 = 0LL;
  v28 = 0LL;
  EnterCrit(1LL, 0LL);
  if ( a1 == -3 )
  {
    v29 = -1LL;
  }
  else if ( a1 )
  {
    v29 = ValidateHwnd(a1);
    if ( !v29 )
      goto LABEL_5;
  }
  else
  {
    v29 = 0LL;
  }
  if ( a2 >= 11 )
  {
    LensContextInformation = -1073741821;
    goto LABEL_6;
  }
  v17 = (_DWORD *)v30;
  if ( v30 >= MmUserProbeAddress )
    v17 = (_DWORD *)MmUserProbeAddress;
  v11 = (unsigned int)*v17;
  LODWORD(Size) = *v17;
  if ( a2 > 5 )
  {
    switch ( a2 )
    {
      case 6:
        if ( !a3 )
          goto LABEL_5;
        if ( (unsigned int)v11 < 8 )
          goto LABEL_29;
        v18 = 208;
        if ( (unsigned int)v11 <= 0xD0 )
          v18 = v11;
        v22 = Win32AllocPoolZInit(v18, 1735226197LL);
        v8 = (void *)v22;
        v26 = v22;
        break;
      case 7:
        if ( !a3 )
          goto LABEL_5;
        if ( (unsigned int)v11 < 0x10 )
          goto LABEL_29;
        v18 = 160;
        if ( (unsigned int)v11 <= 0xA0 )
          v18 = v11;
        v22 = Win32AllocPoolZInit(v18, 1735226197LL);
        v9 = (void *)v22;
        v27 = v22;
        break;
      case 8:
        if ( !a3 )
          goto LABEL_5;
        v18 = 48;
        if ( (unsigned int)v11 < 0x30 )
          goto LABEL_29;
        v10 = (_OWORD *)Win32AllocPoolZInit(48LL, 1735226197LL);
        v28 = v10;
        if ( !v10 )
        {
LABEL_50:
          LensContextInformation = -1073741801;
          goto LABEL_6;
        }
        v19 = (__int128 *)a3;
        if ( a3 + 48 < a3 || (unsigned __int64)(a3 + 48) > MmUserProbeAddress )
          v19 = (__int128 *)MmUserProbeAddress;
        v31 = *v19;
        v32 = v19[1];
        v20 = v32;
        v33 = v19[2];
        v21 = v33;
        *v10 = v31;
        v10[1] = v20;
        v10[2] = v21;
        v7 = v10;
LABEL_67:
        LODWORD(Size) = v18;
        goto LABEL_68;
      default:
        if ( (unsigned int)(a2 - 9) > 1 )
          goto LABEL_68;
        if ( a3 )
        {
          if ( (unsigned int)v11 < 4 )
            goto LABEL_29;
          v7 = v34;
          LODWORD(Size) = 4;
          goto LABEL_68;
        }
        goto LABEL_5;
    }
    if ( !v22 )
      goto LABEL_50;
    v7 = (_BYTE *)v22;
    goto LABEL_67;
  }
  if ( a2 == 5 )
  {
    if ( a3 )
    {
      if ( (unsigned int)v11 < 0x64 )
        goto LABEL_29;
      v7 = v34;
      LODWORD(Size) = 100;
      goto LABEL_68;
    }
    goto LABEL_5;
  }
  if ( (unsigned int)a2 < 2 )
    goto LABEL_5;
  if ( a2 == 2 )
  {
    if ( a3 )
    {
      if ( (unsigned int)v11 < 0x10 )
        goto LABEL_29;
      v7 = v34;
      LODWORD(Size) = 16;
      goto LABEL_68;
    }
    goto LABEL_5;
  }
  if ( a2 == 3 )
  {
    if ( a3 )
    {
      if ( (unsigned int)v11 < 0x20 )
        goto LABEL_29;
      v7 = v34;
      LODWORD(Size) = 32;
      goto LABEL_68;
    }
LABEL_5:
    LensContextInformation = -1073741811;
LABEL_6:
    v13 = 0;
    v14 = 0LL;
    goto LABEL_7;
  }
  if ( a2 != 4 )
    goto LABEL_68;
  if ( !a3 )
    goto LABEL_5;
  if ( (unsigned int)v11 < 0x24 )
  {
LABEL_29:
    LensContextInformation = -1073741306;
    goto LABEL_6;
  }
  v7 = v34;
  LODWORD(Size) = 36;
LABEL_68:
  LensContextInformation = MagGetLensContextInformation(
                             gMagnContext,
                             gptiCurrent,
                             (struct tagWND *)v29,
                             (unsigned int)a2,
                             (__int64)v7,
                             (int *)&Size);
  if ( LensContextInformation < 0 )
  {
    v13 = 1;
  }
  else
  {
    v23 = Size;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      a3 = (char *)MmUserProbeAddress;
    memmove(a3, v7, (unsigned int)Size);
    v11 = MmUserProbeAddress;
    v24 = (_DWORD *)v30;
    if ( v30 >= MmUserProbeAddress )
      v24 = (_DWORD *)MmUserProbeAddress;
    *v24 = v23;
    v13 = 1;
  }
  if ( LensContextInformation < 0 )
    goto LABEL_6;
  v14 = 1LL;
LABEL_7:
  if ( !v13 )
  {
    v15 = RtlNtStatusToDosError(LensContextInformation);
    UserSetLastError(v15);
  }
  if ( v10 )
    Win32FreePool(v10);
  if ( v9 )
    Win32FreePool(v9);
  if ( v8 )
    Win32FreePool(v8);
  UserSessionSwitchLeaveCrit(v11);
  return v14;
}
