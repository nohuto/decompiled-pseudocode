/*
 * XREFs of NtUserGetLayeredWindowAttributes @ 0x1C012E340
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     _GetLayeredWindowAttributes @ 0x1C012E478 (_GetLayeredWindowAttributes.c)
 */

__int64 __fastcall NtUserGetLayeredWindowAttributes(__int64 a1, _DWORD *a2, _BYTE *a3, _DWORD *a4)
{
  _BYTE *v5; // rdi
  _DWORD *v6; // r14
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rbx
  __int64 v12; // rdx
  int LayeredWindowAttributes; // ebx
  __int64 v14; // rcx
  char v16; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v17[3]; // [rsp+21h] [rbp-37h] BYREF
  int v18; // [rsp+24h] [rbp-34h] BYREF
  _DWORD v19[12]; // [rsp+28h] [rbp-30h] BYREF

  v5 = a3;
  v6 = a2;
  v18 = 0;
  v16 = 0;
  v19[0] = 0;
  EnterSharedCrit(a1, a2, a3);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v17);
  v8 = ValidateHwnd(a1);
  v11 = v8;
  if ( !v8 )
    goto LABEL_19;
  if ( (unsigned int)IsWindowDesktopComposed(v8) && (*(_DWORD *)(*(_QWORD *)(v11 + 40) + 232LL) & 2) != 0 )
  {
    UserSetLastError(87LL, v12);
LABEL_19:
    LayeredWindowAttributes = 0;
    goto LABEL_17;
  }
  LayeredWindowAttributes = GetLayeredWindowAttributes(v11, &v18, &v16, v19);
  if ( LayeredWindowAttributes )
  {
    if ( v6 )
    {
      v9 = MmUserProbeAddress;
      if ( (unsigned __int64)v6 >= MmUserProbeAddress )
        v6 = (_DWORD *)MmUserProbeAddress;
      *v6 = v18;
    }
    if ( v5 )
    {
      if ( (unsigned __int64)v5 >= MmUserProbeAddress )
        v5 = (_BYTE *)MmUserProbeAddress;
      *v5 = v16;
    }
    if ( a4 )
    {
      v9 = v19[0] & 3;
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        a4 = (_DWORD *)MmUserProbeAddress;
      *a4 = v9;
    }
  }
LABEL_17:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v17, v9, v10);
  UserSessionSwitchLeaveCrit(v14);
  return LayeredWindowAttributes;
}
