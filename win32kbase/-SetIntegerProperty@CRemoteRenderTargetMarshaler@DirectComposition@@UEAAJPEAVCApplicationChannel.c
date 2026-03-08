/*
 * XREFs of ?SetIntegerProperty@CRemoteRenderTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00D8BB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CRemoteRenderTargetMarshaler::SetIntegerProperty(
        DirectComposition::CRemoteRenderTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 a4,
        bool *a5)
{
  unsigned int v5; // edx
  int v6; // r8d

  v5 = 0;
  v6 = a3 - 1;
  if ( v6 )
  {
    if ( v6 == 3 )
    {
      *((_DWORD *)this + 4) |= 0x80u;
      *((_BYTE *)this + 104) = a4 != 0;
      *a5 = 1;
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else if ( *((_QWORD *)this + 8) != a4 )
  {
    *((_DWORD *)this + 4) |= 0x80u;
    *((_QWORD *)this + 8) = a4;
    *a5 = 1;
  }
  return v5;
}
