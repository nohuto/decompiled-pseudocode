__int64 __fastcall UsbhIncPdoIoCount(__int64 a1, __int64 a2, int a3, int a4)
{
  KSPIN_LOCK *v7; // rbx
  KSPIN_LOCK *v8; // rdi
  KIRQL v9; // al
  KIRQL v10; // si
  __int64 Pool2; // rax
  _DWORD *v13; // rbx
  _QWORD *v14; // rax
  _QWORD *v15; // rcx
  int v16; // [rsp+20h] [rbp-28h]

  v7 = (KSPIN_LOCK *)PdoExt(a1);
  v8 = v7 + 152;
  v9 = KeAcquireSpinLockRaiseToDpc(v7 + 152);
  v10 = v9;
  if ( *((_DWORD *)v7 + 196) == 2 )
  {
    KeReleaseSpinLock(v8, v9);
    return 3221225486LL;
  }
  else
  {
    Pool2 = ExAllocatePool2(64LL, 40LL, 1112885333LL);
    if ( Pool2 )
    {
      *(_QWORD *)(Pool2 + 24) = a2;
      v13 = v7 + 153;
      LOBYTE(v16) = HIBYTE(a3);
      BYTE1(v16) = BYTE2(a3);
      *(_DWORD *)(Pool2 + 32) = a4;
      BYTE2(v16) = BYTE1(a3);
      HIBYTE(v16) = a3;
      *(_DWORD *)Pool2 = v16;
      v14 = (_QWORD *)(Pool2 + 8);
      v15 = (_QWORD *)*((_QWORD *)v13 + 1);
      if ( (_DWORD *)*v15 != v13 )
        __fastfail(3u);
      *v14 = v13;
      v14[1] = v15;
      *v15 = v14;
      *((_QWORD *)v13 + 1) = v14;
    }
    else
    {
      ++*((_DWORD *)v7 + 316);
    }
    KeReleaseSpinLock(v8, v10);
    return 0LL;
  }
}
