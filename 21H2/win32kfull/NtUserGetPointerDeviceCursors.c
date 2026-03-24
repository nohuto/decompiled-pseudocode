/*
 * XREFs of NtUserGetPointerDeviceCursors @ 0x1C01FAFB0
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069AF0 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069B4C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     _GetPointerDeviceCursors @ 0x1C01EF3DC (_GetPointerDeviceCursors.c)
 */

__int64 __fastcall NtUserGetPointerDeviceCursors(__int64 a1, _DWORD *a2, volatile void *a3)
{
  int PointerDeviceCursors; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rsi
  _DWORD *v11; // rax
  __int64 v12; // rcx
  _BYTE v14[56]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v15; // [rsp+98h] [rbp+20h] BYREF

  v15 = 0LL;
  PointerDeviceCursors = 1;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v14);
  if ( !a1 || !a2 )
  {
    v9 = 87LL;
    goto LABEL_21;
  }
  if ( !(unsigned int)ResolveMouseOrPointerDevice(a1, &v15, 0LL) )
  {
    v9 = 6LL;
LABEL_21:
    PointerDeviceCursors = 0;
    UserSetLastError(v9, v7, v8);
    goto LABEL_22;
  }
  v10 = *(unsigned int *)(v15 + 980);
  if ( a3 )
  {
    v11 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v11 = (_DWORD *)MmUserProbeAddress;
    if ( *v11 >= (unsigned int)v10 )
    {
      ProbeForWrite(a3, 8 * v10, 8u);
      PointerDeviceCursors = GetPointerDeviceCursors(v15, v10, (__int64)a3);
      if ( PointerDeviceCursors )
      {
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          a2 = (_DWORD *)MmUserProbeAddress;
        *a2 = v10;
      }
    }
    else
    {
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (_DWORD *)MmUserProbeAddress;
      *a2 = v10;
      PointerDeviceCursors = 0;
      UserSetLastError(122LL, v7, v8);
    }
  }
  else
  {
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_DWORD *)MmUserProbeAddress;
    *a2 = v10;
  }
LABEL_22:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v14);
  UserSessionSwitchLeaveCrit(v12);
  return PointerDeviceCursors;
}
