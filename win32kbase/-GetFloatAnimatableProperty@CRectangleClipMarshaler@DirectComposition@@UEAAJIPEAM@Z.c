/*
 * XREFs of ?GetFloatAnimatableProperty@CRectangleClipMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C0254440
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFloatAnimatableProperty@CResourceMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C024C0F0 (-GetFloatAnimatableProperty@CResourceMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 */

__int64 __fastcall DirectComposition::CRectangleClipMarshaler::GetFloatAnimatableProperty(
        DirectComposition::CRectangleClipMarshaler *this,
        unsigned int a2,
        float *a3)
{
  unsigned int v3; // r9d
  int v4; // eax

  v3 = 0;
  if ( a2 > 0xA )
  {
    switch ( a2 )
    {
      case 0xBu:
        v4 = *((_DWORD *)this + 31);
        goto LABEL_27;
      case 0xCu:
        v4 = *((_DWORD *)this + 32);
        goto LABEL_27;
      case 0xDu:
        v4 = *((_DWORD *)this + 33);
        goto LABEL_27;
      case 0xEu:
        v4 = *((_DWORD *)this + 34);
        goto LABEL_27;
      case 0xFu:
        v4 = *((_DWORD *)this + 35);
        goto LABEL_27;
    }
  }
  else
  {
    switch ( a2 )
    {
      case 0xAu:
        v4 = *((_DWORD *)this + 30);
        goto LABEL_27;
      case 4u:
        v4 = *((_DWORD *)this + 24);
        goto LABEL_27;
      case 5u:
        v4 = *((_DWORD *)this + 25);
        goto LABEL_27;
      case 6u:
        v4 = *((_DWORD *)this + 26);
        goto LABEL_27;
      case 7u:
        v4 = *((_DWORD *)this + 27);
        goto LABEL_27;
      case 8u:
        v4 = *((_DWORD *)this + 28);
        goto LABEL_27;
      case 9u:
        v4 = *((_DWORD *)this + 29);
LABEL_27:
        *(_DWORD *)a3 = v4;
        return v3;
    }
  }
  return (unsigned int)DirectComposition::CResourceMarshaler::GetFloatAnimatableProperty(this, a2, a3);
}
