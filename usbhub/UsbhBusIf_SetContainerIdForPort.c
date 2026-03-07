void __fastcall UsbhBusIf_SetContainerIdForPort(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  __int64 v4; // rdi
  _DWORD *v6; // rax
  __int64 v7; // r11
  __int64 v8; // r10
  void (__fastcall *v9)(_QWORD, _QWORD, __int64); // rax

  v4 = a2;
  v6 = FdoExt(a1);
  Log(a1, 4, 1968390985, (__int64)(v6 + 1056), v4);
  if ( (*(_DWORD *)(v8 + 2560) & 1) != 0 )
  {
    v9 = *(void (__fastcall **)(_QWORD, _QWORD, __int64))(v7 + 280);
    if ( v9 )
      v9(*(_QWORD *)(v7 + 8), (unsigned __int16)v4, a3);
  }
}
