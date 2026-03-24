/*
 * XREFs of GreSetClientRgn @ 0x1C02874CC
 * Callers:
 *     InvalidateGDIWindows @ 0x1C01E8450 (InvalidateGDIWindows.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C009029C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C00B2D1C (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00B94F8 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C015695C (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 *     ?bValid@EWNDOBJ@@QEBAHXZ @ 0x1C0286578 (-bValid@EWNDOBJ@@QEBAHXZ.c)
 *     ?vSetClip@EWNDOBJ@@QEAAXPEAVREGION@@VERECTL@@@Z @ 0x1C0286A68 (-vSetClip@EWNDOBJ@@QEAAXPEAVREGION@@VERECTL@@@Z.c)
 *     ?vUpdateDrvDelta@TRACKOBJ@@QEAAXPEAVEWNDOBJ@@K@Z @ 0x1C0286CC4 (-vUpdateDrvDelta@TRACKOBJ@@QEAAXPEAVEWNDOBJ@@K@Z.c)
 */

void __fastcall GreSetClientRgn(struct EWNDOBJ *a1, HRGN a2, unsigned int *a3)
{
  __int64 v6; // rdx
  bool v7; // zf
  struct REGION **v8; // r14
  unsigned int v9; // edi
  unsigned int v10; // r12d
  unsigned int v11; // r15d
  unsigned int v12; // esi
  __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // edx
  int v16; // ecx
  BOOL v17; // edi
  struct REGION *v18; // rdx
  signed __int32 v19; // ecx
  struct REGION *v20; // r8
  signed __int32 v21; // ecx
  __int128 v22; // xmm0
  struct REGION *v23; // rdx
  int v24; // eax
  __int128 v25; // [rsp+20h] [rbp-99h] BYREF
  _QWORD v26[2]; // [rsp+30h] [rbp-89h] BYREF
  _QWORD v27[2]; // [rsp+40h] [rbp-79h] BYREF
  _QWORD v28[2]; // [rsp+50h] [rbp-69h] BYREF
  _QWORD v29[2]; // [rsp+60h] [rbp-59h] BYREF
  __int64 v30; // [rsp+70h] [rbp-49h] BYREF
  __int64 v31; // [rsp+78h] [rbp-41h] BYREF
  _QWORD v32[8]; // [rsp+80h] [rbp-39h] BYREF
  __int128 v33; // [rsp+C0h] [rbp+7h] BYREF
  _OWORD v34[4]; // [rsp+D0h] [rbp+17h] BYREF
  struct _POINTL v35; // [rsp+120h] [rbp+67h] BYREF
  __int64 v36; // [rsp+128h] [rbp+6Fh] BYREF
  __int64 v37; // [rsp+138h] [rbp+7Fh] BYREF

  if ( a2 )
  {
    if ( EWNDOBJ::bValid(a1) )
    {
      GreSetRegionOwner(v6, 0LL);
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v32, a2, 0, 0);
      if ( v32[0] )
      {
        v7 = (*((_DWORD *)a1 + 46) & 0x100) == 0;
        v8 = (struct REGION **)((char *)a1 + 56);
        v9 = *a3;
        v10 = a3[1];
        v11 = a3[2];
        v12 = a3[3];
        v37 = *((_QWORD *)a1 + 7);
        *(_QWORD *)&v25 = __PAIR64__(v10, v9);
        *((_QWORD *)&v25 + 1) = __PAIR64__(v12, v11);
        if ( v7 )
        {
          v13 = *(_QWORD *)(*((_QWORD *)a1 + 21) + 32LL);
          v14 = *(_QWORD *)(v13 + 48);
          if ( v14 )
          {
            if ( v13 == *(_QWORD *)(v14 + 2552) )
            {
              v15 = *(_DWORD *)(v14 + 2584);
              v35.x = -v15;
              v16 = *(_DWORD *)(v14 + 2588);
              v35.y = -v16;
              if ( v15 || v16 )
              {
                RGNOBJ::bOffset((RGNOBJ *)v32, &v35);
                ERECTL::bOffsetAdd((ERECTL *)&v25, &v35, 0);
                v12 = HIDWORD(v25);
                v11 = DWORD2(v25);
                v10 = DWORD1(v25);
                v9 = v25;
              }
            }
          }
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v26);
          RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v26);
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v27);
          RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v27);
          if ( v26[0] )
          {
            if ( v27[0] )
            {
              RGNOBJ::vSet((RGNOBJ *)v27, (struct _RECTL *)(*((_QWORD *)a1 + 21) + 52LL));
              RGNOBJ::bCopy((RGNOBJ *)v26, (struct RGNOBJ *)v32);
              RGNOBJAPI::iCombine((RGNOBJAPI *)v32, (struct RGNOBJ *)v26, (struct RGNOBJ *)v27, 1);
              if ( RGNOBJ::iCombine((RGNOBJ *)v26, (struct RGNOBJ *)v32, (struct RGNOBJ *)v27, 1) )
                RGNOBJAPI::bSwap((RGNOBJAPI *)v32, (struct RGNOBJ *)v26);
            }
          }
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v27);
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v26);
        }
        if ( RGNOBJ::bEqual((RGNOBJ *)&v37, (struct RGNOBJ *)v32)
          && *((_DWORD *)a1 + 8) == v9
          && *((_DWORD *)a1 + 10) == v11
          && *((_DWORD *)a1 + 9) == v10
          && *((_DWORD *)a1 + 11) == v12 )
        {
          RGNOBJAPI::bDeleteRGNOBJAPI((RGNOBJAPI *)v32);
        }
        else
        {
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v29);
          RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v29);
          v17 = 0;
          if ( (*((_DWORD *)a1 + 46) & 0x200) != 0 && v29[0] )
            v17 = RGNOBJ::bCopy((RGNOBJ *)v29, (struct RGNOBJ *)v32) != 0;
          v31 = ghsemWndobj;
          GreAcquireSemaphore(ghsemWndobj);
          v30 = *((_QWORD *)a1 + 25);
          GreAcquireSemaphore(v30);
          if ( v17 )
          {
            v36 = *((_QWORD *)a1 + 24);
            if ( v36 )
            {
              RGNOBJ::vSwap((RGNOBJ *)v29, (struct RGNOBJ *)&v36);
              *((_QWORD *)a1 + 24) = v36;
            }
          }
          if ( (*((_DWORD *)a1 + 46) & 1) != 0 )
          {
            RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v28, 0, 1);
            RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v28);
            if ( v28[0] && RGNOBJ::iCombine((RGNOBJ *)v28, (struct RGNOBJ *)v32, (struct RGNOBJ *)&v37, 4) )
            {
              RGNOBJ::vSwap((struct EWNDOBJ *)((char *)a1 + 56), (struct RGNOBJ *)v28);
              v18 = *v8;
              v19 = _InterlockedExchangeAdd(*(volatile signed __int32 **)&REGION::ulUniqueREGION, 1u);
              v33 = v25;
              *((_DWORD *)v18 + 7) = v19 + 1;
              EWNDOBJ::vSetClip((__int64)a1, *v8, &v33);
              TRACKOBJ::vUpdateDrvDelta(*((TRACKOBJ **)a1 + 21), a1);
            }
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v28);
          }
          RGNOBJAPI::bSwap((RGNOBJAPI *)v32, (struct EWNDOBJ *)((char *)a1 + 56));
          v20 = *v8;
          v21 = _InterlockedExchangeAdd(*(volatile signed __int32 **)&REGION::ulUniqueREGION, 1u);
          v22 = v25;
          *((_DWORD *)v20 + 7) = v21 + 1;
          v23 = *v8;
          v34[0] = v22;
          EWNDOBJ::vSetClip((__int64)a1, v23, v34);
          RGNOBJAPI::bDeleteRGNOBJAPI((RGNOBJAPI *)v32);
          v24 = *((_DWORD *)a1 + 46);
          if ( (v24 & 2) != 0 )
          {
            (*(void (__fastcall **)(struct EWNDOBJ *))(*((_QWORD *)a1 + 21) + 40LL))(a1);
            v24 = *((_DWORD *)a1 + 46);
          }
          *((_DWORD *)a1 + 46) = v24 | 0x80000000;
          *(_DWORD *)(*((_QWORD *)a1 + 21) + 48LL) |= 0x80000000;
          SEMOBJ::vUnlock((SEMOBJ *)&v30);
          SEMOBJ::vUnlock((SEMOBJ *)&v31);
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v29);
        }
      }
      RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v32);
    }
    else
    {
      bDeleteRegion(v6);
    }
  }
}
