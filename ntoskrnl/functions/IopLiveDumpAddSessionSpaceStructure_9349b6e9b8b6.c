__int64 __fastcall IopLiveDumpAddSessionSpaceStructure(__int64 a1, __int64 (__fastcall **a2)(_QWORD, _QWORD, __int64))
{
  return MmAddPrivateDataToCrashDump(a2, 16);
}
