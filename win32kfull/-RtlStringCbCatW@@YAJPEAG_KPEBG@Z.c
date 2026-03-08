/*
 * XREFs of ?RtlStringCbCatW@@YAJPEAG_KPEBG@Z @ 0x1C00DD870
 * Callers:
 *     _RegisterDManipHook @ 0x1C00DD6D0 (_RegisterDManipHook.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x1C010A9DC (RtlStringCopyWorkerW.c)
 */

NTSTATUS __fastcall RtlStringCbCatW(unsigned __int16 *a1, __int64 a2, const unsigned __int16 *a3)
{
  unsigned __int16 *v3; // rax
  __int64 v4; // r8
  NTSTATUS result; // eax
  size_t v6; // [rsp+20h] [rbp-18h]

  v3 = a1;
  v4 = 130LL;
  do
  {
    if ( !*v3 )
      break;
    ++v3;
    --v4;
  }
  while ( v4 );
  result = v4 == 0 ? 0xC000000D : 0;
  if ( v4 )
    return RtlStringCopyWorkerW(
             (unsigned __int16 *)((char *)a1 + ((2 * (130 - v4)) & -(__int64)(v4 != 0))),
             ((v4 - 130) & ((unsigned __int128)-(__int128)(unsigned __int64)v4 >> 64)) + 130,
             (size_t *)-v4,
             L"\\System32\\directmanipulation.dll",
             v6);
  return result;
}
