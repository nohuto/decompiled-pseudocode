__int64 __fastcall AcpiExternalAddBiosNameDeviceAssociation(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v4)(_QWORD, __int64, __int64); // rax
  unsigned int v5; // ebx

  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(&ExternalTranslatorInterfaceLock, 1u);
  if ( ExternalTranslationInterface
    && (v4 = (__int64 (__fastcall *)(_QWORD, __int64, __int64))*((_QWORD *)ExternalTranslationInterface + 8)) != 0LL )
  {
    v5 = v4(*((_QWORD *)ExternalTranslationInterface + 5), a1, a2);
  }
  else
  {
    v5 = -1073741822;
  }
  ExReleaseResourceLite(&ExternalTranslatorInterfaceLock);
  KeLeaveCriticalRegion();
  return v5;
}
