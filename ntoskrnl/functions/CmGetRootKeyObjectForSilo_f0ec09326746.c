__int64 CmGetRootKeyObjectForSilo()
{
  __int64 v0; // r9
  void *v1; // rcx
  __int64 v2; // r8
  __int64 v4[3]; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  *(_OWORD *)v4 = 0LL;
  CmpInitializeThreadInfo((__int64)v4);
  v5 = 0LL;
  PsGetPermanentSiloContext(v0, CmpSiloContextSlot, &v5);
  if ( v5 && (v1 = *(void **)(v5 + 32)) != 0LL )
    ObfReferenceObject(v1);
  else
    ObfReferenceObject(CmpRegistryRootObject);
  CmCleanupThreadInfo(v4);
  return v2;
}
