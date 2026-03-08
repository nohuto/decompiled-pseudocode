/*
 * XREFs of ?vDisableSynchronizeNKAPCBegin@@YAXPEAUtagNKAPC@@PEAP6AXPEAX11@ZPEAPEAX33@Z @ 0x1C02AA380
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vDisableSynchronizeNKAPCBegin(
        struct tagNKAPC *a1,
        void (**a2)(void *, void *, void *),
        void **a3,
        void **a4)
{
  UserFreeNKAPC(a1, a2, a3, a4);
}
