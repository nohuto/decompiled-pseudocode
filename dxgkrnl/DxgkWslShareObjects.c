/*
 * XREFs of DxgkWslShareObjects @ 0x1C0324D60
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0003A50 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x1C001C948 (--0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0024424 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?CreateSharedResourceNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C01851D4 (-CreateSharedResourceNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x1C0186640 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C01A3A50 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?DxgkSharedAllocationObDeleteProcedure@@YAXPEAX@Z @ 0x1C01B3290 (-DxgkSharedAllocationObDeleteProcedure@@YAXPEAX@Z.c)
 *     ?DxgkSharedSyncObjectObDeleteProcedure@@YAXPEAX@Z @ 0x1C01DD0C0 (-DxgkSharedSyncObjectObDeleteProcedure@@YAXPEAX@Z.c)
 *     ?CreateSharedSyncNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C01DE444 (-CreateSharedSyncNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z.c)
 */

__int64 __fastcall DxgkWslShareObjects(int a1, unsigned int *a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  struct DXGSYNCOBJECT **v8; // rsi
  int v9; // edi
  unsigned int *v10; // r13
  __int64 v11; // rcx
  struct DXGPROCESS *Current; // r15
  __int64 v13; // rbx
  const wchar_t *v14; // r9
  __int64 v16; // r14
  _QWORD *v17; // r10
  unsigned int v18; // edx
  int v19; // r9d
  int EntryType; // ebx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // r8
  struct DXGGLOBAL *v24; // rax
  unsigned int v25; // eax
  __int64 v26; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v28; // rcx
  void *v29; // rbx
  void *v30; // [rsp+50h] [rbp-48h] BYREF
  struct DXGSYNCOBJECT **v31; // [rsp+58h] [rbp-40h] BYREF
  __int64 v32; // [rsp+60h] [rbp-38h] BYREF
  char v33; // [rsp+68h] [rbp-30h]

  v8 = 0LL;
  v31 = 0LL;
  v30 = 0LL;
  v9 = -1073741823;
  v10 = (unsigned int *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 4);
  Current = DXGPROCESS::GetCurrent(v11);
  if ( !Current )
  {
    v13 = 1007LL;
    WdLogSingleEntry1(2LL, 1007LL);
    v14 = L"Invalid process context";
LABEL_3:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v14, v13, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  if ( a1 != 1 )
  {
    v13 = 1012LL;
    WdLogSingleEntry1(2LL, 1012LL);
    v14 = L"Invalid object count";
    goto LABEL_3;
  }
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    a2 = (unsigned int *)MmUserProbeAddress;
  v16 = *a2;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)&v32, Current);
  v17 = (_QWORD *)((char *)Current + 280);
  v18 = ((unsigned int)v16 >> 6) & 0xFFFFFF;
  if ( v18 < *((_DWORD *)Current + 74)
    && (v19 = *(_DWORD *)(*v17 + 16LL * v18 + 8),
        (((unsigned int)v16 >> 25) & 0x60) == (*(_BYTE *)(*v17 + 16LL * v18 + 8) & 0x60))
    && (v19 & 0x2000) == 0
    && (v19 & 0x1F) != 0 )
  {
    EntryType = HMGRTABLE::GetEntryType((__int64)Current + 280, v18);
  }
  else
  {
    EntryType = 0;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&v32);
  if ( EntryType == 4 )
  {
    v9 = CreateSharedResourceNtObject(0, v21, v16, 0LL, a3, 0, &v30);
    if ( v9 < 0 )
      goto LABEL_27;
    Global = DXGGLOBAL::GetGlobal();
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
      (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v32,
      (struct DXGGLOBAL *)((char *)Global + 40));
    v25 = HMGRTABLE::AllocHandle(v10, (__int64)v30, 4, 0, 0);
    if ( !v25 )
    {
      v26 = 1058LL;
      WdLogSingleEntry1(2LL, 1058LL);
      goto LABEL_20;
    }
LABEL_24:
    v9 = 0;
    *a5 = v25;
LABEL_25:
    if ( v33 )
    {
      v28 = v32;
      *(_QWORD *)(v32 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v28, 0LL);
      KeLeaveCriticalRegion();
    }
    goto LABEL_27;
  }
  if ( EntryType == 8 || EntryType == 11 )
  {
    CreateSharedSyncNtObject(0LL, EntryType, v16, 0LL, a3, 0, &v31);
    v24 = DXGGLOBAL::GetGlobal();
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
      (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v32,
      (struct DXGGLOBAL *)((char *)v24 + 40));
    v8 = v31;
    v25 = HMGRTABLE::AllocHandle(v10, (__int64)v31, 8, 0, 0);
    if ( !v25 )
    {
      v26 = 1041LL;
      WdLogSingleEntry1(2LL, 1041LL);
LABEL_20:
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to allocate NT shared object handle",
        v26,
        0LL,
        0LL,
        0LL,
        0LL);
      v9 = -1073741801;
      goto LABEL_25;
    }
    goto LABEL_24;
  }
  WdLogSingleEntry1(2LL, v16);
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid object handle type: 0x%I64x", v16, 0LL, 0LL, 0LL, 0LL);
LABEL_27:
  if ( v9 < 0 )
  {
    if ( v8 )
    {
      DxgkSharedSyncObjectObDeleteProcedure(v8, v22, v23);
      operator delete(v8);
    }
    v29 = v30;
    if ( v30 )
    {
      DxgkSharedAllocationObDeleteProcedure(v30, v22, v23);
      operator delete(v29);
    }
  }
  return (unsigned int)v9;
}
