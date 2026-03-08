/*
 * XREFs of DpiFilterOutVgaResources @ 0x1C02125C0
 * Callers:
 *     DpiFdoHandleStartDevice @ 0x1C01F6860 (DpiFdoHandleStartDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     DpiDetermineResourceListSize @ 0x1C02127C8 (DpiDetermineResourceListSize.c)
 */

__int64 __fastcall DpiFilterOutVgaResources(__int64 a1, _DWORD *a2, _QWORD *a3, char a4)
{
  unsigned int v4; // esi
  __int64 (__fastcall *v8)(_QWORD, __int64, __int64, int *, __int64 *); // rax
  char v9; // al
  __int64 v10; // rcx
  bool v11; // zf
  __int64 (__fastcall *v12)(_QWORD, __int64, __int64, int *, __int64 *); // rax
  char v13; // al
  __int64 v14; // rcx
  __int64 (__fastcall *v15)(_QWORD, __int64, __int64, int *, __int64 *); // rax
  char v16; // al
  __int64 v17; // rcx
  unsigned int v18; // r14d
  unsigned int v19; // r15d
  _DWORD *v20; // rax
  _DWORD *v21; // rbx
  unsigned int v22; // r9d
  unsigned int v23; // r8d
  _DWORD *v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v29; // [rsp+30h] [rbp-20h] BYREF
  __int64 v30; // [rsp+38h] [rbp-18h] BYREF
  __int64 v31; // [rsp+40h] [rbp-10h] BYREF
  int v32; // [rsp+48h] [rbp-8h]
  int v33; // [rsp+4Ch] [rbp-4h]
  int v34; // [rsp+98h] [rbp+48h] BYREF
  __int64 v35; // [rsp+A0h] [rbp+50h] BYREF
  int v36; // [rsp+A8h] [rbp+58h] BYREF

  v34 = 0;
  v4 = 0;
  v35 = 944LL;
  v30 = 655360LL;
  v29 = 960LL;
  if ( a4 == 1 )
  {
    v8 = *(__int64 (__fastcall **)(_QWORD, __int64, __int64, int *, __int64 *))(a1 + 592);
    if ( v8 )
    {
      v36 = 0;
      v9 = v8(*(_QWORD *)(a1 + 568), 655360LL, 0x20000LL, &v36, &v30);
      v10 = v30;
      v11 = v9 == 0;
      v36 = 1;
      v12 = *(__int64 (__fastcall **)(_QWORD, __int64, __int64, int *, __int64 *))(a1 + 592);
      if ( v11 )
        v10 = 655360LL;
      v30 = v10;
      v13 = v12(*(_QWORD *)(a1 + 568), v35, 12LL, &v36, &v35);
      v14 = v35;
      v36 = 1;
      if ( !v13 )
        v14 = 944LL;
      v15 = *(__int64 (__fastcall **)(_QWORD, __int64, __int64, int *, __int64 *))(a1 + 592);
      v35 = v14;
      v16 = v15(*(_QWORD *)(a1 + 568), v29, 32LL, &v36, &v29);
      v17 = v29;
      if ( !v16 )
        v17 = 960LL;
      v29 = v17;
    }
  }
  v18 = a2[4];
  DpiDetermineResourceListSize(a2, &v34);
  v33 = 0;
  v31 = 1LL;
  v32 = 32;
  v19 = v34 - 60;
  v20 = (_DWORD *)ExAllocatePool3(256LL, (unsigned int)(v34 - 60), 1953656900LL, &v31, 1);
  v21 = v20;
  if ( v20 )
  {
    memset(v20, 0, v19);
    v22 = 0;
    v21[1] = a2[1];
    v23 = 0;
    v21[2] = a2[2];
    *v21 = 1;
    v21[3] = 65537;
    v21[4] = v18 - 3;
    if ( v18 )
    {
      v24 = a2 + 5;
      do
      {
        v25 = *(_QWORD *)(v24 + 1);
        if ( v25 != v30 && v25 != v35 && v25 != v29 )
        {
          if ( v23 == v18 - 3 )
          {
            v4 = -1073741823;
            ExFreePoolWithTag(v21, 0);
            v21 = 0LL;
            break;
          }
          v26 = ++v23;
          v27 = 5 * v26;
          LODWORD(v26) = v24[4];
          *(_OWORD *)&v21[v27] = *(_OWORD *)v24;
          v21[v27 + 4] = v26;
        }
        ++v22;
        v24 += 5;
      }
      while ( v22 < v18 );
    }
  }
  else
  {
    v4 = -1073741801;
  }
  *a3 = v21;
  return v4;
}
