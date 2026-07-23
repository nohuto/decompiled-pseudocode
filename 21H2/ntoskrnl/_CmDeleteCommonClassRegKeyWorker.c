/*
 * XREFs of _CmDeleteCommonClassRegKeyWorker @ 0x140975028
 * Callers:
 *     _CmDeleteCommonClassRegKey @ 0x140974EDC (_CmDeleteCommonClassRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140253A90 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x140637618 (_PnpCtxGetCachedContextBaseKey.c)
 *     _CmGetCommonClassRegKeyPath @ 0x140639DF0 (_CmGetCommonClassRegKeyPath.c)
 *     RtlPrefixUnicodeString @ 0x1406DD340 (RtlPrefixUnicodeString.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x14072D908 (_SysCtxRegOpenCurrentUserKey.c)
 *     _RegRtlDeleteTreeInternal @ 0x140766B34 (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlDeleteKeyTransacted @ 0x140766F18 (_RegRtlDeleteKeyTransacted.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmDeleteCommonClassRegKeyWorker(__int64 a1, const WCHAR *a2, __int16 a3, int a4, char a5)
{
  const WCHAR *v6; // rbx
  int v8; // r12d
  unsigned __int64 v10; // rdi
  wchar_t *pszDest; // r15
  int CommonClassRegKeyPath; // ebx
  unsigned __int16 Length; // bx
  const WCHAR *v14; // rdi
  char *v15; // rcx
  _QWORD *v16; // rcx
  char v17; // r13
  __int64 v18; // rax
  __int64 v19; // r8
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // r8
  int v23; // esi
  __int64 v24; // rax
  __int64 v25; // r8
  int v26; // eax
  __int64 v27; // r8
  int v29; // [rsp+20h] [rbp-40h]
  size_t cchDest; // [rsp+30h] [rbp-30h]
  char *v31; // [rsp+40h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  __int64 v35; // [rsp+B0h] [rbp+50h] BYREF

  LODWORD(v35) = 0;
  v6 = a2;
  v31 = 0LL;
  Handle = 0LL;
  v8 = 4;
  DestinationString = 0LL;
  LODWORD(v10) = (a3 & 0x200) != 0 ? 320 : 200;
  pszDest = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v10, 0x52504E50u);
  if ( pszDest )
  {
    while ( 1 )
    {
      LODWORD(cchDest) = (unsigned int)v10 >> 1;
      CommonClassRegKeyPath = CmGetCommonClassRegKeyPath(
                                (unsigned int)v10 >> 1,
                                v6,
                                a3,
                                a4,
                                v29,
                                pszDest,
                                cchDest,
                                &v35);
      if ( CommonClassRegKeyPath != -1073741789 )
        break;
      ExFreePoolWithTag(pszDest, 0);
      pszDest = 0LL;
      v10 = 2LL * (unsigned int)v35;
      if ( v10 > 0xFFFFFFFF )
      {
        CommonClassRegKeyPath = -1073741675;
        goto LABEL_60;
      }
      pszDest = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v10, 0x52504E50u);
      if ( !pszDest )
        goto LABEL_7;
      v6 = a2;
    }
  }
  else
  {
LABEL_7:
    CommonClassRegKeyPath = -1073741801;
  }
  if ( CommonClassRegKeyPath < 0 )
    goto LABEL_60;
  if ( (a3 & 0x100) != 0 )
  {
    v14 = pszDest;
    if ( a1 )
      v16 = *(_QWORD **)(a1 + 224);
    else
      v16 = 0LL;
    CommonClassRegKeyPath = SysCtxRegOpenCurrentUserKey(v16, 0, 0x2000000u, (__int64)&Handle);
    if ( CommonClassRegKeyPath < 0 )
      goto LABEL_60;
    v15 = (char *)Handle;
    v31 = (char *)Handle;
  }
  else
  {
    CommonClassRegKeyPath = RtlInitUnicodeStringEx(&DestinationString, pszDest);
    if ( CommonClassRegKeyPath < 0 )
      goto LABEL_60;
    Length = DestinationString.Length;
    if ( DestinationString.Length >= (unsigned int)v10
      || DestinationString.Length <= 0x32u
      || !RtlPrefixUnicodeString(&`_CmOpenDevicePanelRegKeyWorker'::`2'::ObjectPathRootPrefix, &DestinationString, 1u) )
    {
      CommonClassRegKeyPath = -1073741811;
      goto LABEL_60;
    }
    v14 = pszDest + 25;
    DestinationString.MaximumLength -= 50;
    DestinationString.Buffer = pszDest + 25;
    DestinationString.Length = Length - 50;
    if ( RtlPrefixUnicodeString(&`_CmDeleteCommonClassRegKeyWorker'::`2'::ClassKeyPrefix, &DestinationString, 1u) )
    {
      v8 = 7;
      v14 = pszDest + 39;
    }
    else if ( RtlPrefixUnicodeString(
                &`_CmDeleteCommonClassRegKeyWorker'::`2'::DeviceClassesKeyPrefix,
                &DestinationString,
                1u) )
    {
      v8 = 8;
      v14 = pszDest + 47;
    }
    else if ( RtlPrefixUnicodeString(
                &`_CmOpenDeviceInterfaceRegKeyWorker'::`2'::HardwareProfilesKeyPrefix,
                &DestinationString,
                1u) )
    {
      v8 = 14;
      v14 = pszDest + 43;
    }
    CommonClassRegKeyPath = PnpCtxGetCachedContextBaseKey(a1, v8, (__int64)&v31);
    if ( CommonClassRegKeyPath < 0 )
      goto LABEL_60;
    v15 = v31;
  }
  v17 = a5;
  if ( a5 )
  {
    if ( a1 && (v18 = *(_QWORD *)(a1 + 224)) != 0 )
      v19 = *(_QWORD *)(v18 + 8);
    else
      v19 = 0LL;
    v20 = RegRtlDeleteTreeInternal(v15, v14, v19, 0);
  }
  else
  {
    if ( a1 && (v21 = *(_QWORD *)(a1 + 224)) != 0 )
      v22 = *(_QWORD *)(v21 + 8);
    else
      v22 = 0LL;
    v20 = RegRtlDeleteKeyTransacted(v15, v14, v22);
  }
  v23 = v20;
  if ( (!v20 || v20 == -1073741444 || v20 == -1073741772) && v8 == 8 && *(_BYTE *)(a1 + 4) )
  {
    CommonClassRegKeyPath = PnpCtxGetCachedContextBaseKey(a1, 9, (__int64)&v31);
    if ( CommonClassRegKeyPath < 0 )
      goto LABEL_60;
    v24 = *(_QWORD *)(a1 + 224);
    if ( v17 )
    {
      if ( v24 )
        v25 = *(_QWORD *)(v24 + 8);
      else
        v25 = 0LL;
      v26 = RegRtlDeleteTreeInternal(v31, v14, v25, 0);
    }
    else
    {
      if ( v24 )
        v27 = *(_QWORD *)(v24 + 8);
      else
        v27 = 0LL;
      v26 = RegRtlDeleteKeyTransacted(v31, v14, v27);
    }
    if ( v23 == -1073741772 || v26 != -1073741772 )
      v23 = v26;
  }
  if ( (int)(v23 + 0x80000000) >= 0 && v23 != -1073741444 )
    CommonClassRegKeyPath = v23;
LABEL_60:
  if ( Handle )
    ZwClose(Handle);
  if ( pszDest )
    ExFreePoolWithTag(pszDest, 0);
  return (unsigned int)CommonClassRegKeyPath;
}
