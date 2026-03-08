/*
 * XREFs of DrvDbUnregisterDatabase @ 0x140A6AC64
 * Callers:
 *     PiDrvDbRegisterNode @ 0x14081C38C (PiDrvDbRegisterNode.c)
 *     PiDrvDbUnregisterNode @ 0x14096E504 (PiDrvDbUnregisterNode.c)
 * Callees:
 *     DrvDbFindDatabaseNode @ 0x1408661B4 (DrvDbFindDatabaseNode.c)
 *     DrvDbDestroyDatabaseNode @ 0x140A6ACC0 (DrvDbDestroyDatabaseNode.c)
 */

__int64 __fastcall DrvDbUnregisterDatabase(__int64 a1, const WCHAR *a2)
{
  __int64 v2; // rbx
  __int64 result; // rax
  const UNICODE_STRING *v4; // rdx
  const UNICODE_STRING *v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = PiDrvDbCtx;
  v5 = 0LL;
  result = DrvDbFindDatabaseNode(PiDrvDbCtx, a2, &v5);
  if ( (int)result >= 0 )
  {
    v4 = v5;
    if ( (*(_DWORD *)&v5[4].Length & 1) != 0 )
    {
      return 3221225485LL;
    }
    else
    {
      if ( *(const UNICODE_STRING **)(v2 + 48) == v5 )
        *(_QWORD *)(v2 + 48) = 0LL;
      return DrvDbDestroyDatabaseNode(v2, v4);
    }
  }
  return result;
}
