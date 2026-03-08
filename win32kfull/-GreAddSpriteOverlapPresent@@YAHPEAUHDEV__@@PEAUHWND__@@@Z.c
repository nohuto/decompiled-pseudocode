/*
 * XREFs of ?GreAddSpriteOverlapPresent@@YAHPEAUHDEV__@@PEAUHWND__@@@Z @ 0x1C027D564
 * Callers:
 *     ?InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z @ 0x1C0271694 (-InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z.c)
 * Callees:
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1C001884C (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0018890 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C010D9A8 (-vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?pSpCreatePresent@@YAPEAU_PRESENT@@PEAUHDEV__@@PEAUHWND__@@@Z @ 0x1C0281DB0 (-pSpCreatePresent@@YAPEAU_PRESENT@@PEAUHDEV__@@PEAUHWND__@@@Z.c)
 *     ?pSpGetPresent@@YAPEAU_PRESENT@@PEAUHDEV__@@PEAUHWND__@@@Z @ 0x1C0281EBC (-pSpGetPresent@@YAPEAU_PRESENT@@PEAUHDEV__@@PEAUHWND__@@@Z.c)
 *     ?vSpRemovePresent@@YAXPEAUHDEV__@@PEAU_PRESENT@@@Z @ 0x1C0284DE4 (-vSpRemovePresent@@YAXPEAUHDEV__@@PEAU_PRESENT@@@Z.c)
 */

__int64 __fastcall GreAddSpriteOverlapPresent(HDEV a1, HWND a2)
{
  REGION **v2; // r12
  unsigned int v3; // esi
  BOOL v6; // edi
  unsigned int v7; // r12d
  HWND v8; // rdx
  HDEV v9; // rcx
  struct _PRESENT *Present; // r14
  unsigned int i; // r12d
  struct _PRESENT *v12; // rax
  HDEV v13; // rcx
  void *v14; // rdx
  SPRITERANGELOCK *v15; // rbx
  HWND v16; // rdx
  HDEV v17; // rcx
  unsigned int v18; // r12d
  __int64 v19; // rdi
  __int64 v20; // rbx
  Gre::Base *v21; // rcx
  Gre::Base *v22; // rcx
  SPRITERANGELOCK *v24; // [rsp+50h] [rbp+8h]
  SPRITERANGELOCK *v25; // [rsp+50h] [rbp+8h]

  v2 = (REGION **)(a1 + 20);
  v3 = 0;
  v6 = 0;
  if ( !*((_DWORD *)a1 + 35) )
  {
    v15 = (SPRITERANGELOCK *)(a1 + 50);
    SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(a1 + 50));
    Present = pSpGetPresent(a1, a2);
    if ( !Present )
    {
      Present = pSpCreatePresent(v17, v16);
      v6 = Present != 0LL;
    }
    SPRITERANGELOCK::vUnlock(v15);
    goto LABEL_16;
  }
  v7 = 0;
  while ( 1 )
  {
    v24 = (SPRITERANGELOCK *)(*(_QWORD *)(*((_QWORD *)a1 + 18) + 8LL * v7) + 200LL);
    SPRITERANGELOCK::vLockExclusive(v24);
    Present = pSpGetPresent(*(HDEV *)(*((_QWORD *)a1 + 18) + 8LL * v7), a2);
    if ( !Present )
      break;
LABEL_6:
    SPRITERANGELOCK::vUnlock(v24);
    if ( ++v7 >= *((_DWORD *)a1 + 35) )
      goto LABEL_12;
  }
  Present = pSpCreatePresent(v9, v8);
  if ( Present )
  {
    v6 = 1;
    goto LABEL_6;
  }
  SPRITERANGELOCK::vUnlock(v24);
  v6 = 0;
  for ( i = 0; i < *((_DWORD *)a1 + 35); ++i )
  {
    v25 = (SPRITERANGELOCK *)(*(_QWORD *)(*((_QWORD *)a1 + 18) + 8LL * i) + 200LL);
    SPRITERANGELOCK::vLockExclusive(v25);
    v12 = pSpGetPresent(*(HDEV *)(*((_QWORD *)a1 + 18) + 8LL * i), a2);
    Present = v12;
    if ( v12 )
    {
      vSpRemovePresent(v13, v12);
      Win32FreePool(v14);
    }
    SPRITERANGELOCK::vUnlock(v25);
  }
LABEL_12:
  v15 = (SPRITERANGELOCK *)(a1 + 50);
  v2 = (REGION **)(a1 + 20);
LABEL_16:
  if ( v6 )
  {
    if ( *((_DWORD *)a1 + 35) )
    {
      v18 = 0;
      do
      {
        v19 = *(_QWORD *)(*((_QWORD *)a1 + 18) + 8LL * v18);
        SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(v19 + 200));
        v20 = *(_QWORD *)(*((_QWORD *)a1 + 18) + 8LL * v18);
        Gre::Base::Globals(v21);
        vSpComputeNoPresentRegion((REGION **)(v20 + 80), 0);
        SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(v19 + 200));
        ++v18;
      }
      while ( v18 < *((_DWORD *)a1 + 35) );
    }
    else
    {
      SPRITERANGELOCK::vLockExclusive(v15);
      Gre::Base::Globals(v22);
      vSpComputeNoPresentRegion(v2, 0);
      SPRITERANGELOCK::vUnlock(v15);
    }
  }
  LOBYTE(v3) = Present != 0LL;
  return v3;
}
