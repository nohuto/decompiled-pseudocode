/*
 * XREFs of Win32OpenSectionByHandle @ 0x1C01D41BC
 * Callers:
 *     ?SecureConnectPort@PROXYPORT@@QEAAJPEAPEAXPEAU_UNICODE_STRING@@PEAU_SECURITY_QUALITY_OF_SERVICE@@PEAU_PORT_VIEW@@PEAXPEAU_REMOTE_PORT_VIEW@@PEAK46@Z @ 0x1C011F7B0 (-SecureConnectPort@PROXYPORT@@QEAAJPEAPEAXPEAU_UNICODE_STRING@@PEAU_SECURITY_QUALITY_OF_SERVICE@.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall Win32OpenSectionByHandle(void *a1, ACCESS_MASK a2, __int64 a3, _QWORD *a4)
{
  NTSTATUS result; // eax
  PVOID v6; // [rsp+58h] [rbp+20h] BYREF

  v6 = 0LL;
  result = ObReferenceObjectByHandle(a1, a2, MmSectionObjectType, 0, &v6, 0LL);
  *a4 = v6;
  return result;
}
