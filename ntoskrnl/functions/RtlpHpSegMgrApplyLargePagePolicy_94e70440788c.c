_BOOL8 __fastcall RtlpHpSegMgrApplyLargePagePolicy(__int64 a1)
{
  unsigned int v1; // eax
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx

  v1 = *(_BYTE *)(a1 + 13) & 7;
  if ( v1 <= 1 )
  {
    v2 = a1 + *(__int16 *)(a1 + 22);
    v3 = *(_QWORD *)(v2 + 56) + *(_QWORD *)(v2 + 40);
    if ( v3 < *(_QWORD *)(v2 + 72) )
    {
      if ( v3 >= *(_QWORD *)(v2 + 64) )
        return *(_QWORD *)(v2 + 48) + *(_QWORD *)(v2 + 32) >= ((v3 * *(unsigned __int8 *)(v2 + 80)) << 9) / 0x64;
      return 1LL;
    }
    return 0LL;
  }
  if ( v1 == 2 )
    return 0LL;
  if ( v1 == 3 )
    return 1LL;
  return ExGenRandom(1) & 1;
}
