/*
 * XREFs of TransformMessageBetweenCoordinateSpaces @ 0x1C0048E70
 * Callers:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0048220 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     xxxInterSendMsgEx @ 0x1C004A280 (xxxInterSendMsgEx.c)
 * Callees:
 *     ?DoesMsgNeedDPITransform@@YA_NI_K_J@Z @ 0x1C004C2D4 (-DoesMsgNeedDPITransform@@YA_NI_K_J@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

__int64 __fastcall TransformMessageBetweenCoordinateSpaces(
        __int64 a1,
        unsigned __int64 a2,
        __int64 *a3,
        __int16 *a4,
        __int64 a5,
        __int64 a6)
{
  unsigned int v6; // r12d
  int v8; // r13d
  unsigned int v9; // r14d
  unsigned int CurrentThreadDpiAwarenessContext; // ebx
  unsigned int v11; // eax
  __int64 v13; // rbx
  __int64 *v14; // r9
  int v15; // r14d
  int v16; // r12d
  int v17; // r12d
  int v18; // eax
  __int64 v19; // rbx
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  unsigned int v24; // eax
  __int64 v25; // rcx
  unsigned int v26; // eax
  __int64 v27; // rbx
  __int64 v28; // r14
  __int64 *v29; // [rsp+20h] [rbp-50h] BYREF
  __int64 v30; // [rsp+28h] [rbp-48h] BYREF
  __int64 v31; // [rsp+30h] [rbp-40h] BYREF
  __int64 v32; // [rsp+38h] [rbp-38h] BYREF
  __int128 v33; // [rsp+40h] [rbp-30h] BYREF
  __int128 v34; // [rsp+50h] [rbp-20h] BYREF

  v6 = 0;
  v29 = a3;
  v8 = a2;
  v9 = a1;
  if ( a5 )
    CurrentThreadDpiAwarenessContext = *(_DWORD *)(*(_QWORD *)(a5 + 40) + 288LL);
  else
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(a1);
  if ( a6 )
    v11 = *(_DWORD *)(*(_QWORD *)(a6 + 40) + 288LL);
  else
    v11 = W32GetCurrentThreadDpiAwarenessContext(a1);
  if ( (((unsigned __int16)(CurrentThreadDpiAwarenessContext >> 8) ^ (unsigned __int16)(v11 >> 8)) & 0x1FF) == 0 )
    return 0LL;
  v13 = *(_QWORD *)a4;
  if ( !DoesMsgNeedDPITransform(v9, a2, *(_QWORD *)a4) )
    return 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v34 = 0LL;
  v33 = 0LL;
  if ( !v8 )
    goto LABEL_11;
  if ( v9 == 834 )
  {
LABEL_10:
    v6 = 1;
    goto LABEL_11;
  }
  if ( v9 <= 0x83 )
  {
    switch ( v9 )
    {
      case 0x83u:
        if ( *v14 )
        {
          v16 = TransformRectBetweenCoordinateSpaces(v13, v13, a5, a6);
          v17 = TransformRectBetweenCoordinateSpaces(v13 + 16, v13 + 16, a5, a6) | v16;
          v18 = TransformRectBetweenCoordinateSpaces(v13 + 32, v13 + 32, a5, a6);
          v19 = *(_QWORD *)(v13 + 48);
          *(_QWORD *)&v34 = *(_QWORD *)(v19 + 16);
          DWORD2(v34) = *(_DWORD *)(v19 + 24) + *(_DWORD *)(v19 + 16);
          HIDWORD(v34) = *(_DWORD *)(v19 + 20) + *(_DWORD *)(v19 + 28);
          v6 = TransformRectBetweenCoordinateSpaces(&v33, &v34, a5, a6) | v18 | v17;
          *(_QWORD *)(v19 + 16) = v33;
          *(_DWORD *)(v19 + 24) = DWORD2(v33) - v33;
          *(_DWORD *)(v19 + 28) = HIDWORD(v33) - DWORD1(v33);
        }
        else
        {
          v6 = TransformRectBetweenCoordinateSpaces(v13, v13, a5, a6);
        }
        v15 = 128;
LABEL_23:
        switch ( v15 )
        {
          case 0:
            goto LABEL_55;
          case 120:
          case 129:
          case 157:
          case 158:
          case 159:
          case 160:
          case 161:
          case 162:
          case 163:
          case 164:
          case 165:
          case 166:
          case 168:
          case 169:
          case 170:
            goto LABEL_54;
          default:
            return v6;
        }
        return v6;
      case 0x46u:
      case 0x47u:
        *(_QWORD *)&v34 = *(_QWORD *)(v13 + 16);
        DWORD2(v34) = *(_DWORD *)(v13 + 24) + *(_DWORD *)(v13 + 16);
        HIDWORD(v34) = *(_DWORD *)(v13 + 20) + *(_DWORD *)(v13 + 28);
        v6 = TransformRectBetweenCoordinateSpaces(&v33, &v34, a5, a6);
        *(_QWORD *)(v13 + 16) = v33;
        *(_DWORD *)(v13 + 24) = DWORD2(v33) - v33;
        *(_DWORD *)(v13 + 28) = HIDWORD(v33) - DWORD1(v33);
        break;
      case 0x53u:
        v6 = TransformPointBetweenCoordinateSpaces(v13 + 32, v13 + 32, a5, a6);
        v15 = 80;
        goto LABEL_23;
    }
LABEL_22:
    v15 = v9 - 3;
    goto LABEL_23;
  }
  switch ( v9 )
  {
    case 0x220u:
      *(_QWORD *)&v34 = *(_QWORD *)(v13 + 24);
      DWORD2(v34) = *(_DWORD *)(v13 + 24) + *(_DWORD *)(v13 + 32);
      HIDWORD(v34) = *(_DWORD *)(v13 + 28) + *(_DWORD *)(v13 + 36);
      v24 = TransformRectBetweenCoordinateSpaces(&v33, &v34, a5, a6);
      v14 = v29;
      v6 = v24;
      *(_QWORD *)(v13 + 24) = v33;
      *(_DWORD *)(v13 + 32) = DWORD2(v33) - v33;
      *(_DWORD *)(v13 + 36) = HIDWORD(v33) - DWORD1(v33);
      v23 = 32;
      goto LABEL_49;
    case 0x283u:
      v20 = *v14;
      if ( (unsigned __int64)(*v14 - 7) <= 1 )
      {
        v21 = TransformPointBetweenCoordinateSpaces(v13 + 8, v13 + 8, a5, a6);
        v22 = v13 + 16;
      }
      else
      {
        if ( (unsigned __int64)(v20 - 11) > 1 )
        {
          if ( v20 != 16 )
          {
LABEL_40:
            v23 = v9 - 512;
            goto LABEL_49;
          }
          LODWORD(v30) = (__int16)v13;
          HIDWORD(v30) = a4[1];
          v6 = TransformPointBetweenCoordinateSpaces(&v31, &v30, a5, a6);
          *a4 = v31;
          a4[1] = WORD2(v31);
LABEL_39:
          v14 = v29;
          goto LABEL_40;
        }
        v21 = TransformPointBetweenCoordinateSpaces(v13 + 4, v13 + 4, a5, a6);
        v22 = v13 + 12;
      }
      v6 = TransformRectBetweenCoordinateSpaces(v22, v22, a5, a6) | v21;
      goto LABEL_39;
    case 0x341u:
      goto LABEL_10;
  }
LABEL_11:
  if ( v9 <= 0x33F )
  {
    if ( v9 <= 0x112 )
    {
      if ( v9 == 274 )
      {
        if ( !a4[1] )
          return v6;
        goto LABEL_54;
      }
      goto LABEL_22;
    }
    if ( v9 > 0x313 )
    {
      if ( v9 == 831 && a6 && v13 )
      {
        v26 = TransformRectBetweenCoordinateSpaces(v13 + 4, v13 + 4, a5, a6);
        v27 = v13 + 44;
        v28 = 6LL;
        v6 = v26;
        do
        {
          v6 |= TransformRectBetweenCoordinateSpaces(v27, v27, a5, a6);
          v27 += 16LL;
          --v28;
        }
        while ( v28 );
      }
      return v6;
    }
    if ( v9 == 787 )
    {
      if ( *(_QWORD *)a4 == 0xFFFFFFFFLL )
        return v6;
LABEL_54:
      LODWORD(v30) = *a4;
      HIDWORD(v30) = (__int16)HIWORD(*(_DWORD *)a4);
      v6 = TransformPointBetweenCoordinateSpaces(&v31, &v30, a5, a6);
      *(_QWORD *)a4 = (WORD2(v31) << 16) | (unsigned __int16)v31;
      return v6;
    }
    v23 = v9 - 512;
LABEL_49:
    switch ( v23 )
    {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 11:
      case 12:
      case 13:
      case 161:
LABEL_55:
        if ( a5 )
        {
          v25 = *(_QWORD *)(a5 + 40);
          LODWORD(v30) = *a4;
          HIDWORD(v30) = (__int16)HIWORD(*(_DWORD *)a4);
          v32 = 0LL;
          v29 = *(__int64 **)(v25 + 104);
          TransformPointBetweenCoordinateSpaces(&v32, &v29, a6, a5);
          LODWORD(v30) = v32 + v30;
          HIDWORD(v30) += HIDWORD(v32);
          v6 = TransformPointBetweenCoordinateSpaces(&v31, &v30, a5, a6);
          *(_QWORD *)a4 = ((unsigned __int16)(WORD2(v31) - WORD2(v29)) << 16) | (unsigned __int16)(v31 - (_WORD)v29);
        }
        break;
      case 10:
      case 14:
      case 65:
      case 66:
      case 67:
      case 69:
      case 70:
      case 71:
      case 73:
      case 74:
      case 78:
      case 79:
      case 81:
      case 82:
      case 160:
      case 242:
      case 243:
      case 244:
        goto LABEL_54;
      case 16:
        if ( v9 != 528 || *(_WORD *)v14 != 582 )
          goto LABEL_54;
        break;
      default:
        return v6;
    }
  }
  return v6;
}
