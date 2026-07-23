/*
 * XREFs of _CmRaisePropertyChangeEvent @ 0x140744594
 * Callers:
 *     _CmSetDeviceRegPropWorker @ 0x140744338 (_CmSetDeviceRegPropWorker.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140746200 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x140975C30 (_CmSetInstallerClassRegPropWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     _CmMapCmObjectTypeToPnpObjectType @ 0x14062B1D8 (_CmMapCmObjectTypeToPnpObjectType.c)
 *     _PnpObjectRaisePropertyChangeEvent @ 0x140746274 (_PnpObjectRaisePropertyChangeEvent.c)
 */

__int64 (__fastcall *__fastcall CmRaisePropertyChangeEvent(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5))(__int64, __int64, _QWORD, __int64, __int64 *)
{
  DEVPROPKEY **v9; // rax
  unsigned int v10; // r8d
  unsigned int v11; // edx
  DEVPROPKEY **v12; // rcx
  int v13; // eax
  __int64 v14; // rdx
  int v15; // r9d
  __int64 (__fastcall *result)(__int64, __int64, _QWORD, __int64, __int64 *); // rax
  __int64 v17; // [rsp+30h] [rbp-18h] BYREF
  int v18; // [rsp+38h] [rbp-10h]
  int v19; // [rsp+3Ch] [rbp-Ch]

  v19 = 0;
  if ( a3 == 1 )
  {
    v9 = &CmDeviceRegPropMap;
    v10 = a3 - 1 + 33;
  }
  else
  {
    if ( a3 != 2 )
      goto LABEL_9;
    v9 = &CmClassRegPropMap;
    v10 = 9;
  }
  v11 = 0;
  do
  {
    v12 = v9;
    if ( *((_DWORD *)v9 + 3) == a5 )
      break;
    v12 = 0LL;
    ++v11;
    v9 += 3;
  }
  while ( v11 < v10 );
  if ( v12 && *v12 )
  {
    v13 = CmMapCmObjectTypeToPnpObjectType(a3);
    PnpObjectRaisePropertyChangeEvent(a1, a2, v13, v15, 0LL, v14);
  }
LABEL_9:
  result = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, __int64 *))(a1 + 512);
  if ( result )
  {
    v17 = a4;
    v18 = a5;
    return (__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64, __int64 *))result(a1, a2, a3, 4LL, &v17);
  }
  return result;
}
