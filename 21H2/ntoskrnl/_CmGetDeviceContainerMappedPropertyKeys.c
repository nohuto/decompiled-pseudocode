/*
 * XREFs of _CmGetDeviceContainerMappedPropertyKeys @ 0x14072C3F0
 * Callers:
 *     _PnpDispatchDeviceContainer @ 0x140607E80 (_PnpDispatchDeviceContainer.c)
 *     _CmDeleteDeviceContainerWorker @ 0x14072C484 (_CmDeleteDeviceContainerWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmGetDeviceContainerMappedPropertyKeys(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        unsigned int *a7)
{
  DEVPROPKEY **v7; // r10
  __int64 result; // rax
  unsigned int v9; // r9d
  DEVPROPKEY *v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // edx
  int v14; // eax
  unsigned int v15; // ecx

  v7 = &off_140007B30;
  result = 0LL;
  *a7 = 0;
  v9 = 0;
  while ( 1 )
  {
    v10 = *v7;
    if ( *v7 )
    {
      if ( a5 )
      {
        v11 = *a7;
        if ( (unsigned int)v11 < a6 )
        {
          v12 = 5 * v11;
          *(_GUID *)(a5 + 4 * v12) = v10->fmtid;
          *(_DWORD *)(a5 + 4 * v12 + 16) = v10->pid;
        }
      }
      v13 = *a7;
      v14 = -1;
      v15 = *a7 + 1;
      if ( v15 >= *a7 )
        v14 = *a7 + 1;
      *a7 = v14;
      result = v15 < v13 ? 0xC0000095 : 0;
      if ( v15 < v13 )
        break;
    }
    ++v9;
    v7 += 2;
    if ( v9 >= 4 )
      goto LABEL_10;
  }
  *a7 = 0;
LABEL_10:
  if ( (int)result >= 0 )
    return a6 < *a7 ? 0xC0000023 : 0;
  return result;
}
