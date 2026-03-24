/*
 * XREFs of ?vForceClientRgnUpdate@@YAXXZ @ 0x1C0286C34
 * Callers:
 *     ?vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z @ 0x1C0018F78 (-vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z.c)
 *     ?iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C027C2B8 (-iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     NtGdiSetPixelFormat @ 0x1C02BCE40 (NtGdiSetPixelFormat.c)
 * Callees:
 *     GreClientRgnUpdated @ 0x1C00750B0 (GreClientRgnUpdated.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C009032C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C00B307C (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00B9858 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C0156F1C (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 *     UserGetClientRgn @ 0x1C01E8B58 (UserGetClientRgn.c)
 *     ?vSpWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z @ 0x1C02852FC (-vSpWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z.c)
 *     ?vSetClip@EWNDOBJ@@QEAAXPEAVREGION@@VERECTL@@@Z @ 0x1C0287098 (-vSetClip@EWNDOBJ@@QEAAXPEAVREGION@@VERECTL@@@Z.c)
 *     ?vUpdateDrvDelta@TRACKOBJ@@QEAAXPEAVEWNDOBJ@@K@Z @ 0x1C02872F4 (-vUpdateDrvDelta@TRACKOBJ@@QEAAXPEAVEWNDOBJ@@K@Z.c)
 */

void vForceClientRgnUpdate(void)
{
  TRACKOBJ *v0; // rsi
  int v1; // eax
  __int64 i; // rdi
  int v3; // r8d
  unsigned int v4; // r8d
  unsigned __int64 v5; // rcx
  HRGN ClientRgn; // rax
  HRGN v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // edx
  int v11; // ecx
  BOOL v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rdx
  int v15; // eax
  struct _POINTL v16; // [rsp+28h] [rbp-69h] BYREF
  _QWORD v17[2]; // [rsp+30h] [rbp-61h] BYREF
  _QWORD v18[2]; // [rsp+40h] [rbp-51h] BYREF
  __int64 v19; // [rsp+50h] [rbp-41h] BYREF
  __int64 v20; // [rsp+58h] [rbp-39h] BYREF
  _QWORD v21[2]; // [rsp+60h] [rbp-31h] BYREF
  __int64 v22; // [rsp+70h] [rbp-21h] BYREF
  _QWORD v23[8]; // [rsp+78h] [rbp-19h] BYREF
  __int128 v24; // [rsp+B8h] [rbp+27h] BYREF
  __int128 v25; // [rsp+C8h] [rbp+37h] BYREF

  v20 = ghsemWndobj;
  GreAcquireSemaphore(ghsemWndobj);
  v0 = gpto;
  if ( gpto )
  {
    while ( 1 )
    {
      v1 = *((_DWORD *)v0 + 12);
      if ( (v1 & 0x40000000) != 0 )
        break;
      v0 = (TRACKOBJ *)*((_QWORD *)v0 + 1);
      if ( !v0 )
        goto LABEL_4;
    }
    *((_DWORD *)v0 + 12) = v1 & 0x3FFFFFFF | 0x80000000;
    for ( i = *((_QWORD *)v0 + 3); i; i = *(_QWORD *)(i + 160) )
    {
      v3 = *(_DWORD *)(i + 184);
      if ( (v3 & 0x40000000) != 0 )
      {
        v4 = v3 & 0x3FFFFFFF | 0x80000000;
        *(_DWORD *)(i + 184) = v4;
        v5 = *(_QWORD *)(i + 176);
        if ( v5 )
        {
          ClientRgn = UserGetClientRgn(v5, &v25, v4 & 0x20);
        }
        else
        {
          v25 = *(_OWORD *)((char *)v0 + 52);
          ClientRgn = (HRGN)GreCreateRectRgnIndirect(&v25);
        }
        v7 = ClientRgn;
        if ( !ClientRgn )
          break;
        GreSetRegionOwner(ClientRgn, 0LL);
        RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v23, v7, 0, 0);
        if ( v23[0] )
        {
          if ( (*(_DWORD *)(i + 184) & 0x100) == 0 )
          {
            v8 = *(_QWORD *)(*(_QWORD *)(i + 168) + 32LL);
            v9 = *(_QWORD *)(v8 + 48);
            if ( v9 )
            {
              if ( v8 == *(_QWORD *)(v9 + 2552) )
              {
                v10 = *(_DWORD *)(v9 + 2584);
                v16.x = -v10;
                v11 = *(_DWORD *)(v9 + 2588);
                v16.y = -v11;
                if ( v10 || v11 )
                {
                  RGNOBJ::bOffset((RGNOBJ *)v23, &v16);
                  ERECTL::bOffsetAdd((ERECTL *)&v25, &v16, 0);
                }
              }
            }
            RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v17);
            RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v17);
            RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v18);
            RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v18);
            if ( v17[0] )
            {
              if ( v18[0] )
              {
                RGNOBJ::vSet((RGNOBJ *)v18, (struct _RECTL *)((char *)v0 + 52));
                RGNOBJ::bCopy((RGNOBJ *)v17, (struct RGNOBJ *)v23);
                RGNOBJAPI::iCombine((RGNOBJAPI *)v23, (struct RGNOBJ *)v17, (struct RGNOBJ *)v18, 1);
                if ( RGNOBJ::iCombine((RGNOBJ *)v17, (struct RGNOBJ *)v23, (struct RGNOBJ *)v18, 1) )
                  RGNOBJAPI::bSwap((RGNOBJAPI *)v23, (struct RGNOBJ *)v17);
              }
            }
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v18);
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v17);
          }
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v21);
          RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v21);
          v12 = 0;
          if ( (*(_DWORD *)(i + 184) & 0x200) != 0 && v21[0] )
            v12 = RGNOBJ::bCopy((RGNOBJ *)v21, (struct RGNOBJ *)v23) != 0;
          v22 = *(_QWORD *)(i + 200);
          GreAcquireSemaphore(v22);
          if ( v12 )
          {
            v19 = *(_QWORD *)(i + 192);
            if ( v19 )
            {
              RGNOBJ::vSwap((RGNOBJ *)v21, (struct RGNOBJ *)&v19);
              *(_QWORD *)(i + 192) = v19;
            }
          }
          RGNOBJAPI::bSwap((RGNOBJAPI *)v23, (struct RGNOBJ *)(i + 56));
          v13 = *(_QWORD *)(i + 56);
          *(_DWORD *)(v13 + 28) = _InterlockedIncrement(*(volatile signed __int32 **)&REGION::ulUniqueREGION);
          v14 = *(_QWORD *)(i + 56);
          v24 = v25;
          EWNDOBJ::vSetClip(i, v14, &v24);
          RGNOBJAPI::bDeleteRGNOBJAPI((RGNOBJAPI *)v23);
          v15 = *((_DWORD *)v0 + 12);
          if ( (v15 & 1) != 0 )
          {
            TRACKOBJ::vUpdateDrvDelta(v0, (struct EWNDOBJ *)i, 1u);
            v15 = *((_DWORD *)v0 + 12);
          }
          if ( (v15 & 2) != 0 )
            (*((void (__fastcall **)(__int64))v0 + 5))(i);
          vSpWndobjChange(*(HDEV *)(*((_QWORD *)v0 + 4) + 48LL), (struct EWNDOBJ *)i);
          SEMOBJ::vUnlock((SEMOBJ *)&v22);
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v21);
        }
        RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v23);
        SEMOBJ::vUnlock((SEMOBJ *)&v20);
        GreClientRgnUpdated(1);
        return;
      }
    }
  }
LABEL_4:
  SEMOBJ::vUnlock((SEMOBJ *)&v20);
}
