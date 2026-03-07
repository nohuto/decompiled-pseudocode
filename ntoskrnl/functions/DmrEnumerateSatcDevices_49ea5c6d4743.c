__int64 __fastcall DmrEnumerateSatcDevices(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 i; // rdi
  __int64 v6; // r14
  _BYTE *j; // r8
  __int16 v8; // bp
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 *v12; // rax
  _BYTE *NextDeviceScope; // rax
  _BYTE *v14; // rsi
  __int64 v15; // [rsp+58h] [rbp+10h] BYREF

  v15 = a2;
  v3 = 0;
  for ( i = DmrGetNextRemappingStructure(a1, 0LL); i; i = DmrGetNextRemappingStructure(a1, i) )
  {
    if ( *(_WORD *)i == 5 )
    {
      v6 = i + *(unsigned __int16 *)(i + 2);
      for ( j = 0LL; ; j = v14 )
      {
        NextDeviceScope = (_BYTE *)DmrGetNextDeviceScope(i + 8, v6, j);
        v14 = NextDeviceScope;
        if ( !NextDeviceScope )
          break;
        if ( *NextDeviceScope != 1 || NextDeviceScope[1] != 8 )
          return (unsigned int)-1073741637;
        v8 = (unsigned __int8)NextDeviceScope[7] | (unsigned __int16)(8
                                                                    * ((unsigned __int8)NextDeviceScope[6] | (unsigned __int16)(32 * (unsigned __int8)NextDeviceScope[5])));
        v9 = HalpIommuAtsDeviceList;
        if ( (__int64 *)HalpIommuAtsDeviceList == &HalpIommuAtsDeviceList )
        {
LABEL_13:
          v15 = 0LL;
          ExtEnvAllocateMemory(v10, 48LL, &v15);
          v11 = v15;
          if ( !v15 )
            return (unsigned int)-1073741670;
          *(_DWORD *)(v15 + 16) = 1;
          *(_WORD *)(v11 + 28) = v8;
          *(_WORD *)(v11 + 24) = *(_WORD *)(i + 6);
          *(_DWORD *)(v11 + 40) = *(unsigned __int8 *)(i + 4);
          v12 = (__int64 *)qword_140C61B08;
          if ( *(__int64 **)qword_140C61B08 != &HalpIommuAtsDeviceList )
            __fastfail(3u);
          *(_QWORD *)v11 = &HalpIommuAtsDeviceList;
          *(_QWORD *)(v11 + 8) = v12;
          *v12 = v11;
          qword_140C61B08 = v11;
        }
        else
        {
          v10 = *(unsigned __int16 *)(i + 6);
          while ( *(_WORD *)(v9 + 24) != (_WORD)v10 || *(_WORD *)(v9 + 28) != v8 )
          {
            v9 = *(_QWORD *)v9;
            if ( (__int64 *)v9 == &HalpIommuAtsDeviceList )
              goto LABEL_13;
          }
        }
      }
    }
  }
  return v3;
}
