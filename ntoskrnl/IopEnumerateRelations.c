/*
 * XREFs of IopEnumerateRelations @ 0x140863508
 * Callers:
 *     PiRestartRemovalRelations @ 0x14085F6D8 (PiRestartRemovalRelations.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1408625F0 (PnpProcessQueryRemoveAndEject.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x140862FDC (PnpUnlinkDeviceRemovalRelations.c)
 *     PiEventBuildPdoList @ 0x140863160 (PiEventBuildPdoList.c)
 *     PnpDeleteLockedDeviceNodes @ 0x1408632A0 (PnpDeleteLockedDeviceNodes.c)
 *     PnpCompileDeviceInstancePaths @ 0x1408633B8 (PnpCompileDeviceInstancePaths.c)
 *     PnpInvalidateRelationsInList @ 0x14087CBE8 (PnpInvalidateRelationsInList.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x14087E79C (PnpQueuePendingSurpriseRemoval.c)
 *     PnpBuildUnsafeRemovalDeviceList @ 0x14087F410 (PnpBuildUnsafeRemovalDeviceList.c)
 *     PnpFinalizeDeviceRemovalForReset @ 0x14095486C (PnpFinalizeDeviceRemovalForReset.c)
 *     PnpTrackQueryRemoveDevices @ 0x140961AFC (PnpTrackQueryRemoveDevices.c)
 *     IopCheckIfMergeRequired @ 0x1409699BC (IopCheckIfMergeRequired.c)
 * Callees:
 *     PipDeviceObjectListElementAt @ 0x1408702B8 (PipDeviceObjectListElementAt.c)
 */

bool __fastcall IopEnumerateRelations(unsigned int **a1, int *a2, _QWORD *a3, _DWORD *a4, _DWORD *a5)
{
  bool v5; // r11
  int v6; // edi
  int v9; // ecx
  unsigned int v10; // edx
  unsigned int v11; // r8d
  int v12; // ecx

  v5 = 0;
  v6 = (int)a3;
  *a3 = 0LL;
  if ( a4 )
    *a4 = 0;
  if ( a5 )
    *a5 = 0;
  v9 = *a2;
  if ( !*a2 || *((_BYTE *)a1 + 8) )
  {
    v10 = a2[1];
    v11 = **a1;
    if ( v10 < v11 )
    {
      if ( v9 )
      {
        v12 = v9 - 1;
        if ( v12 )
        {
          if ( v12 != 1 )
            return v5;
          v10 = v11 + ~v10;
        }
      }
      v5 = (int)PipDeviceObjectListElementAt((unsigned int)*a1, v10, v6, (_DWORD)a4, (__int64)a5) >= 0;
      ++a2[1];
    }
  }
  return v5;
}
