__int64 __fastcall bSpUpdateDeviceSurface(
        struct _SURFOBJ *a1,
        struct _CLIPOBJ **a2,
        struct RGNOBJ *a3,
        struct ECLIPOBJ *a4)
{
  unsigned int v5; // ebx
  __int64 ThreadWin32Thread; // rax
  Gre::Base *v9; // rcx
  __int64 v10; // rdi
  struct Gre::Base::SESSION_GLOBALS *v11; // r12
  Gre::Base *v12; // rcx
  struct Gre::Base::SESSION_GLOBALS *v13; // r15
  Gre::Base *v14; // rcx
  struct Gre::Base::SESSION_GLOBALS *v15; // rax
  unsigned int v16; // ecx
  unsigned int v17; // edx
  unsigned int v18; // eax
  DC **v19; // rdi
  __int64 v21; // r12
  struct RGNOBJ *v22; // r15
  struct REGION *v23; // rax
  __int64 v24; // r10
  __int64 v25; // rax
  HDEV hdev; // rax
  __int64 v27; // [rsp+20h] [rbp-50h] BYREF
  __int64 v28; // [rsp+28h] [rbp-48h] BYREF
  struct _POINTL v29; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v30[8]; // [rsp+38h] [rbp-38h] BYREF
  __int128 v31; // [rsp+40h] [rbp-30h] BYREF
  struct REGION *v32; // [rsp+50h] [rbp-20h] BYREF
  _BYTE v33[24]; // [rsp+58h] [rbp-18h] BYREF

  v5 = 1;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v10 = ThreadWin32Thread;
  if ( ThreadWin32Thread && (*(_DWORD *)(ThreadWin32Thread + 328) & 1) != 0 && a1->iType == 1 )
  {
    v11 = Gre::Base::Globals(v9);
    SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)&v31, *((HSEMAPHORE *)v11 + 12));
    v13 = Gre::Base::Globals(v12);
    v15 = Gre::Base::Globals(v14);
    v16 = *(_DWORD *)(v10 + 336);
    v17 = *((_DWORD *)v15 + 1629);
    if ( v16 == v17 )
      goto LABEL_12;
    v18 = *((_DWORD *)v13 + 1629);
    if ( v17 <= v18 )
    {
      if ( v16 >= v17 && v16 <= v18 )
      {
LABEL_12:
        SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v31);
        if ( v5 || !a2 || !*a2 )
          return v5;
        SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v30, *((HSEMAPHORE *)v11 + 16));
        v19 = *(DC ***)(v10 + 312);
        if ( !v19 )
        {
          SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v30);
          return 1LL;
        }
        v21 = (__int64)*a2;
        v22 = (struct RGNOBJ *)((unsigned __int64)&(*a2)[2].rclBounds.top & -(__int64)(*a2 != 0LL));
        DC::AcquireDcVisRgnShared(*v19);
        v28 = *((_QWORD *)*v19 + 142);
        v23 = DC::prgnVisSnap(*v19);
        v32 = v23;
        if ( v24 && v23 )
        {
          if ( RGNOBJ::bEqual((RGNOBJ *)&v32, (struct RGNOBJ *)&v28) )
          {
            if ( (*((_DWORD *)*v19 + 9) & 0x4000) == 0 )
            {
              v25 = *((_QWORD *)*v19 + 6);
              v31 = *(_OWORD *)(v28 + 56);
              if ( (*(_DWORD *)(v25 + 40) & 0x20000) != 0 )
              {
                v27 = *((_QWORD *)a1->hdev + 320);
                ERECTL::operator-=(&v31, &v27);
              }
            }
LABEL_25:
            v5 = 1;
            goto LABEL_35;
          }
          if ( *(_QWORD *)a3 )
          {
            if ( *(_QWORD *)a3 != *(_QWORD *)v22 )
            {
              if ( RGNOBJ::bCopy(a3, (struct RGNOBJ *)&v28) )
              {
                RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v27);
                RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v27);
                if ( v27 )
                {
                  if ( (*(_DWORD *)(*((_QWORD *)*v19 + 6) + 40LL) & 0x20000) != 0 )
                  {
                    hdev = a1->hdev;
                    v29.x = -*((_DWORD *)hdev + 640);
                    v29.y = -*((_DWORD *)hdev + 641);
                    RGNOBJ::bOffset(a3, &v29);
                  }
                  if ( RGNOBJ::bMerge((RGNOBJ *)&v27, v22, a3, 8u) )
                  {
                    if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v27) != 1 )
                    {
                      RGNOBJ::vSwap((RGNOBJ *)&v27, a3);
                      XCLIPOBJ::vSetup(a4, *(struct REGION **)a3, (struct ERECTL *)(v21 + 4), 1);
                      if ( !(unsigned int)ERECTL::bEmpty((struct ECLIPOBJ *)((char *)a4 + 4)) )
                      {
                        *a2 = (struct _CLIPOBJ *)a4;
                        v5 = 1;
                      }
                    }
                  }
                }
                RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v27);
              }
              goto LABEL_35;
            }
            goto LABEL_25;
          }
        }
LABEL_35:
        wil::details::lambda_call<_lambda_d4ac050843a32da14874304f2689d2a8_>::~lambda_call<_lambda_d4ac050843a32da14874304f2689d2a8_>(v33);
        SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v30);
        return v5;
      }
    }
    else if ( v16 <= v18 || v16 >= v17 )
    {
      goto LABEL_12;
    }
    v5 = 0;
    goto LABEL_12;
  }
  return 1LL;
}
