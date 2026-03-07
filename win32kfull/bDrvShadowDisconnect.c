__int64 __fastcall bDrvShadowDisconnect(Gre::Base *a1, __int64 a2, unsigned int a3)
{
  HSEMAPHORE *v5; // rax
  HSEMAPHORE *v6; // rcx
  __int64 (__fastcall *v7)(_QWORD, _QWORD); // rax
  unsigned int v8; // eax
  unsigned int v9; // ebx
  HSEMAPHORE v10; // rdx
  void (__fastcall *v11)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD); // rax
  _BYTE v13[96]; // [rsp+90h] [rbp-9h] BYREF
  HSEMAPHORE *v14; // [rsp+100h] [rbp+67h] BYREF
  HSEMAPHORE v15; // [rsp+118h] [rbp+7Fh] BYREF

  v14 = (HSEMAPHORE *)a1;
  if ( !a1 || (*((_DWORD *)a1 + 10) & 1) == 0 )
    return 0LL;
  v5 = (HSEMAPHORE *)Gre::Base::Globals(a1);
  SEMOBJEX::SEMOBJEX((SEMOBJEX *)v13, v5[10], 1, v5[15], 2u, v5[11], 3u, v14[7], 4u, v5[14], 5u, v5[17], 6u);
  GreAcquireSemaphore(v14[6]);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", v14[6], 11LL);
  PDEVOBJ::vSync(
    (PDEVOBJ *)&v14,
    (struct _SURFOBJ *)((unsigned __int64)(v14[316] + 6) & -(__int64)(v14[316] != 0LL)),
    0LL,
    0);
  v6 = v14;
  v7 = (__int64 (__fastcall *)(_QWORD, _QWORD))v14[414];
  if ( v7 )
  {
    v8 = v7(a2, a3);
    v6 = v14;
    v9 = v8;
  }
  else
  {
    v9 = 1;
  }
  v10 = v6[222];
  v15 = v10;
  if ( v9 == 1 && ((_DWORD)v10[6] & 0x800) != 0 )
  {
    v11 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))v6[355];
    if ( v11 )
      v11(v6[221], &v15, 0LL, 0LL, *((_DWORD *)v10 + 7));
    else
      v9 = 0;
  }
  EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()");
  GreReleaseSemaphoreInternal(v14[6]);
  SEMOBJEX::~SEMOBJEX((SEMOBJEX *)v13);
  return v9;
}
