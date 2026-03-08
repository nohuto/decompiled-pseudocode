/*
 * XREFs of ?GetGroup@CSyncLockGroup@@SAPEAV1@I@Z @ 0x1801E362C
 * Callers:
 *     ?CheckForceParallelMode@CLegacyRenderTarget@@AEAAXXZ @ 0x1800C8188 (-CheckForceParallelMode@CLegacyRenderTarget@@AEAAXXZ.c)
 *     ?EnsureDXGIOutput@CLegacyRenderTarget@@IEAAJXZ @ 0x1800C9C4C (-EnsureDXGIOutput@CLegacyRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ??$_Emplace_reallocate@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@@?$vector@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@V?$allocator@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@@2@@std@@QEAAPEAV?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x1801E33E4 (--$_Emplace_reallocate@V-$unique_ptr@VCSyncLockGroup@@U-$default_delete@VCSyncLockGroup@@@std@@@.c)
 *     ??_GCParallelModeGroup@@QEAAPEAXI@Z @ 0x1801E35B0 (--_GCParallelModeGroup@@QEAAPEAXI@Z.c)
 */

struct CSyncLockGroup *__fastcall CSyncLockGroup::GetGroup(int a1)
{
  __int64 i; // rdx
  char *v3; // rax
  CParallelModeGroup *v4; // rcx
  char *v5; // rax
  CParallelModeGroup **v6; // rdx
  CParallelModeGroup *v7; // rcx
  CParallelModeGroup *v9; // [rsp+38h] [rbp+10h] BYREF

  for ( i = CSyncLockGroup::g_syncLockGroups; i != qword_1803E30A8 && *(_DWORD *)(*(_QWORD *)i + 8LL) != a1; i += 8LL )
    ;
  if ( i == qword_1803E30A8 )
  {
    v3 = (char *)operator new(0x38uLL);
    v4 = (CParallelModeGroup *)v3;
    if ( a1 == -1 )
    {
      if ( v3 )
      {
        *((_DWORD *)v3 + 2) = -1;
        v5 = v3 + 40;
        *((_QWORD *)v4 + 2) = v5;
        *((_QWORD *)v4 + 3) = v5;
        *((_QWORD *)v4 + 4) = (char *)v4 + 56;
        *(_QWORD *)v4 = &CParallelModeGroup::`vftable';
      }
      else
      {
        v4 = 0LL;
      }
      v6 = (CParallelModeGroup **)qword_1803E30A8;
      v9 = v4;
      if ( qword_1803E30A8 == qword_1803E30B0 )
      {
        std::vector<std::unique_ptr<CSyncLockGroup>>::_Emplace_reallocate<std::unique_ptr<CSyncLockGroup>>(
          (__int64)v4,
          qword_1803E30A8,
          (__int64 *)&v9);
        v7 = v9;
        if ( v9 )
          goto LABEL_19;
        return *(struct CSyncLockGroup **)(qword_1803E30A8 - 8);
      }
    }
    else
    {
      if ( v3 )
      {
        *((_DWORD *)v3 + 2) = a1;
        *(_QWORD *)v3 = &CSyncLockGroup::`vftable';
        *((_QWORD *)v3 + 2) = v3 + 40;
        *((_QWORD *)v3 + 3) = v3 + 40;
        *((_QWORD *)v3 + 4) = v3 + 56;
      }
      else
      {
        v4 = 0LL;
      }
      v6 = (CParallelModeGroup **)qword_1803E30A8;
      v9 = v4;
      if ( qword_1803E30A8 == qword_1803E30B0 )
      {
        std::vector<std::unique_ptr<CSyncLockGroup>>::_Emplace_reallocate<std::unique_ptr<CSyncLockGroup>>(
          (__int64)v4,
          qword_1803E30A8,
          (__int64 *)&v9);
        v7 = v9;
        if ( v9 )
LABEL_19:
          CParallelModeGroup::`scalar deleting destructor'(v7);
        return *(struct CSyncLockGroup **)(qword_1803E30A8 - 8);
      }
    }
    *v6 = v4;
    qword_1803E30A8 += 8LL;
    return *(struct CSyncLockGroup **)(qword_1803E30A8 - 8);
  }
  return *(struct CSyncLockGroup **)i;
}
