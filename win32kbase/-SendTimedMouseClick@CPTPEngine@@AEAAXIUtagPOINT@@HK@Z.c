void __fastcall CPTPEngine::SendTimedMouseClick(CPTPEngine *this, int a2, struct tagPOINT a3, int a4, unsigned int a5)
{
  int v9; // eax
  __int128 v10; // [rsp+20h] [rbp-48h]
  __int128 v11; // [rsp+40h] [rbp-28h] BYREF
  __int64 v12; // [rsp+50h] [rbp-18h]

  if ( *((_DWORD *)this + 978) )
  {
    v10 = 0LL;
    LODWORD(v10) = 2;
    v12 = 0LL;
    v11 = v10;
    CBasePTPEngine::SendTelemetryOutput((__int64)this, 11, (__int64)&v11);
    CPTPEngine::CancelMouseUpTimer(this, 1);
  }
  CPTPEngine::SendMouseDownAtPoint(this, a2, a3);
  v9 = *((_DWORD *)this + 903);
  *((_DWORD *)this + 903) = 0;
  *((_DWORD *)this + 978) = 1;
  *((_DWORD *)this + 979) = a4;
  *((_DWORD *)this + 980) = v9;
  *((struct tagPOINT *)this + 491) = a3;
  *((_DWORD *)this + 981) = a5;
  CBasePTPEngine::SendTimerOutput(this, 0LL);
}
