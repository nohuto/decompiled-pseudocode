/*
 * XREFs of TransformMessageBetweenCoordinateSpaces @ 0x1C005849C
 * Callers:
 *     xxxInterSendMsgEx @ 0x1C00517B0 (xxxInterSendMsgEx.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0054A60 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 * Callees:
 *     ?DoesMsgNeedDPITransform@@YA_NI_K_J@Z @ 0x1C005BCA8 (-DoesMsgNeedDPITransform@@YA_NI_K_J@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall TransformMessageBetweenCoordinateSpaces(
        __int64 a1,
        int a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  unsigned int v8; // ebx
  unsigned int v9; // edi
  unsigned int CurrentThreadDpiAwarenessContext; // esi
  unsigned int v11; // eax
  __int64 v13; // rsi
  __int64 v14; // rdx
  unsigned int v15; // eax
  __int64 v16; // rbx
  __int64 v17; // rsi
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  int v21; // edi
  int v22; // edi
  int v23; // eax
  _DWORD *v24; // rbx
  bool v26; // zf
  __int64 v27; // rcx
  __int64 v28; // [rsp+20h] [rbp-50h] BYREF
  int v29; // [rsp+28h] [rbp-48h] BYREF
  int v30; // [rsp+2Ch] [rbp-44h]
  int v31; // [rsp+30h] [rbp-40h] BYREF
  int v32; // [rsp+34h] [rbp-3Ch]
  __int64 v33; // [rsp+38h] [rbp-38h] BYREF
  __int128 v34; // [rsp+40h] [rbp-30h] BYREF
  int v35; // [rsp+50h] [rbp-20h] BYREF
  int v36; // [rsp+54h] [rbp-1Ch]
  int v37; // [rsp+58h] [rbp-18h]
  int v38; // [rsp+5Ch] [rbp-14h]

  v31 = a2;
  v8 = a1;
  v9 = 0;
  if ( a5 )
    CurrentThreadDpiAwarenessContext = *(_DWORD *)(*(_QWORD *)(a5 + 40) + 288LL);
  else
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(a1, 0LL);
  if ( a6 )
    v11 = *(_DWORD *)(*(_QWORD *)(a6 + 40) + 288LL);
  else
    v11 = W32GetCurrentThreadDpiAwarenessContext(a1, 0LL);
  if ( (((unsigned __int16)(CurrentThreadDpiAwarenessContext >> 8) ^ (unsigned __int16)(v11 >> 8)) & 0x1FF) == 0 )
    return 0LL;
  v13 = *(_QWORD *)a4;
  if ( !DoesMsgNeedDPITransform(v8, 0LL, *(_QWORD *)a4) )
    return 0LL;
  v28 = v14;
  v34 = 0LL;
  if ( v31 == (_DWORD)v14 || v8 < 0x46 )
    goto LABEL_17;
  if ( v8 <= 0x47 )
  {
    v35 = *(_DWORD *)(v13 + 16);
    v36 = *(_DWORD *)(v13 + 20);
    v37 = *(_DWORD *)(v13 + 24) + *(_DWORD *)(v13 + 16);
    v38 = *(_DWORD *)(v13 + 28) + *(_DWORD *)(v13 + 20);
    v9 = TransformRectBetweenCoordinateSpaces(&v34, &v35, a5, a6, v28);
    *(_QWORD *)(v13 + 16) = v34;
    *(_DWORD *)(v13 + 24) = DWORD2(v34) - v34;
    *(_DWORD *)(v13 + 28) = HIDWORD(v34) - DWORD1(v34);
    return v9;
  }
  switch ( v8 )
  {
    case 0x341u:
LABEL_36:
      v9 = 1;
      break;
    case 0x53u:
      return (unsigned int)TransformPointBetweenCoordinateSpaces(v13 + 32, v13 + 32, a5, a6);
    case 0x83u:
      if ( *a3 != v14 )
      {
        v21 = TransformRectBetweenCoordinateSpaces(v13, v13, a5, a6, v28);
        v22 = TransformRectBetweenCoordinateSpaces(v13 + 16, v13 + 16, a5, a6, v28) | v21;
        v23 = TransformRectBetweenCoordinateSpaces(v13 + 32, v13 + 32, a5, a6, v28);
        v24 = *(_DWORD **)(v13 + 48);
        v35 = v24[4];
        v36 = v24[5];
        v37 = v24[6] + v24[4];
        v38 = v24[7] + v24[5];
        v9 = TransformRectBetweenCoordinateSpaces(&v34, &v35, a5, a6, v28) | v23 | v22;
        *((_QWORD *)v24 + 2) = v34;
        v24[6] = DWORD2(v34) - v34;
        v24[7] = HIDWORD(v34) - DWORD1(v34);
        return v9;
      }
      return (unsigned int)TransformRectBetweenCoordinateSpaces(v13, v13, a5, a6, v28);
    case 0x220u:
      v35 = *(_DWORD *)(v13 + 24);
      v36 = *(_DWORD *)(v13 + 28);
      v37 = *(_DWORD *)(v13 + 32) + *(_DWORD *)(v13 + 24);
      v38 = *(_DWORD *)(v13 + 36) + *(_DWORD *)(v13 + 28);
      v9 = TransformRectBetweenCoordinateSpaces(&v34, &v35, a5, a6, v28);
      *(_QWORD *)(v13 + 24) = v34;
      *(_DWORD *)(v13 + 32) = DWORD2(v34) - v34;
      *(_DWORD *)(v13 + 36) = HIDWORD(v34) - DWORD1(v34);
      return v9;
    case 0x283u:
      v18 = *a3;
      if ( (unsigned __int64)(*a3 - 7) <= 1 )
      {
        v19 = TransformPointBetweenCoordinateSpaces(v13 + 8, v13 + 8, a5, a6);
        v20 = v13 + 16;
      }
      else
      {
        if ( (unsigned __int64)(v18 - 11) > 1 )
        {
          if ( v18 == 16 )
          {
            v29 = (__int16)v13;
            v30 = *(__int16 *)(a4 + 2);
            v9 = TransformPointBetweenCoordinateSpaces(&v28, &v29, a5, a6);
            *(_WORD *)a4 = v28;
            *(_WORD *)(a4 + 2) = WORD2(v28);
            return v9;
          }
          goto LABEL_71;
        }
        v19 = TransformPointBetweenCoordinateSpaces(v13 + 4, v13 + 4, a5, a6);
        v20 = v13 + 12;
      }
      return (unsigned int)TransformRectBetweenCoordinateSpaces(v20, v20, a5, a6, v28) | v19;
    case 0x342u:
      goto LABEL_36;
  }
LABEL_17:
  if ( v8 <= 0x210 )
  {
    if ( v8 == 528 )
    {
      v26 = *(_WORD *)a3 == 582;
    }
    else
    {
      if ( v8 > 0x112 )
      {
        if ( v8 < 0x200 )
          return v9;
        if ( v8 > 0x209 )
        {
          if ( v8 == 522 )
            goto LABEL_22;
          if ( v8 > 0x20D )
          {
            if ( v8 != 526 )
              return v9;
            goto LABEL_22;
          }
        }
LABEL_74:
        if ( !a5 )
          return v9;
        v27 = *(_QWORD *)(a5 + 40);
        v33 = v14;
        v29 = (__int16)v13;
        v30 = SWORD1(v13);
        v31 = *(_DWORD *)(v27 + 104);
        v32 = *(_DWORD *)(v27 + 108);
        TransformPointBetweenCoordinateSpaces(&v33, &v31, a6, a5);
        v29 = v33 + (__int16)v13;
        v30 = HIDWORD(v33) + SWORD1(v13);
        v9 = TransformPointBetweenCoordinateSpaces(&v28, &v29, a5, a6);
        LODWORD(v28) = v28 - v31;
        HIDWORD(v28) -= v32;
        goto LABEL_23;
      }
      if ( v8 != 274 )
      {
        if ( v8 == 132 )
        {
LABEL_22:
          v29 = (__int16)v13;
          v30 = SWORD1(v13);
          v9 = TransformPointBetweenCoordinateSpaces(&v28, &v29, a5, a6);
LABEL_23:
          *(_QWORD *)a4 = (WORD2(v28) << 16) | (unsigned __int16)v28;
          return v9;
        }
        if ( v8 != 3 )
        {
          if ( v8 != 123 && (v8 <= 0x9F || v8 > 0xA9 && (v8 <= 0xAA || v8 > 0xAD)) )
            return v9;
          goto LABEL_22;
        }
        goto LABEL_74;
      }
      v26 = *(_WORD *)(a4 + 2) == (unsigned __int16)v14;
    }
    if ( v26 )
      return v9;
    goto LABEL_22;
  }
  if ( v8 <= 0x2A0 )
  {
    if ( v8 == 672 )
      goto LABEL_22;
LABEL_71:
    switch ( v8 )
    {
      case 0x241u:
      case 0x242u:
      case 0x243u:
      case 0x245u:
      case 0x246u:
      case 0x247u:
      case 0x249u:
      case 0x24Au:
      case 0x24Eu:
      case 0x24Fu:
      case 0x251u:
      case 0x252u:
        goto LABEL_22;
      default:
        return v9;
    }
    return v9;
  }
  if ( v8 == 673 )
    goto LABEL_74;
  if ( v8 > 0x2F1 )
  {
    if ( v8 <= 0x2F4 )
      goto LABEL_22;
    if ( v8 != 787 )
    {
      if ( v8 == 831 && a6 && v13 )
      {
        v15 = TransformRectBetweenCoordinateSpaces(v13 + 4, v13 + 4, a5, a6, v28);
        v16 = v13 + 44;
        v17 = 6LL;
        v9 = v15;
        do
        {
          v9 |= TransformRectBetweenCoordinateSpaces(v16, v16, a5, a6, v28);
          v16 += 16LL;
          --v17;
        }
        while ( v17 );
      }
      return v9;
    }
    if ( v13 != 0xFFFFFFFFLL )
      goto LABEL_22;
  }
  return v9;
}
