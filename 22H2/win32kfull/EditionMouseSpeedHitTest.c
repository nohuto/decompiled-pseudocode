/*
 * XREFs of EditionMouseSpeedHitTest @ 0x1C004CBB0
 * Callers:
 *     <none>
 * Callees:
 *     xxxSpeedHitTest @ 0x1C004CCF4 (xxxSpeedHitTest.c)
 *     IsThreadDesktopComposed @ 0x1C006A378 (IsThreadDesktopComposed.c)
 *     TransformVectorWithInputTargetPrecedence @ 0x1C00F2968 (TransformVectorWithInputTargetPrecedence.c)
 *     INPUTDEST_FROM_PWND @ 0x1C0132244 (INPUTDEST_FROM_PWND.c)
 *     memset @ 0x1C016DE00 (memset.c)
 */

_OWORD *__fastcall EditionMouseSpeedHitTest(
        _OWORD *a1,
        __int64 *a2,
        int a3,
        unsigned __int16 a4,
        unsigned __int16 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        int a9,
        int a10,
        _DWORD *a11,
        __int64 a12)
{
  int v15; // eax
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  _OWORD *result; // rax
  __int64 v23; // r10
  _OWORD *v24; // rax
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  int v29[2]; // [rsp+38h] [rbp-99h] BYREF
  __int64 v30; // [rsp+40h] [rbp-91h]
  int v31; // [rsp+48h] [rbp-89h]
  __int64 v32; // [rsp+4Ch] [rbp-85h]
  int v33; // [rsp+54h] [rbp-7Dh]
  __int64 v34; // [rsp+58h] [rbp-79h]
  int v35; // [rsp+60h] [rbp-71h]
  int v36; // [rsp+64h] [rbp-6Dh]
  __int64 v37; // [rsp+68h] [rbp-69h]
  __int64 v38[14]; // [rsp+78h] [rbp-59h] BYREF

  if ( gspwndInternalCapture )
  {
    if ( (unsigned int)IsThreadDesktopComposed(gptiCurrent) )
      TransformVectorWithInputTargetPrecedence(v23, a2);
    if ( a11 )
      *a11 = 1;
    v24 = (_OWORD *)INPUTDEST_FROM_PWND(v38, gspwndInternalCapture);
    v25 = v24[1];
    *a1 = *v24;
    v26 = v24[2];
    a1[1] = v25;
    v27 = v24[3];
    a1[2] = v26;
    v28 = v24[4];
    a1[3] = v27;
    v20 = v24[5];
    a1[4] = v28;
    v21 = v24[6];
  }
  else
  {
    v32 = *a2;
    v37 = a6;
    v35 = a7;
    v34 = a8;
    v31 = 0;
    v33 = 0;
    v36 = 0;
    v29[0] = 4;
    v29[1] = MouseButtonToPointerFlags(a4);
    v30 = a5;
    memset(v38, 0, sizeof(v38));
    v15 = xxxSpeedHitTest(a10, (int)v29, a9, a3, a12, (__int64)v38);
    *a2 = v32;
    if ( a11 )
      *a11 = v15 != 0;
    v16 = *(_OWORD *)&v38[2];
    *a1 = *(_OWORD *)v38;
    v17 = *(_OWORD *)&v38[4];
    a1[1] = v16;
    v18 = *(_OWORD *)&v38[6];
    a1[2] = v17;
    v19 = *(_OWORD *)&v38[8];
    a1[3] = v18;
    v20 = *(_OWORD *)&v38[10];
    a1[4] = v19;
    v21 = *(_OWORD *)&v38[12];
  }
  result = a1;
  a1[5] = v20;
  a1[6] = v21;
  return result;
}
