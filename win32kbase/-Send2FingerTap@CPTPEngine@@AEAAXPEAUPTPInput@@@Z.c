void __fastcall CPTPEngine::Send2FingerTap(CPTPEngine *this, struct PTPInput *a2)
{
  __int128 v3; // [rsp+30h] [rbp-48h]
  __int128 v4; // [rsp+50h] [rbp-28h] BYREF
  __int64 v5; // [rsp+60h] [rbp-18h]

  *((_QWORD *)this + 488) = *(_QWORD *)a2;
  CPTPEngine::SendTimedMouseClick(this, 8u, *(struct tagPOINT *)((char *)a2 + 28), 0, *((_DWORD *)this + 112));
  v3 = 0LL;
  LODWORD(v3) = 2;
  v4 = v3;
  v5 = 0LL;
  CBasePTPEngine::SendTelemetryOutput(this, 4LL, &v4);
}
