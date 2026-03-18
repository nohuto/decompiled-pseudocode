/*
 * XREFs of PHIDTtoPT @ 0x1C01C328C
 * Callers:
 *     _GetPointerDeviceInfoProperties @ 0x1C0152EB0 (_GetPointerDeviceInfoProperties.c)
 *     _GetPointerDeviceType @ 0x1C0152F48 (_GetPointerDeviceType.c)
 *     PostPointerEventMessage @ 0x1C01C32E0 (PostPointerEventMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PHIDTtoPT(__int64 a1)
{
  unsigned int v1; // r8d

  v1 = 1;
  if ( *(_DWORD *)(a1 + 24) == 1 || *(_DWORD *)(a1 + 24) == 2 || *(_DWORD *)(a1 + 24) == 3 || *(_DWORD *)(a1 + 24) == 4 )
  {
    return 3;
  }
  else if ( *(_DWORD *)(a1 + 24) != 5 )
  {
    if ( *(_DWORD *)(a1 + 24) == 6 )
    {
      return 2;
    }
    else if ( *(_DWORD *)(a1 + 24) == 7 )
    {
      return 4;
    }
  }
  return v1;
}
