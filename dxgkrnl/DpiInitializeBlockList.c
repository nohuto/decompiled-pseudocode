/*
 * XREFs of DpiInitializeBlockList @ 0x1C020D7F4
 * Callers:
 *     DpiFdoInitializeFdo @ 0x1C01F5A64 (DpiFdoInitializeFdo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     DxgkInitializeBlockList @ 0x1C020DD10 (DxgkInitializeBlockList.c)
 *     DpiDestroyBlockList @ 0x1C0395504 (DpiDestroyBlockList.c)
 */

__int64 __fastcall DpiInitializeBlockList(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rcx
  int v4; // edi
  _DWORD v6[2]; // [rsp+20h] [rbp-30h] BYREF
  int *v7; // [rsp+28h] [rbp-28h]
  int v8; // [rsp+30h] [rbp-20h]
  int v9; // [rsp+34h] [rbp-1Ch]
  __int64 v10; // [rsp+38h] [rbp-18h]
  int v11; // [rsp+40h] [rbp-10h]
  __int64 v12; // [rsp+44h] [rbp-Ch]
  int v13; // [rsp+4Ch] [rbp-4h]
  int v14; // [rsp+70h] [rbp+20h] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  v3 = *(_QWORD *)(v1 + 40);
  if ( *(_DWORD *)(v3 + 28) < 0xB001u )
    return 0LL;
  v6[1] = 0;
  v9 = 0;
  v12 = 0LL;
  v13 = 0;
  v6[0] = 29;
  v14 = *(_DWORD *)(v1 + 2724);
  v7 = &v14;
  v8 = 4;
  v11 = 4;
  v10 = v1 + 5700;
  v4 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *))(v3 + 272))(*(_QWORD *)(v1 + 48), v6);
  if ( v4 < 0 )
    return 0LL;
  if ( (int)DxgkInitializeBlockList(a1, *(unsigned int *)(v1 + 5700), 0LL) < 0 )
    DpiDestroyBlockList(v1);
  return (unsigned int)v4;
}
