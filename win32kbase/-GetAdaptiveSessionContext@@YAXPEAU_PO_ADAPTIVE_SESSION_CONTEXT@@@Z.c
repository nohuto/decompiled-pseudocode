void __fastcall GetAdaptiveSessionContext(struct _PO_ADAPTIVE_SESSION_CONTEXT *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9

  *(_QWORD *)a1 = CInputGlobals::GetLastInputTime(gpInputGlobals);
  *((_QWORD *)a1 + 1) = CInputGlobals::GetGlobalTickCount(gpInputGlobals, 0LL);
  v6 = *(_QWORD *)(SGDGetUserSessionState(v3, v2, v4, v5) + 3040);
  *((_QWORD *)a1 + 2) = v6;
  *((_DWORD *)a1 + 6) = *(_DWORD *)(SGDGetUserSessionState(v7, v6, v8, v9) + 3080);
}
