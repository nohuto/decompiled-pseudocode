/*
 * XREFs of ?IsValid@CDxHandleYUVBitmapRealization@@UEBAJXZ @ 0x1802B0EF0
 * Callers:
 *     ?IsValid@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBAJXZ @ 0x18011F170 (-IsValid@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::IsValid(CDxHandleYUVBitmapRealization *this)
{
  __int64 v1; // rax
  unsigned int v2; // ebx

  v1 = *((_QWORD *)this - 13);
  if ( v1 )
  {
    return *(_BYTE *)(v1 + 70) == 0 ? 0x8898008D : 0;
  }
  else
  {
    v2 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2003292412, 0x5Du, 0LL);
  }
  return v2;
}
