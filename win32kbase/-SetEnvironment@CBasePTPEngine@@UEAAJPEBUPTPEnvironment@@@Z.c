__int64 __fastcall CBasePTPEngine::SetEnvironment(CBasePTPEngine *this, const struct PTPEnvironment *a2)
{
  __int64 v2; // rax
  char *v3; // r8
  __int128 v4; // xmm1

  v2 = 4LL;
  v3 = (char *)this + 16;
  do
  {
    *(_OWORD *)v3 = *(_OWORD *)a2;
    *((_OWORD *)v3 + 1) = *((_OWORD *)a2 + 1);
    *((_OWORD *)v3 + 2) = *((_OWORD *)a2 + 2);
    *((_OWORD *)v3 + 3) = *((_OWORD *)a2 + 3);
    *((_OWORD *)v3 + 4) = *((_OWORD *)a2 + 4);
    *((_OWORD *)v3 + 5) = *((_OWORD *)a2 + 5);
    *((_OWORD *)v3 + 6) = *((_OWORD *)a2 + 6);
    v3 += 128;
    v4 = *((_OWORD *)a2 + 7);
    a2 = (const struct PTPEnvironment *)((char *)a2 + 128);
    *((_OWORD *)v3 - 1) = v4;
    --v2;
  }
  while ( v2 );
  *(_OWORD *)v3 = *(_OWORD *)a2;
  *((_OWORD *)v3 + 1) = *((_OWORD *)a2 + 1);
  *((_QWORD *)v3 + 4) = *((_QWORD *)a2 + 4);
  *((_DWORD *)v3 + 10) = *((_DWORD *)a2 + 10);
  return (*(__int64 (__fastcall **)(CBasePTPEngine *, const struct PTPEnvironment *, char *, __int64))(*(_QWORD *)this + 40LL))(
           this,
           a2,
           v3,
           128LL);
}
