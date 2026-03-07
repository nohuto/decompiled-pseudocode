void __stdcall RtlMoveMemory(void *a1, const void *Source, SIZE_T Length)
{
  memmove(a1, Source, Length);
}
