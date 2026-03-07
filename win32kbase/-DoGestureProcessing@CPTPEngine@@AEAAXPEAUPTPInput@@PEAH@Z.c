void __fastcall CPTPEngine::DoGestureProcessing(CPTPEngine *this, struct PTPInput *a2, int *a3)
{
  int v3; // eax
  int *v5; // r13
  BOOL v7; // edi
  unsigned int v8; // r14d
  char v9; // r8
  unsigned int v10; // r10d
  _DWORD *v11; // r9
  __int64 v12; // r11
  int v13; // ecx
  int v14; // edx
  unsigned int v15; // ecx
  int v16; // r12d
  struct CContactState *v17; // r15
  int v18; // eax
  __int128 v19; // [rsp+20h] [rbp-40h]
  __int128 v20; // [rsp+20h] [rbp-40h]
  __int128 v21; // [rsp+40h] [rbp-20h] BYREF
  __int64 v22; // [rsp+50h] [rbp-10h]

  v3 = *((_DWORD *)this + 911);
  *a3 = 0;
  v5 = a3;
  v7 = v3 == 6;
  if ( v3 == 3 || v3 == 6 )
    goto LABEL_22;
  v8 = 0;
  v9 = 1;
  v10 = 0;
  if ( !*((_DWORD *)a2 + 12) )
    goto LABEL_24;
  v11 = (_DWORD *)((char *)a2 + 68);
  do
  {
    v12 = 400LL * (unsigned int)(*(v11 - 2) % *((_DWORD *)this + 4));
    v13 = *(_DWORD *)((char *)this + v12 + 1208);
    if ( (v13 & 1) != 0 )
    {
      if ( (v13 & 0x80u) != 0 || (v14 = 0, (*v11 & 0x40000) != 0) )
        v14 = 1;
      v15 = (v14 << 10) | v13 & 0xFFFFFBFF;
      *(_DWORD *)((char *)this + v12 + 1208) = v15;
      if ( !v14 )
      {
        ++v8;
        if ( (v15 & 4) != 0 )
          v9 = 0;
      }
    }
    v16 = 3;
    v7 = 0;
    if ( v8 > 2 )
      v16 = 6;
    LOBYTE(v7) = v8 > 2;
    ++v10;
    v11 += 24;
  }
  while ( v10 < *((_DWORD *)a2 + 12) );
  v5 = a3;
  if ( v8 < 2 )
    goto LABEL_24;
  if ( v9 )
    return;
  v17 = CPTPEngine::FindOrAssignPrimary(this, a2);
  if ( !v17 )
  {
LABEL_24:
    v20 = 0LL;
    LODWORD(v20) = 1;
    v21 = v20;
    v22 = 0LL;
    CBasePTPEngine::SendTelemetryOutput(this, 11LL, &v21);
    return;
  }
  *((_QWORD *)this + 481) = *(_QWORD *)a2;
  *((_DWORD *)this + 911) = v16;
  CBasePTPEngine::SendInertiaOutput(this, 1LL);
  v18 = 0;
  v22 = 0LL;
  v19 = 0LL;
  if ( v8 <= 2 )
  {
    LODWORD(v19) = 9;
  }
  else
  {
    LOBYTE(v18) = v8 != 3;
    LODWORD(v19) = v18 + 11;
  }
  v21 = v19;
  CBasePTPEngine::SendTelemetryOutput(this, 4LL, &v21);
  if ( !(unsigned int)CPTPEngine::SendInitialGestureFrame(this, a2, v17, v7) )
LABEL_22:
    CPTPEngine::ProcessGestureFrame(this, a2, v7, v5);
}
