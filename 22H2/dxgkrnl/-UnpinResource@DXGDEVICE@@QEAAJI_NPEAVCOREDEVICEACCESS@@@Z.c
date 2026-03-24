/*
 * XREFs of ?UnpinResource@DXGDEVICE@@QEAAJI_NPEAVCOREDEVICEACCESS@@@Z @ 0x1C0171DA8
 * Callers:
 *     NtDxgkUnpinResources @ 0x1C0171A70 (NtDxgkUnpinResources.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008AF8 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0101D00 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C0112F64 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C012A998 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0171EFC (-UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z @ 0x1C0172444 (-IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::UnpinResource(DXGDEVICE *this, unsigned int a2, char a3, struct COREDEVICEACCESS *a4)
{
  __int64 v4; // rbx
  __int64 v8; // rbp
  __int64 v9; // rax
  struct _EX_RUNDOWN_REF *v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdx
  DXGDEVICE *v13; // rcx
  __int64 v14; // r8
  struct _EX_RUNDOWN_REF *v15; // rbx
  struct DXGALLOCATION *Count; // rbx
  unsigned int v17; // edi
  unsigned int v18; // edi
  int v19; // eax
  __int64 v20; // rdi
  unsigned int v21; // ebx
  __int64 v23; // r9
  int v24; // edx
  __int64 v25; // rdx
  __int64 v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  struct DXGALLOCATION *v30[5]; // [rsp+30h] [rbp-28h] BYREF
  struct _EX_RUNDOWN_REF *v31; // [rsp+60h] [rbp+8h] BYREF

  v4 = *((_QWORD *)this + 5);
  v31 = 0LL;
  v8 = a2;
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v4 + 208));
  v9 = ((unsigned int)v8 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v9 >= *(_DWORD *)(v4 + 256) )
    goto LABEL_2;
  v23 = *(_QWORD *)(v4 + 240);
  v24 = *(_DWORD *)(v23 + 16 * v9 + 8);
  if ( (((unsigned int)v8 >> 25) & 0x60) != (*(_BYTE *)(v23 + 16 * v9 + 8) & 0x60)
    || (v24 & 0x2000) != 0
    || (v24 & 0x1F) == 0 )
  {
    goto LABEL_2;
  }
  v25 = v24 & 0x1F;
  if ( (_BYTE)v25 != 4 )
  {
    v26 = WdLogNewEntry5_WdError(((unsigned int)v8 >> 25) & 0x60, v25);
    *(_QWORD *)(v26 + 24) = 316LL;
    WdLogEvent5_WdError(v26);
LABEL_2:
    v10 = 0LL;
    goto LABEL_3;
  }
  v10 = *(struct _EX_RUNDOWN_REF **)(v23 + 16LL * (unsigned int)v9);
LABEL_3:
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)v30, v10);
  ExReleasePushLockSharedEx(v4 + 208, 0LL);
  KeLeaveCriticalRegion();
  DXGRESOURCEREFERENCE::MoveAssign(&v31, (struct _EX_RUNDOWN_REF **)v30);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)v30, v11);
  v15 = v31;
  if ( v31 )
  {
    v12 = *(_QWORD *)(v31[1].Count + 16);
    v13 = *(DXGDEVICE **)(*((_QWORD *)this + 2) + 16LL);
    if ( *(DXGDEVICE **)(v12 + 16) == v13 )
    {
      Count = (struct DXGALLOCATION *)v31[3].Count;
      for ( v30[0] = Count; v30[0]; Count = v30[0] )
      {
        v17 = *(_DWORD *)(*((_QWORD *)Count + 6) + 4LL);
        if ( (v17 & 0x2000) != 0 )
        {
          v18 = (v17 >> 6) & 0xF;
          if ( a3 && !*((_DWORD *)this + 465) )
          {
            v28 = WdLogNewEntry5_WdWarning(v13, v12, v14);
            v21 = -1073741790;
            *(_QWORD *)(v28 + 24) = -1073741790LL;
            goto LABEL_26;
          }
          if ( DXGDEVICE::IsDirectFlipAllocationPinned(this, Count) )
          {
            v19 = DXGDEVICE::UnpinDirectFlipAllocation(v13, v18, v14, v30, a4);
            v20 = v19;
            if ( v19 < 0 )
            {
              v29 = WdLogNewEntry5_WdWarning(v13, v12, v14);
              *(_QWORD *)(v29 + 24) = Count;
              *(_QWORD *)(v29 + 32) = v20;
              WdLogEvent5_WdWarning(v29);
              v21 = v20;
              goto LABEL_12;
            }
          }
        }
        else
        {
          v13 = (DXGDEVICE *)*((_QWORD *)this + 2);
          if ( (*(_DWORD *)(*((_QWORD *)v13 + 2) + 348LL) & 0x200) == 0 )
            goto LABEL_25;
          if ( (*((_DWORD *)Count + 18) & 0x800) != 0 )
          {
            (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)v13 + 80) + 8LL) + 240LL))(
              *((_QWORD *)v13 + 81),
              *((_QWORD *)Count + 3));
            *((_DWORD *)Count + 18) &= ~0x800u;
          }
        }
        v30[0] = *((struct DXGALLOCATION **)Count + 8);
      }
      v21 = 0;
    }
    else
    {
      v27 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12);
      v27[4] = v15;
      v21 = -1073741811;
      v27[5] = -1073741811LL;
      v27[3] = this;
      WdLogEvent5_WdError(v27);
    }
  }
  else
  {
LABEL_25:
    v28 = WdLogNewEntry5_WdWarning(v13, v12, v14);
    v21 = -1073741811;
    *(_QWORD *)(v28 + 24) = v8;
    *(_QWORD *)(v28 + 32) = -1073741811LL;
LABEL_26:
    WdLogEvent5_WdWarning(v28);
  }
LABEL_12:
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v31, v12);
  return v21;
}
