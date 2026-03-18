/*
 * XREFs of ?GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@@Z @ 0x1C00B5D20
 * Callers:
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HH@Z @ 0x1C0037EE0 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 *     GreTransferDwmStateToSpriteState @ 0x1C0097BB8 (GreTransferDwmStateToSpriteState.c)
 * Callees:
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C00857A4 (-bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPE.c)
 *     ?pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C00B628C (-pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX_N@Z @ 0x1C027F8E8 (-pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX_N@Z.c)
 */

__int64 __fastcall GdiUpdateSprite(
        HDEV a1,
        HWND a2,
        void *a3,
        HDC a4,
        struct _POINTL *a5,
        struct tagSIZE *a6,
        HDC a7,
        struct _POINTL *a8,
        unsigned int a9,
        struct _BLENDFUNCTION *a10,
        unsigned int a11,
        struct _RECTL *a12)
{
  unsigned int updated; // ebx
  struct _RECTL *v16; // rsi
  HDEV v17; // rdi
  const struct _SPRITESTATE *v18; // rcx
  struct SPRITE *Sprite; // rcx
  int v21; // r9d
  int v22; // r10d
  struct _METASPRITE *MetaSprite; // r13
  __int64 v24; // r14
  struct _POINTL *v25; // r8
  __int64 v26; // rax
  int v27; // [rsp+50h] [rbp-59h]
  HDEV v28; // [rsp+58h] [rbp-51h] BYREF
  struct _POINTL v29; // [rsp+60h] [rbp-49h] BYREF
  struct _BLENDFUNCTION *v30; // [rsp+68h] [rbp-41h]
  struct _POINTL *v31; // [rsp+70h] [rbp-39h]
  HDC v32; // [rsp+78h] [rbp-31h]
  struct tagSIZE *v33; // [rsp+80h] [rbp-29h]
  HDC v34; // [rsp+88h] [rbp-21h]
  _BYTE v35[8]; // [rsp+90h] [rbp-19h] BYREF
  struct _RECTL v36; // [rsp+98h] [rbp-11h] BYREF

  updated = 0;
  v29 = 0LL;
  v27 = 0;
  v16 = a12;
  v33 = a6;
  v32 = a7;
  v31 = a8;
  v30 = a10;
  v34 = a4;
  if ( (a11 & 0x200000) == 0 )
  {
    GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    GreAcquireSemaphore(ghsemGreLock);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
    v27 = 1;
  }
  if ( a12 )
  {
    v16 = &v36;
    v36 = *a12;
  }
  v28 = a1;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v35, (struct PDEVOBJ *)&v28);
  PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v28);
  v17 = v28;
  v18 = (const struct _SPRITESTATE *)(v28 + 20);
  if ( *((_DWORD *)v28 + 35) )
  {
    MetaSprite = pSpGetMetaSprite(v18, a2, a3, 0);
    if ( MetaSprite )
    {
      v24 = 0LL;
      updated = v21 + 1;
      if ( v22 )
      {
        do
        {
          v25 = 0LL;
          v26 = *(_QWORD *)(*((_QWORD *)v17 + 18) + 8 * v24);
          if ( a5 )
          {
            v25 = &v29;
            v29.x = a5->x - *(_DWORD *)(v26 + 2560);
            v29.y = a5->y - *(_DWORD *)(v26 + 2564);
          }
          updated &= bSpUpdateSprite(
                       *((struct SPRITE **)MetaSprite + v24 + 3),
                       v34,
                       v25,
                       v33,
                       v32,
                       v31,
                       a9,
                       v30,
                       a11,
                       v16);
          v24 = (unsigned int)(v24 + 1);
        }
        while ( (unsigned int)v24 < *((_DWORD *)v17 + 35) );
      }
    }
  }
  else
  {
    Sprite = pSpGetSprite(v18, a2, a3);
    if ( Sprite )
      updated = bSpUpdateSprite(Sprite, v34, a5, v33, v32, v31, a9, v30, a11, v16);
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v35);
  if ( v27 )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
    GreReleaseSemaphoreInternal(ghsemGreLock);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  }
  return updated;
}
