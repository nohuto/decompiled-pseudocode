__int64 __fastcall EtwpGetTraceGuidList(__int64 a1, __int64 a2, unsigned int a3, unsigned int *a4)
{
  int GuidList; // r10d
  unsigned int v8; // r11d
  __int64 (**v9)[2]; // r9
  unsigned int i; // r8d
  int v11; // eax
  unsigned int v12; // r11d
  unsigned int v13; // ecx
  unsigned int v15; // [rsp+58h] [rbp+20h] BYREF

  v15 = 0;
  GuidList = EtwpGetGuidList(a1, 0, a2, a3, &v15);
  if ( GuidList == -2147483643 )
  {
    v13 = v15;
LABEL_16:
    *a4 = v13;
    if ( GuidList >= 0 && v13 > a3 )
      return (unsigned int)-1073741789;
  }
  else
  {
    v8 = v15;
    v9 = &EtwpUmglProviders;
    for ( i = 0; i < 0xA; ++i )
    {
      if ( ++v8 > 0xFFFFFFF )
      {
        GuidList = -2147483643;
        *a4 = v8;
        return (unsigned int)GuidList;
      }
      if ( v8 <= a3 )
        *(_OWORD *)(a2 + 16LL * (v8 - 1)) = *(_OWORD *)*v9;
      v9 += 2;
    }
    if ( a3 >= v8 )
      EtwpCopyMetaProviderGuids((_OWORD *)(a2 + 16LL * v8), a3 - v8);
    v11 = EtwpMetaProviderCount();
    v13 = v11 + v12;
    if ( v11 + v12 < v12 )
    {
      v13 = -1;
    }
    else if ( v13 <= 0xFFFFFFF )
    {
      goto LABEL_16;
    }
    GuidList = -2147483643;
    *a4 = v13;
  }
  return (unsigned int)GuidList;
}
