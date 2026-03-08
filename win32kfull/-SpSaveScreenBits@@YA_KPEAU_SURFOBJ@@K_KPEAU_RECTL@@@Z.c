/*
 * XREFs of ?SpSaveScreenBits@@YA_KPEAU_SURFOBJ@@K_KPEAU_RECTL@@@Z @ 0x1C027E9D0
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D32A0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     ??1DEVEXCLUDERECT@@QEAA@XZ @ 0x1C02778A8 (--1DEVEXCLUDERECT@@QEAA@XZ.c)
 *     ??0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z @ 0x1C027C2F4 (--0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z.c)
 *     ??1UNDODESKTOPCOORD@@QEAA@XZ @ 0x1C027C4BC (--1UNDODESKTOPCOORD@@QEAA@XZ.c)
 *     ?GreTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x1C027D798 (-GreTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z.c)
 */

__int64 __fastcall SpSaveScreenBits(struct _SURFOBJ *a1, unsigned int a2, __int64 a3, struct _RECTL *a4)
{
  HDEV hdev; // r12
  __int64 v5; // rbx
  int v6; // esi
  __int64 v10; // rax
  Gre::Base *v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 i; // rbx
  struct _RECTL v16; // xmm0
  __int64 v17; // rbx
  __int64 v18; // [rsp+30h] [rbp-39h] BYREF
  __int64 v19; // [rsp+38h] [rbp-31h]
  _BYTE v20[16]; // [rsp+40h] [rbp-29h] BYREF
  int v21; // [rsp+50h] [rbp-19h] BYREF
  HDEV v22; // [rsp+58h] [rbp-11h]
  struct _RECTL v23; // [rsp+60h] [rbp-9h]
  __int64 v24; // [rsp+70h] [rbp+7h]

  hdev = a1->hdev;
  v5 = a3;
  v6 = 0;
  v19 = a3;
  v24 = 0LL;
  v21 = 0;
  v10 = SGDGetSessionState(a1);
  if ( !*((_QWORD *)hdev + 172) )
    goto LABEL_18;
  v12 = *(_QWORD *)(v10 + 32);
  if ( !*(_QWORD *)(v12 + 23664) )
    goto LABEL_18;
  if ( !a2 )
  {
    v18 = *((_QWORD *)Gre::Base::Globals(v11) + 7);
    GreAcquireSemaphore(v18);
    v13 = *(_QWORD *)(v12 + 23664);
    if ( v13 )
    {
      while ( !v6 )
      {
        for ( i = *(_QWORD *)(v13 + 24); i; i = *(_QWORD *)(i + 160) )
        {
          UNDODESKTOPCOORD::UNDODESKTOPCOORD(
            (UNDODESKTOPCOORD *)v20,
            (struct EWNDOBJ *)i,
            (struct _SPRITESTATE *)(hdev + 20));
          if ( (*(_DWORD *)(i + 184) & 0x1000000) != 0
            && (unsigned int)bIntersect(i + 4, a4)
            && RGNOBJ::bInside((RGNOBJ *)(i + 56), a4) == 2 )
          {
            v6 = 1;
            UNDODESKTOPCOORD::~UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v20);
            break;
          }
          UNDODESKTOPCOORD::~UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v20);
        }
        v13 = *(_QWORD *)(v13 + 8);
        if ( !v13 )
        {
          if ( !v6 )
            goto LABEL_17;
          break;
        }
      }
      SEMOBJ::vUnlock((SEMOBJ *)&v18);
      v5 = v19;
      goto LABEL_20;
    }
LABEL_17:
    SEMOBJ::vUnlock((SEMOBJ *)&v18);
LABEL_18:
    DEVEXCLUDERECT::~DEVEXCLUDERECT((DEVEXCLUDERECT *)&v21);
    return 0LL;
  }
  if ( a2 != 2 )
  {
LABEL_20:
    v16 = *a4;
    v22 = a1->hdev;
    v23 = v16;
    v21 = GreTearDownSprites(v22, a4);
  }
  v17 = (*((__int64 (__fastcall **)(struct _SURFOBJ *, _QWORD, __int64, struct _RECTL *))hdev + 172))(a1, a2, v5, a4);
  DEVEXCLUDERECT::~DEVEXCLUDERECT((DEVEXCLUDERECT *)&v21);
  return v17;
}
