/*
 * XREFs of NtCreateThreadEx @ 0x1406C1590
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     RtlGetExtendedContextLength2 @ 0x14033F5D0 (RtlGetExtendedContextLength2.c)
 *     RtlInitializeExtendedContext2 @ 0x14033FFD0 (RtlInitializeExtendedContext2.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     _alloca_probe @ 0x140407B20 (_alloca_probe.c)
 *     memset @ 0x140413800 (memset.c)
 *     PspBuildCreateProcessContext @ 0x1406090A4 (PspBuildCreateProcessContext.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14063E320 (ObpReferenceObjectByHandleWithTag.c)
 *     PspCreateUserContext @ 0x1406C1520 (PspCreateUserContext.c)
 *     PspDeleteCreateProcessContext @ 0x1406C1854 (PspDeleteCreateProcessContext.c)
 *     PspCreateThread @ 0x1406C1A0C (PspCreateThread.c)
 */

__int64 __fastcall NtCreateThreadEx(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        ULONG_PTR a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        unsigned __int64 *a11)
{
  __int64 result; // rax
  unsigned __int64 v14; // rdi
  unsigned int v15; // r14d
  unsigned __int64 v16; // rax
  void *v17; // rsp
  __int64 v18; // r10
  unsigned int v19; // ebx
  __int64 v20; // rcx
  unsigned int v21; // [rsp+70h] [rbp+0h] BYREF
  unsigned int v22; // [rsp+74h] [rbp+4h]
  PVOID Object; // [rsp+78h] [rbp+8h] BYREF
  __int64 v24; // [rsp+80h] [rbp+10h] BYREF
  __int64 v25; // [rsp+88h] [rbp+18h]
  __int64 v26; // [rsp+90h] [rbp+20h]
  _BYTE v27[80]; // [rsp+A0h] [rbp+30h] BYREF
  _QWORD v28[66]; // [rsp+F0h] [rbp+80h] BYREF
  char v29; // [rsp+300h] [rbp+290h] BYREF
  int v30; // [rsp+301h] [rbp+291h]
  __int16 v31; // [rsp+305h] [rbp+295h]
  char v32; // [rsp+307h] [rbp+297h]
  __int64 v33; // [rsp+308h] [rbp+298h]
  __int64 v34; // [rsp+310h] [rbp+2A0h]
  __int64 v35; // [rsp+318h] [rbp+2A8h]

  v26 = a3;
  v22 = a2;
  v25 = a6;
  memset(v27, 0, 0x48uLL);
  Object = 0LL;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v24 = 0LL;
  v21 = 0;
  if ( (a7 & 0xFFFFFF80) != 0 )
    return 3221225717LL;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v20 = a1;
    if ( a1 >= 0x7FFFFFFF0000LL )
      v20 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v20 = *(_QWORD *)v20;
  }
  v29 = 0;
  v34 = a9;
  v35 = a10;
  v33 = a8;
  memset(v28, 0, 0x208uLL);
  if ( !a11
    || (result = PspBuildCreateProcessContext(a11, KeGetCurrentThread()->PreviousMode, 1, (__int64)v28), (int)result >= 0) )
  {
    result = ObpReferenceObjectByHandleWithTag(
               a4,
               2,
               (__int64)PsProcessType,
               KeGetCurrentThread()->PreviousMode,
               0x72437350u,
               &Object,
               0LL,
               0LL);
    if ( (int)result >= 0 )
    {
      v14 = (*((_DWORD *)Object + 629) & 0x4000) != 0 ? 0x800 : 0;
      v15 = (*((_DWORD *)Object + 629) & 0x4000) != 0 ? 1048651 : 1048587;
      ObfDereferenceObjectWithTag(Object, 0x72437350u);
      RtlGetExtendedContextLength2(v15, &v21, (unsigned int)v14);
      v16 = v21 + 15LL;
      if ( v16 <= v21 )
        v16 = 0xFFFFFFFFFFFFFF0LL;
      v17 = alloca(v16 & 0xFFFFFFFFFFFFFFF0uLL);
      memset(&v21, 0, v21);
      RtlInitializeExtendedContext2((__int64)&v21, v15, &v24, v14);
      PspCreateUserContext((__int64)&v21, 1, PspUserThreadStart, a5, v25);
      v19 = PspCreateThread(a1, v22, v26, a4, 0LL, v28, v28[2], &v21, v27, a7, a5, v18, &v29);
      PspDeleteCreateProcessContext(v28);
      return v19;
    }
  }
  return result;
}
