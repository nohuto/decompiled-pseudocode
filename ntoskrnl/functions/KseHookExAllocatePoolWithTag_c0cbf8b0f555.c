void *__fastcall KseHookExAllocatePoolWithTag(__int64 a1, size_t a2)
{
  void *v3; // rax
  void *v4; // rbx

  v3 = (void *)((__int64 (*)(void))qword_140C06C88)();
  v4 = v3;
  if ( v3 )
    memset(v3, 0, a2);
  return v4;
}
