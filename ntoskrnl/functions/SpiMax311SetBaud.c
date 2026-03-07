char __fastcall SpiMax311SetBaud(__int64 a1, unsigned int a2)
{
  unsigned __int16 v4; // ax
  char result; // al

  if ( a1 && *(_QWORD *)a1 )
  {
    if ( a2 > 0x3840 )
    {
      switch ( a2 )
      {
        case 0x4B00u:
          v4 = -16374;
          goto LABEL_35;
        case 0x7080u:
          v4 = -16381;
          goto LABEL_35;
        case 0x9600u:
          v4 = -16375;
          goto LABEL_35;
        case 0xE100u:
          v4 = -16382;
          goto LABEL_35;
        case 0x12C00u:
          v4 = -16376;
          goto LABEL_35;
        case 0x38400u:
          v4 = -16384;
          goto LABEL_35;
      }
    }
    else
    {
      switch ( a2 )
      {
        case 0x3840u:
          v4 = -16380;
          goto LABEL_35;
        case 0x258u:
          v4 = -16369;
          goto LABEL_35;
        case 0x4B0u:
          v4 = -16370;
          goto LABEL_35;
        case 0x708u:
          v4 = -16377;
          goto LABEL_35;
        case 0x960u:
          v4 = -16371;
          goto LABEL_35;
        case 0xE10u:
          v4 = -16378;
          goto LABEL_35;
        case 0x12C0u:
          v4 = -16372;
          goto LABEL_35;
        case 0x1C20u:
          v4 = -16379;
          goto LABEL_35;
        case 0x2580u:
          v4 = -16373;
LABEL_35:
          SpiSend16(a1, v4);
          result = 1;
          *(_DWORD *)(a1 + 8) = a2;
          return result;
      }
    }
    v4 = -16383;
    goto LABEL_35;
  }
  return 0;
}
