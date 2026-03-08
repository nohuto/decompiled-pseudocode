/*
 * XREFs of HalpRestartProfiling @ 0x140505F14
 * Callers:
 *     HalpPostSleepMP @ 0x140A93F28 (HalpPostSleepMP.c)
 *     HalpDpPostReplaceInitialization @ 0x140A94574 (HalpDpPostReplaceInitialization.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 HalpRestartProfiling()
{
  __int64 v0; // rax
  __int64 v1; // rcx
  __int64 **v2; // r11
  __int64 *i; // r8
  __int64 v4; // r9
  __int64 v5; // r10
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // rax

  v0 = HalpProfileInterface[7]();
  LODWORD(v0) = KeGetPcr()->Prcb.Number;
  v2 = (__int64 **)(HalpCounterSetInfo + 24 * v0);
  for ( i = *v2; i != (__int64 *)v2; i = (__int64 *)*i )
  {
    v4 = 0LL;
    if ( *((_DWORD *)i + 5) )
    {
      while ( 1 )
      {
        v5 = 5 * v4;
        v1 = HIDWORD(i[5 * v4 + 5]);
        if ( !(_DWORD)v1 )
          break;
        v1 = (unsigned int)(v1 - 1);
        if ( (_DWORD)v1 )
        {
          if ( (_DWORD)v1 != 1 )
            break;
          v1 = LODWORD(i[5 * v4 + 6]);
          v6 = __readmsr(v1);
          LODWORD(v7) = HIDWORD(v6);
          v6 = (unsigned int)v6;
          v7 = (unsigned int)v7;
        }
        else
        {
          v1 = LODWORD(i[5 * v4 + 6]);
          v6 = __readpmc(v1);
          LODWORD(v7) = HIDWORD(v6);
          v6 = (unsigned int)v6;
          v7 = (unsigned int)v7;
        }
        v8 = (v7 << 32) | v6;
LABEL_10:
        v4 = (unsigned int)(v4 + 1);
        i[v5 + 3] = v8;
        if ( (unsigned int)v4 >= *((_DWORD *)i + 5) )
          goto LABEL_11;
      }
      v8 = 0LL;
      goto LABEL_10;
    }
LABEL_11:
    ;
  }
  LOBYTE(v1) = 1;
  return ((__int64 (__fastcall *)(__int64))off_140C01DB8[0])(v1);
}
