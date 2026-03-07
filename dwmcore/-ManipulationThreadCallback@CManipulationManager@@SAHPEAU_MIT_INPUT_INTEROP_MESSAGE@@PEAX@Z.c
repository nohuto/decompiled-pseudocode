__int64 __fastcall CManipulationManager::ManipulationThreadCallback(
        struct _MIT_INPUT_INTEROP_MESSAGE *a1,
        CManipulationManager *a2)
{
  unsigned int v3; // ebx
  const char *v5; // rdx
  unsigned int v6; // eax
  _BYTE v8[48]; // [rsp+20h] [rbp-48h] BYREF

  v3 = 0;
  switch ( *(_DWORD *)a1 )
  {
    case 0:
      v5 = "GT:MIT_INPUT_INTEROP_MTCALLBACK";
      goto LABEL_7;
    case 1:
      InputTraceLogging::PerfRegion::PerfRegion((InputTraceLogging::PerfRegion *)v8, "GT:MIT_INPUT_INTEROP_HOVER", 0LL);
      v6 = CInputManager::s_HoverHittestRequest((struct _MIT_INPUT_INTEROP_MESSAGE *)((char *)a1 + 8));
LABEL_8:
      v3 = v6;
      InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v8);
      return v3;
    case 2:
      v5 = "GT:MIT_INPUT_INTEROP_INERTIA";
LABEL_7:
      InputTraceLogging::PerfRegion::PerfRegion((InputTraceLogging::PerfRegion *)v8, v5, 0LL);
      v6 = CManipulationManager::ProcessManipulationThreadCallbackInput(
             (struct _MIT_INPUT_INTEROP_MESSAGE *)((char *)a1 + 8),
             a2);
      goto LABEL_8;
  }
  return v3;
}
