/*
 * XREFs of NtGdiCreateColorTransform @ 0x1C02D0F90
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     ?GreCreateColorTransform@@YAPEAXPEAUHDC__@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x1C02D0580 (-GreCreateColorTransform@@YAPEAXPEAUHDC__@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z.c)
 */

struct HOBJ__ *__fastcall NtGdiCreateColorTransform(
        HDC a1,
        __int64 a2,
        char *a3,
        unsigned int a4,
        char *Address,
        unsigned int a6,
        char *a7,
        unsigned int a8)
{
  SIZE_T v8; // r12
  tagLOGCOLORSPACEW *v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // edi
  struct HOBJ__ *v14; // rsi
  int v16; // [rsp+40h] [rbp-308h]
  char *v17; // [rsp+60h] [rbp-2E8h]
  char *v18; // [rsp+68h] [rbp-2E0h]
  char *v19; // [rsp+70h] [rbp-2D8h]
  HANDLE SecureHandle; // [rsp+78h] [rbp-2D0h]
  HANDLE v21; // [rsp+80h] [rbp-2C8h]
  HANDLE v22; // [rsp+88h] [rbp-2C0h]
  tagLOGCOLORSPACEW v24; // [rsp+B0h] [rbp-298h] BYREF

  v8 = a4;
  memset_0(&v24, 0, sizeof(v24));
  SecureHandle = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v19 = 0LL;
  v18 = 0LL;
  v17 = 0LL;
  v16 = 0;
  if ( !a2 )
    return 0LL;
  if ( (a2 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v11 = &v24;
  v12 = 4LL;
  do
  {
    *(_OWORD *)&v11->lcsSignature = *(_OWORD *)a2;
    *(_OWORD *)&v11->lcsIntent = *(_OWORD *)(a2 + 16);
    *(_OWORD *)&v11->lcsEndpoints.ciexyzGreen.ciexyzX = *(_OWORD *)(a2 + 32);
    *(_OWORD *)&v11->lcsEndpoints.ciexyzBlue.ciexyzY = *(_OWORD *)(a2 + 48);
    *(_OWORD *)&v11->lcsGammaBlue = *(_OWORD *)(a2 + 64);
    *(_OWORD *)&v11->lcsFilename[6] = *(_OWORD *)(a2 + 80);
    *(_OWORD *)&v11->lcsFilename[14] = *(_OWORD *)(a2 + 96);
    v11 = (tagLOGCOLORSPACEW *)((char *)v11 + 128);
    *(_OWORD *)&v11[-1].lcsFilename[252] = *(_OWORD *)(a2 + 112);
    a2 += 128LL;
    --v12;
  }
  while ( v12 );
  *(_OWORD *)&v11->lcsSignature = *(_OWORD *)a2;
  *(_OWORD *)&v11->lcsIntent = *(_OWORD *)(a2 + 16);
  *(_OWORD *)&v11->lcsEndpoints.ciexyzGreen.ciexyzX = *(_OWORD *)(a2 + 32);
  *(_OWORD *)&v11->lcsEndpoints.ciexyzBlue.ciexyzY = *(_OWORD *)(a2 + 48);
  *(_QWORD *)&v11->lcsGammaBlue = *(_QWORD *)(a2 + 64);
  *(_DWORD *)&v11->lcsFilename[2] = *(_DWORD *)(a2 + 72);
  if ( a3 && (_DWORD)v8 )
  {
    if ( (unsigned __int64)&a3[v8] > MmUserProbeAddress || &a3[v8] < a3 )
      *(_BYTE *)MmUserProbeAddress = 0;
    SecureHandle = MmSecureVirtualMemory(a3, v8, 2u);
    if ( SecureHandle )
      v19 = a3;
    else
      v16 = 1;
  }
  if ( Address )
  {
    v13 = a6;
    if ( a6 )
    {
      if ( (unsigned __int64)&Address[a6] > MmUserProbeAddress || &Address[a6] < Address )
        *(_BYTE *)MmUserProbeAddress = 0;
      v21 = MmSecureVirtualMemory(Address, a6, 2u);
      if ( v21 )
        v18 = Address;
      else
        v16 = 1;
    }
  }
  else
  {
    v13 = a6;
  }
  if ( a7 && a8 )
  {
    if ( (unsigned __int64)&a7[a8] > MmUserProbeAddress || &a7[a8] < a7 )
      *(_BYTE *)MmUserProbeAddress = 0;
    v22 = MmSecureVirtualMemory(a7, a8, 2u);
    if ( v22 )
      v17 = a7;
    else
      v16 = 1;
  }
  v14 = 0LL;
  if ( !v16 )
    v14 = GreCreateColorTransform(a1, &v24, v19, v8, v18, v13, v17, a8);
  if ( SecureHandle )
    MmUnsecureVirtualMemory(SecureHandle);
  if ( v21 )
    MmUnsecureVirtualMemory(v21);
  if ( v22 )
    MmUnsecureVirtualMemory(v22);
  return v14;
}
