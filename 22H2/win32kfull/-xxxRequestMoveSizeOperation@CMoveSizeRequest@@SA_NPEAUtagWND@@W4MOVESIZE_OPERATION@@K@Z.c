/*
 * XREFs of ?xxxRequestMoveSizeOperation@CMoveSizeRequest@@SA_NPEAUtagWND@@W4MOVESIZE_OPERATION@@K@Z @ 0x1C0241434
 * Callers:
 *     NtUserRequestMoveSizeOperation @ 0x1C0200AF0 (NtUserRequestMoveSizeOperation.c)
 * Callees:
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     ?CreateAndPostRequest@CMoveSizeRequest@@CA_NPEAUtagWND@@W4MOVESIZE_OPERATION@@AEBUtagPOINT@@@Z @ 0x1C024134C (-CreateAndPostRequest@CMoveSizeRequest@@CA_NPEAUtagWND@@W4MOVESIZE_OPERATION@@AEBUtagPOINT@@@Z.c)
 *     ?xxxValidateCapture@CMoveSizeRequest@@CA_NPEAUtagWND@@KPEAUtagPOINT@@@Z @ 0x1C0241740 (-xxxValidateCapture@CMoveSizeRequest@@CA_NPEAUtagWND@@KPEAUtagPOINT@@@Z.c)
 */

char __fastcall CMoveSizeRequest::xxxRequestMoveSizeOperation(struct tagWND *a1, int a2, unsigned int a3)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rcx
  struct tagPOINT v9; // [rsp+48h] [rbp+20h] BYREF

  v9 = 0LL;
  if ( !CMoveSizeRequest::xxxValidateCapture(a1, a3, &v9) )
  {
    v7 = 5LL;
LABEL_3:
    UserSetLastError(v7, v5, v6);
    return 0;
  }
  if ( !CMoveSizeRequest::CreateAndPostRequest((__int64)a1, a2, (__int64 *)&v9) )
  {
    v7 = 8LL;
    goto LABEL_3;
  }
  return 1;
}
