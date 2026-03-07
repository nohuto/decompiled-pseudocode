__int64 __fastcall HmgUnlock(unsigned int a1)
{
  __int16 v1; // ebx^2
  unsigned int v2; // edi
  struct OBJECT *v3; // rax
  __int64 v5; // [rsp+30h] [rbp-28h] BYREF
  int v6; // [rsp+38h] [rbp-20h]

  v1 = HIWORD(a1);
  v5 = 0LL;
  v6 = 0;
  v2 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v5, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 1, 0, 0);
  if ( v6 )
  {
    if ( *(_BYTE *)(v5 + 14) == 4 && *(_WORD *)(v5 + 12) == v1 )
    {
      v3 = HANDLELOCK::pObj((HANDLELOCK *)&v5);
      if ( v3 )
      {
        if ( *((_WORD *)v3 + 6) && *((struct _KTHREAD **)v3 + 2) == KeGetCurrentThread() )
        {
          _InterlockedDecrement((volatile signed __int32 *)v3 + 3);
          v2 = 1;
        }
      }
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)&v5);
    if ( v6 )
      HANDLELOCK::vUnlock((HANDLELOCK *)&v5);
  }
  return v2;
}
