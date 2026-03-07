void __fastcall GreClientRgnUpdated(Gre::Base *a1)
{
  char v1; // r15
  struct Gre::Base::SESSION_GLOBALS *v2; // rbx
  Gre::Base *v3; // rcx
  struct Gre::Base::SESSION_GLOBALS *v4; // rax
  __int64 v5; // rcx
  __int64 i; // rdi
  int v7; // eax
  int v8; // eax
  __int64 j; // rbx
  int v10; // eax
  struct _RECTL *v11; // rsi
  struct _RECTL *v12; // r14
  __int64 k; // rbx
  REGION **p_right; // rbx
  REGION *v15; // rdx
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // [rsp+20h] [rbp-20h] BYREF
  struct _RECTL v19; // [rsp+30h] [rbp-10h] BYREF
  __int64 v20; // [rsp+78h] [rbp+38h] BYREF
  __int64 v21; // [rsp+80h] [rbp+40h] BYREF
  __int64 v22; // [rsp+88h] [rbp+48h] BYREF

  v1 = (char)a1;
  v2 = Gre::Base::Globals(a1);
  GreAcquireSemaphore(*((_QWORD *)v2 + 12));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemVisRgnUniqueness", *((_QWORD *)v2 + 12), 10LL);
  v4 = Gre::Base::Globals(v3);
  ++*((_DWORD *)v4 + 1629);
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemVisRgnUniqueness");
  GreReleaseSemaphoreInternal(*((_QWORD *)v2 + 12));
  if ( (v1 & 1) != 0 )
  {
    v18 = *((_QWORD *)v2 + 7);
    GreAcquireSemaphore(v18);
    for ( i = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v5) + 32) + 23664LL); i; i = *(_QWORD *)(i + 8) )
    {
      v7 = *(_DWORD *)(i + 48);
      if ( v7 < 0 )
      {
        v8 = v7 & 0x7FFFFFFF;
        *(_DWORD *)(i + 48) = v8;
        if ( (v8 & 0x12) == 0x12 )
        {
          for ( j = *(_QWORD *)(i + 24); j; j = *(_QWORD *)(j + 160) )
          {
            v10 = *(_DWORD *)(j + 184);
            if ( v10 >= 0 )
            {
              v22 = *(_QWORD *)(j + 200);
              GreAcquireSemaphore(v22);
              (*(void (__fastcall **)(__int64, __int64))(i + 40))(j, 2LL);
              SEMOBJ::vUnlock((SEMOBJ *)&v22);
            }
            else
            {
              *(_DWORD *)(j + 184) = v10 & 0x7FFFFFFF;
            }
          }
        }
        if ( (*(_DWORD *)(i + 48) & 0xC) != 0 )
        {
          v11 = *(struct _RECTL **)(i + 16);
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v21);
          RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v21);
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v20);
          RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v20);
          if ( v21 && v20 )
          {
            v12 = v11 + 2;
            RGNOBJ::vSet((RGNOBJ *)&v20, v11 + 2);
            for ( k = *(_QWORD *)(i + 24); k; k = *(_QWORD *)(k + 160) )
            {
              v22 = *(_QWORD *)(k + 56);
              if ( RGNOBJ::iCombine((RGNOBJ *)&v21, (struct RGNOBJ *)&v20, (struct RGNOBJ *)&v22, 4) )
                RGNOBJ::vSwap((RGNOBJ *)&v20, (struct RGNOBJ *)&v21);
            }
            if ( (*(_DWORD *)(i + 48) & 4) != 0 )
            {
              p_right = (REGION **)&v11[3].right;
              v22 = *(_QWORD *)&v11[3].right;
              if ( RGNOBJ::iCombine((RGNOBJ *)&v21, (struct RGNOBJ *)&v20, (struct RGNOBJ *)&v22, 4) )
              {
                RGNOBJ::vSwap((RGNOBJ *)&v11[3].right, (struct RGNOBJ *)&v21);
                REGION::vStamp(*p_right);
                v15 = *p_right;
                v19 = *v12;
                EWNDOBJ::vSetClip(v11, v15, &v19);
                TRACKOBJ::vUpdateDrvDelta((TRACKOBJ *)i, (struct EWNDOBJ *)v11, 4u);
              }
            }
            RGNOBJ::vSwap((RGNOBJ *)&v11[3].right, (struct RGNOBJ *)&v20);
            REGION::vStamp(*(REGION **)&v11[3].right);
            v16 = *(_QWORD *)&v11[3].right;
            v19 = *v12;
            EWNDOBJ::vSetClip(v11, v16, &v19);
            if ( (*(_DWORD *)(i + 48) & 8) != 0 )
              (*(void (__fastcall **)(struct _RECTL *, __int64))(i + 40))(v11, 8LL);
          }
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v20);
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v21);
        }
        (*(void (__fastcall **)(_QWORD, __int64))(i + 40))(0LL, 16LL);
        v17 = *(_DWORD *)(i + 48);
        if ( (v17 & 0x40) != 0 )
        {
          if ( (v1 & 2) != 0 )
          {
            *(_DWORD *)(i + 48) = v17 | 0x4000000;
          }
          else
          {
            (*(void (__fastcall **)(_QWORD, __int64))(i + 40))(0LL, 64LL);
            *(_DWORD *)(i + 48) &= ~0x4000000u;
          }
        }
      }
    }
    SEMOBJ::vUnlock((SEMOBJ *)&v18);
  }
}
