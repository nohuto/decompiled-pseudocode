bool __fastcall DbgkForwardException(__int64 a1, char a2, char a3)
{
  char v6; // r14
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rsi
  void *v9; // rbx
  __int64 v10; // r8
  int v11; // esi
  int v12; // eax
  __int64 v14; // [rsp+20h] [rbp-E0h] BYREF
  _OWORD v15[17]; // [rsp+30h] [rbp-D0h] BYREF

  v14 = 0LL;
  memset(v15, 0, sizeof(v15));
  v6 = 1;
  if ( a3 )
  {
    LODWORD(v14) = 1;
    PsSetProcessFaultInformation((__int64)KeGetCurrentThread()->ApcState.Process, &v14);
  }
  DWORD2(v15[2]) = 0;
  *(_QWORD *)&v15[0] = 0x800D000A8LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  if ( a2 )
  {
    if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 4) != 0 )
      v9 = 0LL;
    else
      v9 = (void *)Process[1].Affinity.StaticBitmap[29];
    v6 = 0;
  }
  else
  {
    v9 = PsCaptureExceptionPort((__int64)CurrentThread->ApcState.Process);
    DWORD1(v15[0]) = 7;
  }
  if ( v9 || !a2 )
  {
    KeCopyExceptionRecord(&v15[3], a1);
    DWORD2(v15[12]) = a3 == 0;
    if ( v6 )
    {
      if ( v9 )
      {
        LOBYTE(v10) = a2;
        v11 = DbgkpSendApiMessageLpc(v15, v9, v10);
        ObfDereferenceObject(v9);
      }
      else
      {
        v11 = 0;
        HIDWORD(v15[2]) = -2147418111;
      }
    }
    else
    {
      v11 = DbgkpSendApiMessage(Process);
    }
    if ( v11 >= 0 )
    {
      v12 = HIDWORD(v15[2]);
      if ( HIDWORD(v15[2]) != -2147418111 )
        return v12 >= 0;
      if ( !a2 )
      {
        v12 = DbgkpSendErrorMessage(a1, 2LL, v15);
        return v12 >= 0;
      }
    }
  }
  return 0;
}
