void __fastcall Microsoft::BamoImpl::BamoStubImpl::ReleaseStubsFromPeerList(
        struct Microsoft::BamoImpl::BamoStubImpl *a1)
{
  struct Microsoft::BamoImpl::BamoStubImpl *v1; // rbx

  if ( a1 )
  {
    do
    {
      v1 = (struct Microsoft::BamoImpl::BamoStubImpl *)*((_QWORD *)a1 + 6);
      *((_QWORD *)a1 + 6) = 0LL;
      (*(void (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)a1 + 8LL))(a1);
      a1 = v1;
    }
    while ( v1 );
  }
}
