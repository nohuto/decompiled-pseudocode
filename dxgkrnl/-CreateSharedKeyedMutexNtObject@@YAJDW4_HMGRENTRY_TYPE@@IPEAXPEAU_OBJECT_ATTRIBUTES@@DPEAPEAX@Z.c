/*
 * XREFs of ?CreateSharedKeyedMutexNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C03218C8
 * Callers:
 *     DxgkCreateBundleObjectInternal @ 0x1C03225D0 (DxgkCreateBundleObjectInternal.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0003A50 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0053210 (-AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0053394 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall CreateSharedKeyedMutexNtObject(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7)
{
  __int64 v7; // rbx
  char v8; // bp
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v10; // rsi
  unsigned int v11; // eax
  __int64 v12; // r8
  int v13; // edx
  __int64 v14; // rdx
  PVOID v15; // rcx
  DXGKEYEDMUTEX *v17; // rdi
  __int64 v18; // r9
  __int64 v19; // rcx
  int v20; // eax
  _BYTE v21[32]; // [rsp+50h] [rbp-38h] BYREF
  PVOID Object; // [rsp+A8h] [rbp+20h] BYREF

  v7 = a3;
  Object = 0LL;
  v8 = a1;
  Current = DXGPROCESS::GetCurrent(a1);
  v10 = Current;
  if ( !Current )
  {
    LODWORD(v7) = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context. Returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_11;
  }
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v21, Current);
  v11 = ((unsigned int)v7 >> 6) & 0xFFFFFF;
  if ( v11 >= *((_DWORD *)v10 + 74) )
    goto LABEL_9;
  v12 = *((_QWORD *)v10 + 35);
  if ( (((unsigned int)v7 >> 25) & 0x60) != (*(_BYTE *)(v12 + 16LL * v11 + 8) & 0x60) )
    goto LABEL_9;
  if ( (*(_DWORD *)(v12 + 16LL * v11 + 8) & 0x2000) != 0 )
    goto LABEL_9;
  v13 = *(_DWORD *)(v12 + 16LL * v11 + 8) & 0x1F;
  if ( !v13 )
    goto LABEL_9;
  if ( v13 != 9 )
  {
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_9:
    v14 = v7;
    LODWORD(v7) = -1073741811;
    WdLogSingleEntry2(3LL, v14, -1073741811LL);
LABEL_10:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v21);
    goto LABEL_11;
  }
  v17 = *(DXGKEYEDMUTEX **)(v12 + 16LL * v11);
  if ( !v17 )
    goto LABEL_9;
  if ( (*((_DWORD *)v17 + 43) & 1) == 0 )
  {
    LODWORD(v7) = -1073741811;
    WdLogSingleEntry2(2LL, v17, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Cannot share object: Keyed mutex 0x%I64x does not use NT security sharing. Returning 0x%I64x.",
      (__int64)v17,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_10;
  }
  DXGKEYEDMUTEX::AcquireReference(v17);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v21);
  LOBYTE(v18) = 1;
  LOBYTE(v19) = v8;
  v20 = ObCreateObject(v19, g_pDxgkSharedKeyedMutexObjectType, a5, v18, 0LL, 8, 0, 0, &Object);
  v7 = v20;
  if ( v20 >= 0 )
  {
    *(_QWORD *)Object = v17;
    v15 = Object;
    goto LABEL_13;
  }
  if ( Object )
  {
    WdLogSingleEntry1(1LL, 297LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pObject == NULL", 297LL, 0LL, 0LL, 0LL, 0LL);
  }
  WdLogSingleEntry2(3LL, v10, v7);
  DXGKEYEDMUTEX::ReleaseReference(v17);
LABEL_11:
  v15 = Object;
  if ( Object )
  {
    ObfDereferenceObject(Object);
    v15 = 0LL;
  }
LABEL_13:
  *a7 = v15;
  return (unsigned int)v7;
}
