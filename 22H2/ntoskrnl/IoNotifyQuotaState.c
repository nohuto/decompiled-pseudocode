/*
 * XREFs of IoNotifyQuotaState @ 0x1403687A0
 * Callers:
 *     <none>
 * Callees:
 *     IopAcquireReferencesFromIoAttributionHandle @ 0x14020C5D0 (IopAcquireReferencesFromIoAttributionHandle.c)
 *     IoDiskIoAttributionDereference @ 0x14020C898 (IoDiskIoAttributionDereference.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B270 (ExReleaseRundownProtection_0.c)
 *     ObReferenceObjectSafeWithTag @ 0x1402C3620 (ObReferenceObjectSafeWithTag.c)
 *     PsIoRateControlOverQuotaNotify @ 0x140368868 (PsIoRateControlOverQuotaNotify.c)
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
    IoDiskIoAttributionDereference((__int64)v10);
  }
  return (unsigned int)v8;
}
