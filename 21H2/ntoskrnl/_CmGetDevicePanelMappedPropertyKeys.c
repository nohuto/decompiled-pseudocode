/*
 * XREFs of _CmGetDevicePanelMappedPropertyKeys @ 0x14097869C
 * Callers:
 *     _PnpDispatchDevicePanel @ 0x1407AFD80 (_PnpDispatchDevicePanel.c)
 *     _CmDeleteDevicePanelWorker @ 0x1409783C0 (_CmDeleteDevicePanelWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmGetDevicePanelMappedPropertyKeys(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        unsigned int *a7)
{
  __int64 **v7; // r10
  unsigned int v8; // r9d
  __int64 v9; // rax
  unsigned int v10; // edx
  __int64 *v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // ebx
  unsigned int v14; // ecx

  v7 = &off_140009D90;
  v8 = 0;
  *a7 = 0;
  v9 = 0LL;
  while ( 1 )
  {
    v10 = v9;
    if ( a5 && (unsigned int)v9 < a6 )
    {
      v11 = *v7;
      v12 = 5 * v9;
      *(_OWORD *)(a5 + 4 * v12) = *(_OWORD *)*v7;
      *(_DWORD *)(a5 + 4 * v12 + 16) = *((_DWORD *)v11 + 4);
      v10 = *a7;
    }
    v13 = v10 + 1;
    v9 = 0xFFFFFFFFLL;
    if ( v10 + 1 >= v10 )
      v9 = v13;
    v14 = v13 < v10 ? 0xC0000095 : 0;
    *a7 = v9;
    if ( v13 < v10 )
      break;
    ++v8;
    v7 += 2;
    if ( v8 >= 3 )
      goto LABEL_11;
  }
  *a7 = 0;
  LODWORD(v9) = 0;
LABEL_11:
  if ( v13 >= v10 )
    return a6 < (unsigned int)v9 ? 0xC0000023 : 0;
  return v14;
}
