/*
 * XREFs of ?UmfdGetServerPort@@YAPEAXW4FontDriverType@@@Z @ 0x1C00BB0B4
 * Callers:
 *     ?UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C00BAFD8 (-UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     ?UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C01255E8 (-UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UmfdGetServerPort(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax

  v1 = (int)a1;
  v2 = SGDGetSessionState(a1);
  if ( (unsigned int)v1 > 3 )
    return 0LL;
  else
    return *(_QWORD *)(*(_QWORD *)(v2 + 40) + 8 * v1 + 48);
}
