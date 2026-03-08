/*
 * XREFs of ?SetIntegerProperty@CRemoteAppRenderTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C0264870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CRemoteAppRenderTargetMarshaler::SetIntegerProperty(
        DirectComposition::CRemoteAppRenderTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 a4,
        bool *a5)
{
  unsigned int v5; // edx
  int v6; // r8d

  v5 = 0;
  if ( !a3 )
  {
    if ( (_DWORD)a4 == *((_DWORD *)this + 14) )
      return v5;
    if ( (((_DWORD)a4 - 1) & 0xFFFFFFFD) == 0 )
    {
      *((_DWORD *)this + 4) |= 0x200u;
      *((_DWORD *)this + 14) = a4;
      *a5 = 1;
      return v5;
    }
    return (unsigned int)-1073741811;
  }
  v6 = a3 - 3;
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      if ( *((_DWORD *)this + 22) != (_DWORD)a4 )
      {
        *((_DWORD *)this + 22) = a4;
        *a5 = 1;
        *((_DWORD *)this + 4) |= 0x400u;
      }
      return v5;
    }
    return (unsigned int)-1073741811;
  }
  if ( *((_QWORD *)this + 8) )
  {
    if ( !a4 )
    {
      *((_DWORD *)this + 4) |= 0x100u;
      *((_QWORD *)this + 8) = 0LL;
      *a5 = 1;
      return v5;
    }
    return (unsigned int)-1073741811;
  }
  if ( a4 )
  {
    *((_DWORD *)this + 4) |= 0x20u;
    *((_QWORD *)this + 8) = a4;
  }
  return v5;
}
