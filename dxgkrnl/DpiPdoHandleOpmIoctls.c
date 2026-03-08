/*
 * XREFs of DpiPdoHandleOpmIoctls @ 0x1C039DD08
 * Callers:
 *     DpiPdoDispatchInternalIoctl @ 0x1C0168D80 (DpiPdoDispatchInternalIoctl.c)
 * Callees:
 *     ?DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z @ 0x1C0063168 (-DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z.c)
 *     DxgkAttemptOpmVmBusRedirect @ 0x1C02BD7E4 (DxgkAttemptOpmVmBusRedirect.c)
 */

__int64 __fastcall DpiPdoHandleOpmIoctls(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  _DWORD *v3; // rbx
  __int64 v4; // rcx
  unsigned __int64 *v5; // rdi
  void **v6; // r12
  char *v7; // r13
  unsigned int v8; // r14d
  unsigned int v9; // r15d
  __int64 v10; // rbp
  unsigned int v11; // edx
  __int64 result; // rax
  unsigned __int64 *v13; // [rsp+38h] [rbp-30h]
  unsigned int v14; // [rsp+70h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 64);
  v3 = (_DWORD *)(a2 + 48);
  v4 = *(_QWORD *)(a2 + 184);
  v5 = (unsigned __int64 *)(a2 + 56);
  v6 = *(void ***)(a2 + 112);
  v13 = (unsigned __int64 *)(a2 + 48);
  v7 = *(char **)(v4 + 32);
  v8 = *(_DWORD *)(v4 + 24);
  v9 = *(_DWORD *)(v4 + 16);
  v10 = *(_QWORD *)(*(_QWORD *)(v2 + 32) + 64LL);
  v11 = *(_DWORD *)(v2 + 504);
  v14 = *(_DWORD *)(v4 + 8);
  if ( (unsigned int)DxgkAttemptOpmVmBusRedirect(*(_QWORD *)(v10 + 2672), v11, v8, v7, v9, v6, &v14, v13) )
  {
    result = (unsigned int)*v3;
    *v5 = v14;
  }
  else
  {
    result = DpiPdoHandleOpmIoctlsInternal(
               (struct _FDO_CONTEXT *)v10,
               (struct _PDO_CONTEXT *)v2,
               v8,
               v7,
               v9,
               v6,
               v14,
               v5);
    *v3 = result;
  }
  return result;
}
