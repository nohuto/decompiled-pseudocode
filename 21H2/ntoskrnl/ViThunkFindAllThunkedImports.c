/*
 * XREFs of ViThunkFindAllThunkedImports @ 0x140A93CE4
 * Callers:
 *     ViThunkApplyWdmThunksCurrentSession @ 0x140A93A60 (ViThunkApplyWdmThunksCurrentSession.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1402D6CB0 (RtlImageDirectoryEntryToData.c)
 *     ViThunkGetWdmThunk @ 0x140A93F9C (ViThunkGetWdmThunk.c)
 */

__int64 __fastcall ViThunkFindAllThunkedImports(__int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 v3; // rcx
  _DWORD *v4; // r12
  _QWORD *v6; // r14
  unsigned int v7; // ebx
  unsigned int i; // edi
  __int64 v9; // rsi
  __int64 WdmThunk; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF

  v14 = a2;
  v3 = *(_QWORD *)(a1 + 48);
  v4 = ViWdmThunksWithIatIndex;
  LODWORD(v14) = 0;
  LOBYTE(a2) = 1;
  v6 = (_QWORD *)RtlImageDirectoryEntryToData(v3, a2, 12, (int)&v14);
  if ( !v6 || !(_DWORD)v14 )
    return 0LL;
  v7 = (unsigned int)v14 >> 3;
  for ( i = 0; i < v7; ++v6 )
  {
    v9 = *v6;
    WdmThunk = ViThunkGetWdmThunk(*v6, &VfPoolThunks);
    if ( WdmThunk
      || (WdmThunk = ViThunkGetWdmThunk(v9, &VfRegularThunks)) != 0
      || (WdmThunk = ViThunkGetWdmThunk(v9, &VfMandatoryThunks)) != 0
      || (WdmThunk = ViThunkGetWdmThunk(v9, &VfDifThunks)) != 0 )
    {
      v11 = *a3;
      v12 = 3 * v11;
      v4[2 * v12] = i;
      *(_QWORD *)&v4[2 * v12 + 2] = WdmThunk;
      *a3 = v11 + 1;
    }
    ++i;
  }
  return *a3;
}
