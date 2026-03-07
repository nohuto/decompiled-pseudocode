void __fastcall VfThunkAddTargetNotify(void **a1, __int64 a2, __int64 a3)
{
  void **v3; // rdi
  __int64 v5; // r8
  __int64 v6; // r8

  v3 = a1 + 3;
  if ( !(unsigned int)ViThunkCreateSharedExportInformation(
                        *a1,
                        &VfRegularThunks,
                        a3,
                        &VfRegularThunksBitMapHeader,
                        a1 + 3)
    || !(unsigned int)ViThunkCreateSharedExportInformation(*a1, &VfPoolThunks, v5, &VfPoolThunksBitMapHeader, a1 + 4)
    || !(unsigned int)ViThunkCreateSharedExportInformation(*a1, &VfDifThunks, v6, &VfDifThunksBitMapHeader, a1 + 5) )
  {
    ViThunkFreeSharedThunksArray(v3);
    ViThunkFreeSharedThunksArray(a1 + 4);
    ViThunkFreeSharedThunksArray(a1 + 5);
    *(_DWORD *)v3 |= 1u;
  }
}
