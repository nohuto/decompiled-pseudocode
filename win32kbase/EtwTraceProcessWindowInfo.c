/*
 * XREFs of EtwTraceProcessWindowInfo @ 0x1C009B6E0
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0072BF4 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ?EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z @ 0x1C003422C (-EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z.c)
 *     ?EtwTraceProcessWindowInfoSendUnique@@YAXPEBUtagPROCESS_UIFLAG_MAP@@@Z @ 0x1C01615A8 (-EtwTraceProcessWindowInfoSendUnique@@YAXPEBUtagPROCESS_UIFLAG_MAP@@@Z.c)
 */

void __fastcall EtwTraceProcessWindowInfo(__int64 a1)
{
  LONGLONG TimeQuadPart; // rax
  __int64 *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rax
  struct tagTHREADINFO *v6; // r11
  int v7; // ebx
  int ThreadInfoFlags; // eax
  __int64 v9; // r11
  _QWORD v10[2]; // [rsp+20h] [rbp-28h] BYREF
  int v11; // [rsp+30h] [rbp-18h]
  int v12; // [rsp+34h] [rbp-14h]
  int v13; // [rsp+38h] [rbp-10h]
  int v14; // [rsp+3Ch] [rbp-Ch]
  LONGLONG v15; // [rsp+58h] [rbp+10h]

  v14 = 0;
  if ( ((__int64)WPP_MAIN_CB.Reserved & 0x4000000000LL) != 0
    && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
    && (qword_1C02C4050 & 0x4000000000LL) != 0
    && (qword_1C02C4058 & 0x4000000000LL) == qword_1C02C4058
    && (*(_DWORD *)(a1 + 488) & 0x1000000) != 0 )
  {
    TimeQuadPart = PsGetProcessCreateTimeQuadPart(**(PEPROCESS **)(a1 + 424));
    v12 = 0;
    v15 = TimeQuadPart;
    v13 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v3 = *(__int64 **)(a1 + 424);
    LODWORD(TimeQuadPart) = *((_DWORD *)v3 + 14);
    v4 = *v3;
    v11 = TimeQuadPart;
    v10[0] = PsGetProcessStartKey(v4);
    v5 = *(_QWORD *)(a1 + 424);
    v10[1] = v15;
    v6 = *(struct tagTHREADINFO **)(v5 + 320);
    if ( v6 )
    {
      v7 = v12;
      do
      {
        ThreadInfoFlags = EtwpGetThreadInfoFlags(v6);
        v6 = *(struct tagTHREADINFO **)(v9 + 664);
        v7 |= ThreadInfoFlags;
      }
      while ( v6 );
      v12 = v7;
    }
    EtwTraceProcessWindowInfoSendUnique((const struct tagPROCESS_UIFLAG_MAP *)v10);
  }
}
