/*
 * XREFs of ?Create@?$TypeIsolationFactory@V?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@@@SA_NPEAPEAE@Z @ 0x1C00C535C
 * Callers:
 *     ?Create@?$TypeIsolationFactory@V?$CTypeIsolation@$0IAAA@$0IA@@NSInstrumentation@@V?$CTypeIsolation@$0DJAAA@$0DJA@@2@@@SA_NPEAPEAE@Z @ 0x1C00C52E0 (-Create@-$TypeIsolationFactory@V-$CTypeIsolation@$0IAAA@$0IA@@NSInstrumentation@@V-$CTypeIsolati.c)
 * Callees:
 *     ??1?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@IEAA@XZ @ 0x1C00A0998 (--1-$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@IEAA@XZ.c)
 *     ?Initialize@?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@IEAA_NXZ @ 0x1C00C53D4 (-Initialize@-$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@IEAA_NXZ.c)
 */

char __fastcall TypeIsolationFactory<NSInstrumentation::CTypeIsolation<233472,912>>::Create(__int64 a1)
{
  __int64 Pool2; // rax
  void *v3; // rbx

  Pool2 = ExAllocatePool2(262LL, 40LL, 1869834581LL);
  v3 = (void *)Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 16) = 0LL;
    *(_QWORD *)(Pool2 + 24) = 0LL;
    *(_DWORD *)(Pool2 + 32) = 0;
    *(_BYTE *)(Pool2 + 36) = 0;
    *(_QWORD *)(Pool2 + 8) = Pool2;
    *(_QWORD *)Pool2 = Pool2;
    if ( (unsigned __int8)NSInstrumentation::CTypeIsolation<233472,912>::Initialize(Pool2) )
    {
      *(_QWORD *)(a1 + 40) = v3;
      return 1;
    }
    NSInstrumentation::CTypeIsolation<233472,912>::~CTypeIsolation<233472,912>((__int64)v3);
    ExFreePoolWithTag(v3, 0);
  }
  return 0;
}
