/*
 * XREFs of ?IsValid@CDxHandleYUVBitmapRealization@@UEBAJXZ @ 0x1802661DC
 * Callers:
 *     ?IsValid@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBAJXZ @ 0x1800F8AB0 (-IsValid@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::IsValid(CDxHandleYUVBitmapRealization *this)
{
  __int64 v1; // rax
  unsigned int v2; // ebx

  v1 = *((_QWORD *)this - 14);
  if ( v1 )
  {
    return *(_BYTE *)(v1 + 86) == 0 ? 0x8898008D : 0;
  }
  else
  {
    v2 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2003292412, 0x5Bu, 0LL);
  }
  return v2;
}
