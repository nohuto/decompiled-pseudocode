__int64 __fastcall KseDsHookExAllocatePool(int a1, int a2)
{
  __int64 v4; // rbx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  v4 = ((__int64 (*)(void))qword_140C06FC8)();
  KsepDsEventPoolAllocate(v4, (_DWORD)retaddr, a1, a2, 78);
  return v4;
}
