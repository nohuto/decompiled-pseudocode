/*
 * XREFs of GdiUnmapGDIW32PIDLockedBitmaps @ 0x1C006BFB0
 * Callers:
 *     GdiProcessCallout @ 0x1C006FD60 (GdiProcessCallout.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00219D4 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C004B690 (EngAcquireSemaphore.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C004E7E8 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C004E850 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 */

void __fastcall GdiUnmapGDIW32PIDLockedBitmaps(__int64 a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rbx
  _QWORD *v4; // rdx
  _QWORD *v5; // r8
  _QWORD *v6; // rax
  _QWORD *v7; // rcx
  _QWORD *v8; // rax
  HSEMAPHORE v9; // [rsp+30h] [rbp+8h] BYREF

  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v9);
  v9 = *(HSEMAPHORE *)(*(_QWORD *)(SGDGetSessionState(v2) + 24) + 104LL);
  EngAcquireSemaphore(v9);
  v3 = (_QWORD *)(a1 + 224);
  v4 = (_QWORD *)*v3;
  if ( *v3 )
  {
    while ( v4 != v3 )
    {
      v5 = (_QWORD *)*v4;
      v6 = v4;
      v7 = v4;
      v4 = v5;
      *(v6 - 33) = 0LL;
      *(v6 - 34) = 0LL;
      if ( (_QWORD *)v5[1] != v6 || (v8 = (_QWORD *)v6[1], (_QWORD *)*v8 != v7) )
        __fastfail(3u);
      *v8 = v5;
      v5[1] = v8;
      v7[1] = v7;
      *v7 = v7;
    }
  }
  v3[1] = v3;
  *v3 = v3;
  SEMOBJ::vUnlock((PERESOURCE *)&v9);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v9);
}
