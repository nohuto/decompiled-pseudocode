/*
 * XREFs of NVMeFirmwareDownloadCompletion @ 0x1C0014620
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x1C0005A44 (GetSrbExtension.c)
 */

__int64 __fastcall NVMeFirmwareDownloadCompletion(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 SrbExtension; // rsi
  __int64 v8; // r9
  __int64 v9; // rdi
  __int64 result; // rax
  __int64 v11; // r8
  int v12; // ecx
  int v13; // eax

  SrbExtension = GetSrbExtension(a2);
  if ( *(_BYTE *)(v6 + 2) == 40 )
    v9 = *(_QWORD *)(v6 + 64);
  else
    v9 = *(_QWORD *)(v6 + 24);
  *(_DWORD *)(v9 + 20) = *(_BYTE *)(v6 + 3) != 1;
  result = *(unsigned int *)(a1 + 56);
  if ( (result & 8) != 0 || (v11 = *(_QWORD *)(SrbExtension + 4216)) == 0 )
  {
    *(_DWORD *)(SrbExtension + 4216) = 0;
  }
  else
  {
    result = StorPortExtendedFunction(1LL, a1, v11, v8);
    *(_QWORD *)(SrbExtension + 4216) = 0LL;
  }
  *(_BYTE *)(SrbExtension + 4253) |= 8u;
  if ( *(_BYTE *)(a2 + 3) != 1 )
  {
    v12 = 6;
    v13 = *(unsigned __int16 *)(a3 + 14) >> 1;
    if ( (unsigned __int8)v13 != 6 )
    {
      v12 = 16;
      if ( (unsigned __int8)v13 == 7 )
        v12 = 7;
    }
    *(_DWORD *)(v9 + 20) = v12;
    return StorPortExtendedFunction(85LL, a1, 0LL, 1LL);
  }
  return result;
}
