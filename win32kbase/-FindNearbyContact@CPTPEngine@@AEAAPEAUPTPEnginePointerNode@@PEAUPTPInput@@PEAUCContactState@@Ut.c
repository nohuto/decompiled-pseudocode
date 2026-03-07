struct PTPEnginePointerNode *__fastcall CPTPEngine::FindNearbyContact(
        CPTPEngine *this,
        struct PTPInput *a2,
        struct CContactState *a3,
        struct tagPOINT a4,
        unsigned int a5)
{
  unsigned int v5; // ebx
  char *v6; // r10
  unsigned int v7; // r11d
  unsigned int v9; // esi
  struct CContactState *v10; // rcx

  v5 = *((_DWORD *)a2 + 12);
  v6 = (char *)a2 + 56;
  v7 = 0;
  if ( !v5 )
    return 0LL;
  v9 = *((_DWORD *)this + 4);
  while ( 1 )
  {
    v10 = (CPTPEngine *)((char *)this + 400 * (*((_DWORD *)v6 + 1) % v9) + 1208);
    if ( v10 != a3
      && (*(_DWORD *)v10 & 0x20000000) != 0
      && (int)((HIDWORD(*((_QWORD *)v6 + 5)) - a4.y) * (HIDWORD(*((_QWORD *)v6 + 5)) - a4.y)
             + (*((_QWORD *)v6 + 5) - a4.x) * (*((_QWORD *)v6 + 5) - a4.x)) <= (unsigned __int64)(a5 * a5) )
    {
      break;
    }
    ++v7;
    v6 += 96;
    if ( v7 >= v5 )
      return 0LL;
  }
  return (struct PTPEnginePointerNode *)v6;
}
