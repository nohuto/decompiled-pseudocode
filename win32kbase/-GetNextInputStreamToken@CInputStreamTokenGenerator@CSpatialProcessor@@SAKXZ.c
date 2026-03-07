__int64 __fastcall CSpatialProcessor::CInputStreamTokenGenerator::GetNextInputStreamToken(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  do
    LODWORD(a1) = _InterlockedIncrement((volatile signed __int32 *)(SGDGetUserSessionState(a1, a2, a3, a4) + 3264));
  while ( !(_DWORD)a1 );
  return (unsigned int)a1;
}
