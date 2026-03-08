/*
 * XREFs of ?FindBitmapNoRef@CLogicalSurfaceHandleMap@@QEAAJPEAXPEAPEAVCGdiSpriteBitmap@@@Z @ 0x180045398
 * Callers:
 *     ?ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z @ 0x18004523C (-ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CLogicalSurfaceHandleMap::FindBitmapNoRef(
        CLogicalSurfaceHandleMap *this,
        void *a2,
        struct CGdiSpriteBitmap **a3)
{
  unsigned int v4; // ebx
  _QWORD *v5; // rax
  void *Buffer; // [rsp+20h] [rbp-28h] BYREF

  Buffer = a2;
  v4 = 0;
  v5 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), &Buffer);
  *a3 = 0LL;
  if ( v5 )
    *a3 = (struct CGdiSpriteBitmap *)v5[2];
  else
    return (unsigned int)-2147467259;
  return v4;
}
