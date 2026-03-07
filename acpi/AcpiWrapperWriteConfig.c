__int64 __fastcall AcpiWrapperWriteConfig(__int64 a1, __int64 a2)
{
  return (*(__int64 (__fastcall **)(__int64, __int64))(PmHalDispatchTable + 56))(a1, a2);
}
