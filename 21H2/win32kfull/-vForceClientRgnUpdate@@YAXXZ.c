/*
 * XREFs of ?vForceClientRgnUpdate@@YAXXZ @ 0x1C02837E0
 * Callers:
 *     ?vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z @ 0x1C0090A60 (-vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z.c)
 *     ?iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C0279E28 (-iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     NtGdiSetPixelFormat @ 0x1C02BB3F0 (NtGdiSetPixelFormat.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C001174C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0042D7C (--1RGNOBJAPI@@QEAA@XZ.c)
 *     GreClientRgnUpdated @ 0x1C00496B4 (GreClientRgnUpdated.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C008E0D4 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     UserGetClientRgn @ 0x1C01E3204 (UserGetClientRgn.c)
 *     ?vSpWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z @ 0x1C0281F68 (-vSpWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z.c)
 *     ?vSetClip@EWNDOBJ@@QEAAXPEAVREGION@@VERECTL@@@Z @ 0x1C0283C44 (-vSetClip@EWNDOBJ@@QEAAXPEAVREGION@@VERECTL@@@Z.c)
 *     ?vUpdateDrvDelta@TRACKOBJ@@QEAAXPEAVEWNDOBJ@@K@Z @ 0x1C0283EA0 (-vUpdateDrvDelta@TRACKOBJ@@QEAAXPEAVEWNDOBJ@@K@Z.c)
 */

void vForceClientRgnUpdate(void)
{
  TRACKOBJ *i; // rsi
  int v1; // eax
  __int64 j; // rdi
  int v3; // r8d
  unsigned int v4; // r8d
  __int64 v5; // rcx
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
  struct _POINTL v16; // [rsp+28h] [rbp-59h] BYREF
  __int128 v17; // [rsp+38h] [rbp-49h] BYREF
  _QWORD v18[2]; // [rsp+48h] [rbp-39h] BYREF
  __int64 v19; // [rsp+58h] [rbp-29h] BYREF
  __int64 v20; // [rsp+60h] [rbp-21h] BYREF
  _QWORD v21[2]; // [rsp+68h] [rbp-19h] BYREF
  __int64 v22; // [rsp+78h] [rbp-9h] BYREF
  _QWORD v23[7]; // [rsp+80h] [rbp-1h] BYREF
  __int128 v24; // [rsp+B8h] [rbp+37h] BYREF

  v20 = ghsemWndobj;
  GreAcquireSemaphore(ghsemWndobj);
  for ( i = gpto; i; i = (TRACKOBJ *)*((_QWORD *)i + 1) )
  {
    v1 = *((_DWORD *)i + 12);
    if ( (v1 & 0x40000000) != 0 )
    {
      *((_DWORD *)i + 12) = v1 & 0x3FFFFFFF | 0x80000000;
      for ( j = *((_QWORD *)i + 3); j; j = *(_QWORD *)(j + 160) )
      {
        v3 = *(_DWORD *)(j + 184);
        if ( (v3 & 0x40000000) != 0 )
        {
          v4 = v3 & 0x3FFFFFFF | 0x80000000;
          *(_DWORD *)(j + 184) = v4;
          v5 = *(_QWORD *)(j + 176);
          if ( v5 )
          {
            ClientRgn = UserGetClientRgn(v5, &v24, v4 & 0x20);
          }
          else
          {
            v24 = *(_OWORD *)((char *)i + 52);
            ClientRgn = (HRGN)GreCreateRectRgnIndirect(&v24);
          }
          v7 = ClientRgn;
          if ( !ClientRgn )
            goto LABEL_5;
          GreSetRegionOwner(ClientRgn, 0LL);
          RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v23, v7, 0, 0);
          if ( v23[0] )
          {
            if ( (*(_DWORD *)(j + 184) & 0x100) == 0 )
            {
              v8 = *(_QWORD *)(*(_QWORD *)(j + 168) + 32LL);
              v9 = *(_QWORD *)(v8 + 48);
              if ( v9 )
              {
                if ( v8 == *(_QWORD *)(v9 + 2528) )
                {
                  v10 = *(_DWORD *)(v9 + 2560);
                  v16.x = -v10;
                  v11 = *(_DWORD *)(v9 + 2564);
                  v16.y = -v11;
                  if ( v10 || v11 )
                  {
                    RGNOBJ::bOffset((RGNOBJ *)v23, &v16);
                    LODWORD(v24) = v16.x + v24;
                    DWORD2(v24) += v16.x;
                    DWORD1(v24) += v16.y;
                    HIDWORD(v24) += v16.y;
                  }
                }
              }
              RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v18);
              RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v18);
              RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v17);
              RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v17);
              if ( v18[0] )
              {
                if ( (_QWORD)v17 )
                {
                  RGNOBJ::vSet((RGNOBJ *)&v17, (struct _RECTL *)((char *)i + 52));
                  RGNOBJ::bCopy((RGNOBJ *)v18, (struct RGNOBJ *)v23);
                  RGNOBJAPI::iCombine((RGNOBJAPI *)v23, (struct RGNOBJ *)v18, (struct RGNOBJ *)&v17, 1);
                  if ( RGNOBJ::iCombine((RGNOBJ *)v18, (struct RGNOBJ *)v23, (struct RGNOBJ *)&v17, 1) )
                    RGNOBJAPI::bSwap((RGNOBJAPI *)v23, (struct RGNOBJ *)v18);
                }
              }
              RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v17);
              RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v18);
            }
            RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v21);
            RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v21);
            v12 = 0;
            if ( (*(_DWORD *)(j + 184) & 0x200) != 0 && v21[0] )
              v12 = RGNOBJ::bCopy((RGNOBJ *)v21, (struct RGNOBJ *)v23) != 0;
            v22 = *(_QWORD *)(j + 200);
            GreAcquireSemaphore(v22);
            if ( v12 )
            {
              v19 = *(_QWORD *)(j + 192);
              if ( v19 )
              {
                RGNOBJ::vSwap((RGNOBJ *)v21, (struct RGNOBJ *)&v19);
                *(_QWORD *)(j + 192) = v19;
              }
            }
            RGNOBJAPI::bSwap((RGNOBJAPI *)v23, (struct RGNOBJ *)(j + 56));
            v13 = *(_QWORD *)(j + 56);
            *(_DWORD *)(v13 + 28) = _InterlockedIncrement(*(volatile signed __int32 **)&REGION::ulUniqueREGION);
            v14 = *(_QWORD *)(j + 56);
            v17 = v24;
            EWNDOBJ::vSetClip(j, v14, &v17);
            RGNOBJAPI::bDeleteRGNOBJAPI((RGNOBJAPI *)v23);
            v15 = *((_DWORD *)i + 12);
            if ( (v15 & 1) != 0 )
            {
              TRACKOBJ::vUpdateDrvDelta(i, (struct EWNDOBJ *)j, 1u);
              v15 = *((_DWORD *)i + 12);
            }
            if ( (v15 & 2) != 0 )
              (*((void (__fastcall **)(__int64))i + 5))(j);
            vSpWndobjChange(*(HDEV *)(*((_QWORD *)i + 4) + 48LL), (struct EWNDOBJ *)j);
            SEMOBJ::vUnlock((SEMOBJ *)&v22);
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v21);
          }
          RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v23);
          SEMOBJ::vUnlock((SEMOBJ *)&v20);
          GreClientRgnUpdated(1);
          return;
        }
      }
      break;
    }
  }
LABEL_5:
  SEMOBJ::vUnlock((SEMOBJ *)&v20);
}
