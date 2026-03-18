/*
 * XREFs of ?MoveDragRect@@YA_NPEBUMOVESIZEDATA@@UtagPOINT@@_NPEAUtagRECT@@@Z @ 0x1C01EA358
 * Callers:
 *     ?xxxSizeOrMoveRect@@YA_NPEAUMOVESIZEDATA@@UtagPOINT@@PEAUtagRECT@@PEAI@Z @ 0x1C01F112C (-xxxSizeOrMoveRect@@YA_NPEAUMOVESIZEDATA@@UtagPOINT@@PEAUtagRECT@@PEAI@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_sdddddd @ 0x1C00C0C0C (WPP_RECORDER_AND_TRACE_SF_sdddddd.c)
 *     ?RectInClipRegion@MOVESIZEDATA@@QEBA_NAEBUtagRECT@@@Z @ 0x1C023A4A0 (-RectInClipRegion@MOVESIZEDATA@@QEBA_NAEBUtagRECT@@@Z.c)
 */

char __fastcall MoveDragRect(const struct MOVESIZEDATA *this, struct tagPOINT a2, char a3, struct tagRECT *a4)
{
  char v4; // bl
  int v8; // r10d
  int v9; // edx
  LONG v10; // r14d
  LONG top; // r12d
  LONG v12; // r15d
  LONG v13; // ebp
  LONG v14; // r12d
  char v15; // dl
  char v16; // r8
  const char *v17; // r9

  v4 = 0;
  if ( a3 )
    v8 = 0;
  else
    v8 = a2.y - a4->top;
  v9 = a2.x - a4->left;
  v10 = v9 + a4->right;
  top = a4->top;
  v12 = v8 + a4->bottom;
  v13 = a4->left + v9;
  a4->right = v10;
  v14 = v8 + top;
  a4->left = v13;
  a4->bottom = v12;
  a4->top = v14;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v15 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v15 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v16 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v16 = 0;
  }
  if ( v15 || v16 )
  {
    v17 = " side move, ";
    if ( !a3 )
      v17 = " ";
    WPP_RECORDER_AND_TRACE_SF_sdddddd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v15,
      v16,
      (__int64)gFullLog,
      5u,
      1u,
      0x2Bu,
      (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids,
      v17,
      v13,
      v14,
      v10,
      v12,
      v10 - v13,
      v12 - v14);
  }
  if ( (*((_DWORD *)this + 50) & 0x40) != 0 || MOVESIZEDATA::RectInClipRegion(this, a4) )
    return 1;
  return v4;
}
