/*
 * XREFs of NtUserGetPointerDeviceProperties @ 0x1C01D30A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C0066EB8 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     LeaveEditionCrit @ 0x1C00BE2E0 (LeaveEditionCrit.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C011BB80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     Feature_Backport_FixGetRawPointerDeviceData__private_IsEnabledDeviceUsage @ 0x1C013C510 (Feature_Backport_FixGetRawPointerDeviceData__private_IsEnabledDeviceUsage.c)
 *     memmove @ 0x1C0141300 (memmove.c)
 */

__int64 __fastcall NtUserGetPointerDeviceProperties(__int64 a1, unsigned int *a2, volatile void *a3)
{
  unsigned int *v4; // rdi
  ULONG64 v6; // rdx
  __int64 v7; // r8
  int v8; // ebx
  unsigned int v9; // r15d
  unsigned int *v10; // rax
  __int64 v11; // rbx
  unsigned int v12; // esi
  unsigned int v13; // r12d
  void *v14; // rax
  const void *v15; // r14
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  _DWORD *v20; // [rsp+28h] [rbp-80h] BYREF
  unsigned int v21; // [rsp+38h] [rbp-70h]
  void *v22; // [rsp+48h] [rbp-60h]
  int v24; // [rsp+58h] [rbp-50h]
  __int64 v25; // [rsp+68h] [rbp-40h]
  char v26; // [rsp+B0h] [rbp+8h] BYREF
  unsigned int v27; // [rsp+C8h] [rbp+20h]

  v4 = a2;
  v22 = 0LL;
  v20 = 0LL;
  EnterSharedCrit(a1, a2, a3);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v26);
  if ( !a1 || !v4 )
  {
    v8 = 0;
    UserSetLastError(87);
    goto LABEL_35;
  }
  if ( !(unsigned int)ResolveMouseOrPointerDevice(a1, &v20, 0LL) )
  {
    v8 = 0;
    UserSetLastError(6);
    goto LABEL_32;
  }
  v9 = v20[96];
  if ( !a3 )
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (unsigned int *)MmUserProbeAddress;
    *v4 = v9;
    v8 = 1;
    goto LABEL_32;
  }
  v10 = v4;
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v10 = (unsigned int *)MmUserProbeAddress;
  v27 = *v10;
  v11 = v27;
  if ( v27 < v9 )
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (unsigned int *)MmUserProbeAddress;
    *v4 = v9;
    v8 = 0;
    UserSetLastError(122);
    goto LABEL_32;
  }
  if ( (unsigned int)Feature_Backport_FixGetRawPointerDeviceData__private_IsEnabledDeviceUsage() )
    v12 = v11 - v20[261];
  else
    v12 = v11 - v20[260];
  v21 = v12;
  v25 = 28 * v11;
  if ( (unsigned __int64)(28 * v11) <= 0xFFFFFFFF && v12 )
  {
    if ( (unsigned int)(28 * v11) >= 0x2710000 )
    {
LABEL_21:
      v8 = 0;
      UserSetLastError(8);
      goto LABEL_32;
    }
    v24 = 28 * v9;
    v13 = 28 * v9;
    ProbeForWrite(a3, 28 * v9, 8u);
    if ( 28 * v9 - 1 > 0x270FFFF )
    {
      v8 = 0;
      UserSetLastError(1359);
      goto LABEL_32;
    }
    v14 = (void *)Win32AllocPoolZInit(v13, 1668313941LL);
    v15 = v14;
    v22 = v14;
    if ( !v14 )
      goto LABEL_21;
    v8 = RIMGetPointerDeviceProperties(v20, v9, v14, v12);
    if ( v8 )
    {
      memmove((void *)a3, v15, v13);
      v6 = MmUserProbeAddress;
      if ( (unsigned __int64)v4 >= MmUserProbeAddress )
        v4 = (unsigned int *)MmUserProbeAddress;
      *v4 = v9;
      goto LABEL_32;
    }
  }
  v8 = 0;
  UserSetLastError(87);
LABEL_32:
  if ( v22 )
    Win32FreePool(v22);
LABEL_35:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v26, v6, v7);
  LeaveEditionCrit((__int64)&v26, v16, v17, v18);
  return v8;
}
