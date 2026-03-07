_QWORD *__fastcall USB4_POWERON_WORK_CONTEXT::`scalar deleting destructor'(_QWORD *P)
{
  void *v2; // rcx

  v2 = (void *)P[12];
  P[12] = 0LL;
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
