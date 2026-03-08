/*
 * XREFs of NtQuerySection @ 0x1407850E0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     MmGetSectionInformation @ 0x140720B20 (MmGetSectionInformation.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x1407C4030 (ProbeForWrite.c)
 */

__int64 __fastcall NtQuerySection(HANDLE Handle, int a2, volatile void *a3, SIZE_T a4, unsigned __int64 *a5)
{
  KPROCESSOR_MODE PreviousMode; // r15
  __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  int SectionInformation; // edi
  int v13; // edx
  PVOID v14; // rsi
  PVOID Object; // [rsp+30h] [rbp-28h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ProbeForWrite(a3, a4, 4u);
    if ( a5 )
    {
      v10 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a5 < 0x7FFFFFFF0000LL )
        v10 = (__int64)a5;
      *(_QWORD *)v10 = *(_QWORD *)v10;
    }
  }
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v11 = 64LL;
    }
    else
    {
      if ( a2 != 2 && a2 != 3 )
        return 3221225475LL;
      v11 = 8LL;
    }
  }
  else
  {
    v11 = 24LL;
  }
  if ( a4 < v11 )
    return 3221225476LL;
  Object = 0LL;
  SectionInformation = ObReferenceObjectByHandle(Handle, 1u, MmSectionObjectType, PreviousMode, &Object, 0LL);
  if ( SectionInformation >= 0 )
  {
    v13 = a2;
    v14 = Object;
    SectionInformation = MmGetSectionInformation((__int64)Object, v13, (__int64)a3);
    if ( SectionInformation >= 0 )
    {
      if ( a5 )
        *a5 = v11;
    }
    ObfDereferenceObject(v14);
  }
  return (unsigned int)SectionInformation;
}
