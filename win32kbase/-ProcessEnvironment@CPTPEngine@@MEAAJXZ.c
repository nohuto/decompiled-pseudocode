__int64 __fastcall CPTPEngine::ProcessEnvironment(CPTPEngine *this)
{
  __int64 v2; // r8
  unsigned __int64 v3; // rcx
  double v4; // xmm0_8
  unsigned __int64 v5; // rcx
  double v6; // xmm0_8
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  int v9; // r8d
  int v10; // edx
  int v11; // edx
  __int64 v12; // rcx

  if ( !*((_BYTE *)this + 1200) )
  {
    (*(void (__fastcall **)(CPTPEngine *))(*(_QWORD *)this + 56LL))(this);
    *((_BYTE *)this + 1200) = 1;
  }
  CPTPEngine::UpdatePTPRightClickZone(this);
  v2 = *((_QWORD *)this + 12);
  v3 = v2 * *((unsigned int *)this + 39);
  *((_OWORD *)this + 243) = *((_OWORD *)this + 4);
  v4 = (double)*((int *)this + 97);
  *((_QWORD *)this + 469) = v3 / 0x3E8;
  v5 = v2 * *((unsigned int *)this + 54);
  *((double *)this + 475) = v4 / 1000.0;
  v6 = (double)*((int *)this + 96) / 1000.0;
  *((_QWORD *)this + 470) = v5 / 0x3E8;
  v7 = v2 * *((unsigned int *)this + 72);
  *((double *)this + 476) = v6;
  *((_QWORD *)this + 471) = v7 / 0x3E8;
  *((_QWORD *)this + 472) = v2 * (unsigned __int64)*((unsigned int *)this + 109) / 0x3E8;
  *((_QWORD *)this + 473) = v2 * (unsigned __int64)*((unsigned int *)this + 77) / 0x3E8;
  *((_QWORD *)this + 474) = v2 * (unsigned __int64)*((unsigned int *)this + 62) / 0x3E8;
  v8 = v2 * *((unsigned int *)this + 47);
  LODWORD(v2) = *((_DWORD *)this + 985) & 0xFFFFFFFC;
  *((_QWORD *)this + 477) = v8 / 0x3E8;
  *((_DWORD *)this + 985) = v2;
  if ( !IsRectEmptyInl((const struct tagRECT *)((char *)this + 108)) )
  {
    v9 |= 1u;
    *((_DWORD *)this + 985) = v9;
  }
  v10 = v9;
  if ( (*((_DWORD *)this + 118) & 2) != 0 && !IsRectEmptyInl((const struct tagRECT *)((char *)this + 124)) )
    v10 |= 2u;
  v11 = v10 | 4;
  *((_DWORD *)this + 985) = v11;
  v12 = *(_QWORD *)((char *)this + 140) - *((_QWORD *)this + 4);
  if ( !v12 )
    v12 = *(_QWORD *)((char *)this + 148) - *((_QWORD *)this + 5);
  if ( v12 )
    *((_DWORD *)this + 985) = v11 & 0xFFFFFFFB;
  return 0LL;
}
