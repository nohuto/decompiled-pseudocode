__int64 __fastcall PFEOBJ::bFilterNotEnum(__int64 **this)
{
  unsigned int v1; // ebx
  __int64 v2; // rdi
  struct tagPvtData *v4; // rax
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = 1;
  v2 = **this;
  v5[0] = v2;
  if ( (unsigned int)PFFOBJ::bInPrivatePFT((PFFOBJ *)v5) )
  {
    v4 = PFFOBJ::pPvtDataMatch((PFFOBJ *)v5);
    if ( v4 )
      return *((_DWORD *)v4 + 1) != 0;
  }
  else
  {
    return *(_DWORD *)(v2 + 56) == 0;
  }
  return v1;
}
