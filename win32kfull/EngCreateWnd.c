WNDOBJ *__stdcall EngCreateWnd(SURFOBJ *pso, HWND hwnd, WNDOBJCHANGEPROC pfn, FLONG fl, INT iPixelFormat)
{
  __int64 v5; // rbx
  PVOID *p_pvScan0; // rax
  __int64 v7; // rcx
  __int64 v8; // r14
  HWND v11; // r12
  Gre::Base *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r13
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 i; // rcx
  __int64 v18; // rax
  const struct _RECTL *v19; // r12
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 Semaphore; // rax
  FLONG v25; // r15d
  __int64 v26; // rax
  REGION *v28; // [rsp+20h] [rbp-A1h] BYREF
  REGION *v29; // [rsp+28h] [rbp-99h] BYREF
  __int64 v30; // [rsp+30h] [rbp-91h] BYREF
  HWND v31; // [rsp+38h] [rbp-89h]
  _QWORD v32[2]; // [rsp+40h] [rbp-81h] BYREF
  int v33; // [rsp+50h] [rbp-71h] BYREF
  __int64 v34; // [rsp+58h] [rbp-69h]
  __int128 v35; // [rsp+60h] [rbp-61h]
  __int128 v36; // [rsp+70h] [rbp-51h]
  __int128 v37; // [rsp+80h] [rbp-41h]
  __int64 v38; // [rsp+90h] [rbp-31h] BYREF
  struct _RECTL v39; // [rsp+A0h] [rbp-21h] BYREF
  struct _RECTL v40; // [rsp+B0h] [rbp-11h] BYREF
  struct _RECTL v41; // [rsp+C0h] [rbp-1h] BYREF

  v5 = 0LL;
  v31 = hwnd;
  p_pvScan0 = &pso[-1].pvScan0;
  v33 = 0;
  v34 = 0LL;
  v7 = -(__int64)pso;
  v35 = 0LL;
  v37 = 0LL;
  v36 = 0LL;
  v8 = (unsigned __int64)p_pvScan0 & -(__int64)(v7 != 0);
  v11 = hwnd;
  if ( !(unsigned int)UserIsUserCritSecIn(v7) || (fl & 0xF7FFFC00) != 0 )
  {
    WO_CLEANUP::~WO_CLEANUP((WO_CLEANUP *)&v33);
    return 0LL;
  }
  v32[0] = *((_QWORD *)Gre::Base::Globals(v12) + 7);
  GreAcquireSemaphore(v32[0]);
  v14 = *(_QWORD *)(SGDGetSessionState(v13) + 32);
  v15 = *(_QWORD *)(v14 + 23664);
  v16 = v15;
  if ( !v15 )
    goto LABEL_13;
  while ( 2 )
  {
    for ( i = *(_QWORD *)(v16 + 24); i; i = *(_QWORD *)(i + 160) )
    {
      if ( *(HWND *)(i + 176) == v11 )
      {
        if ( *(WNDOBJCHANGEPROC *)(v16 + 40) == pfn && *(_DWORD *)(i + 188) == iPixelFormat )
          v5 = -1LL;
        goto LABEL_28;
      }
    }
    v16 = *(_QWORD *)(v16 + 8);
    if ( v16 )
      continue;
    break;
  }
  do
  {
    if ( *(_QWORD *)(v15 + 32) == v8 && *(WNDOBJCHANGEPROC *)(v15 + 40) == pfn )
      break;
    v15 = *(_QWORD *)(v15 + 8);
  }
  while ( v15 );
  if ( !v15 )
  {
LABEL_13:
    v18 = Win32AllocPoolZInit(72LL, 1684961095LL);
    v15 = v18;
    if ( !v18 )
    {
LABEL_28:
      SEMOBJ::vUnlock((SEMOBJ *)v32);
      WO_CLEANUP::~WO_CLEANUP((WO_CLEANUP *)&v33);
      return (WNDOBJ *)v5;
    }
    v34 = v18;
    v19 = (const struct _RECTL *)(v18 + 52);
    *(_DWORD *)(v18 + 52) = 0;
    *(_DWORD *)v18 = 1128354388;
    *(_QWORD *)(v18 + 16) = 0LL;
    *(_QWORD *)(v18 + 24) = 0LL;
    *(_QWORD *)(v18 + 32) = v8;
    *(_QWORD *)(v18 + 40) = pfn;
    *(_DWORD *)(v18 + 48) = fl;
    *(_DWORD *)(v18 + 56) = 0;
    *(_DWORD *)(v18 + 60) = *(_DWORD *)(v8 + 56);
    *(_DWORD *)(v18 + 64) = *(_DWORD *)(v8 + 60);
    if ( (fl & 0xC) != 0 )
    {
      v20 = Win32AllocPoolZInit(208LL, 1684961095LL);
      v21 = v20;
      if ( !v20 )
        goto LABEL_28;
      *(_QWORD *)&v35 = v20;
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v28);
      if ( !v28 )
        goto LABEL_28;
      *(_QWORD *)&v36 = v28;
      RGNOBJ::vSet((RGNOBJ *)&v28, v19);
      *(_QWORD *)(v21 + 168) = v15;
      REGION::vStamp(v28);
      v39 = *v19;
      EWNDOBJ::vSetClip(v21, v28, &v39);
      *(_QWORD *)(v21 + 24) = 0LL;
      *(_DWORD *)(v21 + 152) = 1145984837;
      *(_QWORD *)(v21 + 160) = 0LL;
      *(_QWORD *)(v21 + 176) = 0LL;
      *(_DWORD *)(v21 + 188) = 0;
      *(_QWORD *)(v21 + 48) = (v8 + 24) & -(__int64)(v8 != 0);
      *(_DWORD *)(v21 + 184) = fl | 0x20000000;
      *(_QWORD *)(v15 + 16) = v21;
    }
    v11 = v31;
  }
  if ( (*(_DWORD *)(v15 + 48) & 0x87FFFFF) != fl )
    goto LABEL_28;
  v22 = Win32AllocPoolZInit(208LL, 1684961095LL);
  v23 = v22;
  if ( !v22 )
    goto LABEL_28;
  *((_QWORD *)&v35 + 1) = v22;
  v40 = 0LL;
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v29);
  if ( !v29 )
    goto LABEL_28;
  *((_QWORD *)&v36 + 1) = v29;
  RGNOBJ::vSet((RGNOBJ *)&v29, &v40);
  v41 = 0LL;
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v30);
  if ( !v30 )
    goto LABEL_28;
  *(_QWORD *)&v37 = v30;
  RGNOBJ::vSet((RGNOBJ *)&v30, &v41);
  Semaphore = GreCreateSemaphore();
  *(_QWORD *)(v23 + 200) = Semaphore;
  if ( !Semaphore )
    goto LABEL_28;
  *(_QWORD *)(v23 + 168) = v15;
  v25 = fl | 0x10000000;
  *((_QWORD *)&v37 + 1) = Semaphore;
  REGION::vStamp(v29);
  v39 = v40;
  EWNDOBJ::vSetClip(v23, v29, &v39);
  *(_QWORD *)(v23 + 192) = v30;
  v26 = v8 + 24;
  *(_QWORD *)(v23 + 24) = 0LL;
  if ( !v8 )
    v26 = 0LL;
  *(_QWORD *)(v23 + 48) = v26;
  *(_DWORD *)(v23 + 188) = iPixelFormat;
  *(_DWORD *)(v23 + 152) = 1145984837;
  *(_QWORD *)(v23 + 176) = v11;
  *(_DWORD *)(v23 + 184) = v25;
  if ( v11 )
  {
    if ( !(unsigned int)UserAssociateHwnd((__int64)v11, v23) )
      goto LABEL_28;
  }
  else
  {
    *(_QWORD *)(v8 + 136) = v23;
  }
  *(_QWORD *)(v23 + 160) = *(_QWORD *)(v15 + 24);
  *(_QWORD *)(v15 + 24) = v23;
  if ( v34 )
  {
    *(_QWORD *)(v15 + 8) = *(_QWORD *)(v14 + 23664);
    *(_QWORD *)(v14 + 23664) = v15;
  }
  *(_DWORD *)(v15 + 48) |= 0x40000000u;
  *(_DWORD *)(v23 + 184) |= 0x40000000u;
  *(_DWORD *)(v14 + 23660) = 1;
  v38 = *(_QWORD *)(v8 + 48);
  PDEVOBJ::vReferencePdev((PDEVOBJ *)&v38);
  v33 = 1;
  SEMOBJ::vUnlock((SEMOBJ *)v32);
  WO_CLEANUP::~WO_CLEANUP((WO_CLEANUP *)&v33);
  return (WNDOBJ *)v23;
}
