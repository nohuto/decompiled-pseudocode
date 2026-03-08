/*
 * XREFs of NtUserGetLayeredWindowAttributes @ 0x1C000F840
 * Callers:
 *     <none>
 * Callees:
 *     _GetLayeredWindowAttributes @ 0x1C000F978 (_GetLayeredWindowAttributes.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C003C2A4 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009DC7C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 */

__int64 __fastcall NtUserGetLayeredWindowAttributes(__int64 a1, _DWORD *a2, _BYTE *a3, _DWORD *a4)
{
  __int64 v8; // rax
  __int64 v9; // rbx
  int LayeredWindowAttributes; // ebx
  __int64 v11; // rcx
  char v13; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v14[3]; // [rsp+21h] [rbp-37h] BYREF
  int v15; // [rsp+24h] [rbp-34h] BYREF
  _DWORD v16[12]; // [rsp+28h] [rbp-30h] BYREF

  v15 = 0;
  v13 = 0;
  v16[0] = 0;
  EnterSharedCrit();
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v14);
  v8 = ValidateHwnd(a1);
  v9 = v8;
  if ( !v8 )
    goto LABEL_19;
  if ( (unsigned int)IsWindowDesktopComposed(v8) && (*(_DWORD *)(*(_QWORD *)(v9 + 40) + 232LL) & 2) != 0 )
  {
    UserSetLastError(87LL);
LABEL_19:
    LayeredWindowAttributes = 0;
    goto LABEL_17;
  }
  LayeredWindowAttributes = GetLayeredWindowAttributes(v9, &v15, &v13, v16);
  if ( LayeredWindowAttributes )
  {
    if ( a2 )
    {
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (_DWORD *)MmUserProbeAddress;
      *a2 = v15;
    }
    if ( a3 )
    {
      if ( (unsigned __int64)a3 >= MmUserProbeAddress )
        a3 = (_BYTE *)MmUserProbeAddress;
      *a3 = v13;
    }
    if ( a4 )
    {
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        a4 = (_DWORD *)MmUserProbeAddress;
      *a4 = v16[0] & 3;
    }
  }
LABEL_17:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v14);
  UserSessionSwitchLeaveCrit(v11);
  return LayeredWindowAttributes;
}
