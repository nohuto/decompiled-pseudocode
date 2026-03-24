/*
 * XREFs of NtUserSlicerControl @ 0x1C0203250
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     memmove @ 0x1C016DB40 (memmove.c)
 *     MagSlicerControl @ 0x1C01CDA34 (MagSlicerControl.c)
 */

__int64 __fastcall NtUserSlicerControl(__int64 a1, int a2, __int128 *a3, unsigned int a4)
{
  int v8; // r14d
  __int64 v9; // r13
  NTSTATUS v10; // ebx
  __int64 v11; // rdi
  ULONG v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int128 *v15; // rcx
  __int128 *v17; // rcx
  ULONG64 v18; // rdx
  unsigned __int64 v19; // rax
  unsigned int v20; // ebx
  __int128 *v21; // rax
  unsigned int i; // edx
  __int64 v23; // r9
  __int128 *v24; // r8
  __int128 v25; // xmm0
  __int64 ThreadWin32Thread; // rax
  int v27; // eax
  unsigned int Size; // [rsp+34h] [rbp-114h]
  __int128 *Size_4; // [rsp+38h] [rbp-110h]
  __int128 *v30; // [rsp+50h] [rbp-F8h]
  __int64 v31; // [rsp+90h] [rbp-B8h]
  __int128 v32; // [rsp+A8h] [rbp-A0h]
  __int128 v33; // [rsp+D8h] [rbp-70h] BYREF
  __int128 v34; // [rsp+E8h] [rbp-60h]
  __int128 v35; // [rsp+F8h] [rbp-50h]

  Size_4 = 0LL;
  Size = 0;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v30 = 0LL;
  v8 = 1;
  EnterCrit(0LL, 1LL);
  v9 = ValidateHwnd(a1);
  if ( !v9 || a2 >= 5 )
  {
    v10 = -1073741811;
LABEL_3:
    v8 = 0;
    v11 = 0LL;
    goto LABEL_4;
  }
  if ( a2 >= 0 )
  {
    if ( a2 <= 1 )
    {
      if ( a3 )
      {
        v10 = -1073741811;
        goto LABEL_62;
      }
      if ( a4 )
      {
        v10 = -1073741306;
        goto LABEL_62;
      }
      Size_4 = 0LL;
      Size = 0;
    }
    else if ( a2 == 2 )
    {
      if ( !a3 )
      {
        v10 = -1073741811;
        goto LABEL_62;
      }
      if ( a4 < 0x10 )
      {
        v10 = -1073741306;
        goto LABEL_62;
      }
      if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      v33 = *a3;
      if ( (unsigned int)v33 > 6 )
      {
        v10 = -1073741306;
        goto LABEL_62;
      }
      v19 = 32LL * (unsigned int)v33;
      if ( v19 > 0xFFFFFFFF )
      {
        v10 = -1073741811;
        goto LABEL_62;
      }
      v20 = v19 + 16;
      if ( (int)v19 + 16 < (unsigned int)v19 )
      {
        v10 = -1073741811;
        goto LABEL_62;
      }
      v21 = (__int128 *)Win32AllocPool(v20, 1735226197LL);
      Size_4 = v21;
      if ( !v21 )
      {
        v10 = -1073741801;
        goto LABEL_62;
      }
      v30 = v21;
      *v21 = v33;
      for ( i = 0; i < *(_DWORD *)v21; ++i )
      {
        v23 = 2LL * i;
        v24 = &a3[v23 + 1];
        if ( v24 + 2 < v24 || (unsigned __int64)(v24 + 2) > MmUserProbeAddress )
          v24 = (__int128 *)MmUserProbeAddress;
        v25 = v24[1];
        v21[v23 + 1] = *v24;
        v21[v23 + 2] = v25;
      }
      Size = v20;
    }
    else if ( a2 == 3 )
    {
      if ( !a3 )
      {
        v10 = -1073741811;
        goto LABEL_62;
      }
      if ( a4 < 0x18 )
      {
        v10 = -1073741306;
        goto LABEL_62;
      }
      v18 = (ULONG64)a3;
      if ( (__int128 *)((char *)a3 + 24) < a3 || (unsigned __int64)a3 + 24 > MmUserProbeAddress )
        v18 = MmUserProbeAddress;
      v31 = *(_QWORD *)(v18 + 16);
      v33 = *(_OWORD *)v18;
      *(_QWORD *)&v34 = v31;
      Size_4 = &v33;
      Size = 24;
    }
    else
    {
      if ( !a3 )
      {
        v10 = -1073741811;
        goto LABEL_62;
      }
      if ( a4 < 0x20 )
      {
        v10 = -1073741306;
        goto LABEL_62;
      }
      v17 = a3;
      if ( a3 + 2 < a3 || (unsigned __int64)(a3 + 2) > MmUserProbeAddress )
        v17 = (__int128 *)MmUserProbeAddress;
      v32 = v17[1];
      v33 = *v17;
      v34 = v32;
      Size_4 = &v33;
      Size = 32;
    }
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v27 = MagSlicerControl(*(_QWORD **)&gMagnContext, ThreadWin32Thread, v9, a2, Size_4, Size);
  v10 = v27;
  if ( a2 == 4 && v27 >= 0 )
  {
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      a3 = (__int128 *)MmUserProbeAddress;
    memmove(a3, Size_4, Size);
  }
LABEL_62:
  if ( v10 < 0 )
    goto LABEL_3;
  v11 = 1LL;
LABEL_4:
  if ( !v8 )
  {
    v12 = RtlNtStatusToDosError(v10);
    UserSetLastError(v12, v13, v14);
  }
  v15 = v30;
  if ( v30 )
    Win32FreePool(v30);
  UserSessionSwitchLeaveCrit(v15);
  return v11;
}
