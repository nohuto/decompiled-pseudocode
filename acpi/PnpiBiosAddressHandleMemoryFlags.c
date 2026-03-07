__int16 __fastcall PnpiBiosAddressHandleMemoryFlags(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v4; // eax
  __int16 v5; // dx
  __int16 result; // ax

  v2 = a2;
  v4 = *(_BYTE *)(a1 + 5) & 0x1E;
  if ( (*(_BYTE *)(a1 + 5) & 0x1E) != 0 )
  {
    switch ( v4 )
    {
      case 2:
        *(_WORD *)(a2 + 4) |= 0x20u;
        break;
      case 4:
        *(_WORD *)(a2 + 4) |= 8u;
        break;
      case 6:
        *(_WORD *)(a2 + 4) |= 4u;
        break;
      default:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(a2) = 2;
          WPP_RECORDER_SF_d(
            WPP_GLOBAL_Control->DeviceExtension,
            a2,
            13,
            10,
            (__int64)&WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids,
            *(unsigned __int8 *)(a1 + 5));
        }
        break;
    }
  }
  v5 = *(_WORD *)(v2 + 4);
  result = v5 | 1;
  if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
    v5 |= 1u;
  *(_WORD *)(v2 + 4) = v5;
  return result;
}
