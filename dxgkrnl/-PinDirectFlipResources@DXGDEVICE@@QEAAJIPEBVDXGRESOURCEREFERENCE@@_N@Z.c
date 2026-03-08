/*
 * XREFs of ?PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z @ 0x1C02E7020
 * Callers:
 *     ?DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z @ 0x1C02E4DA8 (-DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0172C2C (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?InsertDirectFlipAllocationToList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z @ 0x1C02E6588 (-InsertDirectFlipAllocationToList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z.c)
 *     ?IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z @ 0x1C02E6B64 (-IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z.c)
 *     ?RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z @ 0x1C02E7D90 (-RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z.c)
 *     ?ValidateDirectFlipResource@DXGDEVICE@@QEAAJPEAVDXGRESOURCE@@IIIW4_D3DDDIFORMAT@@I@Z @ 0x1C02E9448 (-ValidateDirectFlipResource@DXGDEVICE@@QEAAJPEAVDXGRESOURCE@@IIIW4_D3DDDIFORMAT@@I@Z.c)
 */

__int64 __fastcall DXGDEVICE::PinDirectFlipResources(
        DXGDEVICE *this,
        unsigned int a2,
        const struct DXGRESOURCEREFERENCE *a3,
        char a4)
{
  unsigned int v4; // r13d
  ADAPTER_RENDER *v6; // rcx
  const struct DXGRESOURCEREFERENCE *v8; // r14
  __int64 v9; // rbp
  unsigned int v10; // r12d
  unsigned int v11; // r12d
  int v12; // eax
  unsigned int v13; // r9d
  __int64 v14; // rdi
  struct DXGRESOURCE *v15; // rdx
  unsigned int v16; // ebx
  unsigned int v18; // ebp
  __int64 v19; // rbx
  struct DXGRESOURCE **v20; // r15
  int v21; // eax
  struct DXGRESOURCE *v22; // r13
  const struct DXGALLOCATION *v23; // rdx
  __int64 v24; // rdx
  unsigned int v25; // ecx
  unsigned int i; // r15d
  struct DXGALLOCATION *v27; // rbx
  unsigned int v28; // ebp
  struct DXGALLOCATION *j; // rbp
  unsigned int v30; // [rsp+20h] [rbp-98h]
  enum _D3DDDIFORMAT v31; // [rsp+28h] [rbp-90h]
  struct _DXGKARG_DESCRIBEALLOCATION v32; // [rsp+50h] [rbp-68h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+C0h] [rbp+8h] BYREF
  unsigned int v34; // [rsp+C8h] [rbp+10h]

  v34 = a2;
  v4 = a2;
  v6 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
  v8 = a3;
  v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 56LL) + 136LL) - 48LL;
  v10 = *(_DWORD *)(v9 + 4);
  memset(&v32, 0, sizeof(v32));
  v11 = (v10 >> 6) & 0xF;
  v32.hAllocation = *(HANDLE *)(v9 + 16);
  v12 = ADAPTER_RENDER::DdiDescribeAllocation(v6, &v32, (__int64)a3);
  v14 = v12;
  if ( v12 >= 0 )
  {
    if ( v11 < *((_DWORD *)this + 472) )
    {
      if ( !a4 || *((_DWORD *)this + 473) )
      {
        v18 = 0;
        v19 = 0LL;
        if ( v4 )
        {
          v20 = (struct DXGRESOURCE **)v8;
          while ( 2 )
          {
            v21 = DXGDEVICE::ValidateDirectFlipResource(
                    (DXGDEVICE *)*(unsigned int *)(*((_QWORD *)*v20 + 7) + 132LL),
                    *v20,
                    v11,
                    v13,
                    v30,
                    v31,
                    *(_DWORD *)(*((_QWORD *)*v20 + 7) + 132LL));
            LODWORD(v14) = v21;
            if ( v21 < 0 )
            {
              WdLogSingleEntry2(3LL, *((_QWORD *)v8 + v19), v21);
              return (unsigned int)v14;
            }
            v22 = *v20;
            v23 = (const struct DXGALLOCATION *)*((_QWORD *)*v20 + 3);
            while ( v23 )
            {
              if ( DXGDEVICE::IsDirectFlipAllocationPinned(this, v23) )
              {
                v15 = v22;
                goto LABEL_5;
              }
              v23 = *(const struct DXGALLOCATION **)(v24 + 64);
              ++v18;
            }
            v4 = v34;
            v19 = (unsigned int)(v19 + 1);
            ++v20;
            if ( (unsigned int)v19 < v34 )
              continue;
            break;
          }
        }
        v25 = *((_DWORD *)this + v11 + 374);
        if ( v25 + v18 <= 0x300 )
        {
          for ( i = 0; i < v4; v8 = (const struct DXGRESOURCEREFERENCE *)((char *)v8 + 8) )
          {
            if ( (int)v14 < 0 )
              break;
            v27 = *(struct DXGALLOCATION **)(*(_QWORD *)v8 + 24LL);
            if ( v27 )
            {
              while ( (int)v14 >= 0 )
              {
                v28 = 0;
                while ( 1 )
                {
                  LODWORD(v14) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL) + 216LL))(
                                   *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
                                   *((_QWORD *)v27 + 3),
                                   0LL,
                                   0LL,
                                   0LL,
                                   0LL);
                  if ( (int)v14 >= 0 )
                    break;
                  Interval.QuadPart = -150LL;
                  KeDelayExecutionThread(0, 0, &Interval);
                  ++v28;
                  LODWORD(v14) = -1071775488;
                  if ( v28 >= 4 )
                    goto LABEL_33;
                }
                if ( DXGDEVICE::InsertDirectFlipAllocationToList((struct _KTHREAD **)this, v11, v27) )
                {
                  v27 = (struct DXGALLOCATION *)*((_QWORD *)v27 + 8);
                }
                else
                {
                  LODWORD(v14) = -1071775488;
                  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL)
                                                         + 224LL))(
                    *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
                    *((_QWORD *)v27 + 3));
                }
LABEL_33:
                if ( !v27 )
                {
                  if ( (int)v14 >= 0 )
                    goto LABEL_41;
                  break;
                }
              }
              for ( j = *(struct DXGALLOCATION **)(*(_QWORD *)v8 + 24LL);
                    j && j != v27;
                    j = (struct DXGALLOCATION *)*((_QWORD *)j + 8) )
              {
                if ( !DXGDEVICE::RemoveDirectFlipAllocationFromList(this, v11, j) )
                {
                  WdLogSingleEntry1(1LL, 6857LL);
                  DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"Removed", 6857LL, 0LL, 0LL, 0LL, 0LL);
                }
                (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL)
                                                       + 224LL))(
                  *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
                  *((_QWORD *)j + 3));
              }
            }
LABEL_41:
            ++i;
          }
          return (unsigned int)v14;
        }
        v16 = -1073741811;
        WdLogSingleEntry4(3LL, v25, v18, 768LL, -1073741811LL);
      }
      else
      {
        v16 = -1073741790;
        WdLogSingleEntry1(3LL, -1073741790LL);
      }
    }
    else
    {
      v15 = *(struct DXGRESOURCE **)v8;
LABEL_5:
      v16 = -1073741811;
      WdLogSingleEntry2(3LL, v15, -1073741811LL);
    }
    return v16;
  }
  WdLogSingleEntry4(2LL, v12, this, *(_QWORD *)(v9 + 16), v9);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"ret = 0x%I64x Context 0x%I64x: DdiDescribeAllocation failed 0x%I64x 0x%I64x",
    v14,
    (__int64)this,
    *(_QWORD *)(v9 + 16),
    v9,
    0LL);
  return (unsigned int)v14;
}
