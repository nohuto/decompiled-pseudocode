__int64 __fastcall hbmCreateClone(struct SURFACE *a1, int a2, int a3)
{
  int v3; // eax
  __int64 *v5; // rax
  __int64 v6; // rsi
  bool v7; // zf
  struct _ERESOURCE *v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rax
  int v12; // eax
  __int64 v13; // [rsp+60h] [rbp-29h] BYREF
  char v14; // [rsp+68h] [rbp-21h]
  int v15; // [rsp+6Ch] [rbp-1Dh]
  __int64 v16; // [rsp+70h] [rbp-19h] BYREF
  int v17; // [rsp+78h] [rbp-11h] BYREF
  int v18; // [rsp+7Ch] [rbp-Dh]
  int v19; // [rsp+80h] [rbp-9h]
  int v20; // [rsp+84h] [rbp-5h]
  __int64 v21; // [rsp+88h] [rbp-1h]
  int v22; // [rsp+90h] [rbp+7h]
  int v23; // [rsp+94h] [rbp+Bh]
  __int64 v24; // [rsp+98h] [rbp+Fh] BYREF
  __int64 v25; // [rsp+A0h] [rbp+17h] BYREF
  __int64 v26; // [rsp+A8h] [rbp+1Fh] BYREF
  int v27; // [rsp+B0h] [rbp+27h]
  int v28; // [rsp+B4h] [rbp+2Bh]

  v3 = *((_DWORD *)a1 + 24);
  v20 = 0;
  v23 = 0;
  v17 = v3;
  if ( a2 && a3 )
  {
    if ( *((_DWORD *)a1 + 14) < a2 )
      a2 = *((_DWORD *)a1 + 14);
    v12 = *((_DWORD *)a1 + 15);
    v18 = a2;
    if ( v12 < a3 )
      a3 = v12;
    v19 = a3;
  }
  else
  {
    v18 = *((_DWORD *)a1 + 14);
    v19 = *((_DWORD *)a1 + 15);
  }
  v5 = (__int64 *)*((_QWORD *)a1 + 16);
  v21 = 0LL;
  if ( v5 )
    v21 = *v5;
  v6 = 0LL;
  v22 = 1;
  v13 = 0LL;
  v14 = 0;
  v15 = 0;
  if ( (unsigned int)SURFMEM::bCreateDIB(
                       (SURFMEM *)&v13,
                       (struct _DEVBITMAPINFO *)&v17,
                       0LL,
                       0LL,
                       0,
                       0LL,
                       0LL,
                       0,
                       1,
                       0,
                       0) )
  {
    v7 = (*((_DWORD *)a1 + 28) & 0x4000) == 0;
    v8 = 0LL;
    v27 = v18;
    v28 = v19;
    v24 = 0LL;
    v26 = 0LL;
    v16 = 0LL;
    if ( !v7 )
    {
      v25 = *((_QWORD *)a1 + 6);
      v8 = *(struct _ERESOURCE **)(v25 + 48);
      NEEDGRELOCK::vLock((NEEDGRELOCK *)&v16, (struct PDEVOBJ *)&v25);
      EngAcquireSemaphore((HSEMAPHORE)v8);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemDevLock", v8, 11LL);
    }
    if ( !qword_1C02D5800
      || (int)qword_1C02D5800() < 0
      || (v10 = SGDGetSessionState(v9), qword_1C02D5808)
      && (unsigned int)((__int64 (__fastcall *)(__int64, unsigned __int64, _QWORD, __int64, __int64 *, __int64 *))qword_1C02D5808)(
                         (v13 + 24) & -(__int64)(v13 != 0),
                         ((unsigned __int64)a1 + 24) & -(__int64)(a1 != 0LL),
                         0LL,
                         *(_QWORD *)(v10 + 24) + 6896LL,
                         &v26,
                         &v24) )
    {
      v14 |= 1u;
      v6 = *(_QWORD *)(v13 + 32);
    }
    if ( v8 )
    {
      EtwTraceGreLockReleaseSemaphore(L"hsemDevLock", v8);
      ExReleaseResourceAndLeaveCriticalRegion(v8);
      PsLeavePriorityRegion();
      NEEDGRELOCK::vUnlock((NEEDGRELOCK *)&v16);
    }
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)&v16);
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v13);
  return v6;
}
