/*
 * XREFs of ?CrmpActivityQueryWindowClosedReasons@@YAJPEAU_CRMP_ACTIVITY_CONTEXT@@PEAPEAW4_CRM_WINDOW_CLOSED_REASON@@PEAK@Z @ 0x180003C50
 * Callers:
 *     CrmActivityQueryWindowClosedReasons @ 0x180003C40 (CrmActivityQueryWindowClosedReasons.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall CrmpActivityQueryWindowClosedReasons(
        struct _CRMP_ACTIVITY_CONTEXT *a1,
        PVOID *a2,
        unsigned int *a3)
{
  PVOID v5; // rdi
  CLIENT_CALL_RETURN result; // rax
  unsigned int Pointer; // [rsp+40h] [rbp-28h]
  unsigned int v8; // [rsp+70h] [rbp+8h] BYREF
  PVOID *v9; // [rsp+78h] [rbp+10h]
  unsigned int *v10; // [rsp+80h] [rbp+18h]
  PVOID P; // [rsp+88h] [rbp+20h] BYREF

  v10 = a3;
  v9 = a2;
  v5 = 0LL;
  P = 0LL;
  v8 = 0;
  result.Pointer = NdrClientCall3(
                     (MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo,
                     3u,
                     0LL,
                     *((_QWORD *)a1 + 1),
                     *(_QWORD *)(*((_QWORD *)a1 + 2) + 8LL),
                     &P,
                     &v8).Pointer;
  Pointer = (unsigned int)result.Pointer;
  if ( SLODWORD(result.Simple) < 0 )
  {
    v5 = P;
  }
  else
  {
    *a2 = P;
    *a3 = v8;
    P = 0LL;
    result.Simple = 0LL;
    Pointer = 0;
  }
  if ( v5 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
    return (CLIENT_CALL_RETURN)Pointer;
  }
  return result;
}
