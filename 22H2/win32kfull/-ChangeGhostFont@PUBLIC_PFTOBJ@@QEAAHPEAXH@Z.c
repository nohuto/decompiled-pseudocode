/*
 * XREFs of ?ChangeGhostFont@PUBLIC_PFTOBJ@@QEAAHPEAXH@Z @ 0x1C0271FD8
 * Callers:
 *     GreChangeGhostFont @ 0x1C027C210 (GreChangeGhostFont.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C009029C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z @ 0x1C0160C1C (-GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z.c)
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x1C016A260 (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 */

__int64 __fastcall PUBLIC_PFTOBJ::ChangeGhostFont(struct PFT **const *this, void *a2, int a3)
{
  unsigned int v3; // ebx
  unsigned int v5; // edi
  unsigned int v8; // r15d
  unsigned int CurrentThreadId; // r13d
  struct PFF *PFFFromId; // rax
  unsigned int v11; // edi
  struct PFF *v12; // r12
  __int64 v13; // rsi
  struct PFF **v14; // rcx
  struct PFF *i; // rcx
  struct PFF *v16; // rax
  struct PFF *v17; // r8
  __int64 j; // rcx
  int v19; // edx
  int v20; // eax
  bool v21; // zf
  int v22; // eax
  __int64 v23; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  v5 = (unsigned int)a2;
  if ( *this != gpPFTPrivate )
    return 0LL;
  v8 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v23 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  PFFFromId = GetPFFFromId(gpPFTPrivate, v5, 0LL);
  v11 = 0;
  v12 = PFFFromId;
  v13 = 5LL;
  do
  {
    if ( v3 )
      break;
    v14 = &(*this)[v13];
    if ( v14 )
    {
      for ( i = *v14; ; i = (struct PFF *)*((_QWORD *)v17 + 1) )
      {
        v16 = SkipInvalidPff(i);
        v17 = v16;
        if ( !v16 )
          break;
        if ( v12 == v16 )
        {
          for ( j = *((_QWORD *)v16 + 18); j; j = *(_QWORD *)(j + 16) )
          {
            v19 = *(_DWORD *)(j + 8);
            v20 = *(_DWORD *)(j + 12);
            if ( (v19 & 4) != 0 )
              v21 = v20 == CurrentThreadId;
            else
              v21 = v20 == v8;
            if ( v21 )
            {
              v22 = *(_DWORD *)(j + 4);
              if ( a3 )
              {
                v3 = 1;
                *(_DWORD *)(j + 4) = v22 + 1;
                *(_DWORD *)(j + 8) = v19 | 0x40;
                goto LABEL_22;
              }
              if ( v22 )
              {
                *(_DWORD *)(j + 4) = v22 - 1;
                *(_DWORD *)(j + 8) = v19 & 0xFFFFFFBF;
              }
              break;
            }
          }
        }
      }
    }
LABEL_22:
    ++v11;
    ++v13;
  }
  while ( v11 < 0x14 );
  SEMOBJ::vUnlock((SEMOBJ *)&v23);
  return v3;
}
