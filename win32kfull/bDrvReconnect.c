__int64 __fastcall bDrvReconnect(Gre::Base *a1, __int64 a2, __int64 a3, int a4)
{
  HSEMAPHORE *v7; // rax
  HSEMAPHORE *v8; // rcx
  __int64 (__fastcall *v9)(__int64, __int64); // rax
  unsigned int v10; // eax
  unsigned int v11; // ebx
  HSEMAPHORE v12; // rdx
  void (__fastcall *v13)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD); // rax
  HSEMAPHORE v15[2]; // [rsp+98h] [rbp-19h] BYREF
  _BYTE v16[96]; // [rsp+A8h] [rbp-9h] BYREF
  HSEMAPHORE *v17; // [rsp+118h] [rbp+67h] BYREF

  v17 = (HSEMAPHORE *)a1;
  if ( !a1 || (*((_DWORD *)a1 + 10) & 1) == 0 )
    return 0LL;
  v7 = (HSEMAPHORE *)Gre::Base::Globals(a1);
  SEMOBJEX::SEMOBJEX((SEMOBJEX *)v16, v7[10], 1, v7[15], 2u, v7[11], 3u, v17[7], 4u, v7[14], 5u, v7[17], 6u);
  GreAcquireSemaphore(v17[6]);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", v17[6], 11LL);
  PDEVOBJ::vSync(
    (PDEVOBJ *)&v17,
    (struct _SURFOBJ *)((unsigned __int64)(v17[316] + 6) & -(__int64)(v17[316] != 0LL)),
    0LL,
    0);
  v8 = v17;
  v9 = (__int64 (__fastcall *)(__int64, __int64))v17[412];
  if ( v9 )
  {
    v10 = v9(a2, a3);
    v8 = v17;
    v11 = v10;
    if ( v10 )
    {
      *((_DWORD *)v17[220] + 15) = 2;
      v8 = v17;
    }
  }
  else
  {
    v11 = 1;
  }
  if ( a4 == 1 )
  {
    v12 = v8[222];
    v15[0] = v12;
    if ( v11 == 1 && ((_DWORD)v12[6] & 0x800) != 0 )
    {
      v13 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))v8[355];
      if ( v13 )
        v13(v8[221], v15, 0LL, 0LL, *((_DWORD *)v12 + 7));
      else
        v11 = 0;
    }
  }
  EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()");
  GreReleaseSemaphoreInternal(v17[6]);
  SEMOBJEX::~SEMOBJEX((SEMOBJEX *)v16);
  return v11;
}
