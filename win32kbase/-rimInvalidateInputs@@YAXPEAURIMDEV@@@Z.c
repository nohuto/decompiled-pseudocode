void __fastcall rimInvalidateInputs(struct RIMDEV *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  v5 = *((_QWORD *)a1 + 42);
  if ( (*((_DWORD *)a1 + 50) & 0x80u) != 0 )
    RIMSuppressAllActiveContacts(*((struct RawInputManagerObject **)a1 + 42), *((_QWORD *)a1 + 59));
  if ( (*((_DWORD *)a1 + 46) & 0x10000) != 0 )
  {
    v6[0] = *(_QWORD *)(v5 + 72);
    v6[1] = *((_QWORD *)a1 + 2);
    SendMessageTo(9LL, (__int64)v6, 16LL, a4);
  }
}
