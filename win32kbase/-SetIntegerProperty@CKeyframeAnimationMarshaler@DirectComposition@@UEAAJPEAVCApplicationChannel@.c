/*
 * XREFs of ?SetIntegerProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C009DDC0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetIntegerProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C009E0C0 (-SetIntegerProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I.c)
 *     ?UpdatePlaybackState@CKeyframeAnimationMarshaler@DirectComposition@@IEAAJW4Enum@KeyframeAnimationPlaybackState@@@Z @ 0x1C02630C0 (-UpdatePlaybackState@CKeyframeAnimationMarshaler@DirectComposition@@IEAAJW4Enum@KeyframeAnimatio.c)
 */

__int64 __fastcall DirectComposition::CKeyframeAnimationMarshaler::SetIntegerProperty(
        LARGE_INTEGER *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        unsigned __int64 a4,
        bool *a5)
{
  unsigned int v6; // r9d
  LARGE_INTEGER PerformanceCounter; // rax
  DWORD LowPart; // eax
  char QuadPart; // dl
  int updated; // eax

  v6 = 0;
  *a5 = 0;
  if ( a3 > 0x15 )
  {
    switch ( a3 )
    {
      case 0x16u:
        if ( a4 > 4 )
          return (unsigned int)-1073741811;
        if ( this[36].LowPart == (_DWORD)a4 )
          return v6;
        this[36].LowPart = a4;
        break;
      case 0x1Bu:
        if ( this[27].QuadPart == a4 )
          return v6;
        this[27].QuadPart = a4;
        break;
      case 0x1Cu:
        if ( this[28].QuadPart == a4 )
          return v6;
        this[28].QuadPart = a4;
        break;
      case 0x1Du:
        if ( a4 > 1 )
          return (unsigned int)-1073741811;
        if ( this[34].HighPart == (_DWORD)a4 )
          return v6;
        this[34].HighPart = a4;
        break;
      case 0x22u:
        if ( a4 <= 1 )
        {
          if ( this[35].HighPart == a4 )
            return v6;
          this[2].LowPart &= ~0x8000u;
          this[35].HighPart = a4;
          goto LABEL_14;
        }
        return (unsigned int)-1073741811;
      case 0x23u:
        QuadPart = this[37].QuadPart;
        if ( ((QuadPart & 2) != 0) == (a4 != 0) )
          return v6;
        this[2].LowPart &= ~0x800u;
        LOBYTE(this[37].LowPart) = QuadPart & 0xFD | (a4 != 0 ? 2 : 0);
LABEL_14:
        *a5 = 1;
        return v6;
      default:
        return (unsigned int)DirectComposition::CBaseExpressionMarshaler::SetIntegerProperty(
                               (DirectComposition::CBaseExpressionMarshaler *)this,
                               a2,
                               a3,
                               a4,
                               a5);
    }
LABEL_34:
    this[2].LowPart &= ~0x800u;
    goto LABEL_14;
  }
  if ( a3 != 21 )
  {
    switch ( a3 )
    {
      case 0xBu:
        if ( this[29].LowPart == a4 )
          return v6;
        this[29].LowPart = a4;
        break;
      case 0xDu:
        if ( this[25].QuadPart == a4 )
          return v6;
        this[25].QuadPart = a4;
        break;
      case 0xEu:
        if ( this[26].QuadPart == a4 )
          return v6;
        this[26].QuadPart = a4;
        break;
      case 0x12u:
        if ( a4 > 4 )
          return (unsigned int)-1073741811;
        if ( this[33].HighPart == (_DWORD)a4 )
          return v6;
        this[33].HighPart = a4;
        break;
      case 0x13u:
        if ( a4 > 2 )
          return (unsigned int)-1073741811;
        if ( this[35].LowPart == (_DWORD)a4 )
          return v6;
        this[35].LowPart = a4;
        break;
      case 0x14u:
        if ( a4 <= 2 )
        {
          LowPart = this[34].LowPart;
          if ( LowPart == (_DWORD)a4 )
            return v6;
          if ( LowPart )
          {
            if ( LowPart == 1 )
            {
              if ( (_DWORD)a4 == 2 )
              {
                this[22] = KeQueryPerformanceCounter(0LL);
                goto LABEL_12;
              }
            }
            else if ( (_DWORD)a4 == 1 && LowPart == 2 )
            {
              this[21].QuadPart += *(_QWORD *)&KeQueryPerformanceCounter(0LL) - this[22].QuadPart;
              this[22].QuadPart = 0LL;
              goto LABEL_12;
            }
            if ( !(_DWORD)a4 )
            {
              this[21].QuadPart = 0LL;
              this[22].QuadPart = 0LL;
              this[23].QuadPart = 0LL;
              this[24].QuadPart = 0LL;
              goto LABEL_12;
            }
          }
          else if ( (_DWORD)a4 == 1 )
          {
            PerformanceCounter = KeQueryPerformanceCounter(0LL);
            LOBYTE(this[37].LowPart) &= ~4u;
            this[21] = PerformanceCounter;
LABEL_12:
            this[34].LowPart = a4;
            v6 = 0;
LABEL_13:
            this[2].LowPart &= ~0x1000u;
            goto LABEL_14;
          }
        }
        return (unsigned int)-1073741811;
      default:
        return (unsigned int)DirectComposition::CBaseExpressionMarshaler::SetIntegerProperty(
                               (DirectComposition::CBaseExpressionMarshaler *)this,
                               a2,
                               a3,
                               a4,
                               a5);
    }
    goto LABEL_34;
  }
  if ( this[36].HighPart != (_DWORD)a4 )
  {
    this[36].HighPart = a4;
    if ( !this[34].LowPart )
      goto LABEL_13;
    updated = DirectComposition::CKeyframeAnimationMarshaler::UpdatePlaybackState(this, 0LL);
    v6 = updated;
    if ( updated >= 0 )
      goto LABEL_13;
  }
  return v6;
}
