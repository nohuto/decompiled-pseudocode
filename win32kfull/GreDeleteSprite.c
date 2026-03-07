__int64 __fastcall GreDeleteSprite(Gre::Base *a1, HWND a2, void *a3, int a4)
{
  unsigned int v8; // ebx
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF

  v10[0] = *((_QWORD *)Gre::Base::Globals(a1) + 15);
  GreAcquireSemaphore(v10[0]);
  v8 = GreDeleteSpriteInternal((HDEV)a1, a2, a3, a4);
  SEMOBJ::vUnlock((SEMOBJ *)v10);
  return v8;
}
