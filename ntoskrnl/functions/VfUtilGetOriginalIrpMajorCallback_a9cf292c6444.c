__int64 __fastcall VfUtilGetOriginalIrpMajorCallback(__int64 a1, __int64 a2)
{
  return *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 48LL) + 64LL)
                   + 8LL * **(unsigned __int8 **)(a2 + 184)
                   + 32);
}
