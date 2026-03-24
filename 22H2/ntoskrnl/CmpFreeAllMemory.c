/*
 * XREFs of CmpFreeAllMemory @ 0x14086BCE8
 * Callers:
 *     CmShutdownSystem @ 0x14086B948 (CmShutdownSystem.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     CmpDetachFromRegistryProcess @ 0x1405F613C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1405F6390 (CmpAttachToRegistryProcess.c)
 *     CmpGetNextActiveHive @ 0x1406EB310 (CmpGetNextActiveHive.c)
 *     CmpDestroyHive @ 0x140729DF8 (CmpDestroyHive.c)
 *     CmpDumpKeyBodyList @ 0x14086EC98 (CmpDumpKeyBodyList.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void CmpFreeAllMemory()
{
  unsigned int v0; // edi
  char v1; // si
  _QWORD *j; // rdx
  __int64 *NextActiveHive; // rbx
  __int64 v4; // r8
  _DWORD *v5; // r9
  int v6; // ecx
  int v7; // eax
  __int64 v8; // r14
  __int64 *v9; // r14
  __int64 v10; // r15
  __int64 i; // rbp
  char v12; // al
  _QWORD *v13; // rcx
  char v14; // al
  int v15; // [rsp+30h] [rbp-58h] BYREF
  _OWORD v16[3]; // [rsp+38h] [rbp-50h] BYREF

  memset(v16, 0, sizeof(v16));
  v0 = 0;
  v1 = 0;
  NextActiveHive = CmpGetNextActiveHive(0LL);
  if ( NextActiveHive )
  {
    do
    {
      v6 = *((_DWORD *)NextActiveHive + 412);
      v7 = 0;
      v8 = NextActiveHive[205];
      v15 = 0;
      if ( v6 > 0 )
      {
        v9 = (__int64 *)(v8 + 16);
        v10 = (unsigned int)v6;
        do
        {
          for ( i = *v9; i; i = *(_QWORD *)(i + 8) )
          {
            v12 = v1;
            if ( !v1 )
              v12 = 1;
            v1 = v12;
            CmpDumpKeyBodyList(i - 16, &v15);
          }
          v9 += 3;
          --v10;
        }
        while ( v10 );
        v7 = v15;
      }
      v13 = (_QWORD *)NextActiveHive[198];
      v0 += v7;
      v1 = 0;
      while ( v13 )
      {
        v4 = (__int64)(v13 + 2);
        for ( j = (_QWORD *)v13[2]; j != (_QWORD *)v4; j = (_QWORD *)*j )
        {
          if ( j[6] )
          {
            v14 = v1;
            if ( !v1 )
              v14 = 1;
            v1 = v14;
          }
        }
        v13 = (_QWORD *)*v13;
      }
      CmpAttachToRegistryProcess((__int64)v16, (__int64)j, v4, v5);
      CmpDestroyHive((volatile signed __int32 *)NextActiveHive);
      CmpDetachFromRegistryProcess((__int64)v16);
      NextActiveHive = CmpGetNextActiveHive((struct _EX_RUNDOWN_REF *)NextActiveHive);
    }
    while ( NextActiveHive );
    if ( v0 )
      KeBugCheckEx(0x51u, 0xFuLL, 1uLL, v0, 0LL);
  }
  ExFreePoolWithTag(CmpNameCacheTable, 0);
}
