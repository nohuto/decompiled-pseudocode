/*
 * XREFs of ?Create@?$TypeIsolationFactory@V?$CTypeIsolation@$0IAAA@$0IA@@NSInstrumentation@@V?$CTypeIsolation@$0DJAAA@$0DJA@@2@@@SA_NPEAPEAE@Z @ 0x1C008CBD4
 * Callers:
 *     ?Create@?$TypeIsolationFactory@V?$CTypeIsolation@$0OAAAA@$0OAA@@NSInstrumentation@@V?$CTypeIsolation@$0IAAA@$0IA@@2@V?$CTypeIsolation@$0DJAAA@$0DJA@@2@@@SA_NPEAPEAE@Z @ 0x1C00D378C (-Create@-$TypeIsolationFactory@V-$CTypeIsolation@$0OAAAA@$0OAA@@NSInstrumentation@@V-$CTypeIsola.c)
 * Callees:
 *     ?Create@?$TypeIsolationFactory@V?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@@@SA_NPEAPEAE@Z @ 0x1C008CC50 (-Create@-$TypeIsolationFactory@V-$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@@@SA_NPEAPEAE.c)
 *     ?Initialize@?$CTypeIsolation@$0IAAA@$0IA@@NSInstrumentation@@IEAA_NXZ @ 0x1C008D1D8 (-Initialize@-$CTypeIsolation@$0IAAA@$0IA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ??1?$CTypeIsolation@$0IAAA@$0IA@@NSInstrumentation@@IEAA@XZ @ 0x1C00917B4 (--1-$CTypeIsolation@$0IAAA@$0IA@@NSInstrumentation@@IEAA@XZ.c)
 */

char __fastcall TypeIsolationFactory<NSInstrumentation::CTypeIsolation<32768,128>,NSInstrumentation::CTypeIsolation<233472,912>>::Create(
        __int64 a1)
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
    if ( (unsigned __int8)NSInstrumentation::CTypeIsolation<32768,128>::Initialize(Pool2) )
    {
      *(_QWORD *)(a1 + 56) = v3;
      return TypeIsolationFactory<NSInstrumentation::CTypeIsolation<233472,912>>::Create(a1);
    }
    NSInstrumentation::CTypeIsolation<32768,128>::~CTypeIsolation<32768,128>(v3);
    ExFreePoolWithTag(v3, 0);
  }
  return 0;
}
