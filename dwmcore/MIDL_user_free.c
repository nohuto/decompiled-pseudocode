/*
 * XREFs of MIDL_user_free @ 0x1800F16C0
 * Callers:
 *     ??_V@YAXPEAX_K@Z @ 0x18010F020 (--_V@YAXPEAX_K@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall MIDL_user_free(void *a1)
{
  operator delete(a1);
}
