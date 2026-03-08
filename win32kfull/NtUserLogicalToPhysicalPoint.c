/*
 * XREFs of NtUserLogicalToPhysicalPoint @ 0x1C01D74F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?DCEPtInRect@@YA_NPEBUtagRECT@@UtagPOINT@@@Z @ 0x1C0144B14 (-DCEPtInRect@@YA_NPEBUtagRECT@@UtagPOINT@@@Z.c)
 */

__int64 __fastcall NtUserLogicalToPhysicalPoint(__int64 a1, struct tagPOINT *a2, __int64 a3)
{
  int v5; // edi
  ULONG64 v6; // rcx
  __int64 v7; // rbx
  struct tagPOINT *v8; // rax
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  bool v10; // r14
  _BYTE *v11; // rdx
  struct tagPOINT v13; // [rsp+90h] [rbp+18h] BYREF
  struct tagPOINT v14; // [rsp+98h] [rbp+20h] BYREF

  v5 = 0;
  v13 = 0LL;
  EnterSharedCrit(a1, a2, a3);
  v7 = ValidateHwnd(a1);
  if ( v7 )
  {
    v8 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v8 = (struct tagPOINT *)MmUserProbeAddress;
    v13 = *v8;
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(MmUserProbeAddress);
    if ( (unsigned __int8)ShouldVirtualizeWindowRect(v7, CurrentThreadDpiAwarenessContext) )
    {
      v14 = 0LL;
      TransformPointBetweenCoordinateSpaces(&v14, &v13, v7, 0LL);
      v10 = DCEPtInRect((const struct tagRECT *)(*(_QWORD *)(v7 + 40) + 88LL), v14);
    }
    else
    {
      v10 = DCEPtInRect((const struct tagRECT *)(*(_QWORD *)(v7 + 40) + 88LL), v13);
      TransformPointBetweenCoordinateSpaces(&v13, &v13, 0LL, v7);
    }
    if ( v10 )
    {
      v6 = MmUserProbeAddress;
      v11 = a2;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        v11 = (_BYTE *)MmUserProbeAddress;
      *v11 = *v11;
      v11[7] = v11[7];
      *a2 = v13;
      v5 = 1;
    }
  }
  UserSessionSwitchLeaveCrit(v6);
  return v5;
}
