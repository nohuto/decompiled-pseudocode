/*
 * XREFs of ?Accelerate@CDeviceAcceleration@@QEAAXPEAH0PEAU_SUBPIXELS@@@Z @ 0x1C00B2624
 * Callers:
 *     ?ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z @ 0x1C00B25A4 (-ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z.c)
 *     DoAccel @ 0x1C01E7A10 (DoAccel.c)
 * Callees:
 *     ?RegionFromPoint@Mouse@InputConfig@@SA_NUtagPOINT@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C003C040 (-RegionFromPoint@Mouse@InputConfig@@SA_NUtagPOINT@@PEAVCLockedInputSpaceRegion@@@Z.c)
 *     ??0CLockedInputSpace@@QEAA@XZ @ 0x1C003C1A0 (--0CLockedInputSpace@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDeviceAcceleration::Accelerate(CDeviceAcceleration *this, int *a2, int *a3, struct _SUBPIXELS *a4)
{
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rax
  void (__fastcall *v11)(CDeviceAcceleration *, __int64, int *, __int64 **, __int64 *, __int64 *); // rax
  __int64 v12; // r9
  __int64 v13; // r10
  signed __int64 v14; // r8
  __int64 v15; // rax
  signed __int64 v16; // rcx
  __int64 v17; // r11
  __int64 v18; // rax
  __int64 v19; // r11
  __int64 *v20; // rax
  __int64 v21; // rbx
  __int64 v22; // r8
  __int64 v23; // r10
  __int64 v24; // rdx
  __int64 v25; // r9
  __int64 v26; // rcx
  signed __int64 v27; // r11
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rcx
  signed __int64 v31; // r10
  __int64 v32; // rdx
  __int64 *v33; // [rsp+40h] [rbp-30h] BYREF
  __int64 v34; // [rsp+48h] [rbp-28h] BYREF
  __int64 v35; // [rsp+50h] [rbp-20h] BYREF
  _QWORD v36[3]; // [rsp+58h] [rbp-18h] BYREF
  int v37; // [rsp+B8h] [rbp+48h] BYREF

  v8 = 0;
  CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)v36);
  InputConfig::Mouse::RegionFromPoint(gptCursorAsync, (struct CLockedInputSpaceRegion *)v36);
  v9 = v36[0];
  *(_DWORD *)a4 = 0;
  *((_DWORD *)a4 + 1) = 0;
  if ( v9 )
  {
    v10 = *(_QWORD *)this;
    v37 = 0;
    v33 = 0LL;
    v35 = 0LL;
    v11 = *(void (__fastcall **)(CDeviceAcceleration *, __int64, int *, __int64 **, __int64 *, __int64 *))(v10 + 8);
    v34 = 0LL;
    v11(this, v9 + 200, &v37, &v33, &v35, &v34);
    v12 = (__int64)*a3 << 16;
    v13 = (__int64)*a2 << 16;
    v14 = abs64(v12);
    v15 = v13;
    v16 = abs64(v13);
    if ( v16 >= v14 )
      v15 = (__int64)*a3 << 16;
    v17 = (__int64)abs64(v15) / 2;
    v18 = (__int64)*a2 << 16;
    if ( v16 <= v14 )
      v18 = (__int64)*a3 << 16;
    v19 = abs64(v18) + v17;
    if ( v19 )
    {
      if ( v37 != 1 )
      {
        v20 = v33;
        do
        {
          if ( v19 <= *v20 )
            break;
          ++v8;
          ++v20;
        }
        while ( v8 < v37 - 1 );
      }
      v21 = v8 - 1;
      v22 = *(_QWORD *)(v35 + 8 * v21) + (*(_QWORD *)(v34 + 8 * v21) << 16) / v19;
      if ( dword_1C0296C00 < (unsigned int)v21 )
        v22 = (*(_QWORD *)(v35 + 8LL * (unsigned int)dword_1C0296C00)
             + (*(_QWORD *)(v34 + 8LL * (unsigned int)dword_1C0296C00) << 16) / v19
             + v22) >> 1;
      dword_1C0296C00 = v21;
      v23 = qword_1C0296C08 + ((v22 * v13) >> 16);
      v24 = -v23;
      v25 = qword_1C0296BF8 + ((v22 * v12) >> 16);
      if ( v23 < 0 )
      {
        v27 = v23;
        v26 = -(__int64)(v24 & 0xFFFFFFFFFFFF0000uLL);
      }
      else
      {
        v26 = v23 & 0x7FFFFFFFFFFF0000LL;
        v27 = v23 & 0xFFFFFFFFFFFF0000uLL;
      }
      v28 = -(__int64)(v24 & 0xFFFFFFFFFFFF0000uLL);
      *(_DWORD *)a4 = v23 - v26;
      qword_1C0296C08 = v23 - v26;
      if ( v23 < 0 )
        v27 = v28;
      v29 = -v25;
      *a2 = v27 >> 16;
      if ( v25 < 0 )
      {
        v31 = v25;
        v30 = -(__int64)(v29 & 0xFFFFFFFFFFFF0000uLL);
      }
      else
      {
        v30 = v25 & 0x7FFFFFFFFFFF0000LL;
        v31 = v25 & 0xFFFFFFFFFFFF0000uLL;
      }
      v32 = -(__int64)(v29 & 0xFFFFFFFFFFFF0000uLL);
      *((_DWORD *)a4 + 1) = v25 - v30;
      qword_1C0296BF8 = v25 - v30;
      if ( v25 < 0 )
        v31 = v32;
      *a3 = v31 >> 16;
    }
  }
  ExReleaseResourceLite(*(PERESOURCE *)v36[1]);
  KeLeaveCriticalRegion();
}
