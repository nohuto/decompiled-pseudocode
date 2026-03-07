void __fastcall vDrvInvalidateRect(Gre::Base *a1, __int64 a2)
{
  HSEMAPHORE *v3; // rax
  void (__fastcall *v4)(__int64); // rax
  _BYTE v5[104]; // [rsp+90h] [rbp-68h] BYREF
  Gre::Base *v6; // [rsp+100h] [rbp+8h] BYREF

  if ( a1 )
  {
    v6 = a1;
    if ( (*((_DWORD *)a1 + 10) & 1) != 0 )
    {
      v3 = (HSEMAPHORE *)Gre::Base::Globals(a1);
      SEMOBJEX::SEMOBJEX(
        (SEMOBJEX *)v5,
        v3[10],
        1,
        v3[15],
        2u,
        v3[11],
        3u,
        *((HSEMAPHORE *)v6 + 7),
        4u,
        v3[14],
        5u,
        v3[17],
        6u);
      GreAcquireSemaphore(*((_QWORD *)v6 + 6));
      EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", *((_QWORD *)v6 + 6), 11LL);
      PDEVOBJ::vSync(
        (PDEVOBJ *)&v6,
        (struct _SURFOBJ *)((*((_QWORD *)v6 + 316) + 24LL) & -(__int64)(*((_QWORD *)v6 + 316) != 0LL)),
        0LL,
        0);
      v4 = (void (__fastcall *)(__int64))*((_QWORD *)v6 + 415);
      if ( v4 )
        v4(a2);
      EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()");
      GreReleaseSemaphoreInternal(*((_QWORD *)v6 + 6));
      SEMOBJEX::~SEMOBJEX((SEMOBJEX *)v5);
    }
  }
}
