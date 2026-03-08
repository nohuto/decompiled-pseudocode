/*
 * XREFs of NVMeWriteBufferFirmwareDownloadCompletion @ 0x1C00185E0
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x1C0001D98 (GetSrbExtension.c)
 */

__int64 __fastcall NVMeWriteBufferFirmwareDownloadCompletion(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // r9
  __int64 v4; // rbx
  __int64 v5; // r8

  result = GetSrbExtension(a2);
  v4 = result;
  if ( (*(_DWORD *)(v3 + 64) & 8) != 0 || (v5 = *(_QWORD *)(result + 4216)) == 0 )
  {
    *(_DWORD *)(result + 4216) = 0;
  }
  else
  {
    result = StorPortExtendedFunction(1LL, v3, v5, v3);
    *(_QWORD *)(v4 + 4216) = 0LL;
  }
  *(_BYTE *)(v4 + 4253) |= 8u;
  return result;
}
