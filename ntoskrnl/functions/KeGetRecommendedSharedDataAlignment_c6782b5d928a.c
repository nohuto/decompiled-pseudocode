ULONG KeGetRecommendedSharedDataAlignment(void)
{
  return KeLargestCacheLine;
}
