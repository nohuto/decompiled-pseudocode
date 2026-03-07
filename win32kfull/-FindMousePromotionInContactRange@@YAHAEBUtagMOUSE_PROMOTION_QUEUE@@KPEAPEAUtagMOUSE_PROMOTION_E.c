__int64 __fastcall FindMousePromotionInContactRange(
        __int64 **a1,
        unsigned int a2,
        struct tagMOUSE_PROMOTION_ENTRY **a3,
        struct tagMOUSE_PROMOTION_ENTRY **a4)
{
  __int64 *v4; // rax
  __int64 *v5; // r11
  struct tagMOUSE_PROMOTION_ENTRY *v6; // r10
  struct tagMOUSE_PROMOTION_ENTRY *v7; // rbx
  int v8; // ecx
  __int64 result; // rax

  v4 = *a1;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  if ( !*a1 )
    return 0LL;
  do
  {
    v8 = *((_DWORD *)v4 + 5);
    if ( (v8 & 0x10000) != 0 )
      v6 = (struct tagMOUSE_PROMOTION_ENTRY *)v4;
    if ( *((_DWORD *)v4 + 8) <= a2 && *((_DWORD *)v4 + 9) >= a2 )
    {
      if ( !v6 )
        break;
      v5 = v4;
    }
    if ( (v8 & 0x40000) != 0 )
    {
      if ( v5 )
      {
        v7 = (struct tagMOUSE_PROMOTION_ENTRY *)v4;
        goto LABEL_13;
      }
      v6 = 0LL;
    }
    v4 = (__int64 *)*v4;
  }
  while ( v4 );
  if ( !v5 )
    return 0LL;
LABEL_13:
  if ( !v6 )
    return 0LL;
  *a3 = v6;
  result = 1LL;
  *a4 = v7;
  return result;
}
