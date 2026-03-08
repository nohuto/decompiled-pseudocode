/*
 * XREFs of ?GetEmbedFonts@PUBLIC_PFTOBJ@@QEAAKXZ @ 0x1C026D2B0
 * Callers:
 *     NtGdiGetEmbedFonts @ 0x1C02C56A0 (NtGdiGetEmbedFonts.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D32A0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bIsPrivatePFT@PFTOBJ@@QEBAHXZ @ 0x1C026D7EC (-bIsPrivatePFT@PFTOBJ@@QEBAHXZ.c)
 */

__int64 __fastcall PUBLIC_PFTOBJ::GetEmbedFonts(PUBLIC_PFTOBJ *this)
{
  unsigned int v2; // ebx
  __int64 result; // rax
  unsigned int v4; // esi
  unsigned int CurrentThreadId; // ebp
  Gre::Base *v6; // rcx
  __int64 v7; // r10
  __int64 *v8; // r8
  __int64 i; // rdx
  __int64 j; // rcx
  int v11; // r9d
  unsigned int v12; // eax
  __int64 v13; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  result = PFTOBJ::bIsPrivatePFT(this);
  if ( (_DWORD)result )
  {
    v4 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
    CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
    v13 = *((_QWORD *)Gre::Base::Globals(v6) + 6);
    GreAcquireSemaphore(v13);
    v7 = 20LL;
    v8 = (__int64 *)(*(_QWORD *)this + 40LL);
    do
    {
      if ( v8 )
      {
        for ( i = *v8; i; i = *(_QWORD *)(i + 8) )
        {
          for ( j = *(_QWORD *)(i + 144); j; j = *(_QWORD *)(j + 16) )
          {
            v11 = *(_DWORD *)(j + 12);
            if ( (*(_DWORD *)(j + 8) & 4) != 0 )
            {
              v12 = v2 + 1;
              if ( v11 != CurrentThreadId )
                v12 = v2;
              v2 = v12;
            }
            else if ( v11 == v4 )
            {
              ++v2;
            }
          }
        }
      }
      ++v8;
      --v7;
    }
    while ( v7 );
    SEMOBJ::vUnlock((SEMOBJ *)&v13);
    return v2;
  }
  return result;
}
