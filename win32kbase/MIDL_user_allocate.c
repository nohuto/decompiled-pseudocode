void *__stdcall MIDL_user_allocate(size_t size)
{
  return (void *)ImpAllocate(size, 1, 1);
}
