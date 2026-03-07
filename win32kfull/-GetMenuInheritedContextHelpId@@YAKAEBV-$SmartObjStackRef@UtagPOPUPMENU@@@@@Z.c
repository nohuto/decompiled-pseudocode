__int64 __fastcall GetMenuInheritedContextHelpId(__int64 **a1)
{
  __int64 v1; // rax
  unsigned int v2; // ebx
  _QWORD v4[2]; // [rsp+20h] [rbp-10h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v4, **a1);
  if ( (**(_DWORD **)v4[0] & 1) == 0 )
  {
    while ( !*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v4[0] + 40LL) + 40LL) + 48LL) )
    {
      if ( (**(_DWORD **)v4[0] & 2) != 0 && *(_QWORD *)(*(_QWORD *)v4[0] + 32LL) == *(_QWORD *)(*(_QWORD *)v4[0] + 8LL) )
      {
        SmartObjStackRefBase<tagPOPUPMENU>::operator=(v4, *(_QWORD *)(*(_QWORD *)v4[0] + 64LL));
        break;
      }
      if ( *(_QWORD *)(*(_QWORD *)v4[0] + 32LL) )
      {
        v1 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(*(_QWORD *)v4[0] + 32LL));
        if ( v1 )
        {
          SmartObjStackRefBase<tagPOPUPMENU>::operator=(v4, *(_QWORD *)(v1 + 8));
          if ( *(_QWORD *)v4[0] )
            continue;
        }
      }
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v4);
      return 0LL;
    }
  }
  v2 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v4[0] + 40LL) + 40LL) + 48LL);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v4);
  return v2;
}
