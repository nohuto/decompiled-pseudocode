/*
 * XREFs of IopRegistryCallback @ 0x1408365F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwNotifyChangeKey @ 0x140414730 (ZwNotifyChangeKey.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     IopRegistryOpenDeepestPath @ 0x140836718 (IopRegistryOpenDeepestPath.c)
 */

NTSTATUS __fastcall IopRegistryCallback(unsigned int a1)
{
  wchar_t *v1; // rbx
  __int64 v2; // rdi
  wchar_t **v3; // rsi
  _QWORD *v4; // rbp
  wchar_t **v5; // r15
  HANDLE *v6; // rbx
  ULONG *v7; // r14
  struct _IO_STATUS_BLOCK *IoStatusBlock; // r12
  bool v9; // zf
  NTSTATUS result; // eax
  UNICODE_STRING v11[4]; // [rsp+50h] [rbp-48h] BYREF
  char v12; // [rsp+A0h] [rbp+8h] BYREF
  void *v13; // [rsp+A8h] [rbp+10h] BYREF

  v1 = (wchar_t *)a1;
  v13 = 0LL;
  v2 = 14LL * a1;
  v11[0] = 0LL;
  v12 = 0;
  RtlInitUnicodeString(v11, (&IopRegistryRegisteredCallbacks)[v2]);
  v3 = &(&IopRegistryRegisteredCallbacks)[v2];
  v3[8] = 0LL;
  v3[10] = (wchar_t *)IopRegistryCallback;
  v3[11] = v1;
  v4 = (wchar_t **)((char *)&IopRegistryRegisteredCallbacks + v2 * 8 + 24);
  v5 = &(&IopRegistryRegisteredCallbacks)[v2 + 1];
  if ( (*(_DWORD *)(&IopRegistryRegisteredCallbacks + v2 + 5) & 1) != 0 )
  {
    ((void (__fastcall *)(_QWORD))*v5)(*v4);
    v7 = (ULONG *)((char *)&IopRegistryRegisteredCallbacks + v2 * 8 + 8);
    v6 = (HANDLE *)&(&IopRegistryRegisteredCallbacks)[v2 + 2];
    IoStatusBlock = (struct _IO_STATUS_BLOCK *)&(&IopRegistryRegisteredCallbacks)[v2 + 6];
    result = ZwNotifyChangeKey(*v6, 0LL, (PIO_APC_ROUTINE)(v3 + 8), (PVOID)1, IoStatusBlock, *v7, 1u, 0LL, 0, 1u);
    if ( result >= 0 )
      return result;
  }
  else
  {
    v6 = (HANDLE *)&(&IopRegistryRegisteredCallbacks)[v2 + 2];
    v7 = (ULONG *)((char *)&IopRegistryRegisteredCallbacks + v2 * 8 + 8);
    IoStatusBlock = (struct _IO_STATUS_BLOCK *)&(&IopRegistryRegisteredCallbacks)[v2 + 6];
  }
  if ( (int)IopRegistryOpenDeepestPath(v11, &v13, &v12) < 0 )
    goto LABEL_10;
  ZwClose(*v6);
  v9 = v12 == 1;
  *v6 = v13;
  if ( v9 )
  {
    *((_DWORD *)&IopRegistryRegisteredCallbacks + 2 * v2 + 10) |= 1u;
    ((void (__fastcall *)(_QWORD))*v5)(*v4);
  }
  result = ZwNotifyChangeKey(*v6, 0LL, (PIO_APC_ROUTINE)(v3 + 8), (PVOID)1, IoStatusBlock, *v7, 1u, 0LL, 0, 1u);
  if ( result < 0 )
  {
LABEL_10:
    result = ZwClose(*v6);
    *v7 = 0;
  }
  return result;
}
