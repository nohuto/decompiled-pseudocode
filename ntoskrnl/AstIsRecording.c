/*
 * XREFs of AstIsRecording @ 0x1407F0EA4
 * Callers:
 *     AstLogDeviceSDDLUpdated @ 0x14074EF88 (AstLogDeviceSDDLUpdated.c)
 *     AstLogDeviceCreated @ 0x1407F0D60 (AstLogDeviceCreated.c)
 * Callees:
 *     <none>
 */

bool AstIsRecording()
{
  return AstIsActive && dword_140C038B8;
}
