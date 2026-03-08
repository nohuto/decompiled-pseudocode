/*
 * XREFs of KsepRegistryCreateKey @ 0x1409747F8
 * Callers:
 *     KseSetDeviceFlags @ 0x140973B40 (KseSetDeviceFlags.c)
 * Callees:
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwCreateKey @ 0x1404126B0 (ZwCreateKey.c)
 *     RtlAssert @ 0x1405A7CA0 (RtlAssert.c)
 *     KsepStringDuplicate @ 0x14079E668 (KsepStringDuplicate.c)
 *     KsepStringFree @ 0x14079EC60 (KsepStringFree.c)
 */

__int64 __fastcall KsepRegistryCreateKey(_WORD *a1, _WORD *a2, HANDLE *a3)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // ebx
  _QWORD v11[2]; // [rsp+40h] [rbp-19h] BYREF
  _QWORD v12[2]; // [rsp+50h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+7h] BYREF
  HANDLE KeyHandle; // [rsp+C0h] [rbp+67h] BYREF
  HANDLE v15; // [rsp+C8h] [rbp+6Fh] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v11[0] = 0LL;
  v11[1] = 0LL;
  v12[0] = 0LL;
  v12[1] = 0LL;
  KeyHandle = 0LL;
  v15 = 0LL;
  if ( !a1 )
  {
    v6 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v6 + 1] = -1073740768;
    KsepHistoryErrors[2 * v6] = 262647;
    if ( (KsepDebugFlag & 4) != 0 )
      RtlAssert("EnginePath != NULL", "minkernel\\ntos\\kshim\\kseregistry.c", 0x1F7u, 0LL);
  }
  if ( !a2 )
  {
    v7 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v7 + 1] = -1073740768;
    KsepHistoryErrors[2 * v7] = 262648;
    if ( (KsepDebugFlag & 4) != 0 )
      RtlAssert("SearchKey != NULL", "minkernel\\ntos\\kshim\\kseregistry.c", 0x1F8u, 0LL);
  }
  if ( !a3 )
  {
    v8 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v8 + 1] = -1073740768;
    KsepHistoryErrors[2 * v8] = 262649;
    if ( (KsepDebugFlag & 4) != 0 )
      RtlAssert("Handle != NULL", "minkernel\\ntos\\kshim\\kseregistry.c", 0x1F9u, 0LL);
  }
  KsepStringDuplicate((__int64)v11, a1);
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v11;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v9 = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( v9 >= 0 )
  {
    v9 = KsepStringDuplicate((__int64)v12, a2);
    if ( v9 >= 0 )
    {
      ObjectAttributes.RootDirectory = KeyHandle;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)v12;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v9 = ZwCreateKey(&v15, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
      if ( v9 >= 0 )
      {
        *a3 = v15;
        _InterlockedIncrement(&dword_140C40398);
      }
    }
  }
  KsepStringFree((__int64)v11);
  KsepStringFree((__int64)v12);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v9;
}
