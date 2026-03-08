/*
 * XREFs of MmShutdownSystem @ 0x140AA8E60
 * Callers:
 *     PopGracefulShutdown @ 0x140A9D970 (PopGracefulShutdown.c)
 *     PoBroadcastSystemState @ 0x140AA38F8 (PoBroadcastSystemState.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     MmTrimAllSystemPagableMemory @ 0x140633260 (MmTrimAllSystemPagableMemory.c)
 *     MiShutdownSystem @ 0x140AA8A00 (MiShutdownSystem.c)
 */

char __fastcall MmShutdownSystem(int a1)
{
  char *v2; // rbx
  __int64 v3; // rdi

  if ( !a1 )
    return MiShutdownSystem();
  if ( a1 == 1 )
  {
    if ( (unsigned int)dword_140C67AC4 < 2 )
    {
      dword_140C67AC4 = 2;
      if ( (PopShutdownCleanly & 2) != 0 )
      {
        MmTrimAllSystemPagableMemory(1);
        if ( Count )
        {
          v2 = (char *)&unk_140C6F360;
          v3 = Count;
          do
          {
            if ( (*(_WORD *)(*(_QWORD *)v2 + 204LL) & 0x840) == 0 )
              ObfDereferenceObject(*(PVOID *)(*(_QWORD *)v2 + 56LL));
            v2 += 8;
            --v3;
          }
          while ( v3 );
        }
      }
    }
  }
  else if ( (unsigned int)dword_140C67AC4 < 3 )
  {
    dword_140C67AC4 = 3;
  }
  return 1;
}
