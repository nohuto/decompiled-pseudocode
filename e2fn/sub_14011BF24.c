void __fastcall sub_14011BF24(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rbx
  struct _LIST_ENTRY *Blink; // rdi
  _QWORD *Pool2; // rax
  __int64 *v9; // rax

  v3 = 0LL;
  LODWORD(Blink) = 64;
  if ( (HIDWORD(DeviceObject->Timer) & 0x80u) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v9 = sub_1400736C0(Pool2, (__int64)L"framework::DeviceContext::RegisterPowerPolicyEventCallbacks", a1);
      if ( v9 )
        v3 = v9;
    }
  }
  sub_1400B6C40((char *)a3, 0, 0x40uLL);
  if ( byte_1400DF688 )
  {
    if ( (unsigned int)dword_1400DF0C0 <= 0x2B )
      LODWORD(Blink) = -1;
    else
      Blink = stru_1400DF410.Queue.ListEntry.Flink[21].Blink;
  }
  *(_DWORD *)a3 = (_DWORD)Blink;
  *(_QWORD *)(a3 + 8) = sub_140116E80;
  *(_QWORD *)(a3 + 32) = sub_140117150;
  *(_QWORD *)(a3 + 16) = sub_140117E00;
  *(_QWORD *)(a3 + 40) = sub_140117F40;
  *(_QWORD *)(a3 + 24) = sub_140118660;
  *(_QWORD *)(a3 + 48) = sub_1401187A0;
  (*(void (__fastcall **)(__int64, __int64, __int64))(qword_1400DF678 + 448))(qword_1400DF6A8, a2, a3);
  if ( v3 )
  {
    sub_140073F78(v3);
    ExFreePool(v3);
  }
}
