void __fastcall TtmpWriteDisplayRequiredPowerRequestUpdatedEvent(__int64 a1, __int64 a2, __int64 a3)
{
  bool v6; // zf
  int v7; // eax
  int v8; // eax
  _QWORD v9[68]; // [rsp+20h] [rbp-228h] BYREF

  memset(v9, 0, sizeof(v9));
  v6 = *(_DWORD *)(a3 + 40) == 0;
  LODWORD(v9[1]) = *(_DWORD *)(a3 + 16);
  v7 = *(_DWORD *)(a3 + 20);
  LOBYTE(v9[3]) = !v6;
  HIDWORD(v9[1]) = v7;
  v9[2] = *(_QWORD *)(a3 + 32);
  LODWORD(v9[0]) = 6;
  if ( a2 )
  {
    v8 = TtmiWriteEventToSingleQueue(a2, v9);
    if ( v8 < 0 )
      TtmiLogError("TtmpWriteDisplayRequiredPowerRequestUpdatedEvent", 555LL, (unsigned int)v8, 0xFFFFFFFFLL);
  }
  else
  {
    TtmiWriteEventToAllQueues(a1, (__int64)v9);
  }
}
