char __fastcall Bulk_EP_Disable(__int64 a1)
{
  char result; // al
  int v3; // ecx

  while ( 1 )
  {
    result = Controller_IsControllerAccessible(*(_QWORD *)(a1 + 40));
    if ( !result )
      break;
    v3 = *(_DWORD *)(a1 + 108);
    result = v3 - 1;
    if ( ((v3 - 1) & 0xFFFFFFFD) != 0 )
    {
      if ( v3 )
        _InterlockedExchange((volatile __int32 *)(a1 + 108), 0);
      return result;
    }
  }
  return result;
}
