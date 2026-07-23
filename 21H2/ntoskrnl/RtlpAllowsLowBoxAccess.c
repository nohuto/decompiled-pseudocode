/*
 * XREFs of RtlpAllowsLowBoxAccess @ 0x1402457A8
 * Callers:
 *     RtlpLookupLowBox @ 0x14027BFC8 (RtlpLookupLowBox.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x140252F68 (RtlStringCbCopyW.c)
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     SeClearLearningModeObjectInformation @ 0x14026A550 (SeClearLearningModeObjectInformation.c)
 *     SeSetLearningModeObjectInformation @ 0x14026A920 (SeSetLearningModeObjectInformation.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     SeAccessCheckWithHint @ 0x1403589C0 (SeAccessCheckWithHint.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     PsReferenceEffectiveToken @ 0x140651B70 (PsReferenceEffectiveToken.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

char __fastcall RtlpAllowsLowBoxAccess(__int64 a1)
{
  char result; // al
  bool v3; // zf
  char v4; // bl
  SIZE_T v5; // r14
  wchar_t *PoolWithTag; // rax
  wchar_t *v7; // rdi
  const WCHAR *v8; // rdx
  char v9; // si
  char v10; // [rsp+60h] [rbp-A0h] BYREF
  int v11; // [rsp+64h] [rbp-9Ch] BYREF
  int v12; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING v13; // [rsp+70h] [rbp-90h] BYREF
  char v14; // [rsp+80h] [rbp-80h] BYREF
  char v15; // [rsp+84h] [rbp-7Ch] BYREF
  char *v16; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v18[2]; // [rsp+A0h] [rbp-60h] BYREF
  PVOID Object; // [rsp+B0h] [rbp-50h]
  struct _LIST_ENTRY *Flink; // [rsp+B8h] [rbp-48h]
  __int128 v21; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v22; // [rsp+D0h] [rbp-30h]
  __int128 v23; // [rsp+E0h] [rbp-20h]
  __int64 v24; // [rsp+F0h] [rbp-10h]
  _DWORD v25[4]; // [rsp+F8h] [rbp-8h] BYREF
  char v26; // [rsp+108h] [rbp+8h] BYREF

  v12 = 0;
  v11 = 0;
  result = 0;
  v18[0] = 0LL;
  v18[1] = 0LL;
  v3 = (*(_BYTE *)(a1 + 38) & 2) == 0;
  v10 = 0;
  v25[0] = 0x20000;
  v25[1] = 196608;
  v25[2] = 0x20000;
  v25[3] = 2031616;
  v21 = 0LL;
  v24 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  DestinationString = 0LL;
  v13 = 0LL;
  if ( !v3 )
    return 1;
  if ( byte_140C5451C )
  {
    RtlInitUnicodeString(&DestinationString, L"Global Atom Table Entry");
    v4 = 1;
    v5 = 2LL * *(unsigned __int8 *)(a1 + 40) + 2;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v5, 0x6D4E7441u);
    v7 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v5);
      if ( RtlStringCbCopyW(v7, v5, (NTSTRSAFE_PCWSTR)(a1 + 42)) < 0 )
        v8 = L"Unable to capture ATOM name.";
      else
        v8 = v7;
    }
    else
    {
      v8 = L"Unable to Allocate space for ATOM name.";
    }
    RtlInitUnicodeString(&v13, v8);
    *(_QWORD *)&v22 = &DestinationString;
    *((_QWORD *)&v22 + 1) = &v13;
    SeSetLearningModeObjectInformation(&v21);
    v16 = &v26;
    Object = (PVOID)PsReferenceEffectiveToken(
                      (unsigned int)KeGetCurrentThread(),
                      (unsigned int)&v15,
                      (unsigned int)&v10,
                      (unsigned int)&v14,
                      0LL);
    Flink = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
    v9 = SeAccessCheckWithHint(
           SeAtomSd,
           0,
           (unsigned int)v18,
           0,
           0x20000,
           0,
           (__int64)&v16,
           (__int64)v25,
           KeGetCurrentThread()->PreviousMode,
           (__int64)&v11,
           (__int64)&v12);
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
    if ( v7 )
      ExFreePoolWithTag(v7, 0x6D4E7441u);
    SeClearLearningModeObjectInformation();
    if ( v9 != 1 || !v11 )
      return 0;
    return v4;
  }
  return result;
}
