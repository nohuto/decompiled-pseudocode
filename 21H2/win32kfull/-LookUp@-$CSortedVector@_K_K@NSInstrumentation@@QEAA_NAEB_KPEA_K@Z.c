/*
 * XREFs of ?LookUp@?$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_KPEA_K@Z @ 0x1C012A0AC
 * Callers:
 *     ?pfo@UMPDOBJ@@QEAAHPEAPEAU_FONTOBJ@@@Z @ 0x1C0129A94 (-pfo@UMPDOBJ@@QEAAHPEAPEAU_FONTOBJ@@@Z.c)
 * Callees:
 *     ?LowerBound@?$CSortedVector@_K_K@NSInstrumentation@@QEBA_KAEB_K@Z @ 0x1C00EA3C8 (-LowerBound@-$CSortedVector@_K_K@NSInstrumentation@@QEBA_KAEB_K@Z.c)
 *     ?ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1C00FA4B8 (-ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ.c)
 */

char __fastcall NSInstrumentation::CSortedVector<unsigned __int64,unsigned __int64>::LookUp(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  volatile signed __int32 *v3; // rbx
  char v6; // di
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rcx
  _QWORD *v9; // rdx

  v3 = (volatile signed __int32 *)UmfdFontFileLookup;
  v6 = 1;
  while ( 1 )
  {
    _InterlockedAdd(v3 + 6, 1u);
    if ( !*((_DWORD *)v3 + 7) )
      break;
    NSInstrumentation::CPrioritizedWriterLock::ReleaseShared((NSInstrumentation::CPrioritizedWriterLock *)v3);
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v3, 0LL);
    ExReleasePushLockSharedEx(v3, 0LL);
    KeLeaveCriticalRegion();
  }
  v7 = *((_QWORD *)v3 + 5);
  if ( v7
    && (v8 = NSInstrumentation::CSortedVector<unsigned __int64,unsigned __int64>::LowerBound((__int64)v3, a2), v8 < v7)
    && (v9 = (_QWORD *)(16 * v8 + *((_QWORD *)v3 + 6)), *v9 == *a2)
    && v9 )
  {
    *a3 = v9[1];
  }
  else
  {
    v6 = 0;
  }
  NSInstrumentation::CPrioritizedWriterLock::ReleaseShared((NSInstrumentation::CPrioritizedWriterLock *)v3);
  return v6;
}
