__int64 __fastcall LookUpWndobjs(struct DCOBJ *a1, struct DCOBJ *a2, HDC *a3, int a4)
{
  unsigned int v4; // esi
  int v5; // ebp
  __int64 v9; // r15
  HDC v10; // rcx
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  v5 = 0;
  v9 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  if ( a4 <= 0 )
    return v4;
  while ( 1 )
  {
    XDCOBJ::vLock(a2, *a3);
    if ( !*(_QWORD *)a2 )
      break;
    if ( *(_QWORD *)(*(_QWORD *)a2 + 48LL) == v9 )
    {
      v10 = *a3;
      v12 = 0LL;
      if ( !(unsigned int)UserGetHwnd((__int64 *)v10, &v12, (__int64 *)a3) )
        return 0xFFFFFFFFLL;
      v4 |= 1 << v5;
    }
    else
    {
      XDCOBJ::vUnlockFast(a2);
      *(_QWORD *)a2 = 0LL;
      *a3 = 0LL;
    }
    ++a3;
    a2 = (struct DCOBJ *)((char *)a2 + 16);
    if ( ++v5 >= a4 )
      return v4;
  }
  return 0xFFFFFFFFLL;
}
