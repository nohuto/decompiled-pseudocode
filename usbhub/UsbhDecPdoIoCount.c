void __fastcall UsbhDecPdoIoCount(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4)
{
  _DWORD *v4; // rbx
  KSPIN_LOCK *v5; // rbp
  _QWORD *v6; // rsi
  KIRQL v7; // r15
  _QWORD *v8; // r8
  _QWORD *v9; // rax
  _QWORD *v10; // rdx
  int v11; // eax

  v4 = PdoExt(BugCheckParameter3);
  v5 = (KSPIN_LOCK *)(v4 + 304);
  v6 = v4 + 306;
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v4 + 152);
  v8 = (_QWORD *)*((_QWORD *)v4 + 153);
  if ( v8 == (_QWORD *)(v4 + 306) || !v8 )
  {
LABEL_12:
    v11 = v4[316];
    if ( !v11 )
    {
      if ( BugCheckParameter3 )
        USBHUB_TriggerCallBacks(BugCheckParameter3);
      KeBugCheckEx(0xFEu, 8uLL, 4uLL, BugCheckParameter3, BugCheckParameter4);
    }
    v4[316] = v11 - 1;
  }
  else
  {
    while ( 1 )
    {
      v9 = (_QWORD *)*v8;
      if ( v8[2] == BugCheckParameter4 )
        break;
      v8 = (_QWORD *)*v8;
      if ( v9 == v6 )
        goto LABEL_12;
    }
    if ( (_QWORD *)v9[1] != v8 || (v10 = (_QWORD *)v8[1], (_QWORD *)*v10 != v8) )
      __fastfail(3u);
    *v10 = v9;
    v9[1] = v10;
    ExFreePoolWithTag(v8 - 1, 0);
  }
  if ( (_QWORD *)*v6 != v6 || v4[316] )
  {
    KeReleaseSpinLock(v5, v7);
  }
  else
  {
    KeReleaseSpinLock(v5, v7);
    KeSetEvent((PRKEVENT)(v4 + 310), 0, 0);
  }
}
