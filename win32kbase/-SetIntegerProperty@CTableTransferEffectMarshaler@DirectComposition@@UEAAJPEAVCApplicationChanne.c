/*
 * XREFs of ?SetIntegerProperty@CTableTransferEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C024F700
 * Callers:
 *     <none>
 * Callees:
 *     ?SetIntegerProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C024D500 (-SetIntegerProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_J.c)
 */

__int64 __fastcall DirectComposition::CTableTransferEffectMarshaler::SetIntegerProperty(
        DirectComposition::CTableTransferEffectMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 a4,
        bool *a5)
{
  char v6; // r10
  char v8; // cl
  char v9; // al
  char v10; // cl
  char v11; // cl
  char v12; // cl

  v6 = a4 != 0;
  switch ( a3 )
  {
    case 4:
      *a5 = v6 ^ *((_BYTE *)this + 176) & 1;
      v9 = *((_BYTE *)this + 176) & 0xFE;
      break;
    case 5:
      v12 = v6 ^ ((*((_BYTE *)this + 176) & 2) != 0);
      v6 *= 2;
      *a5 = v12;
      v9 = *((_BYTE *)this + 176) & 0xFD;
      break;
    case 6:
      v11 = v6 ^ ((*((_BYTE *)this + 176) & 4) != 0);
      v6 *= 4;
      *a5 = v11;
      v9 = *((_BYTE *)this + 176) & 0xFB;
      break;
    case 7:
      v10 = v6 ^ ((*((_BYTE *)this + 176) & 8) != 0);
      v6 *= 8;
      *a5 = v10;
      v9 = *((_BYTE *)this + 176) & 0xF7;
      break;
    case 8:
      v8 = v6 ^ ((*((_BYTE *)this + 176) & 0x10) != 0);
      v6 *= 16;
      *a5 = v8;
      v9 = *((_BYTE *)this + 176) & 0xEF;
      break;
    default:
      return DirectComposition::CFilterEffectMarshaler::SetIntegerProperty(this, a2, a3, a4, a5);
  }
  *((_BYTE *)this + 176) = v9 | v6;
  return 0LL;
}
