/*
 * XREFs of PiPnpRtlGatherDeviceDeleteInfo @ 0x140957504
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1406CE2F0 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     ZwPlugPlayControl @ 0x140414A70 (ZwPlugPlayControl.c)
 *     _CmGetDeviceRegProp @ 0x1406C9884 (_CmGetDeviceRegProp.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiPnpRtlGatherDeviceDeleteInfo(PCWSTR SourceString, __int64 *a2)
{
  __int64 Pool2; // rax
  __int64 result; // rax
  _DWORD *v6; // rdi
  _DWORD *v7; // rax
  _DWORD *v8; // rcx
  int v9; // edx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  UNICODE_STRING v11; // [rsp+50h] [rbp-30h] BYREF
  __int64 v12; // [rsp+60h] [rbp-20h]
  __int64 v13; // [rsp+68h] [rbp-18h]
  __int64 v14; // [rsp+70h] [rbp-10h]
  int v15; // [rsp+A8h] [rbp+28h] BYREF
  unsigned int v16; // [rsp+B0h] [rbp+30h] BYREF

  v15 = 0;
  DestinationString = 0LL;
  Pool2 = ExAllocatePool2(256LL, 84LL, 1198550608LL);
  *a2 = Pool2;
  if ( !Pool2 )
  {
    result = 3221225626LL;
    *a2 = 0LL;
    return result;
  }
  RtlInitUnicodeString(&DestinationString, SourceString);
  v6 = (_DWORD *)*a2;
  if ( *a2 )
  {
    v14 = 0LL;
    v12 = 0LL;
    v11 = DestinationString;
    v13 = 0LL;
    v9 = ZwPlugPlayControl(14LL, (__int64)&v11);
    if ( v9 >= 0 )
      *v6 = v13;
    v7 = (_DWORD *)*a2;
    v8 = (_DWORD *)*a2;
    if ( v9 >= 0 )
      goto LABEL_9;
  }
  else
  {
    v7 = 0LL;
    v8 = 0LL;
  }
  *v7 = 45;
LABEL_9:
  v16 = 78;
  result = CmGetDeviceRegProp(
             *(__int64 *)&PiPnpRtlCtx,
             (__int64)SourceString,
             0LL,
             9,
             (__int64)&v15,
             (__int64)(v8 + 1),
             (__int64)&v16,
             0);
  if ( (int)result >= 0 && v15 == 1 && v16 > 2 )
  {
    *(_WORD *)(*a2 + 80) = 0;
  }
  else
  {
    *(_WORD *)(*a2 + 4) = 0;
    return 0LL;
  }
  return result;
}
