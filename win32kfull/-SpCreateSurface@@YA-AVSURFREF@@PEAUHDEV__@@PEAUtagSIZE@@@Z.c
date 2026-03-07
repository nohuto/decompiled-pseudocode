SURFACE **__fastcall SpCreateSurface(SURFACE **a1, HDEV a2, unsigned int *a3)
{
  Gre::Base *v6; // rcx
  Gre::Base *v7; // rcx
  unsigned int v8; // eax
  SURFACE *v9; // rcx
  __int64 v11; // r8
  SURFACE *v12; // rbx
  SURFACE *v13; // [rsp+80h] [rbp-49h] BYREF
  char v14; // [rsp+88h] [rbp-41h]
  int v15; // [rsp+8Ch] [rbp-3Dh]
  _DWORD v16[4]; // [rsp+90h] [rbp-39h] BYREF
  __int64 v17; // [rsp+A0h] [rbp-29h]
  __int64 v18; // [rsp+A8h] [rbp-21h]
  __int128 v19; // [rsp+B0h] [rbp-19h] BYREF
  HDEV v20; // [rsp+C0h] [rbp-9h]
  int v21; // [rsp+C8h] [rbp-1h]
  __int64 v22; // [rsp+D0h] [rbp+7h]
  __int64 v23; // [rsp+D8h] [rbp+Fh]
  __int16 v24; // [rsp+E0h] [rbp+17h]
  __int64 v25; // [rsp+E8h] [rbp+1Fh]
  __int64 v26; // [rsp+F0h] [rbp+27h]
  SURFACE *v27; // [rsp+138h] [rbp+6Fh] BYREF

  v27 = (SURFACE *)a2;
  if ( *(_DWORD *)(*(_QWORD *)(SGDGetSessionState(a1) + 32) + 8696LL) && (unsigned int)GreDwmUseDeviceBitmaps(v6)
    || (unsigned int)bRemoteDriverNeedsDeviceBitmaps((struct PDEVOBJ *)&v27) )
  {
    v23 = 0LL;
    v19 = 0LL;
    v24 = 256;
    v26 = 0LL;
    v25 = 0LL;
    v22 = 0LL;
    v21 = 1;
    if ( ((_DWORD)a2[10] & 1) != 0 )
    {
      Gre::Base::Globals(v7);
      *(_QWORD *)&v19 = *((_QWORD *)a2 + 6);
      v20 = a2;
      GreAcquireSemaphore(v19);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v19, 11LL);
    }
    CreateCompatibleSurface(&v27, a2, 6u, 0LL, *a3, a3[1], 1, 0, 1, 1, 0, 0, 0, 0, 0, 0LL);
    v12 = v27;
    if ( v27 )
    {
      LOBYTE(v11) = 5;
      HmgSetOwner(*((_QWORD *)v27 + 4), 0LL, v11);
      GreMarkUndeletableBitmap(*((_QWORD *)v12 + 4));
      *a1 = v12;
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&v19);
      return a1;
    }
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&v19);
  }
  v16[1] = *a3;
  v8 = a3[1];
  v13 = 0LL;
  v14 = 0;
  v15 = 0;
  v16[3] = 0;
  v18 = 2049LL;
  v16[0] = 6;
  v16[2] = v8;
  v17 = 0LL;
  if ( SURFMEM::bCreateDIB((SURFMEM *)&v13, (struct _DEVBITMAPINFO *)v16, 0LL, 0LL, 0, 0LL, 0LL, 1, 1, 0, 0) )
  {
    SURFACE::hdev(v13, a2);
    v14 |= 1u;
    *((_DWORD *)v13 + 28) |= 0x800u;
    EtwPhysicalSurfCreateEvent(*((_QWORD *)v13 + 4), 0LL, 0LL);
    v9 = v13;
    if ( v13 )
    {
      *a1 = v13;
      INC_SHARE_REF_CNT(v9);
    }
  }
  else
  {
    *a1 = 0LL;
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v13);
  return a1;
}
