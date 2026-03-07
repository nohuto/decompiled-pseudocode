__int64 __fastcall CPTPEngine::FilterMoveForStableContact(
        CPTPEngine *this,
        struct PTPInput *a2,
        struct tagPOINT a3,
        struct CContactState *a4)
{
  __int64 v7; // r15
  char v8; // cl
  int v9; // edi
  char v10; // dl
  bool v11; // bp
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // r12
  BOOL v14; // eax
  __int64 v15; // r8
  __int64 v16; // rcx
  unsigned __int64 v17; // r8
  bool v18; // al
  __int64 v20; // rax
  __int128 v21; // [rsp+30h] [rbp-68h] BYREF
  __int64 v22; // [rsp+40h] [rbp-58h]
  __int64 v23; // [rsp+60h] [rbp-38h]

  if ( (*((_DWORD *)this + 67) & 0x80u) == 0 )
    return 0LL;
  v7 = *(_QWORD *)a2;
  if ( a3 )
  {
    v8 = 1;
  }
  else
  {
    v8 = 0;
    if ( (*(_DWORD *)a4 & 0x4000000) == 0 )
    {
      *(_DWORD *)a4 |= 0x4000000u;
      *((_QWORD *)a4 + 15) = *(_QWORD *)a2;
    }
  }
  v9 = *(_DWORD *)a4;
  if ( (*(_DWORD *)a4 & 0x4000000) != 0 && v8 )
  {
    v10 = 1;
    v11 = 0;
LABEL_10:
    v9 &= ~0x4000000u;
    *(_DWORD *)a4 = v9;
    goto LABEL_11;
  }
  v11 = 0;
  v10 = 0;
  if ( v8 )
    goto LABEL_10;
LABEL_11:
  if ( (*((_DWORD *)this + 984) & 0x20000000) != 0
    && v10
    && (int)((HIDWORD(*((_QWORD *)a4 + 1)) - HIDWORD(*((_QWORD *)a4 + 7)))
           * (HIDWORD(*((_QWORD *)a4 + 1)) - HIDWORD(*((_QWORD *)a4 + 7)))
           + (*((_QWORD *)a4 + 1) - *((_QWORD *)a4 + 7)) * (*((_QWORD *)a4 + 1) - *((_QWORD *)a4 + 7))) > (unsigned __int64)(unsigned int)(*((_DWORD *)this + 51) * *((_DWORD *)this + 51)) )
  {
    v11 = v7 - *((_QWORD *)a4 + 15) >= *((_QWORD *)this + 12) * (unsigned __int64)*((unsigned int *)this + 79) / 0x3E8;
  }
  v12 = v7 - *((_QWORD *)a4 + 14);
  v13 = *((_QWORD *)this + 12) * (unsigned __int64)*((unsigned int *)this + 78) / 0x3E8;
  v14 = CPTPEngine::CrossedTPMoveFilteringThreshold(this, a4, *(struct tagPOINT *)((char *)a4 + 8));
  v16 = v15;
  v17 = (int)((HIDWORD(v15) - HIDWORD(*((_QWORD *)a4 + 7))) * (HIDWORD(v15) - HIDWORD(*((_QWORD *)a4 + 7)))
            + (v16 - *((_QWORD *)a4 + 7)) * (v16 - *((_QWORD *)a4 + 7)));
  v18 = __CFSHR__(v9, 28)
     && (v12 < v13 || v17 <= (unsigned int)(*((_DWORD *)this + 50) * *((_DWORD *)this + 50)))
     && !v14;
  if ( v11 )
  {
    *((_QWORD *)a4 + 7) = v16;
    v20 = *(_QWORD *)((char *)a2 + 28);
    v23 = 0LL;
    v21 = 0LL;
    *((_QWORD *)a4 + 8) = v20;
    *(_DWORD *)a4 = v9 | 0x8000000;
    *((_QWORD *)a4 + 14) = v7;
    v22 = 0LL;
    CBasePTPEngine::SendTelemetryOutput(this, 12LL, &v21);
  }
  else if ( !v18 )
  {
    if ( __CFSHR__(v9, 28) )
    {
      v23 = 0LL;
      v21 = 0LL;
      v22 = 0LL;
      CBasePTPEngine::SendTelemetryOutput(this, 13LL, &v21);
    }
    *(_DWORD *)a4 &= ~0x8000000u;
    return 0LL;
  }
  return 1LL;
}
