__int64 __fastcall MiDereferenceDataSubsections(__int64 a1, unsigned __int64 *a2, __int64 a3, int a4, int a5)
{
  __int64 *v9; // rbp
  __int64 *SubsectionNode; // rax
  unsigned __int64 v12; // [rsp+58h] [rbp+10h] BYREF

  v12 = 0LL;
  v9 = (__int64 *)MiOffsetToProtos(a1, *a2, &v12);
  a5 = -a5;
  if ( a4 )
  {
    SubsectionNode = MiLocateSubsectionNode(a1, (a3 << 12) + *a2 - 1, 0);
    MiDecrementLargeSubsections(v9, SubsectionNode);
  }
  return MiRemoveViewsFromSectionWithPfn(v9);
}
