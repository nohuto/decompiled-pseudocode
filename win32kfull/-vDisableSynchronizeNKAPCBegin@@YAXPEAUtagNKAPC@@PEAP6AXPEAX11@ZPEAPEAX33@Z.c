void __fastcall vDisableSynchronizeNKAPCBegin(
        struct tagNKAPC *a1,
        void (**a2)(void *, void *, void *),
        void **a3,
        void **a4)
{
  UserFreeNKAPC(a1, a2, a3, a4);
}
