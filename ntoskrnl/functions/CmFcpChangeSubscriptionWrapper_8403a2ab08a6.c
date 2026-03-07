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
