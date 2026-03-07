struct _EX_RUNDOWN_REF *__fastcall DxgkCddSubscribeWnfStateChange(
        int (*a1)(struct _EX_WNF_SUBSCRIPTION *, const struct _WNF_STATE_NAME *, unsigned int, unsigned int, const struct _WNF_TYPE_ID *, void *),
        struct _EPROCESS *a2,
        const struct _WNF_STATE_NAME *a3,
        unsigned int a4,
        void *a5)
{
  struct _EX_RUNDOWN_REF *v9; // rax
  struct _EX_RUNDOWN_REF *v10; // rbx
  int v11; // eax

  v9 = (struct _EX_RUNDOWN_REF *)operator new[](0x28uLL, 0x4B677844u, 256LL);
  v10 = v9;
  if ( v9 )
  {
    v9[2].Count = (ULONG_PTR)a5;
    v9[3].Count = (ULONG_PTR)a2;
    v9[1].Count = (ULONG_PTR)a1;
    ExInitializeRundownProtection(v9 + 4);
    v11 = ExSubscribeWnfStateChange(v10, a3, a4);
    if ( v11 >= 0 )
      return v10;
    WdLogSingleEntry2(3LL, v11, a5);
    operator delete(v10);
  }
  else
  {
    WdLogSingleEntry1(6LL, a5);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocated CDD_WNF_CALLBACK_CONTEXT. CddPdev: 0x%I64x",
      (__int64)a5,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return 0LL;
}
