/*
 * XREFs of IopReleaseFilteredBootResources @ 0x140803C88
 * Callers:
 *     PnpAllocateResources @ 0x1406F5CE0 (PnpAllocateResources.c)
 * Callees:
 *     PnpRequestDeviceAction @ 0x1402F5074 (PnpRequestDeviceAction.c)
 *     PnpReleaseBootResourcesForFilteredRequirements @ 0x14055F1D4 (PnpReleaseBootResourcesForFilteredRequirements.c)
 *     PipClearDevNodeFlags @ 0x14068816C (PipClearDevNodeFlags.c)
 *     PnpNeedToReleaseBootResources @ 0x14080484C (PnpNeedToReleaseBootResources.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall IopReleaseFilteredBootResources(unsigned __int64 a1, unsigned __int64 a2)
{
  int v2; // edi
  unsigned __int64 v3; // rbx
  void *v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rsi
  int v8; // r14d
  void *v9; // rcx
  int v10; // [rsp+60h] [rbp+8h] BYREF

  if ( a1 < a2 )
  {
    v2 = 0;
    v3 = a1 + 40;
    do
    {
      if ( (*(_DWORD *)(v3 - 32) & 0x28) == 0 )
      {
        if ( !*(_DWORD *)(v3 + 16) && *(_DWORD *)(v3 - 28) == 4 )
        {
          v5 = *(void **)v3;
          if ( *(_QWORD *)v3 )
          {
            v10 = 0;
            v6 = *(_QWORD *)(v3 - 40);
            if ( v6 )
              v7 = *(_QWORD *)(*(_QWORD *)(v6 + 312) + 40LL);
            else
              v7 = 0LL;
            if ( (unsigned int)PnpNeedToReleaseBootResources(v7, v5, &v10) )
            {
              v2 = 1;
              v8 = PnpReleaseBootResourcesForFilteredRequirements((__int64 *)(v3 - 40));
              PipClearDevNodeFlags(v7, 128);
              if ( v8 < 0 )
              {
                v9 = *(void **)v3;
                *(_DWORD *)(v3 - 32) = 16;
                *(_DWORD *)(v3 + 16) = v8;
                ExFreePoolWithTag(v9, 0);
                *(_QWORD *)v3 = 0LL;
              }
              *(_QWORD *)(v7 + 416) = 0LL;
            }
            else if ( v10 )
            {
              v2 = 1;
            }
          }
        }
        if ( ((*(_DWORD *)(v3 - 32) & 0x10) != 0 || !*(_QWORD *)v3) && *(_DWORD *)(v3 + 16) != -1073739512 )
          *(_DWORD *)(v3 + 16) = -1073741800;
      }
      v3 += 64LL;
    }
    while ( v3 - 40 < a2 );
    if ( v2 )
      PnpRequestDeviceAction(0LL, 0, 0, 0LL, 0LL, 0LL, 0LL);
  }
}
