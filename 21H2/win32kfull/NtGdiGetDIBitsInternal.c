/*
 * XREFs of NtGdiGetDIBitsInternal @ 0x1C007FE00
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetBitmapSizeInternal@@YAKPEBUtagBITMAPINFO@@KI@Z @ 0x1C00802D8 (-GreGetBitmapSizeInternal@@YAKPEBUtagBITMAPINFO@@KI@Z.c)
 *     GreGetDIBitsInternal @ 0x1C0082A14 (GreGetDIBitsInternal.c)
 *     GreGetBitmapBitsSize @ 0x1C00ABFB4 (GreGetBitmapBitsSize.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     Feature_2249667896__private_IsEnabledDeviceUsage @ 0x1C016B1FC (Feature_2249667896__private_IsEnabledDeviceUsage.c)
 *     memmove @ 0x1C016E4C0 (memmove.c)
 *     memset @ 0x1C016E780 (memset.c)
 */

__int64 __fastcall NtGdiGetDIBitsInternal(
        HDC a1,
        HSURF a2,
        __int64 a3,
        int a4,
        __int64 a5,
        struct tagBITMAPINFO *Address,
        unsigned int a7,
        unsigned int a8)
{
  volatile void *v8; // r15
  unsigned int biSize; // r13d
  size_t v10; // rsi
  struct tagBITMAPINFO *v11; // rdi
  unsigned int BitmapSizeInternal; // eax
  struct tagBITMAPINFO *v13; // rax
  bool v14; // zf
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  HANDLE v18; // rax
  HSURF v19; // rdx
  HDC v20; // rcx
  unsigned int DIBitsInternal; // r15d
  unsigned int Length; // [rsp+58h] [rbp-E0h]
  int v25; // [rsp+68h] [rbp-D0h]
  HANDLE SecureHandle; // [rsp+78h] [rbp-C0h]
  _DWORD v29[8]; // [rsp+C8h] [rbp-70h] BYREF
  __int64 v30; // [rsp+E8h] [rbp-50h]

  Length = a8;
  v25 = 1;
  SecureHandle = 0LL;
  memset(v29, 0, sizeof(v29));
  v30 = 0LL;
  if ( a7 > 2 || !Address || !a2 )
    return 0LL;
  v8 = (volatile void *)(a5 & -(__int64)(a4 != 0));
  biSize = Address->bmiHeader.biSize;
  ProbeForWrite(Address, Address->bmiHeader.biSize, 1u);
  if ( v8 )
  {
    LODWORD(v10) = 0;
  }
  else
  {
    LODWORD(v10) = 12;
    if ( biSize == 12 && !HIWORD(Address->bmiHeader.biHeight) )
      goto LABEL_13;
    LODWORD(v10) = 0;
    if ( biSize >= 0x28 && !Address->bmiHeader.biBitCount )
      LODWORD(v10) = 40;
  }
  if ( (_DWORD)v10 )
  {
LABEL_13:
    memmove(v29, Address, (unsigned int)v10);
    v29[0] = v10;
LABEL_14:
    v11 = (struct tagBITMAPINFO *)v29;
    goto LABEL_15;
  }
  if ( biSize == 40 )
    Address->bmiHeader.biClrUsed = 0;
  BitmapSizeInternal = GreGetBitmapSizeInternal(Address, a7, biSize);
  v10 = BitmapSizeInternal;
  if ( !BitmapSizeInternal )
    goto LABEL_14;
  v13 = (struct tagBITMAPINFO *)Win32AllocPool(BitmapSizeInternal, 1886221383LL);
  v11 = v13;
  if ( v13 )
    memset(v13, 0, (unsigned int)v10);
  if ( v11 )
  {
    if ( (struct tagBITMAPINFO *)((char *)Address + v10) < Address
      || (unsigned __int64)Address + v10 > MmUserProbeAddress )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(v11, Address, v10);
    v11->bmiHeader.biSize = biSize;
    if ( GreGetBitmapSizeInternal(v11, a7, biSize) != (_DWORD)v10 )
    {
LABEL_21:
      LODWORD(v10) = 0;
      goto LABEL_52;
    }
    if ( biSize >= 0x28 )
      v11->bmiHeader.biClrUsed = 0;
    if ( a4 )
    {
      if ( v11->bmiHeader.biSize < 0x28 )
      {
        if ( !LOWORD(v11->bmiHeader.biWidth) || !LOWORD(v11->bmiHeader.biHeight) )
          goto LABEL_40;
        v14 = HIWORD(v11->bmiHeader.biHeight) == 0;
      }
      else
      {
        if ( !v11->bmiHeader.biWidth || !v11->bmiHeader.biPlanes )
          goto LABEL_40;
        v14 = v11->bmiHeader.biBitCount == 0;
      }
      v15 = 0;
      if ( !v14 )
      {
LABEL_41:
        v25 = v15;
        goto LABEL_15;
      }
LABEL_40:
      v15 = 1;
      goto LABEL_41;
    }
  }
LABEL_15:
  if ( (_DWORD)v10 && v8 && v11 )
  {
    if ( v11->bmiHeader.biSize < 0x28 || v11->bmiHeader.biCompression - 1 > 1 || v11->bmiHeader.biSizeImage )
    {
      if ( a8 || (Length = GreGetBitmapBitsSize(v11)) != 0 )
      {
        ProbeForWrite(v8, Length, 4u);
        if ( (unsigned int)Feature_2249667896__private_IsEnabledDeviceUsage(v17, v16) )
          v18 = (HANDLE)GrepSecureVirtualMemory(v8, Length, 4LL);
        else
          v18 = MmSecureVirtualMemory((PVOID)v8, Length, 4u);
        SecureHandle = v18;
      }
      LODWORD(v10) = SecureHandle != 0LL ? v10 : 0;
      goto LABEL_52;
    }
    goto LABEL_21;
  }
LABEL_52:
  v19 = a2;
  v20 = a1;
  if ( v8 && v25 || !(_DWORD)v10 || !v11 )
  {
    DIBitsInternal = 0;
  }
  else
  {
    DIBitsInternal = GreGetDIBitsInternal(a1, a2, (__int64)v8, v11, a7, Length, v10);
    if ( DIBitsInternal )
      memmove(Address, v11, (unsigned int)v10);
  }
  if ( SecureHandle )
  {
    if ( (unsigned int)Feature_2249667896__private_IsEnabledDeviceUsage(v20, v19) )
      GrepUnsecureVirtualMemory(SecureHandle);
    else
      MmUnsecureVirtualMemory(SecureHandle);
  }
  if ( v11 )
  {
    if ( v11 != (struct tagBITMAPINFO *)v29 )
      Win32FreePool(v11);
  }
  return DIBitsInternal;
}
