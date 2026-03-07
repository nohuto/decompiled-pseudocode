CMonitorTransform *__fastcall CMonitorTransform::CMonitorTransform(CMonitorTransform *this)
{
  __int64 v1; // rdx
  __int64 v2; // rdx
  __int64 v3; // rdx
  CMonitorTransform *result; // rax
  __int16 v5; // r8

  *(_QWORD *)this = 1065353216LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)((char *)this + 36) = 0LL;
  *((_DWORD *)this + 11) = 1;
  CMILMatrix::SetToIdentity((CMonitorTransform *)((char *)this + 48));
  CMILMatrix::SetToIdentity((CMILMatrix *)(v1 + 116));
  CMILMatrix::SetToIdentity((CMILMatrix *)(v2 + 184));
  result = (CMonitorTransform *)v3;
  *(_WORD *)(v3 + 252) = v5;
  *(_BYTE *)(v3 + 254) = v5;
  return result;
}
