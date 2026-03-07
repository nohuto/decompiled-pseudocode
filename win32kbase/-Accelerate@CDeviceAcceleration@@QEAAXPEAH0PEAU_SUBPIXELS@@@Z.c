void __fastcall CDeviceAcceleration::Accelerate(CDeviceAcceleration *this, int *a2, int *a3, struct _SUBPIXELS *a4)
{
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rax
  void (__fastcall *v11)(CDeviceAcceleration *, __int64, int *, __int64 **, __int64 *, __int64 *); // rax
  __int64 v12; // r10
  signed __int64 v13; // r8
  __int64 v14; // rax
  signed __int64 v15; // rcx
  __int64 v16; // r11
  __int64 v17; // rax
  __int64 v18; // r11
  __int64 *v19; // rax
  __int64 v20; // rbx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r10
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  signed __int64 v27; // r11
  __int64 v28; // rdx
  __int64 v29; // r8
  signed __int64 v30; // r10
  __int64 v31; // rdx
  __int64 *v32; // [rsp+40h] [rbp-30h] BYREF
  __int64 v33; // [rsp+48h] [rbp-28h] BYREF
  __int64 v34; // [rsp+50h] [rbp-20h] BYREF
  _QWORD v35[3]; // [rsp+58h] [rbp-18h] BYREF
  int v36; // [rsp+B8h] [rbp+48h] BYREF

  v8 = 0;
  CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)v35);
  InputConfig::Mouse::RegionFromPoint(gptCursorAsync, (struct CLockedInputSpaceRegion *)v35);
  v9 = v35[0];
  *(_DWORD *)a4 = 0;
  *((_DWORD *)a4 + 1) = 0;
  if ( v9 )
  {
    v10 = *(_QWORD *)this;
    v36 = 0;
    v32 = 0LL;
    v34 = 0LL;
    v11 = *(void (__fastcall **)(CDeviceAcceleration *, __int64, int *, __int64 **, __int64 *, __int64 *))(v10 + 8);
    v33 = 0LL;
    v11(this, v9 + 200, &v36, &v32, &v34, &v33);
    v12 = (__int64)*a2 << 16;
    v13 = abs64((__int64)*a3 << 16);
    v14 = v12;
    v15 = abs64(v12);
    if ( v15 >= v13 )
      v14 = (__int64)*a3 << 16;
    v16 = (__int64)abs64(v14) / 2;
    v17 = (__int64)*a2 << 16;
    if ( v15 <= v13 )
      v17 = (__int64)*a3 << 16;
    v18 = abs64(v17) + v16;
    if ( v18 )
    {
      if ( v36 != 1 )
      {
        v19 = v32;
        do
        {
          if ( v18 <= *v19 )
            break;
          ++v8;
          ++v19;
        }
        while ( v8 < v36 - 1 );
      }
      v20 = v8 - 1;
      v21 = *(_QWORD *)(v34 + 8 * v20) + (*(_QWORD *)(v33 + 8 * v20) << 16) / v18;
      if ( dword_1C02D87B0 < (unsigned int)v20 )
        v21 = (*(_QWORD *)(v34 + 8LL * (unsigned int)dword_1C02D87B0)
             + (*(_QWORD *)(v33 + 8LL * (unsigned int)dword_1C02D87B0) << 16) / v18
             + v21) >> 1;
      v22 = v21 * ((__int64)*a3 << 16);
      dword_1C02D87B0 = v20;
      v23 = qword_1C02D87A8 + ((v21 * v12) >> 16);
      v24 = -v23;
      v25 = qword_1C02D87A0 + (v22 >> 16);
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
      *(_DWORD *)a4 = v23 - v26;
      qword_1C02D87A8 = v23 - v26;
      if ( v23 < 0 )
        v27 = -(__int64)(v24 & 0xFFFFFFFFFFFF0000uLL);
      v28 = -v25;
      *a2 = v27 >> 16;
      if ( v25 < 0 )
      {
        v30 = v25;
        v29 = -(__int64)(v28 & 0xFFFFFFFFFFFF0000uLL);
      }
      else
      {
        v29 = v25 & 0x7FFFFFFFFFFF0000LL;
        v30 = v25 & 0xFFFFFFFFFFFF0000uLL;
      }
      v31 = -(__int64)(v28 & 0xFFFFFFFFFFFF0000uLL);
      *((_DWORD *)a4 + 1) = v25 - v29;
      qword_1C02D87A0 = v25 - v29;
      if ( v25 < 0 )
        v30 = v31;
      *a3 = v30 >> 16;
    }
  }
  ExReleaseResourceLite(*(PERESOURCE *)v35[1]);
  KeLeaveCriticalRegion();
}
