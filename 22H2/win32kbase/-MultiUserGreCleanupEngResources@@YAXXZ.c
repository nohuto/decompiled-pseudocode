/*
 * XREFs of ?MultiUserGreCleanupEngResources@@YAXXZ @ 0x1C007E0FC
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C007D498 (MultiUserNtGreCleanup.c)
 * Callees:
 *     GreDeleteSemaphore @ 0x1C005C290 (GreDeleteSemaphore.c)
 *     EngFreeMem @ 0x1C007E1D0 (EngFreeMem.c)
 *     GreDeleteSemaphoreNonTracked @ 0x1C007E2B0 (GreDeleteSemaphoreNonTracked.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

void MultiUserGreCleanupEngResources(void)
{
  int v0; // edx
  struct _LIST_ENTRY *v1; // rbx
  int Flink; // edx
  int v3; // edx
  int v4; // eax
  int v5; // eax

  if ( MultiUserEngAllocListLock )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        if ( MultiUserGreEngAllocList.Flink == &MultiUserGreEngAllocList )
          goto LABEL_11;
        v1 = MultiUserGreEngAllocList.Flink + 2;
        Flink = (int)MultiUserGreEngAllocList.Flink[1].Flink;
        if ( Flink )
          break;
        EngFreeMem(&MultiUserGreEngAllocList.Flink[2]);
      }
      v0 = Flink - 1;
      if ( v0 )
      {
        v3 = v0 - 1;
        if ( v3 )
        {
          if ( v3 == 2 )
            goto LABEL_4;
        }
        else
        {
          if ( qword_1C0255500 )
            v4 = qword_1C0255500();
          else
            v4 = -1073741637;
          if ( v4 >= 0 )
          {
            if ( qword_1C0255508 )
              qword_1C0255508(v1);
          }
        }
      }
      else
      {
LABEL_4:
        GreDeleteSemaphore((PERESOURCE)&MultiUserGreEngAllocList.Flink[2]);
      }
    }
  }
LABEL_11:
  if ( GreEngLoadModuleAllocListLock )
  {
    while ( GreEngLoadModuleAllocList.Flink != &GreEngLoadModuleAllocList )
    {
      LODWORD(GreEngLoadModuleAllocList.Flink[1].Flink) = 1;
      if ( qword_1C0255510 )
        v5 = qword_1C0255510();
      else
        v5 = -1073741637;
      if ( v5 >= 0 && qword_1C0255518 )
        qword_1C0255518(&GreEngLoadModuleAllocList.Flink[1].Blink);
    }
  }
  GreDeleteSemaphoreNonTracked(MultiUserEngAllocListLock);
  MultiUserEngAllocListLock = 0LL;
  GreDeleteSemaphoreNonTracked(GreEngLoadModuleAllocListLock);
  GreEngLoadModuleAllocListLock = 0LL;
}
