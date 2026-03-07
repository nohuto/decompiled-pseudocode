__int64 __fastcall HalpDpReplaceEnd(_QWORD *P)
{
  void *v2; // rcx

  v2 = (void *)P[4];
  if ( v2 )
    ExFreePoolWithTag(v2, 0x436C6148u);
  ExFreePoolWithTag(P, 0x436C6148u);
  return 0LL;
}
