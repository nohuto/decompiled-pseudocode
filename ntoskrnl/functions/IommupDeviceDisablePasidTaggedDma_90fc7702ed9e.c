__int64 __fastcall IommupDeviceDisablePasidTaggedDma(__int64 a1)
{
  unsigned int v1; // edi
  void (__fastcall *v3)(_QWORD); // rax

  v1 = 0;
  if ( *(_BYTE *)(a1 + 265) || *(_BYTE *)(a1 + 266) )
  {
    if ( (unsigned int)Feature_Servicing_IommuApiPasid__private_IsEnabledDeviceUsage() )
    {
      if ( !*(_BYTE *)(a1 + 265) || (*(_DWORD *)(a1 + 384) & 4) != 0 && *(_BYTE *)(a1 + 266) )
      {
        v1 = IommupDeviceDisableSvm(a1);
        v3 = *(void (__fastcall **)(_QWORD))(a1 + 296);
        if ( v3 )
          v3(*(_QWORD *)(a1 + 280));
        *(_WORD *)(a1 + 265) = 0;
        *(_BYTE *)(a1 + 264) = 0;
      }
      else
      {
        return (unsigned int)-1073741823;
      }
    }
    else
    {
      return (unsigned int)-1073741637;
    }
  }
  return v1;
}
