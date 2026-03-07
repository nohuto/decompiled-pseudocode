struct _RTL_BALANCED_NODE *__fastcall CVirtualAddressAllocator::ReferenceReservedZeroVad(
        CVirtualAddressAllocator *this,
        struct _RTL_BALANCED_NODE *a2,
        unsigned __int64 a3)
{
  struct _RTL_BALANCED_NODE *v3; // rbx
  int v5; // eax
  int v6; // edx
  unsigned __int64 v7; // rax
  struct _RTL_BALANCED_NODE *v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  v3 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 6);
  while ( v3 )
  {
    v5 = CompareVadAddressInsideAvl(&v9, v3);
    if ( v5 >= 0 )
    {
      if ( v5 <= 0 )
        break;
      v3 = v3->Children[1];
    }
    else
    {
      v3 = v3->Children[0];
    }
  }
  if ( !v3 )
    return 0LL;
  v6 = (int)v3[3].Children[0];
  v7 = (unsigned __int64)&v3[1].Children[1][-171].Children[1];
  if ( (v6 & 0x1000) == 0 )
    v7 = (unsigned __int64)v3[1].Children[1];
  if ( v7 < a3 )
    return 0LL;
  if ( (v6 & 0xF) != 2 )
  {
    WdLogSingleEntry0(3LL);
    return 0LL;
  }
  return v3;
}
