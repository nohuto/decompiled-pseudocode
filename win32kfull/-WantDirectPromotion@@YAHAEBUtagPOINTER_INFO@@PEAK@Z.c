__int64 __fastcall WantDirectPromotion(const struct tagPOINTER_INFO *a1, unsigned int *a2)
{
  int v2; // eax
  unsigned int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rcx
  struct tagTHREADINFO *v7; // rax

  v2 = *((_DWORD *)a1 + 3);
  if ( (v2 & 0x10000) != 0 )
  {
    v4 = 0x10000000;
  }
  else
  {
    if ( (v2 & 0x40004) != 0 )
      return 0LL;
    v4 = 0;
  }
  v5 = ValidateHwnd(*((_QWORD *)a1 + 3));
  if ( v5 )
  {
    v7 = *(struct tagTHREADINFO **)(v5 + 16);
    if ( !v7 )
      v7 = PtiCurrentShared(v6);
    if ( _bittest64((const signed __int64 *)v7 + 81, 0x2Au) )
    {
      *a2 = v4;
      return 1LL;
    }
  }
  return 0LL;
}
