void __fastcall GreSetClientRgn(struct EWNDOBJ *a1, HRGN a2, unsigned int *a3)
{
  __int64 v6; // rdx
  bool v7; // zf
  REGION **v8; // r14
  unsigned int v9; // edi
  unsigned int v10; // r12d
  unsigned int v11; // r15d
  unsigned int v12; // esi
  __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // edx
  int v16; // ecx
  Gre::Base *v17; // rcx
  BOOL v18; // edi
  __int128 v19; // xmm6
  struct REGION *v20; // rdx
  struct REGION *v21; // rdx
  __int64 v22; // rax
  struct _POINTL v23; // [rsp+20h] [rbp-50h] BYREF
  __int64 v24; // [rsp+28h] [rbp-48h] BYREF
  __int128 v25; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v26[4]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v27; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v28; // [rsp+B8h] [rbp+48h] BYREF
  __int64 v29; // [rsp+C8h] [rbp+58h] BYREF

  if ( a2 )
  {
    if ( EWNDOBJ::bValid(a1) )
    {
      GreSetRegionOwner(v6, 0LL);
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v26, a2, 0, 0);
      if ( v26[0] )
      {
        v7 = (*((_DWORD *)a1 + 46) & 0x100) == 0;
        v8 = (REGION **)((char *)a1 + 56);
        v9 = *a3;
        v10 = a3[1];
        v11 = a3[2];
        v12 = a3[3];
        v24 = *((_QWORD *)a1 + 7);
        *(_QWORD *)&v25 = __PAIR64__(v10, v9);
        *((_QWORD *)&v25 + 1) = __PAIR64__(v12, v11);
        if ( v7 )
        {
          v13 = *(_QWORD *)(*((_QWORD *)a1 + 21) + 32LL);
          v14 = *(_QWORD *)(v13 + 48);
          if ( v14 )
          {
            if ( v13 == *(_QWORD *)(v14 + 2528) )
            {
              v15 = *(_DWORD *)(v14 + 2560);
              v23.x = -v15;
              v16 = *(_DWORD *)(v14 + 2564);
              v23.y = -v16;
              if ( v15 || v16 )
              {
                RGNOBJ::bOffset((RGNOBJ *)v26, &v23);
                ERECTL::bOffsetAdd((ERECTL *)&v25, &v23, 0);
                v12 = HIDWORD(v25);
                v11 = DWORD2(v25);
                v10 = DWORD1(v25);
                v9 = v25;
              }
            }
          }
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v27);
          RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v27);
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v28);
          RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v28);
          if ( v27 )
          {
            if ( v28 )
            {
              RGNOBJ::vSet((RGNOBJ *)&v28, (const struct _RECTL *const)(*((_QWORD *)a1 + 21) + 52LL));
              RGNOBJ::bCopy((RGNOBJ *)&v27, (struct RGNOBJ *)v26);
              RGNOBJAPI::iCombine((RGNOBJAPI *)v26, (struct RGNOBJ *)&v27, (struct RGNOBJ *)&v28, 1);
              if ( RGNOBJ::iCombine((RGNOBJ *)&v27, (struct RGNOBJ *)v26, (struct RGNOBJ *)&v28, 1) )
                RGNOBJAPI::bSwap((RGNOBJAPI *)v26, (struct RGNOBJ *)&v27);
            }
          }
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v28);
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v27);
        }
        if ( RGNOBJ::bEqual((RGNOBJ *)&v24, (struct RGNOBJ *)v26)
          && *((_DWORD *)a1 + 8) == v9
          && *((_DWORD *)a1 + 10) == v11
          && *((_DWORD *)a1 + 9) == v10
          && *((_DWORD *)a1 + 11) == v12 )
        {
          RGNOBJAPI::bDeleteRGNOBJAPI((RGNOBJAPI *)v26);
        }
        else
        {
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v29);
          RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v29);
          v18 = 0;
          if ( (*((_DWORD *)a1 + 46) & 0x200) != 0 && v29 )
            v18 = RGNOBJ::bCopy((RGNOBJ *)&v29, (struct RGNOBJ *)v26) != 0;
          v23 = (struct _POINTL)*((_QWORD *)Gre::Base::Globals(v17) + 7);
          ((void (__fastcall *)(_QWORD))GreAcquireSemaphore)(v23);
          v28 = *((_QWORD *)a1 + 25);
          GreAcquireSemaphore(v28);
          if ( v18 )
          {
            v27 = *((_QWORD *)a1 + 24);
            if ( v27 )
            {
              RGNOBJ::vSwap((RGNOBJ *)&v29, (struct RGNOBJ *)&v27);
              *((_QWORD *)a1 + 24) = v27;
            }
          }
          v19 = v25;
          if ( (*((_DWORD *)a1 + 46) & 1) != 0 )
          {
            RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v27);
            RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v27);
            if ( v27 && RGNOBJ::iCombine((RGNOBJ *)&v27, (struct RGNOBJ *)v26, (struct RGNOBJ *)&v24, 4) )
            {
              RGNOBJ::vSwap((struct EWNDOBJ *)((char *)a1 + 56), (struct RGNOBJ *)&v27);
              REGION::vStamp(*v8);
              v20 = *v8;
              v25 = v19;
              EWNDOBJ::vSetClip((__int64)a1, v20, &v25);
              TRACKOBJ::vUpdateDrvDelta(*((TRACKOBJ **)a1 + 21), a1);
            }
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v27);
          }
          RGNOBJAPI::bSwap(
            (RGNOBJAPI *)v26,
            (struct RGNOBJ *)((unsigned __int64)v8 & ((unsigned __int128)-(__int128)(unsigned __int64)a1 >> 64)));
          REGION::vStamp(*v8);
          v21 = *v8;
          v25 = v19;
          EWNDOBJ::vSetClip((__int64)a1, v21, &v25);
          RGNOBJAPI::bDeleteRGNOBJAPI((RGNOBJAPI *)v26);
          if ( (*((_DWORD *)a1 + 46) & 2) != 0 )
            (*(void (__fastcall **)(struct EWNDOBJ *))(*((_QWORD *)a1 + 21) + 40LL))(a1);
          v22 = *((_QWORD *)a1 + 21);
          *((_DWORD *)a1 + 46) |= 0x80000000;
          *(_DWORD *)(v22 + 48) |= 0x80000000;
          SEMOBJ::vUnlock((SEMOBJ *)&v28);
          SEMOBJ::vUnlock((SEMOBJ *)&v23);
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v29);
        }
      }
      RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v26);
    }
    else
    {
      bDeleteRegion(v6);
    }
  }
}
