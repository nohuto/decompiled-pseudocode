void __fastcall MmDeleteProcessor(__int64 a1)
{
  __int64 **v1; // rbx

  v1 = *(__int64 ***)(a1 + 33592);
  if ( v1 )
  {
    MiReleasePtes((__int64)&qword_140C695C0, v1[1578], 1u);
    MiDeleteUltraThreadContext((__int64)(v1 + 1544));
    ExFreePoolWithTag(v1, 0);
    *(_QWORD *)(a1 + 33592) = 0LL;
  }
}
