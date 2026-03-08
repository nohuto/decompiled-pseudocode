/*
 * XREFs of ?NpiGetReservedBuffer@NP_CONTEXT@@SAPEAXPEAU1@PEAUNP_CTX@1@@Z @ 0x1405BBE3C
 * Callers:
 *     ?NpNodeAllocate@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@KK@Z @ 0x1405BBD34 (-NpNodeAllocate@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@KK@Z.c)
 * Callees:
 *     ?NpiPerformPageOut@NP_CONTEXT@@SAJPEAU1@PEAUNP_CTX@1@@Z @ 0x1405BBF58 (-NpiPerformPageOut@NP_CONTEXT@@SAJPEAU1@PEAUNP_CTX@1@@Z.c)
 */

char *__fastcall NP_CONTEXT::NpiGetReservedBuffer(struct NP_CONTEXT *a1, struct NP_CONTEXT::NP_CTX *a2)
{
  char *v3; // rbx
  char *v5; // r8
  char *v6; // rdi

  v3 = (char *)a1 + 64;
  while ( 1 )
  {
    v5 = (char *)*((_QWORD *)v3 + 1);
    if ( v5 != v3 )
      break;
    v6 = 0LL;
LABEL_8:
    if ( NP_CONTEXT::NpiPerformPageOut(a1, a2) < 0 )
      return v6;
  }
  v6 = *(char **)v3;
  *(_QWORD *)v3 = **(_QWORD **)v3;
  if ( v6 == v5 )
  {
    *(_QWORD *)v3 = 0LL;
    *((_QWORD *)v3 + 1) = v3;
  }
  else
  {
    --*(_QWORD *)v5;
  }
  if ( !v6 )
    goto LABEL_8;
  return v6;
}
