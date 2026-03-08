/*
 * XREFs of IoNotifyQuotaState @ 0x1402FD260
 * Callers:
 *     <none>
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x14022BD30 (ObReferenceObjectSafeWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     IopAcquireReferencesFromIoAttributionHandle @ 0x1402945B0 (IopAcquireReferencesFromIoAttributionHandle.c)
 *     PsIoRateControlOverQuotaNotify @ 0x1402FD328 (PsIoRateControlOverQuotaNotify.c)
 *     IoDiskIoAttributionDereference @ 0x14030C4DC (IoDiskIoAttributionDereference.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 */

__int64 __fastcall IoNotifyQuotaState(__int64 a1, int a2, int a3, int a4, int a5)
{
  int v8; // edi
  PVOID v9; // rbx
  struct _EX_RUNDOWN_REF *v10; // rbx
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF
  struct _EX_RUNDOWN_REF *v13; // [rsp+38h] [rbp-10h] BYREF

  v13 = 0LL;
  Object = 0LL;
  v8 = IopAcquireReferencesFromIoAttributionHandle(a1, &v13, (unsigned __int64 *)&Object);
  if ( v8 >= 0 )
  {
    v9 = Object;
    if ( ObReferenceObjectSafeWithTag((__int64)Object) )
    {
      PsIoRateControlOverQuotaNotify((_DWORD)v9, a2, a3, a4, a5);
      v8 = 0;
      ObfDereferenceObjectWithTag(v9, 0x746C6644u);
    }
    else
    {
      v8 = -1073741431;
    }
  }
  v10 = v13;
  if ( v13 )
  {
    ExReleaseRundownProtection_0(v13 + 21);
    IoDiskIoAttributionDereference(v10);
  }
  return (unsigned int)v8;
}
