/*
 * XREFs of ?DCEChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@PEAU2@PEBU_SUBPIXELS@@@Z @ 0x1C004DDA4
 * Callers:
 *     xxxDCompSpeedHitTest @ 0x1C004CF2C (xxxDCompSpeedHitTest.c)
 *     ?DCEChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@PEAU2@PEBU_SUBPIXELS@@@Z @ 0x1C004DDA4 (-DCEChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@PEAU2@PEBU_SUBPIXELS@@@Z.c)
 * Callees:
 *     LayerHitTest @ 0x1C0006BE4 (LayerHitTest.c)
 *     ?DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C004DB1C (-DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     ?DCEChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@PEAU2@PEBU_SUBPIXELS@@@Z @ 0x1C004DDA4 (-DCEChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@PEAU2@PEBU_SUBPIXELS@@@Z.c)
 *     PtInRect @ 0x1C004DEBC (PtInRect.c)
 */

struct tagWND *__fastcall DCEChildTreeSpeedHitTest(
        struct tagWND *a1,
        struct tagPOINT a2,
        struct tagPOINT *a3,
        const struct _SUBPIXELS *a4)
{
  __int64 i; // rsi
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rcx
  struct tagWND *result; // rax
  struct tagPOINT v13; // [rsp+40h] [rbp+8h] BYREF

  for ( i = *((_QWORD *)a1 + 14); ; i = *(_QWORD *)(i + 88) )
  {
    if ( !i )
      return a1;
    if ( *(_QWORD *)(i + 216) )
      break;
    v9 = *(_QWORD *)(i + 40);
    v10 = (__int64)*a3;
    if ( (*(_BYTE *)(v9 + 31) & 0x10) != 0
      && (int)v10 >= *(_DWORD *)(v9 + 88)
      && (int)v10 < *(_DWORD *)(v9 + 96)
      && SHIDWORD(v10) >= *(_DWORD *)(v9 + 92)
      && SHIDWORD(v10) < *(_DWORD *)(v9 + 100) )
    {
      v11 = *(_QWORD *)(v9 + 168);
      if ( (!v11 || (unsigned int)GrePtInRegion(v11, (unsigned int)v10, HIDWORD(v10)))
        && ((*(_BYTE *)(*(_QWORD *)(i + 40) + 26LL) & 8) == 0 || LayerHitTest(i, v10)) )
      {
        goto LABEL_12;
      }
    }
LABEL_2:
    ;
  }
  v13 = a2;
  if ( !(unsigned int)DCEIsWindowHit((struct tagWND *)i, &v13, a4) )
    goto LABEL_2;
  *a3 = v13;
LABEL_12:
  if ( !*(_QWORD *)(i + 112) )
    return (struct tagWND *)i;
  if ( !(unsigned int)PtInRect(*(_QWORD *)(i + 40) + 104LL) )
    return (struct tagWND *)i;
  result = DCEChildTreeSpeedHitTest((struct tagWND *)i, a2, a3, a4);
  if ( !result || result == (struct tagWND *)i )
    return (struct tagWND *)i;
  return result;
}
