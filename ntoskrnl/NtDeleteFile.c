/*
 * XREFs of NtDeleteFile @ 0x140871940
 * Callers:
 *     DifNtDeleteFileWrapper @ 0x1405E5B90 (DifNtDeleteFileWrapper.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x1402640A0 (PsGetCurrentSilo.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ObOpenObjectByNameEx @ 0x1406E7F70 (ObOpenObjectByNameEx.c)
 *     IopCleanupExtraCreateParameters @ 0x14076D500 (IopCleanupExtraCreateParameters.c)
 */

__int64 __fastcall NtDeleteFile(__int64 a1)
{
  char PreviousMode; // bl
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v4; // ebx
  __int64 result; // rax
  __int64 v6; // [rsp+48h] [rbp-C0h] BYREF
  _OWORD v7[14]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v8[272]; // [rsp+138h] [rbp+30h] BYREF

  memset(v8, 0, sizeof(v8));
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  memset(v7, 0, sizeof(v7));
  LODWORD(v7[0]) = 14680072;
  LODWORD(v7[4]) = 4096;
  WORD3(v7[4]) = 7;
  *(_QWORD *)&v7[9] = v8;
  memset(&v7[10], 0, 40);
  LOWORD(v7[10]) = 40;
  DWORD2(v7[5]) = 1;
  BYTE10(v7[8]) = 1;
  *(_QWORD *)&v7[3] = a1;
  DWORD2(v7[9]) = 32;
  *(_QWORD *)&v7[12] = PsGetCurrentSilo();
  CurrentThread = KeGetCurrentThread();
  ++CurrentThread->OtherOperationCount;
  __incgsdword(0x2EE4u);
  v4 = ObOpenObjectByNameEx(
         a1,
         (__int64)IoFileObjectType,
         PreviousMode,
         0LL,
         0x10000,
         (int)v7,
         *(__int64 *)&v7[12],
         &v6);
  IopCleanupExtraCreateParameters((__int64)v7);
  result = LODWORD(v7[1]);
  if ( LODWORD(v7[2]) != -1096154543 )
    return v4;
  return result;
}
