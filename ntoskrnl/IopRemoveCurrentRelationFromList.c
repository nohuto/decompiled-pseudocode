/*
 * XREFs of IopRemoveCurrentRelationFromList @ 0x140969BAC
 * Callers:
 *     PnpUnlinkDeviceRemovalRelations @ 0x140862FDC (PnpUnlinkDeviceRemovalRelations.c)
 * Callees:
 *     PipDeviceObjectListElementAt @ 0x1408702B8 (PipDeviceObjectListElementAt.c)
 *     PipDeviceObjectListRemove @ 0x14087FFE4 (PipDeviceObjectListRemove.c)
 */

__int64 __fastcall IopRemoveCurrentRelationFromList(unsigned int **a1, __int64 a2, _DWORD *a3)
{
  __int64 result; // rax
  unsigned int v6; // edi
  unsigned int **v7; // r11
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = 0LL;
  if ( *a3 > 1u )
    return 3221225659LL;
  v6 = a3[1] - 1;
  PipDeviceObjectListElementAt(*a1, v6, &v8, 0LL, 0LL);
  if ( v8 != a2 )
    return 3221225486LL;
  result = PipDeviceObjectListRemove(*v7, v6);
  if ( *a3 > 1u )
    return 3221225659LL;
  a3[1] = v6;
  return result;
}
