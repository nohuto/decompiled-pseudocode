/*
 * XREFs of KeWriteProtectPAT @ 0x140A9CBB0
 * Callers:
 *     HaliAcpiSleep @ 0x140525AD0 (HaliAcpiSleep.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KiSetUserTbFlushPending @ 0x140417710 (KiSetUserTbFlushPending.c)
 */

void __fastcall KeWriteProtectPAT(char a1)
{
  __int64 v2; // rcx
  unsigned __int64 *v3; // rax
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // [rsp+20h] [rbp-18h] BYREF

  if ( !VslVsmEnabled )
  {
    v2 = 8LL;
    v7 = __readmsr(0x277u);
    v3 = &v7;
    if ( a1 )
    {
      do
      {
        if ( *(_BYTE *)v3 == 6 )
          *(_BYTE *)v3 = 5;
        v3 = (unsigned __int64 *)((char *)v3 + 1);
        --v2;
      }
      while ( v2 );
    }
    else
    {
      do
      {
        if ( *(_BYTE *)v3 == 5 )
          *(_BYTE *)v3 = 6;
        v3 = (unsigned __int64 *)((char *)v3 + 1);
        --v2;
      }
      while ( v2 );
    }
    __writemsr(0x277u, v7);
    if ( KiFlushPcid )
    {
      v4 = __readcr3();
      __writecr3(v4);
      if ( !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
        KiSetUserTbFlushPending();
    }
    else
    {
      v5 = __readcr4();
      if ( (v5 & 0x20080) != 0 )
      {
        __writecr4(v5 ^ 0x80);
        __writecr4(v5);
      }
      else
      {
        v6 = __readcr3();
        __writecr3(v6);
      }
    }
  }
}
