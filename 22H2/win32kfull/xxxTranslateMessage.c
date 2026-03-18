/*
 * XREFs of xxxTranslateMessage @ 0x1C00ACC1C
 * Callers:
 *     NtUserTranslateMessage @ 0x1C00ACB70 (NtUserTranslateMessage.c)
 *     xxxOldNextWindow @ 0x1C01CACD8 (xxxOldNextWindow.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1C01EFC00 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     xxxHandleMenuMessages @ 0x1C0213DC8 (xxxHandleMenuMessages.c)
 *     xxxMNLoop @ 0x1C02146AC (xxxMNLoop.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C022992C (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     xxxHelpLoop @ 0x1C0239514 (xxxHelpLoop.c)
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C011E780 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??1CEtwTraceTranslateMessage@@QEAA@XZ @ 0x1C0152430 (--1CEtwTraceTranslateMessage@@QEAA@XZ.c)
 */

__int64 __fastcall xxxTranslateMessage(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  int v5; // r12d
  unsigned int v6; // esi
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // ebp
  unsigned __int64 v10; // r14
  int v11; // edi
  __int64 v12; // r14
  int v14; // r12d
  int v15; // eax
  unsigned int v16; // r12d
  __int64 v17; // r14
  __int64 v18; // rax
  struct tagWND *v19; // rbp
  _WORD *v20; // r15
  __int64 v21; // rcx
  __int64 *v22; // rax
  __int64 v23; // rax
  int v24; // [rsp+40h] [rbp-68h] BYREF
  unsigned int v25; // [rsp+44h] [rbp-64h] BYREF
  _BYTE v26[32]; // [rsp+48h] [rbp-60h] BYREF

  v2 = *(_DWORD *)(a1 + 8);
  v24 = 0;
  v5 = 0;
  v6 = 1;
  switch ( v2 )
  {
    case 0x100u:
    case 0x101u:
      goto LABEL_3;
    case 0x104u:
      v5 = 1;
      goto LABEL_3;
    case 0x105u:
LABEL_3:
      v25 = v2;
      LOBYTE(v7) = *((_BYTE *)PtiCurrentShared() + 1296);
      EtwTraceBeginTranslateMessage(v7, v2);
      v8 = *(_QWORD *)(gptiCurrent + 608LL);
      if ( v8 && ((v22 = *(__int64 **)(*(_QWORD *)v8 + 16LL)) != 0LL ? (v23 = *v22) : (v23 = 0LL), v23 == *(_QWORD *)a1) )
        v9 = a2 | 1;
      else
        v9 = a2 & 0xFFFFFFFE;
      v10 = *(_QWORD *)(a1 + 24);
      v11 = xxxInternalToUnicode(
              *(unsigned __int16 *)(a1 + 16),
              WORD1(v10),
              *(_QWORD *)(gptiCurrent + 432LL) + 236LL,
              v26,
              16,
              v9,
              &v24,
              0LL);
      v12 = v24 & 0x4000000 | v10;
      if ( v11 )
      {
        v14 = 4 * v5;
        if ( v11 <= 0 )
        {
          v11 = -v11;
          v15 = 259;
        }
        else
        {
          v15 = 258;
        }
        v16 = v15 + v14;
        v18 = v12;
        v17 = v12 | 0x80000000LL;
        LODWORD(v18) = v18 & 0x7FFFFFFF;
        if ( (v24 & 0x8000) == 0 )
          v17 = v18;
        v19 = (struct tagWND *)ValidateHwnd(*(_QWORD *)a1);
        if ( v19 )
        {
          v20 = v26;
          while ( v11 > 0 )
          {
            _PostTransformableMessageExtended(
              v19,
              v16,
              (unsigned __int16)*v20,
              v17 | ((unsigned int)v11 > 1 ? 0x2000000 : 0),
              0LL,
              1);
            *v20 = 0;
            --v11;
            ++v20;
          }
          LOBYTE(v21) = *((_BYTE *)PtiCurrentShared() + 1296);
          EtwTraceEndTranslateMessage(v21, v2);
          return v6;
        }
      }
      else if ( (v9 & 2) == 0 )
      {
LABEL_7:
        CEtwTraceTranslateMessage::~CEtwTraceTranslateMessage((CEtwTraceTranslateMessage *)&v25);
        return v6;
      }
      v6 = 0;
      goto LABEL_7;
  }
  return 0LL;
}
