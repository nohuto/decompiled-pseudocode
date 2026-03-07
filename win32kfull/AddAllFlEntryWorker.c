NTSTATUS __fastcall AddAllFlEntryWorker(PCWSTR Path, int a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdx

  v2 = a2;
  v4 = *(_QWORD *)(SGDGetSessionState(Path) + 32);
  *(_DWORD *)(v4 + 13976) = 4;
  *(_QWORD *)(v4 + 13984) = 0LL;
  *(_QWORD *)(v4 + 13992) = v2;
  *(_DWORD *)(v4 + 14000) = 0;
  *(_QWORD *)(v4 + 14008) = 0LL;
  *(_DWORD *)(v4 + 14016) = 0;
  *(_QWORD *)(v4 + 14024) = 0LL;
  *(_DWORD *)(v4 + 14032) = 0;
  *(_QWORD *)(v4 + 14040) = 0LL;
  *(_QWORD *)(v4 + 13968) = BuildAndLoadLinkedFontRoutine;
  return RtlQueryRegistryValues(0, Path, (PRTL_QUERY_REGISTRY_TABLE)(v4 + 13968), 0LL, 0LL);
}
