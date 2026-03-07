void __fastcall UsbhRemovePdoWakeIrp(PIO_CSQ Csq, __int64 Irp)
{
  __int64 v2; // r11
  __int64 v3; // r10
  _QWORD *v4; // r10
  __int64 v5; // rcx
  _QWORD *v6; // rax

  Log((__int64)Csq[-18].ReservePointer, 16, 2004308269, 0LL, Irp);
  v4 = (_QWORD *)(v3 + 168);
  v5 = *v4;
  if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v6 = (_QWORD *)v4[1], (_QWORD *)*v6 != v4) )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  _InterlockedDecrement((volatile signed __int32 *)(v2 + 72));
}
