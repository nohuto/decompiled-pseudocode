/*
 * XREFs of GreLockVisRgnPublish @ 0x1C00A7040
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1C0198958 (McTemplateK0pqz_EtwWriteTransfer.c)
 */

__int64 __fastcall GreLockVisRgnPublish(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rdi
  struct _ERESOURCE *v3; // rbx
  __int64 v4; // rbx
  __int64 result; // rax
  int v6; // edx
  int v7; // r8d
  __int64 v8; // rcx

  v2 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  v3 = *(struct _ERESOURCE **)(v2 + 128);
  if ( v3 )
  {
    PsEnterPriorityRegion(v1);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v3);
  }
  v4 = *(_QWORD *)(v2 + 128);
  result = SGDGetSessionState(v1);
  v8 = *(_QWORD *)(result + 24);
  if ( *(_DWORD *)(v8 + 180) )
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      return McTemplateK0pqz_EtwWriteTransfer(v8, v6, v7, v4, 9, (__int64)L"GreBaseGlobals.hsemVisRgnPublish");
  }
  return result;
}
