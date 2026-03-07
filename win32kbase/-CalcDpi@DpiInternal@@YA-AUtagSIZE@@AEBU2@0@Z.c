struct tagSIZE __fastcall DpiInternal::CalcDpi(DpiInternal *this, const struct tagSIZE *a2, const struct tagSIZE *a3)
{
  unsigned int v5; // r8d
  __int64 v7; // [rsp+30h] [rbp+8h]

  LODWORD(v7) = DpiInternal::CalcDpi((DpiInternal *)*(unsigned int *)this, a2->cx, (unsigned int)a3);
  HIDWORD(v7) = DpiInternal::CalcDpi((DpiInternal *)*((unsigned int *)this + 1), a2->cy, v5);
  return (struct tagSIZE)v7;
}
