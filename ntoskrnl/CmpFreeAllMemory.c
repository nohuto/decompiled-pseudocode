/*
 * XREFs of CmpFreeAllMemory @ 0x140A0E6C8
 * Callers:
 *     CmShutdownSystem2 @ 0x1406139DC (CmShutdownSystem2.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     CmpGetNextActiveHive @ 0x1406BD940 (CmpGetNextActiveHive.c)
 *     CmpDumpKeyBodyList @ 0x140A143F8 (CmpDumpKeyBodyList.c)
 *     CmpDestroyHive @ 0x140A19FFC (CmpDestroyHive.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     CmpAttachToRegistryProcess @ 0x140AF26E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AF2710 (CmpDetachFromRegistryProcess.c)
 */

void CmpFreeAllMemory()
{
  unsigned int v0; // ebp
  __int64 *NextActiveHive; // rbx
  int v2; // ecx
  int v3; // eax
  __int64 v4; // rsi
  __int64 *v5; // rsi
  __int64 v6; // r14
  __int64 i; // rdi
  int v8; // [rsp+30h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+38h] [rbp-40h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  v0 = 0;
  NextActiveHive = CmpGetNextActiveHive(0LL);
  if ( NextActiveHive )
  {
    do
    {
      v2 = *((_DWORD *)NextActiveHive + 414);
      v3 = 0;
      v4 = NextActiveHive[206];
      v8 = 0;
      if ( v2 > 0 )
      {
        v5 = (__int64 *)(v4 + 16);
        v6 = (unsigned int)v2;
        do
        {
          for ( i = *v5; i; i = *(_QWORD *)(i + 8) )
            CmpDumpKeyBodyList(i - 16, &v8);
          v5 += 3;
          --v6;
        }
        while ( v6 );
        v3 = v8;
      }
      v0 += v3;
      CmpAttachToRegistryProcess(&ApcState);
      CmpDestroyHive(NextActiveHive);
      CmpDetachFromRegistryProcess(&ApcState);
      NextActiveHive = CmpGetNextActiveHive((struct _EX_RUNDOWN_REF *)NextActiveHive);
    }
    while ( NextActiveHive );
    if ( v0 )
      KeBugCheckEx(0x51u, 0xFuLL, 1uLL, v0, 0LL);
  }
  ExFreePoolWithTag(CmpNameCacheTable, 0);
}
