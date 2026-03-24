/*
 * XREFs of NtGdiCreateColorTransform @ 0x1C02B6E20
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     Feature_2249667896__private_IsEnabledDeviceUsage @ 0x1C016B1FC (Feature_2249667896__private_IsEnabledDeviceUsage.c)
 *     memset @ 0x1C016E780 (memset.c)
 *     ?GreCreateColorTransform@@YAPEAXPEAUHDC__@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x1C02B6398 (-GreCreateColorTransform@@YAPEAXPEAUHDC__@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z.c)
 */

struct HOBJ__ *__fastcall NtGdiCreateColorTransform(
        HDC a1,
        __int64 a2,
        char *a3,
        unsigned int a4,
        PVOID Address,
        unsigned int a6,
        PVOID a7,
        unsigned int a8)
{
  SIZE_T v8; // r13
  unsigned int v11; // r12d
  tagLOGCOLORSPACEW *v12; // rcx
  __int64 v13; // rax
  HANDLE v14; // rax
  ULONG64 v15; // rcx
  HANDLE v16; // rax
  ULONG64 v17; // rcx
  HANDLE v18; // rax
  struct HOBJ__ *v19; // rdi
  int v21; // [rsp+40h] [rbp-318h]
  HANDLE SecureHandle; // [rsp+48h] [rbp-310h]
  HANDLE v23; // [rsp+50h] [rbp-308h]
  HANDLE v24; // [rsp+58h] [rbp-300h]
  void *v25; // [rsp+80h] [rbp-2D8h]
  void *v26; // [rsp+88h] [rbp-2D0h]
  char *v27; // [rsp+90h] [rbp-2C8h]
  tagLOGCOLORSPACEW v29; // [rsp+C0h] [rbp-298h] BYREF

  v8 = a4;
  v11 = a8;
  memset(&v29, 0, sizeof(v29));
  SecureHandle = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v27 = 0LL;
  v26 = 0LL;
  v25 = 0LL;
  v21 = 0;
  if ( !a2 )
    return 0LL;
  if ( (a2 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v12 = &v29;
  v13 = 4LL;
  do
  {
    *(_OWORD *)&v12->lcsSignature = *(_OWORD *)a2;
    *(_OWORD *)&v12->lcsIntent = *(_OWORD *)(a2 + 16);
    *(_OWORD *)&v12->lcsEndpoints.ciexyzGreen.ciexyzX = *(_OWORD *)(a2 + 32);
    *(_OWORD *)&v12->lcsEndpoints.ciexyzBlue.ciexyzY = *(_OWORD *)(a2 + 48);
    *(_OWORD *)&v12->lcsGammaBlue = *(_OWORD *)(a2 + 64);
    *(_OWORD *)&v12->lcsFilename[6] = *(_OWORD *)(a2 + 80);
    *(_OWORD *)&v12->lcsFilename[14] = *(_OWORD *)(a2 + 96);
    v12 = (tagLOGCOLORSPACEW *)((char *)v12 + 128);
    *(_OWORD *)&v12[-1].lcsFilename[252] = *(_OWORD *)(a2 + 112);
    a2 += 128LL;
    --v13;
  }
  while ( v13 );
  *(_OWORD *)&v12->lcsSignature = *(_OWORD *)a2;
  *(_OWORD *)&v12->lcsIntent = *(_OWORD *)(a2 + 16);
  *(_OWORD *)&v12->lcsEndpoints.ciexyzGreen.ciexyzX = *(_OWORD *)(a2 + 32);
  *(_OWORD *)&v12->lcsEndpoints.ciexyzBlue.ciexyzY = *(_OWORD *)(a2 + 48);
  *(_QWORD *)&v12->lcsGammaBlue = *(_QWORD *)(a2 + 64);
  *(_DWORD *)&v12->lcsFilename[2] = *(_DWORD *)(a2 + 72);
  if ( a3 && (_DWORD)v8 )
  {
    if ( (unsigned __int64)&a3[v8] > MmUserProbeAddress || &a3[v8] < a3 )
      *(_BYTE *)MmUserProbeAddress = 0;
    if ( (unsigned int)Feature_2249667896__private_IsEnabledDeviceUsage() )
      v14 = (HANDLE)GrepSecureVirtualMemory(a3, v8, 2LL);
    else
      v14 = MmSecureVirtualMemory(a3, v8, 2u);
    SecureHandle = v14;
    v11 = a8;
    if ( v14 )
      v27 = a3;
    else
      v21 = 1;
  }
  if ( Address && a6 )
  {
    v15 = (ULONG64)Address + a6;
    if ( v15 > MmUserProbeAddress || v15 < (unsigned __int64)Address )
      *(_BYTE *)MmUserProbeAddress = 0;
    if ( (unsigned int)Feature_2249667896__private_IsEnabledDeviceUsage() )
      v16 = (HANDLE)GrepSecureVirtualMemory(Address, a6, 2LL);
    else
      v16 = MmSecureVirtualMemory(Address, a6, 2u);
    v23 = v16;
    if ( v16 )
      v26 = Address;
    else
      v21 = 1;
  }
  if ( a7 && v11 )
  {
    v17 = (ULONG64)a7 + v11;
    if ( v17 > MmUserProbeAddress || v17 < (unsigned __int64)a7 )
      *(_BYTE *)MmUserProbeAddress = 0;
    if ( (unsigned int)Feature_2249667896__private_IsEnabledDeviceUsage() )
      v18 = (HANDLE)GrepSecureVirtualMemory(a7, v11, 2LL);
    else
      v18 = MmSecureVirtualMemory(a7, v11, 2u);
    v24 = v18;
    if ( v18 )
      v25 = a7;
    else
      v21 = 1;
  }
  v19 = 0LL;
  if ( !v21 )
    v19 = GreCreateColorTransform(a1, &v29, v27, v8, v26, a6, v25, v11);
  if ( SecureHandle )
  {
    if ( (unsigned int)Feature_2249667896__private_IsEnabledDeviceUsage() )
      GrepUnsecureVirtualMemory(SecureHandle);
    else
      MmUnsecureVirtualMemory(SecureHandle);
  }
  if ( v23 )
  {
    if ( (unsigned int)Feature_2249667896__private_IsEnabledDeviceUsage() )
      GrepUnsecureVirtualMemory(v23);
    else
      MmUnsecureVirtualMemory(v23);
  }
  if ( v24 )
  {
    if ( (unsigned int)Feature_2249667896__private_IsEnabledDeviceUsage() )
      GrepUnsecureVirtualMemory(v24);
    else
      MmUnsecureVirtualMemory(v24);
  }
  return v19;
}
