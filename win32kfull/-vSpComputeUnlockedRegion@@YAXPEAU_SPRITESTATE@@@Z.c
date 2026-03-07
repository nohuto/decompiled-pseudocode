void __fastcall vSpComputeUnlockedRegion(REGION **a1)
{
  REGION *v1; // rbx
  struct Gre::Base::SESSION_GLOBALS *v3; // rax
  REGION *v4; // rcx
  struct Gre::Base::SESSION_GLOBALS *v5; // r12
  Gre::Base *v6; // rcx
  __int64 v7; // r15
  int v8; // edi
  int v9; // r14d
  __int64 i; // rdx
  __int64 locked; // rdi
  Gre::Base *v12; // rcx
  __int64 j; // rdi
  __int64 k; // rbx
  REGION *v15; // [rsp+28h] [rbp-79h] BYREF
  __int64 v16; // [rsp+30h] [rbp-71h] BYREF
  __int64 v17; // [rsp+38h] [rbp-69h] BYREF
  __int64 v18; // [rsp+40h] [rbp-61h] BYREF
  _QWORD v19[2]; // [rsp+48h] [rbp-59h] BYREF
  __int128 v20; // [rsp+58h] [rbp-49h] BYREF
  REGION *v21; // [rsp+68h] [rbp-39h]
  int v22; // [rsp+70h] [rbp-31h]
  __int64 v23; // [rsp+78h] [rbp-29h]
  __int64 v24; // [rsp+80h] [rbp-21h]
  __int16 v25; // [rsp+88h] [rbp-19h]
  __int64 v26; // [rsp+90h] [rbp-11h]
  __int64 v27; // [rsp+98h] [rbp-9h]
  struct _RECTL v28; // [rsp+A8h] [rbp+7h] BYREF
  struct _RECTL v29; // [rsp+B8h] [rbp+17h] BYREF

  v1 = *a1;
  v28 = 0LL;
  v19[0] = v1;
  v3 = Gre::Base::Globals((Gre::Base *)a1);
  v4 = a1[129];
  v5 = v3;
  if ( v4 )
  {
    REGION::vDeleteREGION(v4);
    a1[129] = 0LL;
  }
  v7 = *(_QWORD *)(SGDGetSessionState(v4) + 32);
  if ( *(_QWORD *)(v7 + 23664) || a1[130] )
    goto LABEL_9;
  v24 = 0LL;
  v20 = 0LL;
  v25 = 256;
  v27 = 0LL;
  v26 = 0LL;
  v23 = 0LL;
  v22 = 1;
  if ( (*((_DWORD *)v1 + 10) & 1) != 0 )
  {
    Gre::Base::Globals(v6);
    *(_QWORD *)&v20 = *((_QWORD *)v1 + 6);
    v21 = v1;
    GreAcquireSemaphore(v20);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v20, 11LL);
  }
  v8 = *((_DWORD *)v1 + 654);
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&v20);
  if ( v8 )
  {
LABEL_9:
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v15);
    if ( v15 )
    {
      *(_QWORD *)&v28.left = 0LL;
      v9 = 0;
      *(_QWORD *)&v28.right = **(_QWORD **)&PDEVOBJ::sizl((PDEVOBJ *)v19);
      RGNOBJ::vSet((RGNOBJ *)&v15, &v28);
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v17);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v17);
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v16);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v16);
      if ( !v17 || !v16 )
        goto LABEL_34;
      v29 = 0LL;
      GreLockDisplayDevice(v1);
      for ( i = 0LL; ; i = locked )
      {
        locked = DxDdEnumLockedSurfaceRect(v1, i, &v29);
        if ( !locked )
          break;
        RGNOBJ::vSet((RGNOBJ *)&v17, &v29);
        RGNOBJ::bCopy((RGNOBJ *)&v16, (struct RGNOBJ *)&v15);
        if ( RGNOBJ::bMerge((RGNOBJ *)&v15, (struct RGNOBJ *)&v16, (struct RGNOBJ *)&v17, 4u) )
          v9 = 1;
        else
          RGNOBJ::vSet((RGNOBJ *)&v15);
      }
      GreUnlockDisplayDevice(v1);
      v18 = *((_QWORD *)Gre::Base::Globals(v12) + 7);
      GreAcquireSemaphore(v18);
      for ( j = *(_QWORD *)(v7 + 23664); j; j = *(_QWORD *)(j + 8) )
      {
        for ( k = *(_QWORD *)(j + 24); k; k = *(_QWORD *)(k + 160) )
        {
          UNDODESKTOPCOORD::UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v19, (struct EWNDOBJ *)k, (struct _SPRITESTATE *)a1);
          if ( (*(_DWORD *)(k + 184) & 0x1000000) != 0 )
          {
            RGNOBJ::bCopy((RGNOBJ *)&v16, (struct RGNOBJ *)&v15);
            if ( RGNOBJ::bMerge((RGNOBJ *)&v15, (struct RGNOBJ *)&v16, (struct RGNOBJ *)(k + 56), 4u) )
              v9 = 1;
            else
              RGNOBJ::vSet((RGNOBJ *)&v15);
          }
          UNDODESKTOPCOORD::~UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v19);
        }
      }
      if ( a1[130] )
      {
        v19[0] = a1[130];
        RGNOBJ::bCopy((RGNOBJ *)&v16, (struct RGNOBJ *)&v15);
        if ( RGNOBJ::bMerge((RGNOBJ *)&v15, (struct RGNOBJ *)&v16, (struct RGNOBJ *)v19, 8u) )
          v9 = 1;
        else
          RGNOBJ::vSet((RGNOBJ *)&v15);
      }
      SEMOBJ::vUnlock((SEMOBJ *)&v18);
      if ( v9 == 1 )
      {
        REGION::vStamp(v15);
        a1[129] = v15;
      }
      else
      {
LABEL_34:
        REGION::vDeleteREGION(v15);
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v16);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v17);
    }
  }
  *((_DWORD *)a1 + 29) = 0;
  vSpComputeSpriteRanges((struct _SPRITESTATE *)a1);
  ++*((_DWORD *)v5 + 1620);
}
