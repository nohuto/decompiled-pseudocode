void __fastcall CCompositionSurfaceInfo::NotifyInvalidResource(
        CCompositionSurfaceInfo *this,
        const struct IDeviceResource *a2)
{
  __int64 i; // rbx
  __int64 v5; // rcx

  for ( i = (__int64)(*((_QWORD *)this + 7) - *((_QWORD *)this + 6)) >> 3; i; --i )
  {
    v5 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * i - 8);
    (*(void (__fastcall **)(__int64, const struct IDeviceResource *))(*(_QWORD *)v5 + 32LL))(v5, a2);
  }
}
