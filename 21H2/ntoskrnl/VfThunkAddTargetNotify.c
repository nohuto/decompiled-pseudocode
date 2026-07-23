/*
 * XREFs of VfThunkAddTargetNotify @ 0x1409C30F0
 * Callers:
 *     VfTargetDriversAdd @ 0x14037158C (VfTargetDriversAdd.c)
 * Callees:
 *     ViThunkCreateSharedExportInformation @ 0x1409C31C8 (ViThunkCreateSharedExportInformation.c)
 *     ViThunkFreeSharedThunksArray @ 0x1409C3448 (ViThunkFreeSharedThunksArray.c)
 */

__int64 __fastcall VfThunkAddTargetNotify(_QWORD *a1)
{
  _DWORD *v1; // rdi
  __int64 result; // rax

  v1 = a1 + 3;
  if ( !(unsigned int)ViThunkCreateSharedExportInformation(
                        *a1,
                        &VfRegularThunks,
                        48LL,
                        &VfRegularThunksBitMapHeader,
                        a1 + 3)
    || !(unsigned int)ViThunkCreateSharedExportInformation(*a1, &VfPoolThunks, 48LL, &VfPoolThunksBitMapHeader, a1 + 4)
    || !(unsigned int)ViThunkCreateSharedExportInformation(
                        *a1,
                        &VfOrderDependentThunks,
                        56LL,
                        &VfOrderDependentThunksBitMapHeader,
                        a1 + 5)
    || (result = ViThunkCreateSharedExportInformation(*a1, &VfXdvThunks, 48LL, &VfXdvThunksBitMapHeader, a1 + 6),
        !(_DWORD)result) )
  {
    ViThunkFreeSharedThunksArray(v1);
    ViThunkFreeSharedThunksArray(a1 + 4);
    ViThunkFreeSharedThunksArray(a1 + 5);
    result = ViThunkFreeSharedThunksArray(a1 + 6);
    *v1 |= 1u;
  }
  return result;
}
