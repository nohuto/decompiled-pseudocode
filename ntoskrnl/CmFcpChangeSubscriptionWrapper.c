/*
 * XREFs of CmFcpChangeSubscriptionWrapper @ 0x140A24E40
 * Callers:
 *     <none>
 * Callees:
 *     MmGetSessionById @ 0x14022A4F0 (MmGetSessionById.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     MmDetachSession @ 0x1402EA460 (MmDetachSession.c)
 *     MmAttachSession @ 0x1402EA500 (MmAttachSession.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

struct _KPROCESS *__fastcall CmFcpChangeSubscriptionWrapper(__int64 a1, __int64 a2)
{
  int v2; // eax
  struct _KPROCESS *v3; // rbx
  struct _KPROCESS *result; // rax
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  v2 = *(_DWORD *)(a1 + 72);
  v3 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  if ( (v2 & 1) == 0 )
    goto LABEL_4;
  result = (struct _KPROCESS *)MmGetSessionById(*(unsigned int *)(a1 + 76), a2);
  v3 = result;
  if ( !result )
    return result;
  if ( (int)MmAttachSession(result, &ApcState) >= 0 )
  {
LABEL_4:
    result = (struct _KPROCESS *)(*(__int64 (__fastcall **)(__int64))(a1 + 64))(a2);
    if ( !v3 )
      return result;
    MmDetachSession((__int64)v3, ($115DCDF994C6370D29323EAB0E0C9502 *)&ApcState);
  }
  return (struct _KPROCESS *)ObfDereferenceObject(v3);
}
