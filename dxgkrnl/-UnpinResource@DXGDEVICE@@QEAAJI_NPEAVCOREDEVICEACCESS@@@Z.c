/*
 * XREFs of ?UnpinResource@DXGDEVICE@@QEAAJI_NPEAVCOREDEVICEACCESS@@@Z @ 0x1C02E8F40
 * Callers:
 *     NtDxgkUnpinResources @ 0x1C02EE6A0 (NtDxgkUnpinResources.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C01854C0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C0185514 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C02D3370 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z @ 0x1C02E6B64 (-IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z.c)
 *     ?UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C02E8CB8 (-UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::UnpinResource(DXGDEVICE *this, unsigned int a2, char a3, struct COREDEVICEACCESS *a4)
{
  __int64 v4; // rbx
  ULONG_PTR v8; // r14
  unsigned int v9; // eax
  __int64 v10; // r9
  int v11; // edx
  struct _EX_RUNDOWN_REF *v12; // rdx
  struct _EX_RUNDOWN_REF *v13; // rbx
  ULONG_PTR v14; // rdx
  __int64 v15; // rdi
  ULONG_PTR Count; // rbx
  ULONG_PTR v17; // rax
  unsigned int v18; // edi
  _QWORD *v19; // rcx
  unsigned int v20; // edi
  DXGDEVICE *v21; // rcx
  __int64 v22; // r8
  int v23; // eax
  struct DXGALLOCATION *v25[2]; // [rsp+50h] [rbp-38h] BYREF
  struct _EX_RUNDOWN_REF *v26; // [rsp+90h] [rbp+8h] BYREF

  v4 = *((_QWORD *)this + 5);
  v26 = 0LL;
  v8 = a2;
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v4 + 248));
  v9 = ((unsigned int)v8 >> 6) & 0xFFFFFF;
  if ( v9 < *(_DWORD *)(v4 + 296) )
  {
    v10 = *(_QWORD *)(v4 + 280);
    if ( (((unsigned int)v8 >> 25) & 0x60) == (*(_BYTE *)(v10 + 16LL * v9 + 8) & 0x60)
      && (*(_DWORD *)(v10 + 16LL * v9 + 8) & 0x2000) == 0 )
    {
      v11 = *(_DWORD *)(v10 + 16LL * v9 + 8) & 0x1F;
      if ( v11 )
      {
        if ( v11 == 4 )
        {
          v12 = *(struct _EX_RUNDOWN_REF **)(v10 + 16LL * v9);
          goto LABEL_8;
        }
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  v12 = 0LL;
LABEL_8:
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)v25, v12);
  _InterlockedDecrement((volatile signed __int32 *)(v4 + 264));
  ExReleasePushLockSharedEx(v4 + 248, 0LL);
  KeLeaveCriticalRegion();
  DXGRESOURCEREFERENCE::MoveAssign(&v26, (struct _EX_RUNDOWN_REF **)v25);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)v25);
  v13 = v26;
  if ( !v26 )
  {
LABEL_9:
    v14 = v8;
    v15 = -1073741811LL;
    goto LABEL_28;
  }
  if ( *(_QWORD *)(*(_QWORD *)(v26[1].Count + 16) + 16LL) != *(_QWORD *)(*((_QWORD *)this + 2) + 16LL) )
  {
    LODWORD(v15) = -1073741811;
    WdLogSingleEntry3(2LL, this, v26, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Device 0x%p does not match resource 0x%p owner, returning 0x%I64x",
      (__int64)this,
      (__int64)v13,
      -1073741811LL,
      0LL,
      0LL);
    goto LABEL_25;
  }
  Count = v26[3].Count;
  v25[0] = (struct DXGALLOCATION *)Count;
  if ( !Count )
  {
LABEL_24:
    LODWORD(v15) = 0;
    goto LABEL_25;
  }
  v17 = Count;
  while ( 1 )
  {
    v18 = *(_DWORD *)(*(_QWORD *)(v17 + 48) + 4LL);
    if ( (v18 & 0x2000) == 0 )
    {
      v19 = (_QWORD *)*((_QWORD *)this + 2);
      if ( (*(_DWORD *)(v19[2] + 436LL) & 0x200) == 0 )
        goto LABEL_9;
      if ( (*(_DWORD *)(Count + 72) & 0x800) != 0 )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(v19[95] + 8LL) + 224LL))(v19[96], *(_QWORD *)(Count + 24));
        *(_DWORD *)(Count + 72) &= ~0x800u;
      }
      goto LABEL_23;
    }
    v20 = (v18 >> 6) & 0xF;
    if ( a3 && !*((_DWORD *)this + 473) )
    {
      LODWORD(v15) = -1073741790;
      WdLogSingleEntry1(3LL, -1073741790LL);
      goto LABEL_25;
    }
    if ( DXGDEVICE::IsDirectFlipAllocationPinned(this, (const struct DXGALLOCATION *)Count) )
    {
      v23 = DXGDEVICE::UnpinDirectFlipAllocation(v21, v20, v22, v25, a4);
      v15 = v23;
      if ( v23 < 0 )
        break;
    }
LABEL_23:
    Count = *(_QWORD *)(Count + 64);
    v25[0] = (struct DXGALLOCATION *)Count;
    v17 = Count;
    if ( !Count )
      goto LABEL_24;
  }
  v14 = Count;
LABEL_28:
  WdLogSingleEntry2(3LL, v14, v15);
LABEL_25:
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v26);
  return (unsigned int)v15;
}
