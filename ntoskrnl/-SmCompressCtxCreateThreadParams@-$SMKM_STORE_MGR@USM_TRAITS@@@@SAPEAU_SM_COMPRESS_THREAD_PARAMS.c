/*
 * XREFs of ?SmCompressCtxCreateThreadParams@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAPEAU_SM_COMPRESS_THREAD_PARAMS@1@PEAU_SM_COMPRESS_CONTEXT@1@K@Z @ 0x1403A15BC
 * Callers:
 *     ?SmCompressCtxCreateThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z @ 0x1403A14B8 (-SmCompressCtxCreateThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x14028D2A0 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

struct _EX_RUNDOWN_REF **__fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxCreateThreadParams(
        struct _EX_RUNDOWN_REF *a1,
        int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  unsigned int *v6; // rdi
  struct _EX_RUNDOWN_REF **Pool2; // rax

  v4 = 0LL;
  if ( ExAcquireRundownProtection_0(a1 + 15) )
  {
    v5 = 40LL;
    v6 = (unsigned int *)&a1[16].Ptr + 1;
    if ( a2 )
      v5 = *v6 + 4136LL;
    Pool2 = (struct _EX_RUNDOWN_REF **)ExAllocatePool2(64LL, v5, 1950575987LL);
    if ( Pool2 )
    {
      Pool2[1] = 0LL;
      Pool2[2] = 0LL;
      Pool2[3] = 0LL;
      Pool2[4] = 0LL;
      *Pool2 = a1;
      if ( a2 )
      {
        Pool2[3] = (struct _EX_RUNDOWN_REF *)(Pool2 + 5);
        Pool2[4] = (struct _EX_RUNDOWN_REF *)((char *)Pool2 + *v6 + 40);
      }
      return Pool2;
    }
    else
    {
      ExReleaseRundownProtection_0(a1 + 15);
    }
  }
  return (struct _EX_RUNDOWN_REF **)v4;
}
