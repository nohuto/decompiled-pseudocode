UNDODESKTOPCOORD *__fastcall UNDODESKTOPCOORD::UNDODESKTOPCOORD(
        UNDODESKTOPCOORD *this,
        struct EWNDOBJ *a2,
        struct _SPRITESTATE *a3)
{
  __int64 v5; // rax
  int v6; // edx
  int v7; // r8d
  struct _POINTL v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  *(_QWORD *)this = 0LL;
  if ( a2 && (*((_DWORD *)a2 + 46) & 0x100) != 0 )
  {
    v5 = *(_QWORD *)a3;
    *(_QWORD *)this = a2;
    v6 = *(_DWORD *)(v5 + 2560);
    *((_DWORD *)this + 2) = v6;
    v7 = *(_DWORD *)(v5 + 2564);
    *((_DWORD *)this + 3) = v7;
    EWNDOBJ::vOffset(a2, -v6, -v7);
    if ( (*((_DWORD *)a2 + 46) & 0x200) != 0 && *((_QWORD *)a2 + 24) )
    {
      v10 = *((_QWORD *)a2 + 24);
      v9.x = -*((_DWORD *)this + 2);
      v9.y = -*((_DWORD *)this + 3);
      RGNOBJ::bOffset((RGNOBJ *)&v10, &v9);
    }
    *((_DWORD *)a2 + 46) &= ~0x100u;
  }
  return this;
}
