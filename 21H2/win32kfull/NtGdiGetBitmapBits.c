/*
 * XREFs of NtGdiGetBitmapBits @ 0x1C0018310
 * Callers:
 *     <none>
 * Callees:
 *     GreGetBitmapBits @ 0x1C001842C (GreGetBitmapBits.c)
 *     Feature_2249667896__private_IsEnabledDeviceUsage @ 0x1C016B1FC (Feature_2249667896__private_IsEnabledDeviceUsage.c)
 */

__int64 __fastcall NtGdiGetBitmapBits(HSURF a1, unsigned int a2, volatile void *a3)
{
  unsigned int v6; // edi
  void *v7; // rbx
  unsigned int BitmapBits; // eax
  __int64 v9; // rdx
  _BOOL8 v10; // rcx
  HANDLE v11; // rax

  v6 = 1;
  v7 = 0LL;
  BitmapBits = GreGetBitmapBits(a1);
  if ( a2 > BitmapBits )
    a2 = BitmapBits;
  if ( a3 )
  {
    ProbeForWrite(a3, a2, 1u);
    if ( (unsigned int)((__int64 (*)(void))Feature_2249667896__private_IsEnabledDeviceUsage)() )
      v11 = (HANDLE)GrepSecureVirtualMemory(a3, a2, 4LL);
    else
      v11 = MmSecureVirtualMemory((PVOID)a3, a2, 4u);
    v7 = v11;
    v10 = v11 != 0LL;
    v6 = v11 != 0LL;
  }
  if ( v6 )
    v6 = GreGetBitmapBits(a1);
  if ( v7 )
  {
    if ( (unsigned int)Feature_2249667896__private_IsEnabledDeviceUsage(v10, v9) )
      GrepUnsecureVirtualMemory(v7);
    else
      MmUnsecureVirtualMemory(v7);
  }
  return v6;
}
