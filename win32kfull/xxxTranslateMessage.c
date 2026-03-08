/*
 * XREFs of xxxTranslateMessage @ 0x1C00E4F1C
 * Callers:
 *     NtUserTranslateMessage @ 0x1C00E4E70 (NtUserTranslateMessage.c)
 *     xxxOldNextWindow @ 0x1C01CBDC8 (xxxOldNextWindow.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1C01F0DC4 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     xxxHandleMenuMessages @ 0x1C0216988 (xxxHandleMenuMessages.c)
 *     xxxMNLoop @ 0x1C021726C (xxxMNLoop.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C022C64C (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     xxxHelpLoop @ 0x1C023C17C (xxxHelpLoop.c)
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0048220 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ??1CEtwTraceTranslateMessage@@QEAA@XZ @ 0x1C014570E (--1CEtwTraceTranslateMessage@@QEAA@XZ.c)
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
  __int64 v19; // rcx
  unsigned __int64 v20; // rbp
  _WORD *v21; // r15
  __int64 v22; // rcx
  __int64 *v23; // rax
  __int64 v24; // rax
  int v25; // [rsp+40h] [rbp-68h] BYREF
  unsigned int v26; // [rsp+44h] [rbp-64h] BYREF
  _BYTE v27[32]; // [rsp+48h] [rbp-60h] BYREF

  v2 = *(_DWORD *)(a1 + 8);
  v25 = 0;
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
      v26 = v2;
      LOBYTE(v7) = *((_BYTE *)PtiCurrentShared(a1) + 1296);
      EtwTraceBeginTranslateMessage(v7, v2);
      v8 = *(_QWORD *)(gptiCurrent + 608LL);
      if ( v8 && ((v23 = *(__int64 **)(*(_QWORD *)v8 + 16LL)) != 0LL ? (v24 = *v23) : (v24 = 0LL), v24 == *(_QWORD *)a1) )
        v9 = a2 | 1;
      else
        v9 = a2 & 0xFFFFFFFE;
      v10 = *(_QWORD *)(a1 + 24);
      v11 = xxxInternalToUnicode(
              *(unsigned __int16 *)(a1 + 16),
              WORD1(v10),
              *(_QWORD *)(gptiCurrent + 432LL) + 236LL,
              v27,
              16,
              v9,
              &v25,
              0LL);
      v12 = v25 & 0x4000000 | v10;
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
        if ( (v25 & 0x8000) == 0 )
          v17 = v18;
        v20 = ValidateHwnd(*(_QWORD *)a1);
        if ( v20 )
        {
          v21 = v27;
          while ( v11 > 0 )
          {
            _PostTransformableMessageExtended(
              v20,
              v16,
              (unsigned __int16)*v21,
              (__int128 *)(v17 | ((unsigned int)v11 > 1 ? 0x2000000 : 0)),
              0LL,
              1);
            *v21 = 0;
            --v11;
            ++v21;
          }
          LOBYTE(v22) = *((_BYTE *)PtiCurrentShared(v19) + 1296);
          EtwTraceEndTranslateMessage(v22, v2);
          return v6;
        }
      }
      else if ( (v9 & 2) == 0 )
      {
LABEL_7:
        CEtwTraceTranslateMessage::~CEtwTraceTranslateMessage((CEtwTraceTranslateMessage *)&v26);
        return v6;
      }
      v6 = 0;
      goto LABEL_7;
  }
  return 0LL;
}
