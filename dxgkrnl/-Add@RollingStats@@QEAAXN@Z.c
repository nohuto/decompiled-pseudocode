void __fastcall RollingStats::Add(RollingStats *this, double a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax

  v2 = *((unsigned int *)this + 4);
  v3 = *(_QWORD *)this;
  ++*((_DWORD *)this + 5);
  *(double *)(v3 + 8 * v2) = a2;
  LODWORD(v3) = *((_DWORD *)this + 4) + 1;
  *((_BYTE *)this + 64) = 1;
  *((_DWORD *)this + 4) = (unsigned int)v3 % *((_DWORD *)this + 6);
}
