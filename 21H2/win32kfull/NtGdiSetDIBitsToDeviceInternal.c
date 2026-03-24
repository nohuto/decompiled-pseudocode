/*
 * XREFs of NtGdiSetDIBitsToDeviceInternal @ 0x1C00ACA90
 * Callers:
 *     <none>
 * Callees:
 *     ?bCaptureBitmapInfo@@YAHPEAUtagBITMAPINFO@@KIPEAPEAU1@@Z @ 0x1C00AC054 (-bCaptureBitmapInfo@@YAHPEAUtagBITMAPINFO@@KIPEAPEAU1@@Z.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C00AF5A0 (GreSetDIBitsToDeviceInternal.c)
 *     Feature_2249667896__private_IsEnabledDeviceUsage @ 0x1C016B1FC (Feature_2249667896__private_IsEnabledDeviceUsage.c)
 */

__int64 __fastcall NtGdiSetDIBitsToDeviceInternal(
        HDC a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        char *Address,
        struct tagBITMAPINFO *Src,
        char a12,
        SIZE_T Size,
        size_t a14,
        int a15,
        __int64 a16)
{
  unsigned int v16; // edi
  void *v17; // rbx
  int v18; // r14d
  ULONG64 v19; // rdx
  char *v20; // rcx
  HANDLE v21; // rax
  __int64 v23; // [rsp+90h] [rbp-48h] BYREF

  v16 = 1;
  v17 = 0LL;
  v23 = 0LL;
  v18 = a12 & 3;
  if ( !(unsigned int)bCaptureBitmapInfo(Src, v18, (unsigned int)a14, (const struct tagBITMAPINFO **)&v23) )
    goto LABEL_13;
  if ( Address )
  {
    if ( (_DWORD)Size )
    {
      if ( ((unsigned __int8)Address & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v20 = &Address[(unsigned int)Size];
      v19 = MmUserProbeAddress;
      if ( (unsigned __int64)v20 > MmUserProbeAddress || v20 < Address )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    v21 = (unsigned int)Feature_2249667896__private_IsEnabledDeviceUsage(v20, v19)
        ? (HANDLE)GrepSecureVirtualMemory(Address, (unsigned int)Size, 2LL)
        : MmSecureVirtualMemory(Address, (unsigned int)Size, 2u);
    v17 = v21;
    if ( !v21 )
LABEL_13:
      v16 = 0;
  }
  if ( v16 == 1 )
    v16 = GreSetDIBitsToDeviceInternal(a1, a5, a6, a7, a8, a9, (__int64)Address, v23, v18, Size, a14, a15, a16);
  if ( v17 )
  {
    if ( (unsigned int)Feature_2249667896__private_IsEnabledDeviceUsage(v20, v19) )
      GrepUnsecureVirtualMemory(v17);
    else
      MmUnsecureVirtualMemory(v17);
  }
  if ( v23 )
    FreeThreadBufferWithTag(v23, v19);
  return v16;
}
