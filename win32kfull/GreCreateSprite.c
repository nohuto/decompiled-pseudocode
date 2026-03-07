void *__fastcall GreCreateSprite(
        Gre::Base *a1,
        HWND a2,
        struct tagRECT *a3,
        struct tagMINIWINDOWINFO *a4,
        unsigned int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        unsigned __int16 *a11)
{
  void *SpriteInternal; // rbx
  __int64 v17; // [rsp+60h] [rbp-18h] BYREF

  v17 = *((_QWORD *)Gre::Base::Globals(a1) + 15);
  GreAcquireSemaphore(v17);
  SpriteInternal = GreCreateSpriteInternal((HDEV)a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
  SEMOBJ::vUnlock((SEMOBJ *)&v17);
  return SpriteInternal;
}
