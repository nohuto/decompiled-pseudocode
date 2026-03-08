/*
 * XREFs of ?VerifyPFF@PUBLIC_PFTOBJ@@QEAAHPEAVPFF@@@Z @ 0x1C026D69C
 * Callers:
 *     NtGdiAddEmbFontToDC @ 0x1C027A7E0 (NtGdiAddEmbFontToDC.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D32A0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bIsPrivatePFT@PFTOBJ@@QEBAHXZ @ 0x1C026D7EC (-bIsPrivatePFT@PFTOBJ@@QEBAHXZ.c)
 */

__int64 __fastcall PUBLIC_PFTOBJ::VerifyPFF(PUBLIC_PFTOBJ *this, struct PFF *a2)
{
  __int64 result; // rax
  Gre::Base *v5; // rcx
  unsigned int v6; // edx
  __int64 *v7; // rcx
  unsigned int v8; // ebx
  __int64 i; // rax
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  result = PFTOBJ::bIsPrivatePFT(this);
  if ( (_DWORD)result )
  {
    v10 = *((_QWORD *)Gre::Base::Globals(v5) + 6);
    GreAcquireSemaphore(v10);
    v6 = 0;
    v7 = (__int64 *)(*(_QWORD *)this + 40LL);
    v8 = 1;
    do
    {
      if ( v7 )
      {
        for ( i = *v7; i; i = *(_QWORD *)(i + 8) )
        {
          if ( a2 == (struct PFF *)i )
            goto LABEL_10;
        }
      }
      ++v6;
      ++v7;
    }
    while ( v6 < 0x14 );
    v8 = 0;
LABEL_10:
    SEMOBJ::vUnlock((SEMOBJ *)&v10);
    return v8;
  }
  return result;
}
