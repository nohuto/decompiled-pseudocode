/*
 * XREFs of DpiFdoCreateSysMmAdapter @ 0x1C020A044
 * Callers:
 *     DpiLdaPreStartChain @ 0x1C00658F4 (DpiLdaPreStartChain.c)
 *     DpiFdoStartNonLdaAdapter @ 0x1C0209FAC (DpiFdoStartNonLdaAdapter.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_DXGK_PHYSICAL_MEMORY_RANGE@@$01@@QEAAPEAU_DXGK_PHYSICAL_MEMORY_RANGE@@I@Z @ 0x1C020542C (-AllocateElements@-$PagedPoolZeroedArray@U_DXGK_PHYSICAL_MEMORY_RANGE@@$01@@QEAAPEAU_DXGK_PHYSIC.c)
 *     ?SysMmCreateAdapter@@YAJPEAU_DEVICE_OBJECT@@PEBQEAU1@IPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@IIPEBUSYSMM_ADAPTER_CREATE_PARAMS@@PEAPEAUSYSMM_ADAPTER@@@Z @ 0x1C020A220 (-SysMmCreateAdapter@@YAJPEAU_DEVICE_OBJECT@@PEBQEAU1@IPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@IIPEBUSYS.c)
 *     DpiFdoQuerySysMmAdapterCaps @ 0x1C020CB8C (DpiFdoQuerySysMmAdapterCaps.c)
 */

__int64 __fastcall DpiFdoCreateSysMmAdapter(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  __int64 v2; // rsi
  unsigned int v5; // eax
  __int64 v6; // rdi
  _QWORD *Pool2; // rdx
  int Adapter; // eax
  unsigned int v9; // ebx
  unsigned int v10; // edi
  __int64 v12; // rcx
  __int64 (__fastcall *v13)(__int64, _QWORD *); // rax
  int v14; // eax
  __int64 Elements; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // [rsp+50h] [rbp-B0h] BYREF
  int v20; // [rsp+58h] [rbp-A8h]
  __int64 v21; // [rsp+5Ch] [rbp-A4h]
  int v22; // [rsp+64h] [rbp-9Ch]
  __int128 v23; // [rsp+68h] [rbp-98h] BYREF
  PVOID P; // [rsp+78h] [rbp-88h]
  _BYTE v25[32]; // [rsp+80h] [rbp-80h] BYREF
  int v26; // [rsp+A0h] [rbp-60h]
  _QWORD v27[4]; // [rsp+A8h] [rbp-58h] BYREF
  int v28; // [rsp+C8h] [rbp-38h]
  __int64 v29; // [rsp+CCh] [rbp-34h]
  int v30; // [rsp+D4h] [rbp-2Ch]
  PVOID v31; // [rsp+D8h] [rbp-28h] BYREF
  char v32; // [rsp+E0h] [rbp-20h] BYREF
  unsigned int v33; // [rsp+100h] [rbp+0h]

  v2 = *(_QWORD *)(a2 + 40);
  v19 = 0x7FFFFFFFFFFFFFFFLL;
  v20 = *(_DWORD *)(a2 + 1120);
  v21 = 0LL;
  v22 = 0;
  v31 = 0LL;
  v33 = 0;
  if ( *(_WORD *)(a2 + 480) || *(_BYTE *)(a2 + 1159) || *(_BYTE *)(a2 + 2694) || *(_BYTE *)(a2 + 2692) )
  {
    LODWORD(v21) = v21 | 1;
  }
  else if ( *(_DWORD *)(v2 + 28) >= 0xE002u && (int)DpiFdoQuerySysMmAdapterCaps(v2, *(_QWORD *)(a2 + 48), &v19) >= 0 )
  {
    if ( *(_DWORD *)(v2 + 28) >= 0x10001u )
    {
      v12 = *(_QWORD *)(a2 + 48);
      v27[3] = &v23;
      v13 = *(__int64 (__fastcall **)(__int64, _QWORD *))(v2 + 272);
      v27[0] = 36LL;
      v27[2] = 0LL;
      v29 = 0LL;
      v30 = 0;
      v23 = 0LL;
      v27[1] = 0LL;
      v28 = 16;
      v14 = v13(v12, v27);
      v10 = v14;
      if ( v14 >= 0 )
      {
        if ( (_DWORD)v23 )
        {
          Elements = PagedPoolZeroedArray<_DXGK_PHYSICAL_MEMORY_RANGE,2>::AllocateElements((__int64 *)&v31, v23);
          if ( !Elements )
          {
            WdLogSingleEntry1(2LL, (unsigned int)v23);
            goto LABEL_14;
          }
          v16 = *(_QWORD *)(a2 + 48);
          *((_QWORD *)&v23 + 1) = Elements;
          if ( (*(int (__fastcall **)(__int64, _QWORD *))(v2 + 272))(v16, v27) < 0 )
          {
            WdLogSingleEntry1(1LL, 8286LL);
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(Status)", 8286LL, 0LL, 0LL, 0LL, 0LL);
          }
        }
      }
      else
      {
        WdLogSingleEntry1(3LL, v14);
      }
    }
    if ( *(_DWORD *)(v2 + 28) <= 0xF003u )
      HIDWORD(v21) &= ~2u;
  }
  else
  {
    LODWORD(v21) = v21 | 2;
  }
  v5 = *(_DWORD *)(a2 + 504);
  v6 = 1LL;
  P = 0LL;
  v26 = 0;
  if ( v5 )
    v6 = v5;
  if ( (unsigned int)v6 > 4 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v6 < 8 )
      goto LABEL_36;
    Pool2 = (_QWORD *)ExAllocatePool2(256LL, 8 * v6, 1265072196LL);
    P = Pool2;
  }
  else
  {
    P = v25;
    memset(v25, 0, 8LL * (unsigned int)v6);
    Pool2 = P;
  }
  v26 = v6;
  if ( Pool2 )
  {
    if ( *(_DWORD *)(a2 + 504) )
    {
      v17 = 0LL;
      v18 = (unsigned int)v6;
      do
      {
        Pool2[v17] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 * 8 + *(_QWORD *)(a2 + 2728)) + 64LL) + 152LL);
        ++v17;
        --v18;
      }
      while ( v18 );
    }
    else
    {
      *Pool2 = *(_QWORD *)(a2 + 152);
    }
    Adapter = SysMmCreateAdapter(
                a1,
                (struct _DEVICE_OBJECT *const *)Pool2,
                v6,
                (const struct _DXGK_PHYSICAL_MEMORY_RANGE *)v31,
                v33,
                *(_DWORD *)(v2 + 28),
                (const struct SYSMM_ADAPTER_CREATE_PARAMS *)&v19,
                (struct SYSMM_ADAPTER **)(a2 + 5688));
    v9 = Adapter;
    if ( Adapter < 0 )
    {
      WdLogSingleEntry1(2LL, Adapter);
      v10 = v9;
    }
    else
    {
      v10 = 0;
    }
    goto LABEL_12;
  }
LABEL_36:
  v10 = -1073741801;
  WdLogSingleEntry1(6LL, -1073741801LL);
LABEL_12:
  if ( P != v25 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v26 = 0;
LABEL_14:
  if ( v31 != &v32 && v31 )
    ExFreePoolWithTag(v31, 0);
  return v10;
}
