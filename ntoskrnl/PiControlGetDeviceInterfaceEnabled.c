/*
 * XREFs of PiControlGetDeviceInterfaceEnabled @ 0x1406CF7A0
 * Callers:
 *     <none>
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x1402459EC (PiControlFreeUserModeCallersBuffer.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140262AA0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1406CFA10 (PiControlMakeUserModeCallersCopy.c)
 *     PiDmObjectRelease @ 0x1406D0328 (PiDmObjectRelease.c)
 *     PiDmGetObject @ 0x1406D0370 (PiDmGetObject.c)
 *     PnpUnicodeStringToWstr @ 0x1406D07D4 (PnpUnicodeStringToWstr.c)
 *     PnpUnicodeStringToWstrFree @ 0x1406D08F4 (PnpUnicodeStringToWstrFree.c)
 */

__int64 __fastcall PiControlGetDeviceInterfaceEnabled(__int64 a1, unsigned __int16 *a2, __int64 a3, char a4)
{
  unsigned int v4; // ecx
  __int64 result; // rax
  int Object; // edi
  __int64 v9; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v11; // rbx
  ULONG_PTR v12; // rcx
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp-20h] BYREF
  __int128 v15; // [rsp+38h] [rbp-18h] BYREF
  __int64 v16; // [rsp+78h] [rbp+28h] BYREF

  v4 = *a2;
  BugCheckParameter2 = 0LL;
  v16 = 0LL;
  v15 = 0LL;
  WORD1(v15) = v4;
  LOWORD(v15) = v4;
  if ( (unsigned __int16)(v4 - 1) > 0x3EFu || (v4 & 1) != 0 || *((_DWORD *)a2 + 4) )
    return 3221225485LL;
  result = PiControlMakeUserModeCallersCopy((char *)&v15 + 8, *((_QWORD *)a2 + 1), v4, 2LL, a4, 1);
  if ( (int)result >= 0 )
  {
    Object = PnpUnicodeStringToWstr(&v16, 0LL, &v15);
    if ( Object >= 0 )
    {
      Object = PiDmGetObject(3LL, v16, &BugCheckParameter2, v9);
      if ( Object >= 0 )
      {
        CurrentThread = KeGetCurrentThread();
        v11 = (__int64 *)BugCheckParameter2;
        v12 = BugCheckParameter2;
        --CurrentThread->KernelApcDisable;
        ExAcquirePushLockSharedEx(v12, 0LL);
        *((_BYTE *)a2 + 20) = v11[5] != 0;
        ExReleasePushLockEx(v11, 0LL);
        KeLeaveCriticalRegion();
        PiDmObjectRelease(v11);
      }
    }
    PnpUnicodeStringToWstrFree(v16, &v15);
    PiControlFreeUserModeCallersBuffer(a4, *((void **)&v15 + 1));
    return (unsigned int)Object;
  }
  return result;
}
