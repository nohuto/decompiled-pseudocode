/*
 * XREFs of ?SetBufferProperty@CVisualSurfaceMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C00BAB60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CVisualSurfaceMarshaler::SetBufferProperty(
        DirectComposition::CVisualSurfaceMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _QWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  __int64 result; // rax
  int v7; // r8d
  int v8; // r8d
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx

  result = 0LL;
  *a6 = 0;
  v7 = a3 - 1;
  if ( !v7 )
  {
    if ( a4 && a5 == 8 )
    {
      v12 = *((_DWORD *)this + 4);
      *((_QWORD *)this + 8) = *a4;
      v10 = v12 | 0x40;
      goto LABEL_6;
    }
    return 3221225485LL;
  }
  v8 = v7 - 1;
  if ( v8 )
  {
    if ( v8 == 1 && a4 && a5 == 8 )
    {
      v11 = *((_DWORD *)this + 4);
      *((_QWORD *)this + 10) = *a4;
      v10 = v11 | 0x100;
      goto LABEL_6;
    }
    return 3221225485LL;
  }
  if ( !a4 || a5 != 8 )
    return 3221225485LL;
  v9 = *((_DWORD *)this + 4);
  *((_QWORD *)this + 9) = *a4;
  v10 = v9 | 0x80;
LABEL_6:
  *((_DWORD *)this + 4) = v10;
  if ( *((_QWORD *)this + 7) )
  {
    *((_BYTE *)this + 92) = 0;
    *((_DWORD *)this + 4) = v10 | 0x400;
  }
  *a6 = 1;
  return result;
}
