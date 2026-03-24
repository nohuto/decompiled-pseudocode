/*
 * XREFs of ?DiscardPointerMessage@@YA?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@PEAUtagWND@@PEAUtagMSG@@@Z @ 0x1C01F0884
 * Callers:
 *     ?xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z @ 0x1C01F10EC (-xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z.c)
 * Callees:
 *     DelQEntry @ 0x1C00667AC (DelQEntry.c)
 *     ?RetrieveMessage@Pointer@InputTraceLogging@@SAXPEBUtagQMSG@@_NW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@@Z @ 0x1C01E0B94 (-RetrieveMessage@Pointer@InputTraceLogging@@SAXPEBUtagQMSG@@_NW4tagINPUTMESSAGE_RETRIEVE_RETVAL@.c)
 *     xxxRetrievePointerInputMessage @ 0x1C01F0108 (xxxRetrievePointerInputMessage.c)
 */

__int64 __fastcall DiscardPointerMessage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // r8d
  unsigned int v9; // esi
  _QWORD *v10; // rax
  __int64 v11; // rcx
  int v13; // [rsp+78h] [rbp+7h]
  int v14; // [rsp+88h] [rbp+17h] BYREF
  __int64 v15; // [rsp+90h] [rbp+1Fh] BYREF
  unsigned __int64 v16; // [rsp+98h] [rbp+27h] BYREF
  unsigned __int64 v17; // [rsp+A0h] [rbp+2Fh] BYREF
  struct tagQMSG *v18; // [rsp+A8h] [rbp+37h] BYREF
  unsigned int v19; // [rsp+E0h] [rbp+6Fh] BYREF
  int v20; // [rsp+F0h] [rbp+7Fh] BYREF

  v15 = 0LL;
  v19 = 0;
  v16 = 0LL;
  v6 = *(_DWORD *)(a2 + 24);
  v17 = 0LL;
  v20 = 0;
  v14 = 1;
  v9 = xxxRetrievePointerInputMessage(
         a1,
         a3,
         v6,
         v6,
         0,
         1,
         &v14,
         (struct tagQMSG *)a2,
         &v15,
         &v19,
         &v16,
         &v17,
         &v20,
         &v18,
         v13);
  InputTraceLogging::Pointer::RetrieveMessage(a2, 1u, v9);
  if ( a4 && v9 == 1 )
  {
    v10 = (_QWORD *)v15;
    *(_OWORD *)a4 = 0LL;
    *(_OWORD *)(a4 + 16) = 0LL;
    *(_OWORD *)(a4 + 32) = 0LL;
    if ( v10 )
      v10 = (_QWORD *)*v10;
    *(_QWORD *)a4 = v10;
    *(_DWORD *)(a4 + 8) = v19;
    *(_QWORD *)(a4 + 16) = v16;
    *(_QWORD *)(a4 + 24) = v17;
    *(_DWORD *)(a4 + 32) = *(_DWORD *)(a2 + 48);
    *(_QWORD *)(a4 + 36) = *(_QWORD *)(a2 + 52);
  }
  if ( v9 != 2 )
  {
    v11 = *(_QWORD *)(a1 + 432);
    if ( *(_QWORD *)(v11 + 80) == a2 )
    {
      *(_QWORD *)(v11 + 80) = 0LL;
      v11 = *(_QWORD *)(a1 + 432);
    }
    DelQEntry((unsigned int **)(v11 + 24), (unsigned int *)a2, 1);
  }
  return v9;
}
