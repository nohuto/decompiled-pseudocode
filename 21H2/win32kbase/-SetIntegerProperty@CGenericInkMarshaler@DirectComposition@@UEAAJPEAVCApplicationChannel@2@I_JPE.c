/*
 * XREFs of ?SetIntegerProperty@CGenericInkMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C0219410
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSegmentCount@CGenericInkMarshaler@DirectComposition@@AEBAIXZ @ 0x1C0219200 (-GetSegmentCount@CGenericInkMarshaler@DirectComposition@@AEBAIXZ.c)
 *     ?RemoveSegmentsAtEnd@CGenericInkMarshaler@DirectComposition@@AEAAJIPEA_N@Z @ 0x1C02192E0 (-RemoveSegmentsAtEnd@CGenericInkMarshaler@DirectComposition@@AEAAJIPEA_N@Z.c)
 */

__int64 __fastcall DirectComposition::CGenericInkMarshaler::SetIntegerProperty(
        DirectComposition::CGenericInkMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 a4,
        bool *a5)
{
  int v5; // edx
  char v6; // si
  unsigned int SegmentCount; // eax
  __int64 v9; // rcx
  unsigned int v10; // r9d
  _BYTE *v11; // r10
  __int64 v12; // rax

  v5 = 0;
  v6 = a3;
  *a5 = 0;
  switch ( a3 )
  {
    case 1:
      if ( (unsigned __int64)(a4 - 1) > 0xFF )
        goto LABEL_28;
      v12 = *((_QWORD *)this + 18);
      if ( !v12 )
      {
        *((_QWORD *)this + 18) = a4;
        *a5 = 1;
        goto LABEL_29;
      }
      if ( a4 != v12 )
LABEL_28:
        v5 = -1073741811;
LABEL_29:
      if ( v5 < 0 )
        return (unsigned int)v5;
      goto LABEL_30;
    case 2:
      SegmentCount = DirectComposition::CGenericInkMarshaler::GetSegmentCount(this);
      if ( !*(_QWORD *)(v9 + 144) || v10 > SegmentCount )
        break;
      *(_DWORD *)(v9 + 16) &= ~0x40u;
      *(_DWORD *)(v9 + 152) = SegmentCount - v10;
      v5 = 0;
      *v11 = 1;
LABEL_30:
      *((_DWORD *)this + 62) |= 1 << v6;
      return (unsigned int)v5;
    case 4:
      v5 = DirectComposition::CGenericInkMarshaler::RemoveSegmentsAtEnd(this, (unsigned int)a4, a5);
      goto LABEL_29;
    case 5:
      *((_DWORD *)this + 41) = a4;
      goto LABEL_30;
    case 7:
      *((_DWORD *)this + 44) = a4;
      goto LABEL_16;
    case 8:
      *((_DWORD *)this + 45) = a4;
      goto LABEL_16;
    case 9:
      *((_DWORD *)this + 46) = a4;
LABEL_16:
      *((_DWORD *)this + 4) &= ~0x80u;
      goto LABEL_13;
    case 12:
      *((_DWORD *)this + 60) = a4;
      goto LABEL_12;
    case 13:
      *((_DWORD *)this + 61) = a4;
LABEL_12:
      *((_DWORD *)this + 4) &= ~0x200u;
LABEL_13:
      *a5 = 1;
      goto LABEL_30;
  }
  return (unsigned int)-1073741811;
}
