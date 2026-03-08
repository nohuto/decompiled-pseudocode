/*
 * XREFs of PpRegStateUpdateStackCreationSettings @ 0x1C03936FC
 * Callers:
 *     IoDevObjCreateDeviceSecure @ 0x1C0392540 (IoDevObjCreateDeviceSecure.c)
 * Callees:
 *     PiRegStateOpenClassKey @ 0x1C0393208 (PiRegStateOpenClassKey.c)
 *     CmRegUtilCreateWstrKey @ 0x1C03939D4 (CmRegUtilCreateWstrKey.c)
 *     CmRegUtilWstrValueSetFullBuffer @ 0x1C0393E34 (CmRegUtilWstrValueSetFullBuffer.c)
 */

__int64 __fastcall PpRegStateUpdateStackCreationSettings(unsigned int *a1, __int64 a2)
{
  __int64 result; // rax
  int v4; // r8d
  __int64 v5; // r9
  void *v6; // rbx
  int WstrKey; // ebx
  ULONG v8; // eax
  int v9; // edx
  int v10; // r8d
  HANDLE v11[3]; // [rsp+40h] [rbp-18h] BYREF
  PVOID P; // [rsp+70h] [rbp+18h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp+20h] BYREF

  P = 0LL;
  v11[0] = 0LL;
  Handle = 0LL;
  result = PiRegStateOpenClassKey(a1, a2, 0, 0LL, &Handle);
  if ( (int)result >= 0 )
  {
    v6 = &PiRegStateSysAllInherittedSecurityDescriptor;
    if ( !PiRegStateDiscriptor )
    {
      LOBYTE(v5) = 1;
      if ( (int)SeCaptureSecurityDescriptor(&PiRegStateSysAllInherittedSecurityDescriptor, 0LL, 1LL, v5, &P) < 0 )
      {
        PiRegStateDiscriptor = 2;
      }
      else
      {
        PiRegStateDiscriptor = 1;
        ExFreePoolWithTag(P, 0);
      }
    }
    if ( PiRegStateDiscriptor != 1 )
      v6 = 0LL;
    P = v6;
    WstrKey = CmRegUtilCreateWstrKey(
                (_DWORD)Handle,
                (unsigned int)L"Properties",
                v4,
                v5,
                (__int64)v6,
                0LL,
                (__int64)v11);
    ZwClose(Handle);
    if ( WstrKey >= 0 )
    {
      v8 = RtlLengthSecurityDescriptor(*(PSECURITY_DESCRIPTOR *)(a2 + 8));
      WstrKey = CmRegUtilWstrValueSetFullBuffer((int)v11[0], v9, v10, *(_QWORD *)(a2 + 8), v8);
      ZwClose(v11[0]);
    }
    return (unsigned int)WstrKey;
  }
  return result;
}
