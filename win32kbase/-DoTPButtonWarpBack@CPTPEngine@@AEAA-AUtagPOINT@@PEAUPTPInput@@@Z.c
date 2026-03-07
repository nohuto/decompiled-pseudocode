struct tagPOINT __fastcall CPTPEngine::DoTPButtonWarpBack(CPTPEngine *this, struct PTPInput *a2, __int64 *a3)
{
  bool v3; // zf
  __int64 v5; // rbx
  unsigned __int64 v8; // r12
  __int64 v9; // rbp
  char *v10; // rdi

  v3 = *((_DWORD *)this + 911) == 2;
  v5 = *(__int64 *)((char *)a3 + 28);
  *(_QWORD *)a2 = v5;
  if ( v3 )
  {
    v8 = *((_QWORD *)this + 12);
    v9 = *a3;
    v10 = (char *)this + 400 * *((unsigned int *)this + 902) + 1208;
    if ( *a3 - *((_QWORD *)v10 + 9) < v8 * *((unsigned int *)this + 93) / 0x3E8
      && !CPTPEngine::CrossedTPButtonWarpBackThreshold(this, (struct CContactState *)v10, *(struct tagPOINT *)(v10 + 8))
      && ((_DWORD)v5 != *((_DWORD *)v10 + 16) || *((_DWORD *)a3 + 8) != *((_DWORD *)v10 + 17)) )
    {
      CBasePTPEngine::SendWarpbackTelemetry(
        this,
        13LL,
        v5,
        *((_QWORD *)v10 + 8),
        1000 * (v9 - *((_QWORD *)v10 + 14)) / v8);
      CBasePTPEngine::SendMouseOutput(this, 5LL, *((_QWORD *)v10 + 8));
      *(_QWORD *)a2 = *((_QWORD *)v10 + 8);
    }
  }
  return (struct tagPOINT)a2;
}
