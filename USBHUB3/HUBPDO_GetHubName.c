__int64 __fastcall HUBPDO_GetHubName(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx
  size_t v6; // rbp
  const void *v7; // rax
  int v8; // r14d
  __int64 v9; // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-28h] BYREF
  size_t Size; // [rsp+78h] [rbp+10h] BYREF

  v2 = a2[3];
  v3 = 0;
  Size = 0LL;
  DestinationString = 0LL;
  v6 = *(unsigned int *)(a2[23] + 8LL);
  if ( v2 )
  {
    if ( (unsigned int)v6 >= 6 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 24) + 1632LL) & 2) != 0 )
      {
        RtlInitUnicodeString(&DestinationString, 0LL);
        memset((void *)v2, 0, v6);
        HUBPDO_GetHubSymbolicLinkName(a1, &DestinationString);
        v7 = (const void *)HUBMISC_StripSymbolicNamePrefix(&DestinationString, &Size);
        v8 = Size;
        if ( v7 && (unsigned int)v6 >= (int)Size + 6 )
          memmove((void *)(v2 + 4), v7, Size);
        v9 = (unsigned int)(v8 + 6);
        *(_DWORD *)v2 = v9;
        a2[7] = v9;
      }
      else
      {
        *(_DWORD *)v2 = 6;
        *(_WORD *)(v2 + 4) = 0;
        a2[7] = 6LL;
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DD(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 1432LL),
          3u,
          5u,
          0xDu,
          (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
          v6,
          6);
      return (unsigned int)-1073741789;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 1432LL),
        3u,
        5u,
        0xCu,
        (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids);
    return (unsigned int)-1073741811;
  }
  return v3;
}
