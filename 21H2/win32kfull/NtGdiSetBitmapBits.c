/*
 * XREFs of NtGdiSetBitmapBits @ 0x1C0018780
 * Callers:
 *     <none>
 * Callees:
 *     GreSetBitmapBits @ 0x1C0018890 (GreSetBitmapBits.c)
 *     Feature_2249667896__private_IsEnabledDeviceUsage @ 0x1C016B1FC (Feature_2249667896__private_IsEnabledDeviceUsage.c)
 */

__int64 __fastcall NtGdiSetBitmapBits(HSURF a1, SIZE_T Size, HSURF Address)
{
  SIZE_T v4; // r14
  HSURF v5; // r15
  HANDLE v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  void *v9; // rdi
  unsigned int v10; // ebx

  v4 = (unsigned int)Size;
  v5 = a1;
  if ( (_DWORD)Size )
  {
    a1 = (HSURF)((char *)Address + (unsigned int)Size);
    Size = MmUserProbeAddress;
    if ( (unsigned __int64)Address + v4 > MmUserProbeAddress || a1 < Address )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  if ( (unsigned int)Feature_2249667896__private_IsEnabledDeviceUsage(a1, Size) )
    v6 = (HANDLE)GrepSecureVirtualMemory(Address, v4, 2LL);
  else
    v6 = MmSecureVirtualMemory(Address, v4, 2u);
  v9 = v6;
  v10 = v6 != 0LL;
  if ( v10 )
    v10 = GreSetBitmapBits(v5);
  if ( v9 )
  {
    if ( (unsigned int)Feature_2249667896__private_IsEnabledDeviceUsage(v8, v7) )
      GrepUnsecureVirtualMemory(v9);
    else
      MmUnsecureVirtualMemory(v9);
  }
  return v10;
}
