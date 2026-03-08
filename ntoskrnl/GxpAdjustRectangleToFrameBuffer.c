/*
 * XREFs of GxpAdjustRectangleToFrameBuffer @ 0x140381AD8
 * Callers:
 *     GxpWriteFrameBufferPixels @ 0x14038188C (GxpWriteFrameBufferPixels.c)
 *     GxpReadFrameBufferPixels @ 0x140AE9548 (GxpReadFrameBufferPixels.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GxpAdjustRectangleToFrameBuffer(
        unsigned int *a1,
        unsigned int *a2,
        unsigned int *a3,
        unsigned int *a4,
        unsigned __int64 *a5,
        char a6)
{
  unsigned __int64 v6; // rax
  unsigned int v8; // r15d
  unsigned int v9; // edx
  unsigned int v10; // r14d
  unsigned __int64 v12; // xmm0_8
  unsigned int v14; // esi
  unsigned int v15; // r11d
  unsigned int v16; // ecx
  unsigned int v17; // ebx
  unsigned int v18; // r8d
  unsigned int v19; // r9d
  unsigned __int64 v20; // rcx
  unsigned int v21; // ebp
  unsigned int v22; // eax
  unsigned int v23; // ecx
  unsigned __int64 v25; // [rsp+0h] [rbp-58h]
  unsigned __int64 v26; // [rsp+8h] [rbp-50h]
  unsigned int v28; // [rsp+68h] [rbp+10h]
  unsigned __int64 v29; // [rsp+70h] [rbp+18h]

  v6 = *(_QWORD *)a2;
  v8 = *a1;
  v9 = 0;
  v10 = a1[1];
  v12 = *(_QWORD *)a3;
  v14 = *a3;
  v15 = *a1;
  v16 = a3[2];
  v17 = v10;
  v18 = v6;
  v25 = v6;
  v29 = v6;
  v26 = v12;
  v28 = v16;
  if ( v14 < (unsigned int)v6 )
    return (unsigned int)-1073741811;
  v19 = a3[1];
  v20 = HIDWORD(v6);
  if ( v19 < HIDWORD(v6) )
    return (unsigned int)-1073741811;
  v21 = v12;
  v22 = v12 - v6;
  if ( v10 > (unsigned int)v12 - v18 )
  {
    if ( !a6 )
      return (unsigned int)-1073741811;
    v17 = v22;
  }
  if ( v8 > HIDWORD(v12) - (int)v20 )
  {
    if ( a6 )
    {
      v15 = HIDWORD(v12) - v20;
      goto LABEL_5;
    }
    return (unsigned int)-1073741811;
  }
LABEL_5:
  if ( (unsigned __int8)(BYTE2(BgInternal) - 2) <= 1u && (_BYTE)BgInternal )
  {
    if ( v17 < v10 && BYTE2(BgInternal) == 2 )
    {
      v18 = 0;
      LODWORD(v29) = 0;
    }
    else
    {
      v18 = v14 - v17 - v18;
      LODWORD(v29) = v18;
    }
    if ( v15 < v8 && BYTE2(BgInternal) == 2 )
    {
      v23 = 0;
      HIDWORD(v29) = 0;
      goto LABEL_8;
    }
    v23 = v19 - v15 - HIDWORD(v29);
    HIDWORD(v29) = v23;
  }
  else
  {
    v23 = HIDWORD(v29);
  }
  if ( ((BYTE2(BgInternal) - 1) & 0xFD) == 0 && (_BYTE)BgInternal )
  {
    v21 = a3[1];
    v26 = __PAIR64__(v14, v21);
    if ( BYTE2(BgInternal) == 1 )
    {
      if ( v17 >= v10 )
      {
        v23 = v14 - *a2 - v17;
        HIDWORD(v29) = v23;
      }
      else
      {
        v23 = 0;
        HIDWORD(v29) = 0;
      }
      v18 = a2[1];
      LODWORD(v29) = v18;
    }
    else
    {
      if ( v15 >= v8 )
      {
        v18 = v19 - a2[1] - v15;
        LODWORD(v29) = v18;
      }
      else
      {
        v18 = 0;
        LODWORD(v29) = 0;
      }
      v23 = *a2;
      HIDWORD(v29) = *a2;
    }
  }
LABEL_8:
  if ( v21 < v18 || HIDWORD(v26) < v23 )
    return (unsigned int)-1073741811;
  if ( a4 )
  {
    a4[1] = v8;
    *a4 = v10;
  }
  if ( a5 )
    *a5 = v25;
  *(_QWORD *)a3 = v26;
  a3[2] = v28;
  *(_QWORD *)a2 = v29;
  *a1 = v15;
  a1[1] = v17;
  return v9;
}
