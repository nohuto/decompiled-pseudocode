char __fastcall ACPIValidateStringVendorDeviceIdFormat(__int64 a1, unsigned __int64 a2)
{
  unsigned __int16 v3; // r8
  char v4; // cl
  char v5; // cl

  if ( a2 - 7 <= 1 )
  {
    v3 = 0;
    while ( 1 )
    {
      v4 = *(_BYTE *)(v3 + a1);
      if ( (unsigned __int8)(v4 - 65) > 0x19u && (unsigned __int8)(v4 - 97) > 0x19u && (unsigned __int8)(v4 - 48) > 9u )
        break;
      if ( ++v3 >= (unsigned __int16)((a2 != 7) + 3) )
      {
        while ( v3 < a2 )
        {
          v5 = *(_BYTE *)(v3 + a1);
          if ( (unsigned __int8)(v5 - 65) > 5u && (unsigned __int8)(v5 - 97) > 5u && (unsigned __int8)(v5 - 48) > 9u )
            return 0;
          ++v3;
        }
        return 1;
      }
    }
  }
  return 0;
}
