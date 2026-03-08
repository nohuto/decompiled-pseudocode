/*
 * XREFs of PiDmEnumObjectsWithCallback @ 0x1406CE130
 * Callers:
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x140746D28 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDmGetObjectList @ 0x140777800 (PiDmGetObjectList.c)
 *     PiDmListInit @ 0x14083A120 (PiDmListInit.c)
 *     PpDevCfgInit @ 0x140B5ACF8 (PpDevCfgInit.c)
 * Callees:
 *     RtlEnumerateGenericTableLikeADirectory @ 0x1402456F0 (RtlEnumerateGenericTableLikeADirectory.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14025D790 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PiDmObjectIsEnumerable @ 0x1406CE0E0 (PiDmObjectIsEnumerable.c)
 *     PiDmObjectRelease @ 0x1406D0328 (PiDmObjectRelease.c)
 *     PiDmGetObjectManagerForObjectType @ 0x1406D045C (PiDmGetObjectManagerForObjectType.c)
 */

__int64 __fastcall PiDmEnumObjectsWithCallback(
        unsigned int a1,
        __int64 (__fastcall *a2)(void *, __int64, _BYTE *),
        __int64 a3)
{
  int v6; // edi
  __int64 ObjectManagerForObjectType; // rax
  __int64 v8; // rsi
  const wchar_t *v9; // rax
  struct _KTHREAD *CurrentThread; // rax
  PVOID v11; // rax
  void *v12; // rbx
  struct _KTHREAD *v13; // rax
  PVOID v14; // rax
  _BYTE v16[4]; // [rsp+40h] [rbp-79h] BYREF
  ULONG DeleteCount; // [rsp+44h] [rbp-75h] BYREF
  PVOID P; // [rsp+48h] [rbp-71h] BYREF
  PVOID RestartKey[2]; // [rsp+50h] [rbp-69h] BYREF
  _QWORD v20[14]; // [rsp+60h] [rbp-59h] BYREF

  v6 = 0;
  memset(v20, 0, sizeof(v20));
  RestartKey[0] = 0LL;
  DeleteCount = 0;
  P = v20;
  v16[0] = 0;
  ObjectManagerForObjectType = PiDmGetObjectManagerForObjectType(a1);
  LODWORD(v20[3]) = 0;
  v8 = ObjectManagerForObjectType;
  HIDWORD(v20[3]) = a1;
  v9 = L"\\\\?\\";
  if ( a1 != 3 )
    v9 = &word_1408834C0;
  v20[2] = v9;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite((PERESOURCE)v8, 1u);
  v11 = RtlEnumerateGenericTableLikeADirectory((PRTL_AVL_TABLE)(v8 + 104), 0LL, 0LL, 0, RestartKey, &DeleteCount, &P);
  if ( v11 )
  {
    v12 = *(void **)v11;
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v11 + 8LL));
  }
  else
  {
    v12 = 0LL;
  }
  ExReleaseResourceLite((PERESOURCE)v8);
  KeLeaveCriticalRegion();
  while ( v12 )
  {
    if ( PiDmObjectIsEnumerable((ULONG_PTR)v12) && (v6 = a2(v12, a3, v16), v6 < 0) || v16[0] )
    {
      PiDmObjectRelease(v12);
      return (unsigned int)v6;
    }
    P = v12;
    v13 = KeGetCurrentThread();
    --v13->KernelApcDisable;
    ExAcquireResourceSharedLite((PERESOURCE)v8, 1u);
    v14 = RtlEnumerateGenericTableLikeADirectory((PRTL_AVL_TABLE)(v8 + 104), 0LL, 0LL, 1u, RestartKey, &DeleteCount, &P);
    if ( v14 )
    {
      v12 = *(void **)v14;
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v14 + 8LL));
    }
    else
    {
      v12 = 0LL;
    }
    ExReleaseResourceLite((PERESOURCE)v8);
    KeLeaveCriticalRegion();
    PiDmObjectRelease(P);
  }
  return (unsigned int)v6;
}
