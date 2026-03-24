/*
 * XREFs of NtGdiCheckBitmapBits @ 0x1C02B69D0
 * Callers:
 *     <none>
 * Callees:
 *     Feature_2249667896__private_IsEnabledDeviceUsage @ 0x1C016B1FC (Feature_2249667896__private_IsEnabledDeviceUsage.c)
 *     ?GreCheckBitmapBits@@YAHPEAUHDC__@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z @ 0x1C02B61D8 (-GreCheckBitmapBits@@YAHPEAUHDC__@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z.c)
 */

__int64 __fastcall NtGdiCheckBitmapBits(
        HDC a1,
        void *a2,
        void *a3,
        int a4,
        unsigned int Size,
        int a6,
        int a7,
        char *Address)
{
  unsigned int v10; // r14d
  unsigned __int64 v11; // rax
  unsigned int v12; // edi
  ULONG64 v13; // rdx
  HANDLE v14; // rsi
  HANDLE v15; // rax
  void *v16; // rdi
  ULONG v18; // ecx
  _DWORD v19[4]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v20; // [rsp+50h] [rbp-48h]
  int v21; // [rsp+58h] [rbp-40h]
  int v22; // [rsp+5Ch] [rbp-3Ch]

  v22 = 0;
  v10 = 1;
  if ( a4 != 2 || a6 != 1 )
    goto LABEL_31;
  v11 = 3LL * Size;
  if ( v11 > 0xFFFFFFFF || (int)v11 + 3 < (unsigned int)v11 )
  {
    v18 = 534;
LABEL_32:
    EngSetLastError(v18);
    return 0LL;
  }
  v12 = (v11 + 3) & 0xFFFFFFFC;
  if ( a7 != v12 )
  {
LABEL_31:
    v18 = 87;
    goto LABEL_32;
  }
  v19[0] = 5;
  v19[1] = Size;
  v19[2] = 1;
  v19[3] = (v11 + 3) & 0xFFFFFFFC;
  v20 = 0LL;
  v21 = 0;
  if ( v12 )
  {
    if ( ((unsigned __int8)a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v13 = (ULONG64)a3 + v12;
    if ( v13 > MmUserProbeAddress || v13 < (unsigned __int64)a3 )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  if ( Size && ((unsigned __int64)&Address[Size] > MmUserProbeAddress || &Address[Size] < Address) )
    *(_BYTE *)MmUserProbeAddress = 0;
  if ( (unsigned int)Feature_2249667896__private_IsEnabledDeviceUsage() )
  {
    v14 = (HANDLE)GrepSecureVirtualMemory(a3, v12, 2LL);
    v15 = (HANDLE)GrepSecureVirtualMemory(Address, Size, 4LL);
  }
  else
  {
    v14 = MmSecureVirtualMemory(a3, v12, 2u);
    v15 = MmSecureVirtualMemory(Address, Size, 4u);
  }
  v16 = v15;
  if ( v14 )
  {
    if ( v15 )
      v10 = GreCheckBitmapBits(a1, a2, (struct _DEVBITMAPINFO *)v19, a3, (unsigned __int8 *)Address);
    if ( (unsigned int)Feature_2249667896__private_IsEnabledDeviceUsage() )
      GrepUnsecureVirtualMemory(v14);
    else
      MmUnsecureVirtualMemory(v14);
  }
  if ( v16 )
  {
    if ( (unsigned int)Feature_2249667896__private_IsEnabledDeviceUsage() )
      GrepUnsecureVirtualMemory(v16);
    else
      MmUnsecureVirtualMemory(v16);
  }
  return v10;
}
