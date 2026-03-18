/*
 * XREFs of NtUserMagGetContextInformation @ 0x1C01F9400
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     MagGetLensContextInformation @ 0x1C01C9964 (MagGetLensContextInformation.c)
 */

__int64 __fastcall NtUserMagGetContextInformation(__int64 a1, int a2, char *a3, ULONG64 a4)
{
  _BYTE *v7; // r14
  __int64 v8; // r13
  _OWORD *v9; // r15
  int v10; // r12d
  NTSTATUS LensContextInformation; // edi
  __int64 v12; // rbx
  ULONG v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int *v17; // rax
  unsigned int v18; // ecx
  unsigned int v19; // edi
  __int64 v20; // rax
  __int128 *v21; // rcx
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  int v24; // ebx
  _DWORD *v25; // rax
  size_t Size; // [rsp+30h] [rbp-148h] BYREF
  __int64 v27; // [rsp+38h] [rbp-140h]
  _OWORD *v28; // [rsp+40h] [rbp-138h]
  __int64 v29; // [rsp+58h] [rbp-120h]
  ULONG64 v30; // [rsp+60h] [rbp-118h]
  __int64 v31; // [rsp+68h] [rbp-110h]
  __int128 v32; // [rsp+90h] [rbp-E8h]
  __int128 v33; // [rsp+A0h] [rbp-D8h]
  __int128 v34; // [rsp+B0h] [rbp-C8h]
  _BYTE v35[112]; // [rsp+C0h] [rbp-B8h] BYREF

  v30 = a4;
  v7 = 0LL;
  LODWORD(Size) = 0;
  memset(v35, 0, 0x68uLL);
  v8 = 0LL;
  v27 = 0LL;
  v31 = 0LL;
  v9 = 0LL;
  v28 = 0LL;
  v10 = 1;
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
  v17 = (unsigned int *)v30;
  if ( v30 >= MmUserProbeAddress )
    v17 = (unsigned int *)MmUserProbeAddress;
  v18 = *v17;
  LODWORD(Size) = *v17;
  if ( a2 > 6 )
  {
    if ( a2 != 7 )
    {
      if ( a2 != 8 )
      {
        if ( (unsigned int)(a2 - 9) > 1 )
          goto LABEL_68;
        if ( a3 )
        {
          if ( v18 < 4 )
            goto LABEL_30;
          v7 = v35;
          LODWORD(Size) = 4;
          goto LABEL_68;
        }
        goto LABEL_5;
      }
      if ( !a3 )
        goto LABEL_5;
      v19 = 48;
      if ( v18 < 0x30 )
        goto LABEL_30;
      v9 = (_OWORD *)Win32AllocPoolZInit(48LL, 1735226197LL);
      v28 = v9;
      if ( v9 )
      {
        v21 = (__int128 *)a3;
        if ( a3 + 48 < a3 || (unsigned __int64)(a3 + 48) > MmUserProbeAddress )
          v21 = (__int128 *)MmUserProbeAddress;
        v32 = *v21;
        v33 = v21[1];
        v22 = v33;
        v34 = v21[2];
        v23 = v34;
        *v9 = v32;
        v9[1] = v22;
        v9[2] = v23;
        v7 = v9;
        goto LABEL_67;
      }
LABEL_55:
      LensContextInformation = -1073741801;
      goto LABEL_6;
    }
    if ( !a3 )
      goto LABEL_5;
    if ( v18 < 0x10 )
      goto LABEL_30;
    v19 = 160;
    if ( v18 <= 0xA0 )
      v19 = v18;
    v20 = Win32AllocPoolZInit(v19, 1735226197LL);
    v31 = v20;
LABEL_65:
    if ( v20 )
    {
      v7 = (_BYTE *)v20;
LABEL_67:
      LODWORD(Size) = v19;
      goto LABEL_68;
    }
    goto LABEL_55;
  }
  if ( a2 == 6 )
  {
    if ( !a3 )
      goto LABEL_5;
    if ( v18 < 8 )
      goto LABEL_30;
    v19 = 208;
    if ( v18 <= 0xD0 )
      v19 = v18;
    v20 = Win32AllocPoolZInit(v19, 1735226197LL);
    v8 = v20;
    v27 = v20;
    goto LABEL_65;
  }
  if ( a2 < 0 )
    goto LABEL_68;
  if ( a2 <= 1 )
    goto LABEL_5;
  switch ( a2 )
  {
    case 2:
      if ( a3 )
      {
        if ( v18 < 0x10 )
          goto LABEL_30;
        v7 = v35;
        LODWORD(Size) = 16;
        goto LABEL_68;
      }
      goto LABEL_5;
    case 3:
      if ( a3 )
      {
        if ( v18 < 0x20 )
          goto LABEL_30;
        v7 = v35;
        LODWORD(Size) = 32;
        goto LABEL_68;
      }
      goto LABEL_5;
    case 4:
      if ( a3 )
      {
        if ( v18 < 0x24 )
          goto LABEL_30;
        v7 = v35;
        LODWORD(Size) = 36;
        goto LABEL_68;
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
  if ( v18 < 0x64 )
  {
LABEL_30:
    LensContextInformation = -1073741306;
    goto LABEL_6;
  }
  v7 = v35;
  LODWORD(Size) = 100;
LABEL_68:
  LensContextInformation = MagGetLensContextInformation(
                             gMagnContext,
                             gptiCurrent,
                             (struct tagWND *)v29,
                             (unsigned int)a2,
                             (__int64)v7,
                             (int *)&Size);
  if ( LensContextInformation >= 0 )
  {
    v24 = Size;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      a3 = (char *)MmUserProbeAddress;
    memmove(a3, v7, (unsigned int)Size);
    v25 = (_DWORD *)v30;
    if ( v30 >= MmUserProbeAddress )
      v25 = (_DWORD *)MmUserProbeAddress;
    *v25 = v24;
  }
  if ( LensContextInformation < 0 )
    goto LABEL_6;
  v12 = 1LL;
LABEL_7:
  if ( !v10 )
  {
    v13 = RtlNtStatusToDosError(LensContextInformation);
    UserSetLastError(v13, v14);
  }
  if ( v9 )
    Win32FreePool(v9);
  v15 = v31;
  if ( v31 )
    Win32FreePool(v31);
  if ( v8 )
    Win32FreePool(v8);
  UserSessionSwitchLeaveCrit(v15);
  return v12;
}
