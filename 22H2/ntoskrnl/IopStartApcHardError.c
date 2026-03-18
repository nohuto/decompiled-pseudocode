/*
 * XREFs of IopStartApcHardError @ 0x140946620
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x1402C9950 (IofCompleteRequest.c)
 *     ZwClose @ 0x14041A880 (ZwClose.c)
 *     PsCreateSystemThreadEx @ 0x140772B10 (PsCreateSystemThreadEx.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall IopStartApcHardError(PIRP *P)
{
  HANDLE Handle; // [rsp+68h] [rbp+10h] BYREF

  Handle = 0LL;
  if ( (int)PsCreateSystemThreadEx((__int64)&Handle, 0, 0LL, 0LL, 0LL, (__int64)IopApcHardError, (__int64)P, 0LL, 0LL) >= 0 )
  {
    ZwClose(Handle);
  }
  else
  {
    IofCompleteRequest(P[4], 1);
    ExFreePoolWithTag(P, 0);
  }
}
