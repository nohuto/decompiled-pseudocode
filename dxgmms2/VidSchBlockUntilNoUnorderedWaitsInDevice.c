char __fastcall VidSchBlockUntilNoUnorderedWaitsInDevice(__int64 a1)
{
  __int64 v1; // rbx
  int v3; // eax
  __int64 v4; // rbx
  _QWORD v6[21]; // [rsp+20h] [rbp-A8h] BYREF

  v1 = a1 + 1588;
  v3 = *(_DWORD *)(a1 + 1588);
  if ( v3 )
  {
    memset(v6, 0, 0xA0uLL);
    LODWORD(v6[4]) |= 0x10u;
    v6[5] = v1;
    v4 = *(_QWORD *)(a1 + 32);
    LODWORD(v6[2]) = 1;
    VidSchRegisterCompletionEvent(v4, v6);
    if ( *(_DWORD *)(a1 + 1588) )
      VidSchWaitForCompletionEvent(v4, v6, 49LL);
    LOBYTE(v3) = VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)(v4 + 1744), v6, 0LL);
  }
  return v3;
}
