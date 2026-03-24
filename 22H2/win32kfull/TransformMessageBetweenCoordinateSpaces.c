/*
 * XREFs of TransformMessageBetweenCoordinateSpaces @ 0x1C005BA10
 * Callers:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C00549A0 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     xxxInterSendMsgEx @ 0x1C005A250 (xxxInterSendMsgEx.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C005B960 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C005D000 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     IsPointerParentNotify @ 0x1C006B28C (IsPointerParentNotify.c)
 *     DoesMsgNeedDPITransform @ 0x1C0108EE8 (DoesMsgNeedDPITransform.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 */

__int64 __fastcall TransformMessageBetweenCoordinateSpaces(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int16 *a4,
        __int64 a5,
        __int64 a6)
{
  __int16 *v6; // rbx
  int v7; // r15d
  unsigned int v8; // r12d
  unsigned int CurrentThreadDpiAwarenessContext; // esi
  struct _KTHREAD *CurrentThread; // r15
  unsigned int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  _QWORD *ThreadWin32Thread; // rax
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 CurrentProcessWin32Process; // rax
  int v19; // ecx
  int v20; // eax
  __int64 v22; // rdi
  unsigned int v23; // esi
  int v24; // eax
  __int64 v25; // rbx
  unsigned int v26; // eax
  __int64 v27; // rbx
  __int64 v28; // rdi
  unsigned int v29; // esi
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v32; // rcx
  __int64 CurrentThreadProcess; // rax
  bool v34; // zf
  int v35; // esi
  int v36; // esi
  int v37; // eax
  __int64 v38; // rbx
  _QWORD *v39; // r15
  __int64 v40; // rcx
  int v41; // eax
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // [rsp+28h] [rbp-51h] BYREF
  __int64 v45; // [rsp+30h] [rbp-49h] BYREF
  __int16 *v46; // [rsp+38h] [rbp-41h]
  _QWORD *v47; // [rsp+40h] [rbp-39h]
  int v48; // [rsp+48h] [rbp-31h] BYREF
  int v49; // [rsp+4Ch] [rbp-2Dh]
  int v50; // [rsp+50h] [rbp-29h]
  __int64 v51; // [rsp+58h] [rbp-21h] BYREF
  __int128 v52; // [rsp+60h] [rbp-19h] BYREF
  __int128 v53; // [rsp+70h] [rbp-9h] BYREF

  v6 = a4;
  v7 = a2;
  v46 = a4;
  v8 = a1;
  v47 = a3;
  v50 = a2;
  if ( a5 )
    CurrentThreadDpiAwarenessContext = *(_DWORD *)(*(_QWORD *)(a5 + 40) + 288LL);
  else
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(a1);
  if ( a6 )
  {
    v11 = *(_DWORD *)(*(_QWORD *)(a6 + 40) + 288LL);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v11 = 18;
    if ( !(unsigned __int8)KeIsAttachedProcess(a1)
      || (CurrentProcess = PsGetCurrentProcess(v13, v12, v14),
          ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
          CurrentThreadProcess = PsGetCurrentThreadProcess(v32),
          v34 = ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess),
          v6 = v46,
          v34) )
    {
      ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
      {
        v17 = *ThreadWin32Thread;
        if ( !*ThreadWin32Thread )
          goto LABEL_13;
        if ( *(_QWORD *)(v17 + 360) )
          CaptureAndValidateUserModeDpiAwarenessContext(*ThreadWin32Thread);
        if ( *(_DWORD *)(v17 + 340) )
        {
          v11 = *(_DWORD *)(v17 + 340);
        }
        else
        {
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v16);
          if ( CurrentProcessWin32Process )
            v11 = *(_DWORD *)(CurrentProcessWin32Process + 280);
        }
        if ( (*(_DWORD *)(v17 + 328) & 4) != 0 && (v11 & 0xF) == 2 )
        {
          v6 = v46;
          if ( (v11 & 0xF0) == 0x20 )
            v11 |= 0x20000000u;
        }
        else
        {
LABEL_13:
          v6 = v46;
        }
      }
    }
    v7 = v50;
  }
  if ( (((unsigned __int16)(CurrentThreadDpiAwarenessContext >> 8) ^ (unsigned __int16)(v11 >> 8)) & 0x1FF) == 0 )
  {
    v19 = (CurrentThreadDpiAwarenessContext & 0xF) == 2 && (CurrentThreadDpiAwarenessContext & 0x20000000) != 0;
    v20 = (v11 & 0xF) == 2 && (v11 & 0x20000000) != 0;
    if ( v19 == v20 )
      return 0LL;
  }
  v22 = *(_QWORD *)v6;
  if ( !(unsigned int)DoesMsgNeedDPITransform(v8, a2, *(_QWORD *)v6) )
    return 0LL;
  v44 = 0LL;
  v45 = 0LL;
  v53 = 0LL;
  v52 = 0LL;
  if ( !v7 || v8 < 0x220 && v8 >= 0x84 )
    goto LABEL_30;
  if ( v8 == 834 )
    goto LABEL_37;
  if ( v8 > 0x220 )
  {
    if ( v8 == 833 )
    {
LABEL_37:
      v23 = 1;
      goto LABEL_31;
    }
    if ( v8 != 643 )
    {
LABEL_30:
      v23 = 0;
      goto LABEL_31;
    }
    v39 = v47;
    v40 = *v47;
    if ( (unsigned __int64)(*v47 - 7LL) <= 1 )
    {
      v41 = TransformPointBetweenCoordinateSpaces(v22 + 8, v22 + 8, a5, a6);
      v42 = v22 + 16;
    }
    else
    {
      if ( (unsigned __int64)(v40 - 11) > 1 )
      {
        if ( v40 == 16 )
        {
          LODWORD(v44) = (__int16)v22;
          HIDWORD(v44) = v6[1];
          v23 = TransformPointBetweenCoordinateSpaces(&v45, &v44, a5, a6);
          *v6 = v45;
          v6[1] = WORD2(v45);
        }
        else
        {
          v23 = 0;
        }
LABEL_70:
        switch ( v8 )
        {
          case 0x20Au:
          case 0x20Eu:
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
          case 0x2A0u:
          case 0x2F2u:
          case 0x2F3u:
          case 0x2F4u:
            goto LABEL_32;
          case 0x20Bu:
          case 0x20Cu:
          case 0x20Du:
          case 0x2A1u:
            goto LABEL_95;
          case 0x210u:
            goto LABEL_89;
          default:
            return v23;
        }
        return v23;
      }
      v41 = TransformPointBetweenCoordinateSpaces(v22 + 4, v22 + 4, a5, a6);
      v42 = v22 + 12;
    }
    v23 = TransformRectBetweenCoordinateSpaces(v42, v42, a5, a6) | v41;
    goto LABEL_70;
  }
  if ( v8 == 544 )
  {
    *(_QWORD *)&v53 = *(_QWORD *)(v22 + 24);
    DWORD2(v53) = *(_DWORD *)(v22 + 32) + *(_DWORD *)(v22 + 24);
    HIDWORD(v53) = *(_DWORD *)(v22 + 36) + *(_DWORD *)(v22 + 28);
    v23 = TransformRectBetweenCoordinateSpaces(&v52, &v53, a5, a6);
    *(_QWORD *)(v22 + 24) = v52;
    *(_DWORD *)(v22 + 32) = DWORD2(v52) - v52;
    *(_DWORD *)(v22 + 36) = HIDWORD(v52) - DWORD1(v52);
LABEL_69:
    v39 = v47;
    goto LABEL_70;
  }
  if ( v8 < 0x46 )
    goto LABEL_30;
  if ( v8 > 0x47 )
  {
    if ( v8 == 83 )
      return (unsigned int)TransformPointBetweenCoordinateSpaces(v22 + 32, v22 + 32, a5, a6);
    if ( v8 == 131 )
    {
      if ( *v47 )
      {
        v35 = TransformRectBetweenCoordinateSpaces(v22, v22, a5, a6);
        v36 = TransformRectBetweenCoordinateSpaces(v22 + 16, v22 + 16, a5, a6) | v35;
        v37 = TransformRectBetweenCoordinateSpaces(v22 + 32, v22 + 32, a5, a6);
        v38 = *(_QWORD *)(v22 + 48);
        *(_QWORD *)&v53 = *(_QWORD *)(v38 + 16);
        DWORD2(v53) = *(_DWORD *)(v38 + 24) + *(_DWORD *)(v38 + 16);
        HIDWORD(v53) = *(_DWORD *)(v38 + 28) + *(_DWORD *)(v38 + 20);
        v23 = TransformRectBetweenCoordinateSpaces(&v52, &v53, a5, a6) | v37 | v36;
        *(_QWORD *)(v38 + 16) = v52;
        *(_DWORD *)(v38 + 24) = DWORD2(v52) - v52;
        *(_DWORD *)(v38 + 28) = HIDWORD(v52) - DWORD1(v52);
      }
      else
      {
        return (unsigned int)TransformRectBetweenCoordinateSpaces(v22, v22, a5, a6);
      }
      return v23;
    }
    goto LABEL_30;
  }
  *(_QWORD *)&v53 = *(_QWORD *)(v22 + 16);
  DWORD2(v53) = *(_DWORD *)(v22 + 24) + *(_DWORD *)(v22 + 16);
  HIDWORD(v53) = *(_DWORD *)(v22 + 28) + *(_DWORD *)(v22 + 20);
  v23 = TransformRectBetweenCoordinateSpaces(&v52, &v53, a5, a6);
  *(_QWORD *)(v22 + 16) = v52;
  *(_DWORD *)(v22 + 24) = DWORD2(v52) - v52;
  *(_DWORD *)(v22 + 28) = HIDWORD(v52) - DWORD1(v52);
LABEL_31:
  if ( v8 == 132 )
    goto LABEL_32;
  if ( v8 > 0x33F )
    return v23;
  if ( v8 <= 0x209 )
  {
    if ( v8 < 0x200 )
    {
      if ( v8 > 0xA9 )
      {
        if ( v8 < 0xAB )
          return v23;
        if ( v8 > 0xAD )
        {
          if ( v8 != 274 || !v6[1] )
            return v23;
          v39 = v47;
LABEL_89:
          if ( (unsigned int)IsPointerParentNotify(v8, *v39) )
            return v23;
        }
        goto LABEL_32;
      }
      if ( v8 >= 0xA0 )
      {
LABEL_32:
        LODWORD(v44) = *v6;
        HIDWORD(v44) = (__int16)HIWORD(*(_DWORD *)v6);
        v23 = TransformPointBetweenCoordinateSpaces(&v45, &v44, a5, a6);
        v24 = (WORD2(v45) << 16) | (unsigned __int16)v45;
LABEL_33:
        *(_QWORD *)v6 = v24;
        return v23;
      }
      if ( v8 != 3 )
      {
        if ( v8 != 123 )
          return v23;
        goto LABEL_32;
      }
    }
LABEL_95:
    if ( !a5 )
      return v23;
    v43 = *(_QWORD *)(a5 + 40);
    LODWORD(v44) = *v6;
    HIDWORD(v44) = (__int16)HIWORD(*(_DWORD *)v6);
    v51 = 0LL;
    v48 = *(_DWORD *)(v43 + 104);
    v49 = *(_DWORD *)(v43 + 108);
    TransformPointBetweenCoordinateSpaces(&v51, &v48, a6, a5);
    LODWORD(v44) = v51 + v44;
    HIDWORD(v44) += HIDWORD(v51);
    v23 = TransformPointBetweenCoordinateSpaces(&v45, &v44, a5, a6);
    v24 = ((unsigned __int16)(WORD2(v45) - v49) << 16) | (unsigned __int16)(v45 - v48);
    goto LABEL_33;
  }
  if ( v8 <= 0x313 )
  {
    if ( v8 == 787 )
    {
      if ( *(_QWORD *)v6 == 0xFFFFFFFFLL )
        return v23;
      goto LABEL_32;
    }
    goto LABEL_69;
  }
  if ( v8 != 831 )
    return v23;
  if ( !a6 )
    return v23;
  v25 = *(_QWORD *)v6;
  if ( !v25 )
    return v23;
  v26 = TransformRectBetweenCoordinateSpaces(v25 + 4, v25 + 4, a5, a6);
  v27 = v25 + 44;
  v28 = 6LL;
  v29 = v26;
  do
  {
    v29 |= TransformRectBetweenCoordinateSpaces(v27, v27, a5, a6);
    v27 += 16LL;
    --v28;
  }
  while ( v28 );
  return v29;
}
