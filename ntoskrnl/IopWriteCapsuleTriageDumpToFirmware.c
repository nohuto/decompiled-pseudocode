/*
 * XREFs of IopWriteCapsuleTriageDumpToFirmware @ 0x140551A98
 * Callers:
 *     IoWriteCrashDump @ 0x14054EF00 (IoWriteCrashDump.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     IoFillDumpHeader @ 0x14054D7C8 (IoFillDumpHeader.c)
 *     IoFillTriageDumpBuffer @ 0x14054DAD0 (IoFillTriageDumpBuffer.c)
 *     IopUpdateMinidumpContext @ 0x1405516E4 (IopUpdateMinidumpContext.c)
 *     IopWriteTriageDumpToFirmware @ 0x140551DD0 (IopWriteTriageDumpToFirmware.c)
 *     MmSnapTriageDumpInformation @ 0x14062E39C (MmSnapTriageDumpInformation.c)
 */

bool __fastcall IopWriteCapsuleTriageDumpToFirmware(
        int a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6,
        _KTHREAD *a7)
{
  char *v7; // rsi
  char v8; // r14
  int v13; // ecx
  __int64 v14; // rax
  __int64 v15; // [rsp+38h] [rbp-81h]
  int v17; // [rsp+74h] [rbp-45h] BYREF
  _KTHREAD *v18; // [rsp+78h] [rbp-41h]
  _DWORD v19[2]; // [rsp+80h] [rbp-39h] BYREF
  void *v20; // [rsp+88h] [rbp-31h]
  _QWORD *v21; // [rsp+90h] [rbp-29h]
  _QWORD v22[4]; // [rsp+98h] [rbp-21h] BYREF

  v7 = (char *)CapsuleTriageDumpBlock;
  v8 = 0;
  v21 = a6;
  v18 = a7;
  v17 = 0;
  if ( !CapsuleTriageDumpBlock )
    return 0;
  ViVerifyDma = 0;
  v22[0] = a2;
  v22[1] = a3;
  v22[2] = a4;
  v22[3] = a5;
  IopUpdateMinidumpContext(a1, a2, a3, a4, a5, a6, a7, v15, 1);
  MmSnapTriageDumpInformation(a6, v22);
  IoFillDumpHeader(v7 + 4124, 4, a1, a2, (__int64)a3, a4, a5, (__int64)v18);
  v19[0] = IopNumTriageDumpDataBlocks;
  v19[1] = 256;
  v20 = &IopTriageDumpDataBlocks;
  v13 = IoFillTriageDumpBuffer(
          0x3E000u,
          (__int64 *)(v7 + 12316),
          1,
          3583,
          0LL,
          (__int64)v21,
          v18,
          CmNtCSDVersion,
          65,
          1u,
          (__int64)v19,
          (__int64)v19,
          &v17);
  *(_OWORD *)(v7 + 4220) = 0LL;
  *(_OWORD *)(v7 + 4236) = 0LL;
  *((_DWORD *)v7 + 2070) = 0;
  v14 = *((unsigned int *)v7 + 3080);
  *((_DWORD *)v7 + 2075) |= 0x88u;
  *(_QWORD *)(v7 + 8124) = v14;
  *((_DWORD *)v7 + 2069) = 3583;
  if ( v13 >= 0 )
    return (int)IopWriteTriageDumpToFirmware(CapsuleTriageDumpBlock) >= 0;
  return v8;
}
