__int64 __fastcall IommuDomainAttachPasidDevice(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  int DomainTypes; // eax

  if ( !(unsigned int)Feature_Servicing_IommuApiPasid__private_IsEnabledDeviceUsage() || !*(_DWORD *)(a2 + 48) )
    return 3221225659LL;
  DomainTypes = HalpIommuDeviceGetDomainTypes(*(_QWORD *)(a2 + 16), v4);
  if ( _bittest(&DomainTypes, *(_DWORD *)(a1 + 8)) )
    return IommupDomainAttachPasidDevice(a1, a2);
  else
    return 3221225506LL;
}
