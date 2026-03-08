/*
 * XREFs of ??$AllocateIsolatedType@V?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@@@YAPEAXXZ @ 0x1C0122F80
 * Callers:
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C01225F4 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 * Callees:
 *     ?Allocate@?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C00DF2A8 (-Allocate@-$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@IEAAPEAXXZ.c)
 */

PVOID __fastcall AllocateIsolatedType<NSInstrumentation::CTypeIsolation<233472,912>>(Gre::Base *a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(*((_QWORD *)Gre::Base::Globals(a1) + 813) + 40LL);
  if ( v1 )
    return NSInstrumentation::CTypeIsolation<233472,912>::Allocate(v1);
  else
    return 0LL;
}
