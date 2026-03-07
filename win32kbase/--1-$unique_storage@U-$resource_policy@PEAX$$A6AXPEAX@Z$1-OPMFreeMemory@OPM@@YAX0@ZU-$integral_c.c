void __fastcall wil::details::unique_storage<wil::details::resource_policy<void *,void (void *),&void OPM::OPMFreeMemory(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (void *),&void OPM::OPMFreeMemory(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(
        OPM **a1,
        void *a2)
{
  OPM *v2; // rcx

  v2 = *a1;
  if ( v2 )
    OPM::OPMFreeMemory(v2, a2);
}
