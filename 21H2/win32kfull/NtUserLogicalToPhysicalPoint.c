/*
 * XREFs of NtUserLogicalToPhysicalPoint @ 0x1C00F83A0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?DCEPtInRect@@YA_NPEBUtagRECT@@UtagPOINT@@@Z @ 0x1C00F8768 (-DCEPtInRect@@YA_NPEBUtagRECT@@UtagPOINT@@@Z.c)
 */

__int64 __fastcall NtUserLogicalToPhysicalPoint(__int64 a1, struct tagPOINT *a2, __int64 a3)
{
  int v5; // edi
  ULONG64 v6; // rcx
  __int64 v7; // r14
  struct tagPOINT *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // ebx
  bool v12; // bl
  _BYTE *v13; // rdx
  struct tagPOINT v15; // [rsp+90h] [rbp+18h] BYREF
  struct tagPOINT v16; // [rsp+98h] [rbp+20h] BYREF

  v5 = 0;
  v15 = 0LL;
  EnterSharedCrit(a1, a2, a3);
  v7 = ValidateHwnd(a1);
  if ( v7 )
  {
    v8 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v8 = (struct tagPOINT *)MmUserProbeAddress;
    v15 = *v8;
    if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480) + 224LL) & 1) != 0
      || (v10 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480),
          (*(_BYTE *)(v10 + 224) & 0x20) != 0)
      || (v11 = *(_DWORD *)(*(_QWORD *)(v7 + 40) + 288LL),
          (((unsigned __int16)(v11 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(
                                                                              v10,
                                                                              v9) >> 8)) & 0x1FF) == 0) )
    {
      v12 = DCEPtInRect((const struct tagRECT *)(*(_QWORD *)(v7 + 40) + 88LL), v15);
      TransformPointBetweenCoordinateSpaces(&v15, &v15, 0LL, v7);
    }
    else
    {
      v16 = 0LL;
      TransformPointBetweenCoordinateSpaces(&v16, &v15, v7, 0LL);
      v12 = DCEPtInRect((const struct tagRECT *)(*(_QWORD *)(v7 + 40) + 88LL), v16);
    }
    if ( v12 )
    {
      v6 = MmUserProbeAddress;
      v13 = a2;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        v13 = (_BYTE *)MmUserProbeAddress;
      *v13 = *v13;
      v13[7] = v13[7];
      *a2 = v15;
      v5 = 1;
    }
  }
  UserSessionSwitchLeaveCrit(v6);
  return v5;
}
