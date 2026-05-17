/*
 * XREFs of CsrClientConnectToServer @ 0x180008E20
 * Callers:
 *     <none>
 * Callees:
 *     CsrpClientConnectToServer @ 0x1800088AC (CsrpClientConnectToServer.c)
 *     CsrpConnectToServer @ 0x180008FE4 (CsrpConnectToServer.c)
 *     LdrGetDllHandleEx @ 0x1800168A0 (LdrGetDllHandleEx.c)
 *     LdrGetProcedureAddressForCaller @ 0x18002FDC0 (LdrGetProcedureAddressForCaller.c)
 *     RtlImageNtHeaderEx @ 0x180032AD0 (RtlImageNtHeaderEx.c)
 *     RtlCreateTagHeap @ 0x18007DA40 (RtlCreateTagHeap.c)
 */

__int64 __fastcall CsrClientConnectToServer(void *Src, int a2, void *a3, unsigned int a4, _BYTE *a5)
{
  struct _PEB *v9; // rax
  char v10; // cl
  __int64 result; // rax
  __int64 v12; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v13[4]; // [rsp+38h] [rbp-20h] BYREF
  __int64 retaddr; // [rsp+58h] [rbp+0h]
  __int64 v15; // [rsp+70h] [rbp+18h] BYREF

  LODWORD(v15) = -1073741823;
  if ( a3 && !a4 )
    return 3221225485LL;
  if ( !CsrInitOnceDone )
  {
    v9 = NtCurrentPeb();
    CsrInitOnceDone = 1;
    CsrHeap = (__int64)v9->ProcessHeap;
  }
  if ( CsrServerApiRoutine && !CsrClientProcess )
  {
LABEL_22:
    if ( a5 )
      *a5 = 1;
    return 0LL;
  }
  RtlImageNtHeaderEx(3LL, NtCurrentPeb()->ImageBaseAddress, 0LL, &v12);
  v10 = CsrClientProcess;
  if ( *(_WORD *)(v12 + 92) != 1 )
    v10 = 1;
  CsrClientProcess = v10;
  if ( !v10 )
  {
    result = LdrGetDllHandleEx(1, 0, 0, (unsigned int)&unk_18011D0C0, (__int64)v13);
    if ( (int)result < 0 )
      return result;
    result = LdrGetProcedureAddressForCaller(
               v13[0],
               (unsigned int)&unk_18011D0D0,
               0,
               (unsigned int)&CsrServerApiRoutine,
               0,
               retaddr);
    if ( (int)result < 0 )
      return result;
    CsrPortHeap = (__int64)NtCurrentPeb()->ProcessHeap;
    CsrPortBaseTag = RtlCreateTagHeap((void *)CsrPortHeap);
    goto LABEL_22;
  }
  result = 0LL;
  if ( a3 )
  {
    if ( CsrPortHandle )
      goto LABEL_18;
    result = CsrpConnectToServer(Src, (__int64)&v15);
    if ( (int)result < 0 )
      return result;
    if ( (int)v15 < 0 )
LABEL_18:
      result = CsrpClientConnectToServer(a2, a3, a4);
  }
  if ( a5 )
    *a5 = 0;
  return result;
}
