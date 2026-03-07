void __fastcall MiDeleteZeroThreadContext(_QWORD *P)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  MiDereferenceAnyActiveHugeContext((__int64)P);
  MiDeleteUltraThreadContext((__int64)(P + 26));
  v2 = P[11];
  if ( v2 )
    MiSignalZeroingPassComplete(v2);
  v3 = P[49];
  if ( v3 )
    MiDereferencePageRunsEx(v3, 1);
  ExFreePoolWithTag(P, 0);
}
