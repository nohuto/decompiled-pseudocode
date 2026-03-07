// attributes: thunk
void __stdcall MIDL_user_free(void *a1)
{
  operator delete(a1);
}
