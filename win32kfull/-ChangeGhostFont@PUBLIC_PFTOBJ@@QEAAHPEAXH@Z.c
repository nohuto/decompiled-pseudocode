/*
 * XREFs of ?ChangeGhostFont@PUBLIC_PFTOBJ@@QEAAHPEAXH@Z @ 0x1C026D16C
 * Callers:
 *     GreChangeGhostFont @ 0x1C027A490 (GreChangeGhostFont.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D32A0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z @ 0x1C014CD9A (-GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z.c)
 *     ?bIsPrivatePFT@PFTOBJ@@QEBAHXZ @ 0x1C026D7EC (-bIsPrivatePFT@PFTOBJ@@QEBAHXZ.c)
 */

__int64 __fastcall PUBLIC_PFTOBJ::ChangeGhostFont(PUBLIC_PFTOBJ *this, void *a2, int a3)
{
  unsigned int v4; // esi
  unsigned int v6; // edi
  __int64 result; // rax
  unsigned int v8; // r15d
  unsigned int CurrentThreadId; // r12d
  Gre::Base *v10; // rcx
  struct Gre::Base::SESSION_GLOBALS *v11; // rbx
  struct PFF *PFFFromId; // rax
  unsigned int v13; // r9d
  struct PFF *v14; // r11
  __int64 v15; // r10
  __int64 *v16; // rdx
  __int64 i; // rdx
  __int64 j; // rcx
  int v19; // r8d
  int v20; // eax
  bool v21; // zf
  int v22; // eax
  __int64 v23; // [rsp+68h] [rbp+20h] BYREF

  v4 = (unsigned int)a2;
  v6 = 0;
  result = PFTOBJ::bIsPrivatePFT(this);
  if ( (_DWORD)result )
  {
    v8 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
    CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
    v11 = Gre::Base::Globals(v10);
    v23 = *((_QWORD *)v11 + 6);
    GreAcquireSemaphore(v23);
    PFFFromId = GetPFFFromId(*((struct PFT **)v11 + 796), v4, 0LL);
    v13 = 0;
    v14 = PFFFromId;
    v15 = 40LL;
    do
    {
      if ( v6 )
        break;
      v16 = (__int64 *)(v15 + *(_QWORD *)this);
      if ( v16 )
      {
        for ( i = *v16; i; i = *(_QWORD *)(i + 8) )
        {
          if ( v14 == (struct PFF *)i )
          {
            for ( j = *(_QWORD *)(i + 144); j; j = *(_QWORD *)(j + 16) )
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
                  v6 = 1;
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
      ++v13;
      v15 += 8LL;
    }
    while ( v13 < 0x14 );
    SEMOBJ::vUnlock((SEMOBJ *)&v23);
    return v6;
  }
  return result;
}
