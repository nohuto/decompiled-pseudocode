/*
 * XREFs of MiLoadImportDll @ 0x14081B9F8
 * Callers:
 *     MiResolveImageReferences @ 0x1407EC794 (MiResolveImageReferences.c)
 * Callees:
 *     MiFreeDriverInitialization @ 0x140729EFC (MiFreeDriverInitialization.c)
 *     MmLoadSystemImageEx @ 0x14072E4EC (MmLoadSystemImageEx.c)
 *     MmUnloadSystemImage @ 0x1407F5FA0 (MmUnloadSystemImage.c)
 *     MmCallDllInitialize @ 0x14081BAB0 (MmCallDllInitialize.c)
 */

__int64 __fastcall MiLoadImportDll(__int64 a1, __int64 a2, int a3, _QWORD *a4, _QWORD *a5)
{
  char v5; // si
  int v7; // edi
  unsigned int *v8; // rbx
  unsigned int *v9; // rcx
  unsigned int *v11; // [rsp+40h] [rbp-18h] BYREF
  unsigned __int64 v12; // [rsp+48h] [rbp-10h] BYREF

  v11 = 0LL;
  v12 = 0LL;
  v5 = a3;
  v7 = MmLoadSystemImageEx(a1, a2, 0LL, 0LL, a3 | 8u, &v11, &v12);
  if ( v7 >= 0 )
  {
    v8 = v11;
    v9 = v11;
    v11[26] |= 0x4000000u;
    v7 = MmCallDllInitialize(v9, &PsLoadedModuleList);
    if ( v7 < 0 )
    {
      MmUnloadSystemImage((ULONG_PTR)v8);
    }
    else
    {
      if ( (v5 & 1) == 0 )
        MiFreeDriverInitialization((__int64)v8);
      *a4 = v11;
      *a5 = v12;
    }
  }
  return (unsigned int)v7;
}
