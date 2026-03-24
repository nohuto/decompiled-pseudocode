/*
 * XREFs of NtGdiCreateBitmap @ 0x1C0105CF0
 * Callers:
 *     <none>
 * Callees:
 *     Feature_2249667896__private_IsEnabledDeviceUsage @ 0x1C016B1FC (Feature_2249667896__private_IsEnabledDeviceUsage.c)
 */

__int64 __fastcall NtGdiCreateBitmap(__int64 a1, __int64 a2, unsigned int a3, unsigned __int16 a4, char *Address)
{
  __int64 v6; // r15
  __int64 Bitmap; // rdi
  void *v8; // rsi
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r8
  SIZE_T v11; // rsi
  char *v12; // rcx
  HANDLE v13; // rax
  unsigned int v15; // [rsp+80h] [rbp+8h]

  v15 = a1;
  v6 = (unsigned int)a2;
  Bitmap = 1LL;
  v8 = 0LL;
  if ( Address )
  {
    v9 = (((unsigned int)a1 * (unsigned __int16)a3 * (unsigned __int64)a4 + 15) >> 3) & 0x1FFFFFFFFFFFFFFELL;
    a2 = 0xFFFFFFFFLL;
    if ( v9 <= 0xFFFFFFFF )
    {
      v10 = v6 * v9;
      if ( v10 > 0xFFFFFFFF )
        LODWORD(v10) = 0;
    }
    else
    {
      LODWORD(v10) = 0;
    }
    Bitmap = (_DWORD)v10 != 0;
    if ( (_DWORD)v10 )
    {
      v11 = (int)v10;
      v12 = &Address[(int)v10];
      if ( (unsigned __int64)v12 > MmUserProbeAddress || v12 < Address )
        *(_BYTE *)MmUserProbeAddress = 0;
      if ( (unsigned int)Feature_2249667896__private_IsEnabledDeviceUsage(v12, MmUserProbeAddress) )
        v13 = (HANDLE)GrepSecureVirtualMemory(Address, v11, 2LL);
      else
        v13 = MmSecureVirtualMemory(Address, v11, 2u);
      v8 = v13;
      Bitmap &= -(__int64)(v13 != 0LL);
      a1 = v15;
    }
  }
  if ( Bitmap )
    Bitmap = GreCreateBitmap(a1, (unsigned int)v6, a3);
  if ( v8 )
  {
    if ( (unsigned int)Feature_2249667896__private_IsEnabledDeviceUsage(a1, a2) )
      GrepUnsecureVirtualMemory(v8);
    else
      MmUnsecureVirtualMemory(v8);
  }
  return Bitmap;
}
