__int64 __fastcall TR_WdfEvtIoExamineIrpForForwardProgress(__int64 a1, __int64 a2)
{
  return (unsigned int)((*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL) + 32LL) & 0x10) != 0) + 1;
}
