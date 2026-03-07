__int64 __fastcall NtUserGetPointerDeviceProperties(__int64 a1, unsigned int *a2, volatile void *a3)
{
  unsigned int *v4; // rdi
  int v6; // ebx
  unsigned int v7; // r14d
  unsigned int *v8; // rax
  unsigned int v9; // eax
  unsigned int v10; // r15d
  unsigned __int64 v11; // rcx
  unsigned int v12; // r13d
  void *v13; // rax
  const void *v14; // rsi
  __int64 v15; // rcx
  _QWORD v17[3]; // [rsp+28h] [rbp-70h] BYREF
  void *v18; // [rsp+40h] [rbp-58h]
  unsigned int v19; // [rsp+4Ch] [rbp-4Ch]
  int v20; // [rsp+50h] [rbp-48h]
  unsigned __int64 v21; // [rsp+60h] [rbp-38h]
  char v22; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int v23; // [rsp+B8h] [rbp+20h]

  v4 = a2;
  v18 = 0LL;
  v17[0] = 0LL;
  EnterSharedCrit(a1, a2, a3);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v22);
  if ( !a1 || !v4 )
  {
    v6 = 0;
    UserSetLastError(87);
    goto LABEL_32;
  }
  if ( !(unsigned int)ResolveMouseOrPointerDevice(a1, v17, 0LL) )
  {
    v6 = 0;
    UserSetLastError(6);
    goto LABEL_29;
  }
  v7 = *(_DWORD *)(v17[0] + 384LL);
  if ( !a3 )
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (unsigned int *)MmUserProbeAddress;
    *v4 = v7;
    v6 = 1;
    goto LABEL_29;
  }
  v8 = v4;
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v8 = (unsigned int *)MmUserProbeAddress;
  v9 = *v8;
  v23 = v9;
  if ( v9 < v7 )
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (unsigned int *)MmUserProbeAddress;
    *v4 = v7;
    v6 = 0;
    UserSetLastError(122);
    goto LABEL_29;
  }
  v10 = v9 - *(_DWORD *)(v17[0] + 1040LL);
  v19 = v10;
  v11 = 28LL * v9;
  v21 = v11;
  if ( v11 <= 0xFFFFFFFF && v10 )
  {
    if ( (unsigned int)v11 >= 0x2710000 )
    {
LABEL_18:
      v6 = 0;
      UserSetLastError(8);
      goto LABEL_29;
    }
    v20 = 28 * v7;
    v12 = 28 * v7;
    ProbeForWrite(a3, 28 * v7, 8u);
    if ( 28 * v7 - 1 > 0x270FFFF )
    {
      v6 = 0;
      UserSetLastError(1359);
      goto LABEL_29;
    }
    v13 = (void *)Win32AllocPoolZInit(v12, 1668313941LL);
    v14 = v13;
    v18 = v13;
    if ( !v13 )
      goto LABEL_18;
    v6 = RIMGetPointerDeviceProperties(v17[0], v7, v13, v10);
    if ( v6 )
    {
      memmove((void *)a3, v14, v12);
      if ( (unsigned __int64)v4 >= MmUserProbeAddress )
        v4 = (unsigned int *)MmUserProbeAddress;
      *v4 = v7;
      goto LABEL_29;
    }
  }
  v6 = 0;
  UserSetLastError(87);
LABEL_29:
  if ( v18 )
    Win32FreePool(v18);
LABEL_32:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v22);
  UserSessionSwitchLeaveCrit(v15);
  return v6;
}
