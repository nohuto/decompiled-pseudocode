void __fastcall TtmpCallSetDisplayState(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 (__fastcall *v3)(_QWORD, _QWORD, _QWORD); // rdi
  int v7; // ebx
  _OWORD v8[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v9; // [rsp+50h] [rbp-18h]

  v3 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(a2 + 56);
  if ( v3 )
  {
    memset(v8, 0, sizeof(v8));
    v9 = 0LL;
    TtmpStartCallout((unsigned int)v8, a1, a2, 4, (__int64)v3, a3);
    v7 = v3(*(_QWORD *)(a2 + 24), a3, *(unsigned int *)(a1 + 120));
    TtmpStopCallout(v8, (unsigned int)v7);
    if ( v7 < 0 )
      TtmiLogError("TtmpCallSetDisplayState", 2440LL, (unsigned int)v7, 0xFFFFFFFFLL);
  }
}
