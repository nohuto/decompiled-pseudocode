__int64 FxWmiTraceMessage(
        unsigned __int64 LoggerHandle,
        __int64 MessageFlags,
        _GUID *MessageGuid,
        unsigned __int16 MessageNumber,
        ...)
{
  return WmiTraceMessageVa(LoggerHandle, MessageFlags, MessageGuid);
}
