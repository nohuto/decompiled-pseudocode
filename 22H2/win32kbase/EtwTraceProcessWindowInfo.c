/*
 * XREFs of EtwTraceProcessWindowInfo @ 0x1C007B110
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0040420 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ?EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z @ 0x1C0056548 (-EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z.c)
 *     ?EtwTraceProcessWindowInfoSendUnique@@YAXPEBUtagPROCESS_UIFLAG_MAP@@@Z @ 0x1C012150C (-EtwTraceProcessWindowInfoSendUnique@@YAXPEBUtagPROCESS_UIFLAG_MAP@@@Z.c)
 */

void __fastcall EtwTraceProcessWindowInfo(__int64 a1)
{
  LONGLONG TimeQuadPart; // rax
  __int64 *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rbx
  int v7; // edi
  int ThreadInfoFlags; // eax
  _QWORD v9[2]; // [rsp+20h] [rbp-28h] BYREF
  int v10; // [rsp+30h] [rbp-18h]
  int v11; // [rsp+34h] [rbp-14h]
  int v12; // [rsp+38h] [rbp-10h]
  int v13; // [rsp+3Ch] [rbp-Ch]
  LONGLONG v14; // [rsp+58h] [rbp+10h]

  v13 = 0;
  if ( (W32kEtwEnabledKeyword & 0x4000000000LL) != 0
    && (unsigned __int8)(byte_1C0249748 - 1) > 2u
    && (qword_1C0249730 & 0x4000000000LL) != 0
    && (qword_1C0249738 & 0x4000000000LL) == qword_1C0249738
    && (*(_DWORD *)(a1 + 488) & 0x1000000) != 0 )
  {
    TimeQuadPart = PsGetProcessCreateTimeQuadPart(**(PEPROCESS **)(a1 + 424));
    v11 = 0;
    v14 = TimeQuadPart;
    v12 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v3 = *(__int64 **)(a1 + 424);
    LODWORD(TimeQuadPart) = *((_DWORD *)v3 + 14);
    v4 = *v3;
    v10 = TimeQuadPart;
    v9[0] = PsGetProcessStartKey(v4);
    v5 = *(_QWORD *)(a1 + 424);
    v9[1] = v14;
    v6 = *(_QWORD *)(v5 + 320);
    if ( v6 )
    {
      v7 = v11;
      do
      {
        ThreadInfoFlags = EtwpGetThreadInfoFlags((struct tagTHREADINFO *const)v6);
        v6 = *(_QWORD *)(v6 + 664);
        v7 |= ThreadInfoFlags;
      }
      while ( v6 );
      v11 = v7;
    }
    EtwTraceProcessWindowInfoSendUnique((const struct tagPROCESS_UIFLAG_MAP *)v9);
  }
}
