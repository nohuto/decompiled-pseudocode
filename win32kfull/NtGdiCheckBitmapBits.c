/*
 * XREFs of NtGdiCheckBitmapBits @ 0x1C02D0B90
 * Callers:
 *     <none>
 * Callees:
 *     ?GreCheckBitmapBits@@YAHPEAUHDC__@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z @ 0x1C02D03B0 (-GreCheckBitmapBits@@YAHPEAUHDC__@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z.c)
 */

__int64 __fastcall NtGdiCheckBitmapBits(HDC a1, void *a2, char *a3, int a4, SIZE_T Size, int a6, int a7, char *Address)
{
  unsigned int v11; // edi
  unsigned __int64 v12; // rax
  unsigned int v13; // ecx
  char *v14; // r8
  HANDLE v15; // r14
  HANDLE v16; // rax
  void *v17; // rsi
  ULONG v19; // ecx
  _DWORD v20[4]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v21; // [rsp+50h] [rbp-38h]
  int v22; // [rsp+58h] [rbp-30h]
  int v23; // [rsp+5Ch] [rbp-2Ch]

  v23 = 0;
  v11 = 1;
  if ( a4 != 2 || a6 != 1 )
    goto LABEL_24;
  v12 = 3LL * (unsigned int)Size;
  if ( v12 > 0xFFFFFFFF || (int)v12 + 3 < (unsigned int)v12 )
  {
    v19 = 534;
LABEL_25:
    EngSetLastError(v19);
    return 0LL;
  }
  v13 = (v12 + 3) & 0xFFFFFFFC;
  if ( a7 != v13 )
  {
LABEL_24:
    v19 = 87;
    goto LABEL_25;
  }
  v20[0] = 5;
  v20[1] = Size;
  v20[2] = 1;
  v20[3] = (v12 + 3) & 0xFFFFFFFC;
  v21 = 0LL;
  v22 = 0;
  if ( v13 )
  {
    if ( ((unsigned __int8)a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v14 = &a3[v13];
    if ( (unsigned __int64)v14 > MmUserProbeAddress || v14 < a3 )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  if ( (_DWORD)Size
    && ((unsigned __int64)&Address[(unsigned int)Size] > MmUserProbeAddress || &Address[(unsigned int)Size] < Address) )
  {
    *(_BYTE *)MmUserProbeAddress = 0;
  }
  v15 = MmSecureVirtualMemory(a3, v13, 2u);
  v16 = MmSecureVirtualMemory(Address, (unsigned int)Size, 4u);
  v17 = v16;
  if ( v15 )
  {
    if ( v16 )
      v11 = GreCheckBitmapBits(a1, a2, (struct _DEVBITMAPINFO *)v20, a3, (unsigned __int8 *)Address);
    MmUnsecureVirtualMemory(v15);
  }
  if ( v17 )
    MmUnsecureVirtualMemory(v17);
  return v11;
}
