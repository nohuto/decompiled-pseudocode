/*
 * XREFs of CSTCleanupStack @ 0x1C00B2694
 * Callers:
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C00B1DA0 (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 * Callees:
 *     Win32FreePool @ 0x1C0038570 (Win32FreePool.c)
 *     ?CSTPop@@YAHPEAIPEAPEAX@Z @ 0x1C00B2914 (-CSTPop@@YAHPEAIPEAPEAX@Z.c)
 */

__int64 __fastcall CSTCleanupStack(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  _QWORD *v5; // rbx
  char *v6; // rcx
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF
  void *v8; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0;
  v8 = 0LL;
  result = SGDGetUserSessionState(a1, a2, a3, a4);
  if ( *(_QWORD *)(result + 8) )
  {
    while ( 1 )
    {
      result = CSTPop(&v7, &v8);
      if ( !(_DWORD)result )
        return result;
      if ( v7 == 2 || v7 == 4 )
        break;
      if ( v7 == 8 )
      {
        v5 = v8;
        if ( *(_QWORD *)v8 )
        {
          Win32FreePool(*(char **)v8);
          *v5 = 0LL;
        }
LABEL_9:
        v6 = (char *)v5[1];
        if ( v6 )
        {
          Win32FreePool(v6);
          v5[1] = 0LL;
        }
      }
    }
    v5 = v8;
    goto LABEL_9;
  }
  return result;
}
