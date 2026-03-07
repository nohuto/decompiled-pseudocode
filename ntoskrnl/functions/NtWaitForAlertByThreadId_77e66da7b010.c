__int64 __fastcall NtWaitForAlertByThreadId(void *a1, __int64 *a2)
{
  char PreviousMode; // cl
  __int64 v5; // rax
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( a2 && PreviousMode )
  {
    v5 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v5 = (__int64)a2;
    v6 = *(_QWORD *)v5;
    a2 = &v6;
  }
  return KeWaitForAlertByThreadId(PreviousMode, a2, a1);
}
