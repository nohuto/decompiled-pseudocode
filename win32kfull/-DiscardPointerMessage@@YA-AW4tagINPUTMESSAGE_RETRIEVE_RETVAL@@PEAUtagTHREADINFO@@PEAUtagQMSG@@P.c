/*
 * XREFs of ?DiscardPointerMessage@@YA?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@PEAUtagWND@@PEAUtagMSG@@@Z @ 0x1C01C6A28
 * Callers:
 *     ?xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z @ 0x1C01C7270 (-xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z.c)
 * Callees:
 *     DelQEntry @ 0x1C0038CDC (DelQEntry.c)
 *     ?RetrieveMessage@Pointer@InputTraceLogging@@SAXPEBUtagQMSG@@_NW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@@Z @ 0x1C0143BA8 (-RetrieveMessage@Pointer@InputTraceLogging@@SAXPEBUtagQMSG@@_NW4tagINPUTMESSAGE_RETRIEVE_RETVAL@.c)
 *     xxxRetrievePointerInputMessage @ 0x1C01C61D4 (xxxRetrievePointerInputMessage.c)
 */

__int64 __fastcall DiscardPointerMessage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // r8d
  unsigned int v9; // esi
  struct tagWND *v10; // rax
  __int64 v11; // rax
  int v13; // [rsp+78h] [rbp+17h] BYREF
  struct tagWND *v14; // [rsp+80h] [rbp+1Fh] BYREF
  unsigned __int64 v15; // [rsp+88h] [rbp+27h] BYREF
  unsigned __int64 v16; // [rsp+90h] [rbp+2Fh] BYREF
  struct tagQMSG *v17; // [rsp+98h] [rbp+37h] BYREF
  unsigned int v18; // [rsp+D0h] [rbp+6Fh] BYREF
  int v19; // [rsp+E0h] [rbp+7Fh] BYREF

  v14 = 0LL;
  v18 = 0;
  v15 = 0LL;
  v6 = *(_DWORD *)(a2 + 24);
  v16 = 0LL;
  v19 = 0;
  v13 = 1;
  v9 = xxxRetrievePointerInputMessage(
         a1,
         a3,
         v6,
         v6,
         0,
         1,
         &v13,
         (struct tagQMSG *)a2,
         &v14,
         &v18,
         &v15,
         &v16,
         &v19,
         &v17);
  InputTraceLogging::Pointer::RetrieveMessage();
  if ( a4 && v9 == 1 )
  {
    v10 = v14;
    *(_OWORD *)a4 = 0LL;
    *(_OWORD *)(a4 + 16) = 0LL;
    *(_OWORD *)(a4 + 32) = 0LL;
    if ( v10 )
      v10 = *(struct tagWND **)v10;
    *(_QWORD *)a4 = v10;
    *(_DWORD *)(a4 + 8) = v18;
    *(_QWORD *)(a4 + 16) = v15;
    *(_QWORD *)(a4 + 24) = v16;
    *(_DWORD *)(a4 + 32) = *(_DWORD *)(a2 + 48);
    *(_QWORD *)(a4 + 36) = *(_QWORD *)(a2 + 52);
  }
  else if ( v9 == 2 )
  {
    return v9;
  }
  v11 = *(_QWORD *)(a1 + 432);
  if ( *(_QWORD *)(v11 + 88) == a2 )
    *(_QWORD *)(v11 + 88) = 0LL;
  DelQEntry(*(_QWORD *)(a1 + 432) + 24LL, a2, 1);
  return v9;
}
