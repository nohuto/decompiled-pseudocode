/*
 * XREFs of ?DxgkCddSubscribeWnfStateChange@@YAPEAU_CDD_WNF_CALLBACK_CONTEXT@@P6AJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX@ZPEAU_EPROCESS@@1K3@Z @ 0x1C016C100
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0003524 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

struct _EX_RUNDOWN_REF *__fastcall DxgkCddSubscribeWnfStateChange(
        int (*a1)(struct _EX_WNF_SUBSCRIPTION *, const struct _WNF_STATE_NAME *, unsigned int, unsigned int, const struct _WNF_TYPE_ID *, void *),
        struct _EPROCESS *a2,
        const struct _WNF_STATE_NAME *a3,
        unsigned int a4,
        void *a5)
{
  struct _EX_RUNDOWN_REF *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  struct _EX_RUNDOWN_REF *v14; // rbx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rsi
  __int64 v21; // rax
  __int64 v22; // rax

  v9 = (struct _EX_RUNDOWN_REF *)operator new[](0x28uLL, 0x4B677844u, PagedPool);
  v14 = v9;
  if ( v9 )
  {
    v9[2].Count = (ULONG_PTR)a5;
    v9[3].Count = (ULONG_PTR)a2;
    v9[1].Count = (ULONG_PTR)a1;
    ExInitializeRundownProtection(v9 + 4);
    v15 = ExSubscribeWnfStateChange(v14, a3, a4);
    v19 = v15;
    if ( v15 >= 0 )
      return v14;
    v22 = WdLogNewEntry5_WdWarning(v17, v16, v18);
    *(_QWORD *)(v22 + 24) = v19;
    *(_QWORD *)(v22 + 32) = a5;
    WdLogEvent5_WdWarning(v22);
    operator delete(v14);
  }
  else
  {
    v21 = WdLogNewEntry5_WdLowResource(v11, v10, v12, v13);
    *(_QWORD *)(v21 + 24) = a5;
    WdLogEvent5_WdLowResource(v21);
  }
  return 0LL;
}
