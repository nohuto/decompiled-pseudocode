/*
 * XREFs of KsepRegistryOpenKey @ 0x14079E858
 * Callers:
 *     KsepRegistryQueryDriverShims @ 0x14079ED30 (KsepRegistryQueryDriverShims.c)
 *     KsepDbQueryRegistryDeviceData @ 0x14080187C (KsepDbQueryRegistryDeviceData.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x140973D58 (KsepDbQueryRegistryDeviceDataList.c)
 *     KsepEngineReadFlags @ 0x140B34F48 (KsepEngineReadFlags.c)
 *     KsepMatchInitBiosInfo @ 0x140B35308 (KsepMatchInitBiosInfo.c)
 * Callees:
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 *     RtlAssert @ 0x1405A7CA0 (RtlAssert.c)
 *     KsepStringDuplicate @ 0x14079E668 (KsepStringDuplicate.c)
 *     KsepStringConcatenate @ 0x14079E718 (KsepStringConcatenate.c)
 *     KsepStringFree @ 0x14079EC60 (KsepStringFree.c)
 */

__int64 __fastcall KsepRegistryOpenKey(_WORD *a1, _WORD *a2, HANDLE *a3)
{
  int v6; // eax
  NTSTATUS v7; // ebx
  __int64 v9; // rax
  __int64 v10; // rax
  _QWORD v11[2]; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+90h] [rbp+30h] BYREF

  v11[0] = 0LL;
  v11[1] = 0LL;
  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  if ( !a1 )
  {
    v9 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v9 + 1] = -1073740768;
    KsepHistoryErrors[2 * v9] = 262566;
    if ( (KsepDebugFlag & 4) != 0 )
      RtlAssert("EnginePath != NULL", "minkernel\\ntos\\kshim\\kseregistry.c", 0x1A6u, 0LL);
  }
  if ( !a3 )
  {
    v10 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v10 + 1] = -1073740768;
    KsepHistoryErrors[2 * v10] = 262567;
    if ( (KsepDebugFlag & 4) != 0 )
      RtlAssert("Handle != NULL", "minkernel\\ntos\\kshim\\kseregistry.c", 0x1A7u, 0LL);
  }
  if ( a2 )
    v6 = KsepStringConcatenate((__int64)v11, a1, a2, 1);
  else
    v6 = KsepStringDuplicate((__int64)v11, a1);
  v7 = v6;
  if ( v6 >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)v11;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v7 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( v7 >= 0 )
    {
      *a3 = KeyHandle;
      _InterlockedIncrement(&dword_140C40398);
    }
  }
  KsepStringFree(v11);
  return (unsigned int)v7;
}
