/*
 * XREFs of memmove_0 @ 0x140011B73
 * Callers:
 *     BasepGetFileNameInformation @ 0x14000F610 (BasepGetFileNameInformation.c)
 *     BasepGetObjectNTName @ 0x14000F730 (BasepGetObjectNTName.c)
 *     BasepGetVolumeDosLetterNameFromNTName @ 0x14000F84C (BasepGetVolumeDosLetterNameFromNTName.c)
 *     GetFinalPathNameByHandleW @ 0x14000FCC0 (GetFinalPathNameByHandleW.c)
 *     GetLongPathNameW @ 0x140010BF4 (GetLongPathNameW.c)
 *     BaseFindFirstDevice @ 0x1400111F8 (BaseFindFirstDevice.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memmove_0(void *a1, const void *Src, size_t Size)
{
  return memmove(a1, Src, Size);
}
