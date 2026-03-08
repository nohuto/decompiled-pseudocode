/*
 * XREFs of CmSiCreateSectionForFile @ 0x1402B2BD4
 * Callers:
 *     HvpViewMapStart @ 0x140730468 (HvpViewMapStart.c)
 * Callees:
 *     ZwCreateSection @ 0x140412C50 (ZwCreateSection.c)
 */

NTSTATUS __fastcall CmSiCreateSectionForFile(HANDLE *a1, ACCESS_MASK a2, ULONG a3, __int64 a4, void *a5)
{
  OBJECT_ATTRIBUTES v6; // [rsp+40h] [rbp-38h] BYREF

  *(_QWORD *)&v6.Length = 48LL;
  v6.RootDirectory = 0LL;
  v6.ObjectName = 0LL;
  *(_QWORD *)&v6.Attributes = 512LL;
  *(_OWORD *)&v6.SecurityDescriptor = 0LL;
  return ZwCreateSection(a1, a2, &v6, 0LL, a3, 0x4000000u, a5);
}
