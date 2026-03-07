__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStUnhandledExceptionFilter(
        ULONG_PTR BugCheckParameter1,
        int **BugCheckParameter2,
        int a3)
{
  int v6; // ecx

  if ( a3 == 1 )
  {
    v6 = **BugCheckParameter2;
    if ( v6 == -1073741819 || v6 == -1073740768 )
      SmHpChunkHeapProtect(BugCheckParameter1 + 272, 2u, 1u);
  }
  if ( BugCheckParameter2 )
    KeBugCheckEx(0x154u, BugCheckParameter1, (ULONG_PTR)BugCheckParameter2, a3, 0LL);
  return 0LL;
}
