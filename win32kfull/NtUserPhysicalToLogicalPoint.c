__int64 __fastcall NtUserPhysicalToLogicalPoint(__int64 a1, struct tagPOINT *a2, __int64 a3)
{
  int v5; // ebx
  ULONG64 v6; // rcx
  __int64 v7; // r14
  struct tagPOINT *v8; // rax
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  struct tagPOINT v10; // rdi
  unsigned int v11; // eax
  char v12; // al
  struct tagPOINT v13; // rcx
  _BYTE *v14; // rdx
  struct tagPOINT v16; // [rsp+80h] [rbp+18h] BYREF
  struct tagPOINT v17; // [rsp+88h] [rbp+20h]

  v5 = 0;
  v16 = 0LL;
  EnterSharedCrit(a1, a2, a3);
  v7 = ValidateHwnd(a1);
  if ( v7 )
  {
    v8 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v8 = (struct tagPOINT *)MmUserProbeAddress;
    v17 = *v8;
    v16 = v17;
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(MmUserProbeAddress);
    v10 = 0LL;
    if ( (unsigned __int8)ShouldVirtualizeWindowRect(v7, CurrentThreadDpiAwarenessContext) )
      v10 = v16;
    TransformPointBetweenCoordinateSpaces(&v16, &v16, v7, 0LL);
    if ( DCEPtInRect((const struct tagRECT *)(*(_QWORD *)(v7 + 40) + 88LL), v16) )
    {
      v11 = W32GetCurrentThreadDpiAwarenessContext(v6);
      v12 = ShouldVirtualizeWindowRect(v7, v11);
      v13 = v16;
      if ( v12 )
        v13 = v10;
      v16 = v13;
      v6 = MmUserProbeAddress;
      v14 = a2;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        v14 = (_BYTE *)MmUserProbeAddress;
      *v14 = *v14;
      v14[7] = v14[7];
      *a2 = v16;
      v5 = 1;
    }
  }
  UserSessionSwitchLeaveCrit(v6);
  return v5;
}
