bool __fastcall ADAPTER_RENDER::IsCoreResourceSharedOwner(ADAPTER_RENDER *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 2);
  return KeGetCurrentThread() == *(struct _KTHREAD **)(v1 + 184)
      || ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v1 + 168)) != 0;
}
