/*
 * XREFs of ?ChangeGhostFont@PUBLIC_PFTOBJ@@QEAAHPEAXH@Z @ 0x1C0270288
 * Callers:
 *     GreChangeGhostFont @ 0x1C027A3B0 (GreChangeGhostFont.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C001174C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z @ 0x1C0112B1C (-GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z.c)
 */

__int64 __fastcall PUBLIC_PFTOBJ::ChangeGhostFont(struct PFT **const *this, void *a2, int a3)
{
  unsigned int v3; // ebx
  unsigned int v5; // edi
  unsigned int v7; // r14d
  unsigned int CurrentThreadId; // r15d
  struct PFF *PFFFromId; // r11
  __int64 v10; // r10
  unsigned int i; // r9d
  struct PFT **v12; // rdx
  struct PFT *j; // rdx
  __int64 k; // rcx
  int v15; // r8d
  bool v16; // zf
  int v17; // eax
  __int64 v19; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v5 = (unsigned int)a2;
  if ( *this != gpPFTPrivate )
    return 0LL;
  v7 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v19 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  PFFFromId = GetPFFFromId(gpPFTPrivate, v5, 0LL);
  v10 = 5LL;
  for ( i = 0; i < 0x14; ++i )
  {
    if ( v3 )
      break;
    v12 = &(*this)[v10];
    if ( v12 )
    {
      for ( j = *v12; j; j = (struct PFT *)*((_QWORD *)j + 1) )
      {
        if ( PFFFromId == j )
        {
          for ( k = *((_QWORD *)j + 18); k; k = *(_QWORD *)(k + 16) )
          {
            v15 = *(_DWORD *)(k + 8);
            if ( (v15 & 4) != 0 )
              v16 = *(_DWORD *)(k + 12) == CurrentThreadId;
            else
              v16 = *(_DWORD *)(k + 12) == v7;
            if ( v16 )
            {
              v17 = *(_DWORD *)(k + 4);
              if ( a3 )
              {
                v3 = 1;
                *(_DWORD *)(k + 4) = v17 + 1;
                *(_DWORD *)(k + 8) = v15 | 0x40;
                goto LABEL_22;
              }
              if ( v17 )
              {
                *(_DWORD *)(k + 4) = v17 - 1;
                *(_DWORD *)(k + 8) = v15 & 0xFFFFFFBF;
              }
              break;
            }
          }
        }
      }
    }
LABEL_22:
    ++v10;
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v19);
  return v3;
}
