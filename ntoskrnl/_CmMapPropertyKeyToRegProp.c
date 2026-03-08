/*
 * XREFs of _CmMapPropertyKeyToRegProp @ 0x140687394
 * Callers:
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140687320 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmMapPropertyKeyToRegProp(__int64 a1, __int64 a2)
{
  int v2; // edi
  DEVPROPKEY **v3; // r9
  unsigned int v4; // ecx
  unsigned int i; // r10d
  DEVPROPKEY *v7; // r11
  DEVPROPKEY **v8; // r8
  __int64 v10; // rdx

  v2 = *(_DWORD *)(a2 + 16);
  v3 = &CmDeviceRegPropMap;
  v4 = 0;
  for ( i = 0; i < 0x21; ++i )
  {
    v7 = *v3;
    v8 = v3;
    if ( v2 == (*v3)->pid )
    {
      v10 = *(_QWORD *)a2 - *(_QWORD *)&v7->fmtid.Data1;
      if ( *(_QWORD *)a2 == *(_QWORD *)&v7->fmtid.Data1 )
        v10 = *(_QWORD *)(a2 + 8) - *(_QWORD *)v7->fmtid.Data4;
      if ( !v10 )
        break;
    }
    v3 += 3;
    v8 = 0LL;
  }
  if ( v8 )
    return *((unsigned int *)v8 + 3);
  return v4;
}
