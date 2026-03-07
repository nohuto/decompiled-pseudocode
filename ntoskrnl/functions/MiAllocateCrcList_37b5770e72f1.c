PVOID __fastcall MiAllocateCrcList(__int64 *a1, char a2, SIZE_T *a3)
{
  _QWORD *v3; // rbp
  __int64 v5; // rbx
  unsigned __int64 v7; // rsi
  unsigned __int64 PrivatePageCount; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rbx
  unsigned __int64 AvailablePagesBelowPriority; // rax
  SIZE_T v15; // rbx
  PVOID result; // rax
  __int128 *v17; // rax
  __int64 v18; // r8

  v3 = (_QWORD *)*a1;
  v5 = *(_QWORD *)(*a1 + 16000);
  v7 = *a3 / 0x28;
  PrivatePageCount = MiGetPrivatePageCount(*a1);
  v9 = v5 + PrivatePageCount;
  if ( v5 + PrivatePageCount < PrivatePageCount )
    v9 = -1LL;
  if ( (a2 & 1) != 0 )
  {
    v9 = 0LL;
    if ( KeNumberNodes )
    {
      v17 = &xmmword_140C67050;
      v18 = (unsigned __int16)KeNumberNodes;
      do
      {
        v9 += *(_QWORD *)v17;
        v17 = (__int128 *)((char *)v17 + 8);
        --v18;
      }
      while ( v18 );
    }
  }
  if ( v9 <= v7 )
    v7 = v9;
  v10 = v3[2160] - 1024LL;
  if ( v10 <= 0 )
    return 0LL;
  v11 = v3[2227];
  if ( (40 * v7 + 4095) >> 12 <= v10 )
    v10 = (40 * v7 + 4095) >> 12;
  v12 = v3[2197];
  if ( v12 >= v11 )
    return 0LL;
  v13 = v11 - v12;
  if ( v10 <= v13 )
    v13 = v10;
  AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(v3, 2u);
  if ( v13 > AvailablePagesBelowPriority )
    v13 = AvailablePagesBelowPriority;
  v15 = v13 << 12;
  if ( v15 < 0x200000 )
    v15 = 0x200000LL;
  while ( 1 )
  {
    result = MiAllocatePool(64, v15, 0x6D75534Du);
    if ( result )
      break;
    v15 >>= 1;
    if ( v15 < 0x10000 )
      return result;
  }
  *a3 = v15;
  return result;
}
