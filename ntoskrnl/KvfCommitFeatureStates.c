/*
 * XREFs of KvfCommitFeatureStates @ 0x14030098C
 * Callers:
 *     CmpAcceptBoot @ 0x14079A058 (CmpAcceptBoot.c)
 * Callees:
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwCreateKey @ 0x1404126B0 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x140412F10 (ZwSetValueKey.c)
 */

int KvfCommitFeatureStates()
{
  int result; // eax
  HANDLE v1; // rbx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+80h] [rbp+10h] BYREF

  KeyHandle = 0LL;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.RootDirectory = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&KvfVelocityKeyName;
  ObjectAttributes.Attributes = 576;
  result = ZwCreateKey(&KeyHandle, 0xC0000000, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( result >= 0 )
  {
    v1 = KeyHandle;
    result = KvfFeatureStates;
    if ( (KvfFeatureStates & 2) != 0 )
    {
      KvfFeatureStates &= ~2u;
      result = ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &KvfFeatureStates, 4u);
    }
    if ( v1 )
      return ZwClose(v1);
  }
  return result;
}
