__int64 __fastcall HmgLockAndModifyHandleType(struct OBJECT *a1, __int64 a2)
{
  unsigned int v3; // ebx
  int v4; // eax
  _BYTE v6[8]; // [rsp+30h] [rbp-28h] BYREF
  int v7; // [rsp+38h] [rbp-20h]

  v3 = 1;
  HANDLELOCK::HANDLELOCK((HANDLELOCK *)v6, a1, 1, 0, 0);
  v4 = v7;
  if ( v7 )
  {
    HmgModifyHandleType(a2);
    HANDLELOCK::vUnlock((HANDLELOCK *)v6);
    v4 = v7;
  }
  else
  {
    v3 = 0;
  }
  if ( v4 )
    HANDLELOCK::vUnlock((HANDLELOCK *)v6);
  return v3;
}
