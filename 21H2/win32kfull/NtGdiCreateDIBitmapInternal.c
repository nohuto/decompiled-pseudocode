/*
 * XREFs of NtGdiCreateDIBitmapInternal @ 0x1C00A9FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?bCaptureBitmapInfo@@YAHPEAUtagBITMAPINFO@@KIPEAPEAU1@@Z @ 0x1C00AC054 (-bCaptureBitmapInfo@@YAHPEAUtagBITMAPINFO@@KIPEAPEAU1@@Z.c)
 *     GreCreateDIBitmapReal @ 0x1C00AC12C (GreCreateDIBitmapReal.c)
 *     GreCreateDIBitmapComp @ 0x1C0122004 (GreCreateDIBitmapComp.c)
 *     Feature_2249667896__private_IsEnabledDeviceUsage @ 0x1C016B1FC (Feature_2249667896__private_IsEnabledDeviceUsage.c)
 */

__int64 __fastcall NtGdiCreateDIBitmapInternal(
        HDC a1,
        __int64 a2,
        __int64 a3,
        char a4,
        struct tagBITMAPINFO *Address,
        struct tagBITMAPINFO *Src,
        unsigned int a7,
        size_t a8,
        SIZE_T Size)
{
  struct tagBITMAPINFO *v11; // r14
  __int64 v12; // rdi
  void *v13; // rsi
  struct tagBITMAPINFO *v14; // rcx
  char *v15; // rdx
  HANDLE v16; // rax
  __int64 DIBitmapReal; // rax
  struct tagBITMAPINFO *v19; // [rsp+78h] [rbp-50h] BYREF
  HANDLE v20; // [rsp+80h] [rbp-48h]
  unsigned int v21; // [rsp+D8h] [rbp+10h]

  v21 = a2;
  v11 = 0LL;
  v19 = 0LL;
  v12 = 1LL;
  v13 = 0LL;
  v20 = 0LL;
  v14 = Src;
  if ( Src && (_DWORD)a8 )
  {
    if ( !(unsigned int)bCaptureBitmapInfo(Src, a7, (unsigned int)a8, &v19) )
      goto LABEL_15;
    v14 = Address;
    if ( Address )
    {
      if ( (_DWORD)Size )
      {
        if ( ((unsigned __int8)Address & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v14 = Address;
        v15 = (char *)Address + (unsigned int)Size;
        if ( (unsigned __int64)v15 > MmUserProbeAddress || v15 < (char *)Address )
          *(_BYTE *)MmUserProbeAddress = 0;
      }
      v16 = (unsigned int)Feature_2249667896__private_IsEnabledDeviceUsage(v14, v15)
          ? (HANDLE)GrepSecureVirtualMemory(Address, (unsigned int)Size, 2LL)
          : MmSecureVirtualMemory(Address, (unsigned int)Size, 2u);
      v20 = v16;
      v13 = v16;
      if ( !v16 )
LABEL_15:
        v12 = 0LL;
    }
    v11 = v19;
    a2 = v21;
  }
  if ( v12 == 1 )
  {
    if ( (a4 & 2) != 0 )
      DIBitmapReal = GreCreateDIBitmapReal(a1, a7, a8, Size, 0LL, 0, 0LL, 0, 0LL, 0LL);
    else
      DIBitmapReal = GreCreateDIBitmapComp(a1, (__int64)Address, (__int64)v11, a7, a8, Size);
    v12 = DIBitmapReal;
  }
  if ( v11 )
    FreeThreadBufferWithTag(v11, a2);
  if ( v13 )
  {
    if ( (unsigned int)Feature_2249667896__private_IsEnabledDeviceUsage(v14, a2) )
      GrepUnsecureVirtualMemory(v13);
    else
      MmUnsecureVirtualMemory(v13);
  }
  return v12;
}
