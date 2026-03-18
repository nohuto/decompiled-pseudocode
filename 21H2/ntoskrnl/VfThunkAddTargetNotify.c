/*
 * XREFs of VfThunkAddTargetNotify @ 0x140A7C024
 * Callers:
 *     VfTargetDriversAdd @ 0x1402D8104 (VfTargetDriversAdd.c)
 * Callees:
 *     ViThunkCreateSharedExportInformation @ 0x140A7C0B8 (ViThunkCreateSharedExportInformation.c)
 *     ViThunkFreeSharedThunksArray @ 0x140A7C18C (ViThunkFreeSharedThunksArray.c)
 */

__int64 __fastcall VfThunkAddTargetNotify(_QWORD *a1, __int64 a2, __int64 a3)
{
  _DWORD *v3; // rdi
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 result; // rax

  v3 = a1 + 3;
  if ( !(unsigned int)ViThunkCreateSharedExportInformation(
                        *a1,
                        &VfRegularThunks,
                        a3,
                        &VfRegularThunksBitMapHeader,
                        a1 + 3)
    || !(unsigned int)ViThunkCreateSharedExportInformation(*a1, &VfPoolThunks, v5, &VfPoolThunksBitMapHeader, a1 + 4)
    || (result = ViThunkCreateSharedExportInformation(*a1, &VfDifThunks, v6, &VfDifThunksBitMapHeader, a1 + 5),
        !(_DWORD)result) )
  {
    ViThunkFreeSharedThunksArray(v3);
    ViThunkFreeSharedThunksArray(a1 + 4);
    result = ViThunkFreeSharedThunksArray(a1 + 5);
    *v3 |= 1u;
  }
  return result;
}
