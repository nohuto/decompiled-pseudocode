void __fastcall sub_14011BDEC(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v4; // rbx
  _QWORD *Pool2; // rax
  __int64 *v8; // rax
  struct _LIST_ENTRY *Blink; // rdi

  v4 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x80u) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v8 = sub_1400736C0(Pool2, (__int64)L"framework::DeviceContext::RegisterPnpEventCallbacks", a1);
      if ( v8 )
        v4 = v8;
    }
  }
  LODWORD(Blink) = 144;
  sub_1400B6C40((char *)a3, 0, 0x90uLL);
  if ( byte_1400DF688 )
  {
    if ( (unsigned int)dword_1400DF0C0 <= 0x29 )
      LODWORD(Blink) = -1;
    else
      Blink = stru_1400DF410.Queue.ListEntry.Flink[20].Blink;
  }
  *(_DWORD *)a3 = (_DWORD)Blink;
  *(_QWORD *)(a3 + 40) = sub_1401183A0;
  *(_QWORD *)(a3 + 48) = sub_140118510;
  *(_QWORD *)(a3 + 8) = sub_140117590;
  *(_QWORD *)(a3 + 24) = sub_140117CC0;
  *(_QWORD *)(a3 + 104) = sub_1401188D0;
  *(_QWORD *)(a3 + 16) = sub_140117880;
  *(_QWORD *)(a3 + 96) = sub_140118A40;
  (*(void (__fastcall **)(__int64, __int64, __int64))(qword_1400DF678 + 440))(qword_1400DF6A8, a2, a3);
  if ( v4 )
  {
    sub_140073F78(v4);
    ExFreePool(v4);
  }
}
