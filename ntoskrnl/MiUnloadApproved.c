/*
 * XREFs of MiUnloadApproved @ 0x1407F77E8
 * Callers:
 *     MiDereferenceSingleImport @ 0x1407F77B4 (MiDereferenceSingleImport.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14032E6D0 (MiGetSystemRegionType.c)
 *     MiSessionLookupImage @ 0x14036C7B8 (MiSessionLookupImage.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     MiCallDllUnload @ 0x140861060 (MiCallDllUnload.c)
 */

__int64 __fastcall MiUnloadApproved(ULONG_PTR BugCheckParameter2)
{
  unsigned __int64 v1; // rsi
  int SystemRegionType; // eax
  unsigned int v4; // edi
  unsigned int v5; // r9d
  __int16 v6; // ax
  _QWORD *v8; // rax
  _QWORD *v9; // r10
  int v10; // eax
  unsigned __int64 v11; // rdx

  v1 = *(_QWORD *)(BugCheckParameter2 + 48);
  SystemRegionType = MiGetSystemRegionType(v1);
  v4 = 0;
  v5 = 1;
  if ( SystemRegionType == 1 )
  {
    v8 = MiSessionLookupImage(v1);
    v9 = v8;
    if ( !v8 )
    {
      v11 = KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25];
      if ( (*(_DWORD *)(v11 + 4) & 2) == 0 )
        KeBugCheckEx(0x1Au, 0x2200uLL, BugCheckParameter2, v1, *(unsigned int *)(v11 + 8));
      return 0LL;
    }
    v10 = *((_DWORD *)v8 + 15);
    if ( v10 != v5 )
    {
      *((_DWORD *)v9 + 15) = v10 - 1;
      return 0LL;
    }
  }
  else
  {
    v6 = *(_WORD *)(BugCheckParameter2 + 108);
    if ( v6 != 1 )
    {
      *(_WORD *)(BugCheckParameter2 + 108) = v6 - 1;
      return 0LL;
    }
  }
  if ( (*(_DWORD *)(BugCheckParameter2 + 196) & 0x20) != 0 )
    return v5;
  LOBYTE(v4) = (int)MiCallDllUnload(BugCheckParameter2) >= 0;
  return v4;
}
