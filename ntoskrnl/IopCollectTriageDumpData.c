/*
 * XREFs of IopCollectTriageDumpData @ 0x14054FEF0
 * Callers:
 *     IoCapturePristineTriageDump @ 0x14054D368 (IoCapturePristineTriageDump.c)
 *     IoWriteCrashDump @ 0x14054EF00 (IoWriteCrashDump.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     IoFillTriageDumpBuffer @ 0x14054DAD0 (IoFillTriageDumpBuffer.c)
 *     IopUpdateMinidumpContext @ 0x1405516E4 (IopUpdateMinidumpContext.c)
 *     MmSnapTriageDumpInformation @ 0x14062E39C (MmSnapTriageDumpInformation.c)
 */

__int64 __fastcall IopCollectTriageDumpData(
        int a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        void *a7,
        char a8,
        __int64 a9,
        __int64 *a10)
{
  __int64 result; // rax
  int v11; // [rsp+70h] [rbp-58h] BYREF
  _DWORD v12[2]; // [rsp+78h] [rbp-50h] BYREF
  void *v13; // [rsp+80h] [rbp-48h]
  _BYTE v14[32]; // [rsp+88h] [rbp-40h] BYREF

  v11 = 0;
  if ( (KiBugCheckActive & 3) == 0 || IoPreparedTriageDumpData )
    return 3221225473LL;
  IopUpdateMinidumpContext(a1, a2, a3, a4, a5, a6, (__int64)a7);
  MmSnapTriageDumpInformation(a6, v14);
  v12[0] = IopNumTriageDumpDataBlocks;
  v12[1] = 256;
  v13 = &IopTriageDumpDataBlocks;
  result = IoFillTriageDumpBuffer(
             0x3E000u,
             a10,
             1,
             a8 != 0 ? 3319 : 3583,
             0LL,
             a6,
             a7,
             CmNtCSDVersion,
             65,
             1u,
             (__int64)v12,
             (__int64)v12,
             &v11);
  if ( (int)result >= 0 )
    IoPreparedTriageDumpData = a10;
  return result;
}
