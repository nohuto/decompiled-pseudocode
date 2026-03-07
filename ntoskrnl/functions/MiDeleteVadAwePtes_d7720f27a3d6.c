__int64 __fastcall MiDeleteVadAwePtes(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  __int64 v3; // r14
  __int64 v7; // r15
  __int64 v8; // rbp
  __int64 AweViewPageSize; // rax
  __int64 v10; // rcx
  unsigned __int64 *v11; // rbx
  unsigned __int64 v12; // rax
  _QWORD *LeafPfnBuddy; // rax
  _QWORD *v14; // rdx
  unsigned __int64 *v15; // rax
  unsigned __int64 *v16; // rdx

  v3 = *(_QWORD *)(a1 + 32);
  v7 = 0LL;
  v8 = *(_QWORD *)(v3 + 16);
  if ( (MI_READ_PTE_LOCK_FREE(a2) & 1) != 0 )
  {
    v7 = 1LL;
    AweViewPageSize = MiGetAweViewPageSize(a1);
    v10 = v8;
    if ( AweViewPageSize )
      v10 = AweViewPageSize;
    if ( v10 == 16 )
      v7 = v8;
  }
  v11 = (unsigned __int64 *)MiWriteAwePtes(a1, 0, 1, 0, a2, 0);
  if ( v11 )
  {
    if ( (*(_DWORD *)(v3 + 8) & 8) != 0 )
    {
      MiLockHugePfnInternal((__int64)v11, 0);
      v12 = *v11 & 0xFFFFFF800001FFFFuLL;
      if ( *a3 )
        v12 |= (((__int64)(*a3 - qword_140C67A70) >> 3) & 0x3FFFFF) << 17;
      *v11 = v12;
      _InterlockedAnd(
        (volatile signed __int32 *)(qword_140C67A78 + 4 * (((((__int64)v11 - qword_140C67A70) >> 3) & 0x3FFFFFuLL) >> 5)),
        ~(1 << ((((__int64)v11 - qword_140C67A70) >> 3) & 0x1F)));
    }
    else if ( v8 == 1 )
    {
      v15 = (unsigned __int64 *)v11[2];
      v16 = v11;
      while ( v15 )
      {
        v16 = v15;
        v15 = (unsigned __int64 *)v15[2];
      }
      v16[2] = *a3;
    }
    else
    {
      LeafPfnBuddy = v11;
      do
        LeafPfnBuddy = (_QWORD *)MiGetLeafPfnBuddy(LeafPfnBuddy);
      while ( LeafPfnBuddy );
      *v14 ^= (*v14 ^ (*a3 >> 3)) & 0xFFFFFFFFFFELL;
    }
    *a3 = (unsigned __int64)v11;
  }
  return v7;
}
