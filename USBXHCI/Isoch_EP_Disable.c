__int64 __fastcall Isoch_EP_Disable(__int64 a1)
{
  __int64 result; // rax
  int v3; // ecx

  while ( 1 )
  {
    result = Controller_IsControllerAccessible(*(_QWORD *)(a1 + 40));
    if ( !(_BYTE)result )
      break;
    v3 = *(_DWORD *)(a1 + 108);
    result = (unsigned int)(v3 - 1);
    if ( (result & 0xFFFFFFFD) != 0 )
    {
      if ( v3 )
        _InterlockedExchange((volatile __int32 *)(a1 + 108), 0);
      return result;
    }
  }
  return result;
}
