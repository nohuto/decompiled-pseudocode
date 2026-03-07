void FxInitializeBugCheckDriverInfo()
{
  _QWORD *Pool2; // rax
  unsigned __int64 v1; // rdx
  unsigned __int64 *v2; // r8

  dword_1C009FEB4 = 0;
  dword_1C009FEB0 = 0;
  Src = 0LL;
  CallbackRecord.Entry = 0LL;
  *(_OWORD *)&CallbackRecord.CallbackRoutine = 0LL;
  *(_OWORD *)&CallbackRecord.Checksum = 0LL;
  if ( !unk_1C009FF19 )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 560LL, 1917089862LL);
    Src = Pool2;
    if ( Pool2 )
    {
      dword_1C009FEB4 = 10;
      *Pool2 = 0LL;
      *((_DWORD *)Src + 2) = 1;
      *((_DWORD *)Src + 3) = 33;
      *((_DWORD *)Src + 4) = 0;
      if ( (int)RtlStringCopyWorkerA((char *)Src + 20, v1, v2, "Wdf01000") < 0 )
        *((_BYTE *)Src + 20) = 0;
      ++dword_1C009FEB0;
      CallbackRecord.State = 0;
      KeRegisterBugCheckReasonCallback(
        &CallbackRecord,
        FxpLibraryBugCheckCallback,
        KbCallbackSecondaryDumpData,
        (PUCHAR)"Wdf01000");
    }
  }
}
