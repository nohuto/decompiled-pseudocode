__int64 __fastcall KseDsHookExFreePool(__int64 a1)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  ((void (*)(void))qword_140C06FE8)();
  return KsepDsEventPoolFree(a1, retaddr, 1701736270LL);
}
