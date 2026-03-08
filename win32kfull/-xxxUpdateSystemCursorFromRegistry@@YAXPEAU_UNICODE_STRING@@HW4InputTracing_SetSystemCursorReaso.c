/*
 * XREFs of ?xxxUpdateSystemCursorFromRegistry@@YAXPEAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReason@@@Z @ 0x1C0107CAC
 * Callers:
 *     ?xxxUpdateSystemCursorsFromRegistry@@YAXPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x1C0107C68 (-xxxUpdateSystemCursorsFromRegistry@@YAXPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReaso.c)
 *     ?xxxRestoreMouseCursors@Feedback@@YAXXZ @ 0x1C01AEC54 (-xxxRestoreMouseCursors@Feedback@@YAXXZ.c)
 * Callees:
 *     xxxClientLoadImage @ 0x1C01080C0 (xxxClientLoadImage.c)
 *     ?zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x1C01084CC (-zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCur.c)
 *     RtlInitUnicodeStringOrId @ 0x1C0108BB4 (RtlInitUnicodeStringOrId.c)
 *     xxxClientExpandStringW @ 0x1C0108BE4 (xxxClientExpandStringW.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

__int64 __fastcall xxxUpdateSystemCursorFromRegistry(__int64 a1, unsigned int a2, unsigned int a3)
{
  int v5; // edi
  __int64 v6; // rbx
  __int64 v7; // rdx
  _OWORD *v8; // rcx
  WCHAR *v9; // rax
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int64 v17; // rax
  unsigned int v18; // eax
  int v19; // edx
  PWSTR Buffer; // rcx
  _OWORD *v21; // rax
  __int128 v22; // xmm1
  __int64 result; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v25[2]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE *v26; // [rsp+58h] [rbp-A8h]
  WCHAR SourceString[264]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v28[528]; // [rsp+270h] [rbp+170h] BYREF

  DestinationString = 0LL;
  v5 = 576;
  FastGetProfileStringFromIDW(a1, 1LL, WORD1(gasyscur[69 * (int)a2]), &word_1C03142AC, SourceString, 260, 0);
  if ( SourceString[0] )
  {
    v6 = 4LL;
    v5 = 592;
    v7 = 4LL;
    v8 = v28;
    v9 = SourceString;
    do
    {
      v10 = *((_OWORD *)v9 + 1);
      *v8 = *(_OWORD *)v9;
      v11 = *((_OWORD *)v9 + 2);
      v8[1] = v10;
      v12 = *((_OWORD *)v9 + 3);
      v8[2] = v11;
      v13 = *((_OWORD *)v9 + 4);
      v8[3] = v12;
      v14 = *((_OWORD *)v9 + 5);
      v8[4] = v13;
      v15 = *((_OWORD *)v9 + 6);
      v8[5] = v14;
      v16 = *((_OWORD *)v9 + 7);
      v9 += 64;
      v8[6] = v15;
      v8 += 8;
      *(v8 - 1) = v16;
      --v7;
    }
    while ( v7 );
    *(_QWORD *)v8 = *(_QWORD *)v9;
    v26 = v28;
    v17 = -1LL;
    do
      ++v17;
    while ( SourceString[v17] );
    v18 = 2 * v17;
    if ( v18 >= 0x206 )
      v18 = 518;
    v25[0] = v18;
    v25[1] = 520;
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( (unsigned int)xxxClientExpandStringW((struct _LARGE_STRING *)v25) )
    {
      Buffer = DestinationString.Buffer;
      v5 = 80;
      v21 = v26;
      do
      {
        *(_OWORD *)Buffer = *v21;
        *((_OWORD *)Buffer + 1) = v21[1];
        *((_OWORD *)Buffer + 2) = v21[2];
        *((_OWORD *)Buffer + 3) = v21[3];
        *((_OWORD *)Buffer + 4) = v21[4];
        *((_OWORD *)Buffer + 5) = v21[5];
        *((_OWORD *)Buffer + 6) = v21[6];
        Buffer += 64;
        v22 = v21[7];
        v21 += 8;
        *((_OWORD *)Buffer - 1) = v22;
        --v6;
      }
      while ( v6 );
      *(_QWORD *)Buffer = *(_QWORD *)v21;
      DestinationString.Length = v25[0];
      if ( LOWORD(v25[0]) >= 0x206u )
        DestinationString.Length = 518;
      DestinationString.MaximumLength = 520;
    }
  }
  else
  {
    RtlInitUnicodeStringOrId(&DestinationString, (unsigned __int16)(a2 + 100));
  }
  result = xxxClientLoadImage((unsigned int)&DestinationString, v19, 2, 0, 0, v5);
  if ( result )
    return zzzInternalSetSystemCursor(result, a2, &DestinationString, a3);
  return result;
}
