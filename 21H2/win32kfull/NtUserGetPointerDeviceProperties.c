/*
 * XREFs of NtUserGetPointerDeviceProperties @ 0x1C01FB1B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069AF0 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069B4C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     memmove @ 0x1C016E4C0 (memmove.c)
 */

__int64 __fastcall NtUserGetPointerDeviceProperties(__int64 a1, unsigned int *a2, volatile void *a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned int v11; // r14d
  unsigned int *v12; // rax
  unsigned int v13; // eax
  unsigned int v14; // r15d
  unsigned __int64 v15; // rcx
  unsigned int v16; // r12d
  __int64 v17; // rdx
  __int64 v18; // r8
  void *v19; // rax
  const void *v20; // rsi
  __int64 v21; // rcx
  _QWORD v23[3]; // [rsp+28h] [rbp-80h] BYREF
  void *v24; // [rsp+40h] [rbp-68h]
  int v25; // [rsp+4Ch] [rbp-5Ch]
  _BYTE v26[16]; // [rsp+58h] [rbp-50h] BYREF
  unsigned __int64 v27; // [rsp+68h] [rbp-40h]

  v24 = 0LL;
  v23[0] = 0LL;
  v6 = 1;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v26);
  if ( !a1 || !a2 )
  {
    v6 = 0;
    UserSetLastError(87LL, v7, v8);
    goto LABEL_32;
  }
  if ( !(unsigned int)ResolveMouseOrPointerDevice(a1, v23, 0LL) )
  {
    v6 = 0;
    UserSetLastError(6LL, v9, v10);
    goto LABEL_29;
  }
  v11 = *(_DWORD *)(v23[0] + 336LL);
  if ( !a3 )
  {
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (unsigned int *)MmUserProbeAddress;
    *a2 = v11;
    goto LABEL_29;
  }
  v12 = a2;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    v12 = (unsigned int *)MmUserProbeAddress;
  v13 = *v12;
  if ( v13 < v11 )
  {
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (unsigned int *)MmUserProbeAddress;
    *a2 = v11;
    v6 = 0;
    UserSetLastError(122LL, v9, v10);
    goto LABEL_29;
  }
  v14 = v13 - *(_DWORD *)(v23[0] + 984LL);
  v15 = 28LL * v13;
  v27 = v15;
  if ( v15 <= 0xFFFFFFFF && v14 )
  {
    if ( (unsigned int)v15 >= 0x2710000 )
    {
LABEL_18:
      v6 = 0;
      UserSetLastError(8LL, v9, v10);
      goto LABEL_29;
    }
    v25 = 28 * v11;
    v16 = 28 * v11;
    ProbeForWrite(a3, 28 * v11, 8u);
    if ( 28 * v11 - 1 > 0x270FFFF )
    {
      v6 = 0;
      UserSetLastError(1359LL, v17, v18);
      goto LABEL_29;
    }
    v19 = (void *)Win32AllocPoolZInit(v16, 1668313941LL);
    v20 = v19;
    v24 = v19;
    if ( !v19 )
      goto LABEL_18;
    v6 = RIMGetPointerDeviceProperties(v23[0], v11, v19, v14);
    if ( v6 )
    {
      memmove((void *)a3, v20, v16);
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (unsigned int *)MmUserProbeAddress;
      *a2 = v11;
      goto LABEL_29;
    }
  }
  v6 = 0;
  UserSetLastError(87LL, v9, v10);
LABEL_29:
  if ( v24 )
    Win32FreePool(v24);
LABEL_32:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v26);
  UserSessionSwitchLeaveCrit(v21);
  return v6;
}
