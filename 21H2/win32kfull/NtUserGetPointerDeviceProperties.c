/*
 * XREFs of NtUserGetPointerDeviceProperties @ 0x1C01F5BD0
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 */

__int64 __fastcall NtUserGetPointerDeviceProperties(__int64 a1, unsigned int *a2, volatile void *a3)
{
  unsigned int *v4; // rdi
  __int64 v6; // rdx
  ULONG64 v7; // rdx
  __int64 v8; // r8
  int v9; // ebx
  unsigned int v10; // r14d
  unsigned int *v11; // rax
  unsigned int v12; // eax
  unsigned int v13; // r15d
  unsigned __int64 v14; // rcx
  unsigned int v15; // r13d
  __int64 v16; // rdx
  __int64 v17; // rax
  const void *v18; // rsi
  __int64 v19; // rcx
  _QWORD v21[3]; // [rsp+28h] [rbp-70h] BYREF
  __int64 v22; // [rsp+40h] [rbp-58h]
  unsigned int v23; // [rsp+4Ch] [rbp-4Ch]
  int v24; // [rsp+50h] [rbp-48h]
  unsigned __int64 v25; // [rsp+60h] [rbp-38h]
  char v26; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int v27; // [rsp+B8h] [rbp+20h]

  v4 = a2;
  v22 = 0LL;
  v21[0] = 0LL;
  EnterSharedCrit(a1, a2, a3);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v26);
  if ( !a1 || !v4 )
  {
    v9 = 0;
    UserSetLastError(87LL, v6);
    goto LABEL_32;
  }
  if ( !(unsigned int)ResolveMouseOrPointerDevice(a1, v21, 0LL) )
  {
    v9 = 0;
    UserSetLastError(6LL, v7);
    goto LABEL_29;
  }
  v10 = *(_DWORD *)(v21[0] + 384LL);
  if ( !a3 )
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (unsigned int *)MmUserProbeAddress;
    *v4 = v10;
    v9 = 1;
    goto LABEL_29;
  }
  v11 = v4;
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v11 = (unsigned int *)MmUserProbeAddress;
  v12 = *v11;
  v27 = v12;
  if ( v12 < v10 )
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (unsigned int *)MmUserProbeAddress;
    *v4 = v10;
    v9 = 0;
    UserSetLastError(122LL, v7);
    goto LABEL_29;
  }
  v13 = v12 - *(_DWORD *)(v21[0] + 1040LL);
  v23 = v13;
  v14 = 28LL * v12;
  v25 = v14;
  if ( v14 <= 0xFFFFFFFF && v13 )
  {
    if ( (unsigned int)v14 >= 0x2710000 )
    {
LABEL_18:
      v9 = 0;
      UserSetLastError(8LL, v7);
      goto LABEL_29;
    }
    v24 = 28 * v10;
    v15 = 28 * v10;
    ProbeForWrite(a3, 28 * v10, 8u);
    if ( 28 * v10 - 1 > 0x270FFFF )
    {
      v9 = 0;
      UserSetLastError(1359LL, v16);
      goto LABEL_29;
    }
    v17 = Win32AllocPoolZInit(v15, 1668313941LL);
    v18 = (const void *)v17;
    v22 = v17;
    if ( !v17 )
      goto LABEL_18;
    v9 = RIMGetPointerDeviceProperties(v21[0], v10, v17, v13);
    if ( v9 )
    {
      memmove((void *)a3, v18, v15);
      v7 = MmUserProbeAddress;
      if ( (unsigned __int64)v4 >= MmUserProbeAddress )
        v4 = (unsigned int *)MmUserProbeAddress;
      *v4 = v10;
      goto LABEL_29;
    }
  }
  v9 = 0;
  UserSetLastError(87LL, v7);
LABEL_29:
  if ( v22 )
    Win32FreePool(v22);
LABEL_32:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v26, v7, v8);
  UserSessionSwitchLeaveCrit(v19);
  return v9;
}
