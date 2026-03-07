__int64 __fastcall RtlpFcSendFeatureUsageNotifications(__int64 a1, unsigned int *a2, __int64 a3)
{
  unsigned int v5; // ebx
  unsigned int i; // esi
  __int64 v7; // rcx
  int v8; // eax

  v5 = -1073741275;
  if ( a3 )
  {
    for ( i = 0; i < *a2; ++i )
    {
      v7 = 4LL * i;
      if ( a2[v7 + 1] == *(_DWORD *)a1
        && LOWORD(a2[v7 + 2]) == *(_WORD *)(a1 + 4)
        && ((a2[v7 + 2] & 0x10000) == 0 || (*(_BYTE *)(a1 + 6) & 1) != 0) )
      {
        v8 = RtlpFcNotifyFeatureUsageTarget(a1, &a2[v7 + 3]);
        if ( v8 >= 0 )
          v5 = v8;
      }
    }
  }
  return v5;
}
