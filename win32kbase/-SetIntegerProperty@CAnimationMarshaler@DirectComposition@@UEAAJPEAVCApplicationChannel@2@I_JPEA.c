/*
 * XREFs of ?SetIntegerProperty@CAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00BD310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CAnimationMarshaler::SetIntegerProperty(
        DirectComposition::CAnimationMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        unsigned __int64 a4,
        bool *a5)
{
  __int64 result; // rax
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  char v9; // r8

  result = 0LL;
  *a5 = 0;
  v6 = a3 - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 6;
      if ( v8 )
      {
        if ( v8 == 2 )
        {
          v9 = *((_BYTE *)this + 184);
          if ( (v9 & 2) == 0 )
          {
            if ( a4 )
            {
              *((_BYTE *)this + 184) = v9 | 2;
              goto LABEL_6;
            }
          }
        }
      }
      else if ( a4 <= 2 )
      {
        *((_DWORD *)this + 35) = a4;
        goto LABEL_6;
      }
      return 3221225485LL;
    }
    if ( *((_QWORD *)this + 11) == a4 )
      return result;
    *((_QWORD *)this + 11) = a4;
LABEL_5:
    *((_DWORD *)this + 4) &= ~0x40u;
LABEL_6:
    *a5 = 1;
    return result;
  }
  if ( *((_QWORD *)this + 10) != a4 )
  {
    *((_QWORD *)this + 10) = a4;
    goto LABEL_5;
  }
  return result;
}
