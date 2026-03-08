/*
 * XREFs of DrvDbSuspendDatabase @ 0x14081C16C
 * Callers:
 *     PiDrvDbSuspendNodes @ 0x14081C10C (PiDrvDbSuspendNodes.c)
 * Callees:
 *     _wcsicmp @ 0x1403D3ED0 (_wcsicmp.c)
 *     DrvDbFindDatabaseNode @ 0x1408661B4 (DrvDbFindDatabaseNode.c)
 */

__int64 __fastcall DrvDbSuspendDatabase(__int64 a1, const wchar_t *a2, char a3)
{
  __int64 v3; // rsi
  int DatabaseNode; // edi
  __int64 v7; // r9
  __int64 *i; // rcx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v3 = PiDrvDbCtx;
  DatabaseNode = 0;
  v10 = 0LL;
  if ( a2 && wcsicmp(a2, L"*") )
  {
    DatabaseNode = DrvDbFindDatabaseNode(v3, a2, &v10, v7);
    if ( DatabaseNode >= 0 )
    {
      if ( a3 )
        *(_DWORD *)(v10 + 64) |= 4u;
      else
        *(_DWORD *)(v10 + 64) &= ~4u;
    }
  }
  else
  {
    for ( i = *(__int64 **)(v3 + 16); i != (__int64 *)(v3 + 16); i = (__int64 *)*i )
    {
      if ( a3 )
        *((_DWORD *)i + 16) |= 4u;
      else
        *((_DWORD *)i + 16) &= ~4u;
    }
  }
  return (unsigned int)DatabaseNode;
}
