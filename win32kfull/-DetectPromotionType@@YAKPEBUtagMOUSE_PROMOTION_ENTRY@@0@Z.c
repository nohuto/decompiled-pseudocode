unsigned int __fastcall DetectPromotionType(
        const struct tagMOUSE_PROMOTION_ENTRY *a1,
        const struct tagMOUSE_PROMOTION_ENTRY *a2)
{
  const struct tagMOUSE_PROMOTION_ENTRY *i; // rcx
  int v3; // ecx

  if ( !a2 )
  {
    a2 = a1;
    for ( i = *(const struct tagMOUSE_PROMOTION_ENTRY **)a1; i; i = *(const struct tagMOUSE_PROMOTION_ENTRY **)i )
      a2 = i;
  }
  v3 = *((_DWORD *)a2 + 11);
  if ( (v3 & 0x10) != 0 )
    return (((v3 & 8) != 0) + 1) | 0x10000;
  if ( (*((_DWORD *)a2 + 5) & 0x40000) != 0 )
    return (((v3 & 8) != 0) + 1) | 0x20000;
  return 0x10000000;
}
