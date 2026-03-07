void __fastcall vForceClientRgnUpdate(Gre::Base *a1)
{
  unsigned __int64 i; // rdi
  __int64 v2; // rcx
  __int64 v3; // rsi
  int v4; // eax
  int v5; // eax
  __int64 v6; // rcx
  _DWORD *v7; // r14
  HRGN ClientRgn; // rax
  HRGN v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // edx
  int v13; // ecx
  BOOL v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // [rsp+28h] [rbp-29h] BYREF
  __int64 v17; // [rsp+30h] [rbp-21h] BYREF
  _QWORD v18[2]; // [rsp+38h] [rbp-19h] BYREF
  struct _POINTL v19[2]; // [rsp+48h] [rbp-9h] BYREF
  _QWORD v20[3]; // [rsp+58h] [rbp+7h] BYREF
  __int64 v21; // [rsp+70h] [rbp+1Fh] BYREF
  __int128 v22; // [rsp+78h] [rbp+27h] BYREF

  i = 0LL;
  v21 = *((_QWORD *)Gre::Base::Globals(a1) + 7);
  GreAcquireSemaphore(v21);
  v3 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v2) + 32) + 23664LL);
  if ( v3 )
  {
    while ( 1 )
    {
      v4 = *(_DWORD *)(v3 + 48);
      if ( (v4 & 0x40000000) != 0 )
        break;
      v3 = *(_QWORD *)(v3 + 8);
      if ( !v3 )
        goto LABEL_4;
    }
    *(_DWORD *)(v3 + 48) = v4 & 0x3FFFFFFF | 0x80000000;
    for ( i = *(_QWORD *)(v3 + 24); i; i = *(_QWORD *)(i + 160) )
    {
      v5 = *(_DWORD *)(i + 184);
      if ( (v5 & 0x40000000) != 0 )
      {
        *(_DWORD *)(i + 184) = v5 & 0x3FFFFFFF | 0x80000000;
        goto LABEL_11;
      }
    }
    goto LABEL_4;
  }
LABEL_11:
  if ( !i
    || ((v6 = *(_QWORD *)(i + 176), v7 = (_DWORD *)(i + 184), !v6)
      ? (v22 = *(_OWORD *)(v3 + 52), ClientRgn = (HRGN)GreCreateRectRgnIndirect(&v22))
      : (ClientRgn = UserGetClientRgn(v6, &v22, *v7 & 0x20)),
        (v9 = ClientRgn) == 0LL) )
  {
LABEL_4:
    SEMOBJ::vUnlock((SEMOBJ *)&v21);
    return;
  }
  GreSetRegionOwner(ClientRgn, 0LL);
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v20, v9, 0, 0);
  if ( v20[0] )
  {
    if ( (*v7 & 0x100) == 0 )
    {
      v10 = *(_QWORD *)(*(_QWORD *)(i + 168) + 32LL);
      v11 = *(_QWORD *)(v10 + 48);
      if ( v11 )
      {
        if ( v10 == *(_QWORD *)(v11 + 2528) )
        {
          v12 = *(_DWORD *)(v11 + 2560);
          v19[0].x = -v12;
          v13 = *(_DWORD *)(v11 + 2564);
          v19[0].y = -v13;
          if ( v12 || v13 )
          {
            RGNOBJ::bOffset((RGNOBJ *)v20, v19);
            ERECTL::bOffsetAdd((ERECTL *)&v22, v19, 0);
          }
        }
      }
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v17);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v17);
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v16);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v16);
      if ( v17 )
      {
        if ( v16 )
        {
          RGNOBJ::vSet((RGNOBJ *)&v16, (const struct _RECTL *const)(v3 + 52));
          RGNOBJ::bCopy((RGNOBJ *)&v17, (struct RGNOBJ *)v20);
          RGNOBJAPI::iCombine((RGNOBJAPI *)v20, (struct RGNOBJ *)&v17, (struct RGNOBJ *)&v16, 1);
          if ( RGNOBJ::iCombine((RGNOBJ *)&v17, (struct RGNOBJ *)v20, (struct RGNOBJ *)&v16, 1) )
            RGNOBJAPI::bSwap((RGNOBJAPI *)v20, (struct RGNOBJ *)&v17);
        }
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v16);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v17);
    }
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v18);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v18);
    v14 = 0;
    if ( (*v7 & 0x200) != 0 && v18[0] )
      v14 = RGNOBJ::bCopy((RGNOBJ *)v18, (struct RGNOBJ *)v20) != 0;
    v16 = *(_QWORD *)(i + 200);
    GreAcquireSemaphore(v16);
    if ( v14 )
    {
      v19[0] = *(struct _POINTL *)(i + 192);
      if ( v19[0] )
      {
        RGNOBJ::vSwap((RGNOBJ *)v18, (struct RGNOBJ *)v19);
        *(struct _POINTL *)(i + 192) = v19[0];
      }
    }
    RGNOBJAPI::bSwap((RGNOBJAPI *)v20, (struct RGNOBJ *)((i + 56) & ((unsigned __int128)-(__int128)i >> 64)));
    REGION::vStamp(*(REGION **)(i + 56));
    v15 = *(_QWORD *)(i + 56);
    *(_OWORD *)&v19[0].x = v22;
    EWNDOBJ::vSetClip(i, v15, v19);
    RGNOBJAPI::bDeleteRGNOBJAPI((RGNOBJAPI *)v20);
    if ( (*(_DWORD *)(v3 + 48) & 1) != 0 )
      TRACKOBJ::vUpdateDrvDelta((TRACKOBJ *)v3, (struct EWNDOBJ *)i, 1u);
    if ( (*(_DWORD *)(v3 + 48) & 2) != 0 )
      (*(void (__fastcall **)(unsigned __int64))(v3 + 40))(i);
    vSpWndobjChange(*(HDEV *)(*(_QWORD *)(v3 + 32) + 48LL), (struct EWNDOBJ *)i);
    SEMOBJ::vUnlock((SEMOBJ *)&v16);
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v18);
  }
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v20);
  SEMOBJ::vUnlock((SEMOBJ *)&v21);
  GreClientRgnUpdated((Gre::Base *)1);
}
